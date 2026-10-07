// roc 2011-06 009006b0  unit: CXTPDockingPaneAutoHidePanel  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009006b0
//
// 009006b0  53                   push ebx
// 009006b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 009006b5  3bd9                 cmp ebx, ecx
// 009006b7  7509                 jne 0x9006c2
// 009006b9  b801000000           mov eax, 1
// 009006be  5b                   pop ebx
// 009006bf  c20400               ret 4
// 009006c2  56                   push esi
// 009006c3  8b713c               mov esi, dword ptr [ecx + 0x3c]
// 009006c6  57                   push edi
// 009006c7  85f6                 test esi, esi
// 009006c9  741e                 je 0x9006e9
// 009006cb  eb03                 jmp 0x9006d0
// 009006cd  8d4900               lea ecx, [ecx]
// 009006d0  8bc6                 mov eax, esi
// 009006d2  8b4808               mov ecx, dword ptr [eax + 8]
// 009006d5  8b01                 mov eax, dword ptr [ecx]
// 009006d7  8b5008               mov edx, dword ptr [eax + 8]
// 009006da  8bfe                 mov edi, esi
// 009006dc  8b36                 mov esi, dword ptr [esi]
// 009006de  53                   push ebx
// 009006df  ffd2                 call edx
// 009006e1  85c0                 test eax, eax
// 009006e3  750c                 jne 0x9006f1
// 009006e5  85f6                 test esi, esi
// 009006e7  75e7                 jne 0x9006d0
// 009006e9  5f                   pop edi
// 009006ea  5e                   pop esi
// 009006eb  33c0                 xor eax, eax
// 009006ed  5b                   pop ebx
// 009006ee  c20400               ret 4
// 009006f1  8bc7                 mov eax, edi
// 009006f3  5f                   pop edi
// 009006f4  5e                   pop esi
// 009006f5  5b                   pop ebx
// 009006f6  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?ContainPane@CXTPDockingPaneBaseContainer@@UBEPAU__POSITION@@PAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
