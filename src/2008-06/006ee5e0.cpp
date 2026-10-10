// roc 2008-06 006ee5e0  unit: CXTPPopupBar  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee5e0
//
// 006ee5e0  53                   push ebx
// 006ee5e1  56                   push esi
// 006ee5e2  57                   push edi
// 006ee5e3  8bf9                 mov edi, ecx
// 006ee5e5  33db                 xor ebx, ebx
// 006ee5e7  e8b475fcff           call 0x6b5ba0
// 006ee5ec  85c0                 test eax, eax
// 006ee5ee  7e3f                 jle 0x6ee62f
// 006ee5f0  53                   push ebx
// 006ee5f1  8bcf                 mov ecx, edi
// 006ee5f3  e8b875fcff           call 0x6b5bb0
// 006ee5f8  8bf0                 mov esi, eax
// 006ee5fa  85f6                 test esi, esi
// 006ee5fc  7425                 je 0x6ee623
// 006ee5fe  39be00010000         cmp dword ptr [esi + 0x100], edi
// 006ee604  751d                 jne 0x6ee623
// 006ee606  8b06                 mov eax, dword ptr [esi]
// 006ee608  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 006ee60e  6a00                 push 0
// 006ee610  8bce                 mov ecx, esi
// 006ee612  ffd2                 call edx
// 006ee614  85c0                 test eax, eax
// 006ee616  740b                 je 0x6ee623
// 006ee618  8bce                 mov ecx, esi
// 006ee61a  e8a1bbd4ff           call 0x43a1c0
// 006ee61f  85c0                 test eax, eax
// 006ee621  7515                 jne 0x6ee638
// 006ee623  8bcf                 mov ecx, edi
// 006ee625  43                   inc ebx
// 006ee626  e87575fcff           call 0x6b5ba0
// 006ee62b  3bd8                 cmp ebx, eax
// 006ee62d  7cc1                 jl 0x6ee5f0
// 006ee62f  5f                   pop edi
// 006ee630  5e                   pop esi
// 006ee631  83c8ff               or eax, 0xffffffff
// 006ee634  5b                   pop ebx
// 006ee635  c20800               ret 8
// 006ee638  837c241400           cmp dword ptr [esp + 0x14], 0
// 006ee63d  740c                 je 0x6ee64b
// 006ee63f  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 006ee645  5f                   pop edi
// 006ee646  5e                   pop esi
// 006ee647  5b                   pop ebx
// 006ee648  c20800               ret 8
// 006ee64b  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 006ee651  5f                   pop edi
// 006ee652  5e                   pop esi
// 006ee653  5b                   pop ebx
// 006ee654  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ?GetDefaultItem@CXTPPopupBar@@QAEIIH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
