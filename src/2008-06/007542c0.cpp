// roc 2008-06 007542c0  unit: CXTRegistryManager  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007542c0
//
// 007542c0  55                   push ebp
// 007542c1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 007542c5  57                   push edi
// 007542c6  8bf9                 mov edi, ecx
// 007542c8  85ed                 test ebp, ebp
// 007542ca  7507                 jne 0x7542d3
// 007542cc  5f                   pop edi
// 007542cd  33c0                 xor eax, eax
// 007542cf  5d                   pop ebp
// 007542d0  c20800               ret 8
// 007542d3  8b07                 mov eax, dword ptr [edi]
// 007542d5  8b5004               mov edx, dword ptr [eax + 4]
// 007542d8  53                   push ebx
// 007542d9  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007542dd  56                   push esi
// 007542de  53                   push ebx
// 007542df  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007542e7  ffd2                 call edx
// 007542e9  8bf0                 mov esi, eax
// 007542eb  85f6                 test esi, esi
// 007542ed  7431                 je 0x754320
// 007542ef  8d442418             lea eax, [esp + 0x18]
// 007542f3  50                   push eax
// 007542f4  8d4c2418             lea ecx, [esp + 0x18]
// 007542f8  51                   push ecx
// 007542f9  6a00                 push 0
// 007542fb  53                   push ebx
// 007542fc  6a00                 push 0
// 007542fe  6a00                 push 0
// 00754300  6a00                 push 0
// 00754302  55                   push ebp
// 00754303  56                   push esi
// 00754304  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0075430c  ff150c208000         call dword ptr [0x80200c]
// 00754312  894710               mov dword ptr [edi + 0x10], eax
// 00754315  56                   push esi
// 00754316  85c0                 test eax, eax
// 00754318  740f                 je 0x754329
// 0075431a  ff1508208000         call dword ptr [0x802008]
// 00754320  5e                   pop esi
// 00754321  5b                   pop ebx
// 00754322  5f                   pop edi
// 00754323  33c0                 xor eax, eax
// 00754325  5d                   pop ebp
// 00754326  c20800               ret 8
// 00754329  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0075432d  ff1508208000         call dword ptr [0x802008]
// 00754333  5e                   pop esi
// 00754334  5b                   pop ebx
// 00754335  8bc7                 mov eax, edi
// 00754337  5f                   pop edi
// 00754338  5d                   pop ebp
// 00754339  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTRegistryManager.cpp (function ?GetSectionKey@CXTRegistryManager@@MAEPAUHKEY__@@PBDK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTRegistryManager.cpp
