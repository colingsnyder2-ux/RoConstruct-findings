// roc 2010-06 0082f3e0  unit: CXTPRibbonTheme  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0082f3e0
//
// 0082f3e0  83ec30               sub esp, 0x30
// 0082f3e3  53                   push ebx
// 0082f3e4  55                   push ebp
// 0082f3e5  56                   push esi
// 0082f3e6  57                   push edi
// 0082f3e7  8bf9                 mov edi, ecx
// 0082f3e9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0082f3ed  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0082f3f0  8d442420             lea eax, [esp + 0x20]
// 0082f3f4  50                   push eax
// 0082f3f5  52                   push edx
// 0082f3f6  ff155cbc9e00         call dword ptr [0x9ebc5c]
// 0082f3fc  68f05ea600           push 0xa65ef0
// 0082f401  8bcf                 mov ecx, edi
// 0082f403  e8f82d0000           call 0x832200
// 0082f408  8bf0                 mov esi, eax
// 0082f40a  85f6                 test esi, esi
// 0082f40c  7512                 jne 0x82f420
// 0082f40e  68e05ea600           push 0xa65ee0
// 0082f413  8bcf                 mov ecx, edi
// 0082f415  e8e62d0000           call 0x832200
// 0082f41a  8bf0                 mov esi, eax
// 0082f41c  85f6                 test esi, esi
// 0082f41e  745b                 je 0x82f47b
// 0082f420  6a01                 push 1
// 0082f422  bd04000000           mov ebp, 4
// 0082f427  6a00                 push 0
// 0082f429  8d442438             lea eax, [esp + 0x38]
// 0082f42d  50                   push eax
// 0082f42e  8bce                 mov ecx, esi
// 0082f430  8bfd                 mov edi, ebp
// 0082f432  8bdd                 mov ebx, ebp
// 0082f434  896c2428             mov dword ptr [esp + 0x28], ebp
// 0082f438  e8f3560600           call 0x894b30
// 0082f43d  83ec10               sub esp, 0x10
// 0082f440  8bcc                 mov ecx, esp
// 0082f442  8939                 mov dword ptr [ecx], edi
// 0082f444  895904               mov dword ptr [ecx + 4], ebx
// 0082f447  896908               mov dword ptr [ecx + 8], ebp
// 0082f44a  83ec10               sub esp, 0x10
// 0082f44d  8bd5                 mov edx, ebp
// 0082f44f  89510c               mov dword ptr [ecx + 0xc], edx
// 0082f452  8b10                 mov edx, dword ptr [eax]
// 0082f454  8bcc                 mov ecx, esp
// 0082f456  8911                 mov dword ptr [ecx], edx
// 0082f458  8b5004               mov edx, dword ptr [eax + 4]
// 0082f45b  895104               mov dword ptr [ecx + 4], edx
// 0082f45e  8b5008               mov edx, dword ptr [eax + 8]
// 0082f461  8b400c               mov eax, dword ptr [eax + 0xc]
// 0082f464  895108               mov dword ptr [ecx + 8], edx
// 0082f467  8b542464             mov edx, dword ptr [esp + 0x64]
// 0082f46b  89410c               mov dword ptr [ecx + 0xc], eax
// 0082f46e  8d4c2440             lea ecx, [esp + 0x40]
// 0082f472  51                   push ecx
// 0082f473  52                   push edx
// 0082f474  8bce                 mov ecx, esi
// 0082f476  e8854f0600           call 0x894400
// 0082f47b  5f                   pop edi
// 0082f47c  5e                   pop esi
// 0082f47d  5d                   pop ebp
// 0082f47e  5b                   pop ebx
// 0082f47f  83c430               add esp, 0x30
// 0082f482  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillMorePopupToolBarEntry@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
