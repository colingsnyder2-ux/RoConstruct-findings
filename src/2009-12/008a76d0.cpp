// roc 2009-12 008a76d0  unit: CXTRegistryManager  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a76d0
//
// 008a76d0  55                   push ebp
// 008a76d1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 008a76d5  57                   push edi
// 008a76d6  8bf9                 mov edi, ecx
// 008a76d8  85ed                 test ebp, ebp
// 008a76da  7507                 jne 0x8a76e3
// 008a76dc  5f                   pop edi
// 008a76dd  33c0                 xor eax, eax
// 008a76df  5d                   pop ebp
// 008a76e0  c20800               ret 8
// 008a76e3  8b07                 mov eax, dword ptr [edi]
// 008a76e5  8b5004               mov edx, dword ptr [eax + 4]
// 008a76e8  53                   push ebx
// 008a76e9  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008a76ed  56                   push esi
// 008a76ee  53                   push ebx
// 008a76ef  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008a76f7  ffd2                 call edx
// 008a76f9  8bf0                 mov esi, eax
// 008a76fb  85f6                 test esi, esi
// 008a76fd  7431                 je 0x8a7730
// 008a76ff  8d442418             lea eax, [esp + 0x18]
// 008a7703  50                   push eax
// 008a7704  8d4c2418             lea ecx, [esp + 0x18]
// 008a7708  51                   push ecx
// 008a7709  6a00                 push 0
// 008a770b  53                   push ebx
// 008a770c  6a00                 push 0
// 008a770e  6a00                 push 0
// 008a7710  6a00                 push 0
// 008a7712  55                   push ebp
// 008a7713  56                   push esi
// 008a7714  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008a771c  ff150cb09800         call dword ptr [0x98b00c]
// 008a7722  894710               mov dword ptr [edi + 0x10], eax
// 008a7725  56                   push esi
// 008a7726  85c0                 test eax, eax
// 008a7728  740f                 je 0x8a7739
// 008a772a  ff1508b09800         call dword ptr [0x98b008]
// 008a7730  5e                   pop esi
// 008a7731  5b                   pop ebx
// 008a7732  5f                   pop edi
// 008a7733  33c0                 xor eax, eax
// 008a7735  5d                   pop ebp
// 008a7736  c20800               ret 8
// 008a7739  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008a773d  ff1508b09800         call dword ptr [0x98b008]
// 008a7743  5e                   pop esi
// 008a7744  5b                   pop ebx
// 008a7745  8bc7                 mov eax, edi
// 008a7747  5f                   pop edi
// 008a7748  5d                   pop ebp
// 008a7749  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTRegistryManager.cpp (function ?GetSectionKey@CXTRegistryManager@@MAEPAUHKEY__@@PBDK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTRegistryManager.cpp
