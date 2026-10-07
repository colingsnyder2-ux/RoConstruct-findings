// roc 2008-06 0071f3e0  unit: CXTPResourceManager  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071f3e0
//
// 0071f3e0  8b442408             mov eax, dword ptr [esp + 8]
// 0071f3e4  56                   push esi
// 0071f3e5  8b3590218000         mov esi, dword ptr [0x802190]
// 0071f3eb  57                   push edi
// 0071f3ec  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0071f3f0  6a0e                 push 0xe
// 0071f3f2  50                   push eax
// 0071f3f3  57                   push edi
// 0071f3f4  ffd6                 call esi
// 0071f3f6  85c0                 test eax, eax
// 0071f3f8  7505                 jne 0x71f3ff
// 0071f3fa  5f                   pop edi
// 0071f3fb  5e                   pop esi
// 0071f3fc  c21000               ret 0x10
// 0071f3ff  55                   push ebp
// 0071f400  8b2da8218000         mov ebp, dword ptr [0x8021a8]
// 0071f406  50                   push eax
// 0071f407  57                   push edi
// 0071f408  ffd5                 call ebp
// 0071f40a  85c0                 test eax, eax
// 0071f40c  7506                 jne 0x71f414
// 0071f40e  5d                   pop ebp
// 0071f40f  5f                   pop edi
// 0071f410  5e                   pop esi
// 0071f411  c21000               ret 0x10
// 0071f414  53                   push ebx
// 0071f415  8b1d10228000         mov ebx, dword ptr [0x802210]
// 0071f41b  50                   push eax
// 0071f41c  ffd3                 call ebx
// 0071f41e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0071f422  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0071f426  6a00                 push 0
// 0071f428  51                   push ecx
// 0071f429  52                   push edx
// 0071f42a  6a01                 push 1
// 0071f42c  50                   push eax
// 0071f42d  ff15282c8000         call dword ptr [0x802c28]
// 0071f433  0fb7c0               movzx eax, ax
// 0071f436  6a03                 push 3
// 0071f438  50                   push eax
// 0071f439  57                   push edi
// 0071f43a  ffd6                 call esi
// 0071f43c  8bf0                 mov esi, eax
// 0071f43e  85f6                 test esi, esi
// 0071f440  7408                 je 0x71f44a
// 0071f442  56                   push esi
// 0071f443  57                   push edi
// 0071f444  ffd5                 call ebp
// 0071f446  85c0                 test eax, eax
// 0071f448  7509                 jne 0x71f453
// 0071f44a  5b                   pop ebx
// 0071f44b  5d                   pop ebp
// 0071f44c  5f                   pop edi
// 0071f44d  33c0                 xor eax, eax
// 0071f44f  5e                   pop esi
// 0071f450  c21000               ret 0x10
// 0071f453  50                   push eax
// 0071f454  ffd3                 call ebx
// 0071f456  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0071f45a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0071f45e  6a00                 push 0
// 0071f460  51                   push ecx
// 0071f461  52                   push edx
// 0071f462  6800000300           push 0x30000
// 0071f467  6a01                 push 1
// 0071f469  56                   push esi
// 0071f46a  57                   push edi
// 0071f46b  8bd8                 mov ebx, eax
// 0071f46d  ff15c8218000         call dword ptr [0x8021c8]
// 0071f473  50                   push eax
// 0071f474  53                   push ebx
// 0071f475  ff15942b8000         call dword ptr [0x802b94]
// 0071f47b  5b                   pop ebx
// 0071f47c  5d                   pop ebp
// 0071f47d  5f                   pop edi
// 0071f47e  5e                   pop esi
// 0071f47f  c21000               ret 0x10
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?CreateIconFromResource@CXTPResourceManager@@UAEPAUHICON__@@PAUHINSTANCE__@@PBDVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
