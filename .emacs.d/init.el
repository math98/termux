(setq inhibit-startup-message t)
(global-display-line-numbers-mode t)
(setq warning-minimum-level :emergency)
    (require 'package)

(global-set-key (kbd "<escape>") 'keyboard-escape-quit)


    (add-to-list 'package-archives'("melpa" . "https://melpa.org/packages/") t)
    (package-initialize)
    (unless (package-installed-p 'use-package)
      (package-install 'use-package))
    (require 'use-package)


(use-package doom-modeline
  :ensure t
  :config
  (doom-modeline-mode 1))

(use-package doom-themes
  :init (load-theme 'doom-dracula t))

(use-package company
      :ensure t
      :after ispell
      :diminish
      :config
	company-dabbrev-other-buffers t
        company-dabbrev-code-other-buffers t
	company-show-numbers t
	company-minimum-prefix-length 2
	company-dabbrev-downcase nil
	company-dabbrev-ignore-case t
	company-idle-delay 0
	(setq lsp-completion-provider :capf)
	)
	(emacs-lisp-mode)
	(global-company-mode 1)
	(company-mode 1)
 (company-yasnippet 1)

(require 'lsp-mode)
(add-hook 'prog-mode-hook #'lsp)

(require 'yasnippet)
(yas-global-mode 1)
(add-hook 'prog-mode-hook #'yas-minor-mode)


(use-package flycheck
  :ensure t
  :init (global-flycheck-mode))

    (use-package lsp-mode
      :ensure t
      :hook (
	     (html-mode . lsp)
	     (css-mode . lsp)
	     (web-mode . lsp)
	     (python-mode . lsp)
	     (js2-mode . lsp)
	     (c-mode . lsp)
	     
	    )
      :commands (lsp lsp-deferred)
      )


    (use-package flex-autopair
      :ensure t
      :config
      (flex-autopair-mode 1))

    (use-package ivy
      :ensure t
      :config
      (ivy-mode 1))

    (use-package which-key
      :ensure t
      :config
      (which-key-mode))

    (use-package evil
      :ensure t
      :config
      (evil-mode 1))


    (setq make-backup-files nil)
    (global-set-key "\C-x\C-g" 'compile)


    (setq custom-file "~/.emacs.d/custom.el")


    (global-set-key "\C-cl" 'my-shell-command)

    (defun my-shell-command (search-str filename)
      (interactive "sEnter search string: \nsEnter filename: ")
      (shell-command (concat "grep " search-str " " filename)))

