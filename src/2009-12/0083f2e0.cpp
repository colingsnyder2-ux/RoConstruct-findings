// roc 2009-12 0083f2e0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 245 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083f2e0
//
// 0083f2e0  6aff                 push -1
// 0083f2e2  6854cb9500           push 0x95cb54
// 0083f2e7  64a100000000         mov eax, dword ptr fs:[0]
// 0083f2ed  50                   push eax
// 0083f2ee  83ec08               sub esp, 8
// 0083f2f1  53                   push ebx
// 0083f2f2  55                   push ebp
// 0083f2f3  56                   push esi
// 0083f2f4  a10052b600           mov eax, dword ptr [0xb65200]
// 0083f2f9  33c4                 xor eax, esp
// 0083f2fb  50                   push eax
// 0083f2fc  8d442418             lea eax, [esp + 0x18]
// 0083f300  64a300000000         mov dword ptr fs:[0], eax
// 0083f306  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0083f30e  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0083f312  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0083f315  85c0                 test eax, eax
// 0083f317  0f8498000000         je 0x83f3b5
// 0083f31d  8b90fc000000         mov edx, dword ptr [eax + 0xfc]
// 0083f323  8b4508               mov eax, dword ptr [ebp + 8]
// 0083f326  85c0                 test eax, eax
// 0083f328  7c10                 jl 0x83f33a
// 0083f32a  3b422c               cmp eax, dword ptr [edx + 0x2c]
// 0083f32d  7d0b                 jge 0x83f33a
// 0083f32f  8b5228               mov edx, dword ptr [edx + 0x28]
// 0083f332  8b3482               mov esi, dword ptr [edx + eax*4]
// 0083f335  8d0482               lea eax, [edx + eax*4]
// 0083f338  eb02                 jmp 0x83f33c
// 0083f33a  33f6                 xor esi, esi
// 0083f33c  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 0083f342  8b4858               mov ecx, dword ptr [eax + 0x58]
// 0083f345  85c9                 test ecx, ecx
// 0083f347  741b                 je 0x83f364
// 0083f349  8b11                 mov edx, dword ptr [ecx]
// 0083f34b  8b5258               mov edx, dword ptr [edx + 0x58]
// 0083f34e  8d442414             lea eax, [esp + 0x14]
// 0083f352  50                   push eax
// 0083f353  ffd2                 call edx
// 0083f355  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0083f35d  bb01000000           mov ebx, 1
// 0083f362  eb1c                 jmp 0x83f380
// 0083f364  6856fd9900           push 0x99fd56
// 0083f369  8d4c242c             lea ecx, [esp + 0x2c]
// 0083f36d  ff15b8de9800         call dword ptr [0x98deb8]
// 0083f373  c744242001000000     mov dword ptr [esp + 0x20], 1
// 0083f37b  bb02000000           mov ebx, 2
// 0083f380  50                   push eax
// 0083f381  8bce                 mov ecx, esi
// 0083f383  895c2414             mov dword ptr [esp + 0x14], ebx
// 0083f387  e814d10400           call 0x88c4a0
// 0083f38c  f6c302               test bl, 2
// 0083f38f  740d                 je 0x83f39e
// 0083f391  8d4c2428             lea ecx, [esp + 0x28]
// 0083f395  83e3fd               and ebx, 0xfffffffd
// 0083f398  ff15c0de9800         call dword ptr [0x98dec0]
// 0083f39e  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0083f3a6  f6c301               test bl, 1
// 0083f3a9  740a                 je 0x83f3b5
// 0083f3ab  8d4c2414             lea ecx, [esp + 0x14]
// 0083f3af  ff15c0de9800         call dword ptr [0x98dec0]
// 0083f3b5  8b4500               mov eax, dword ptr [ebp]
// 0083f3b8  8b10                 mov edx, dword ptr [eax]
// 0083f3ba  6a01                 push 1
// 0083f3bc  8bcd                 mov ecx, ebp
// 0083f3be  ffd2                 call edx
// 0083f3c0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083f3c4  64890d00000000       mov dword ptr fs:[0], ecx
// 0083f3cb  59                   pop ecx
// 0083f3cc  5e                   pop esi
// 0083f3cd  5d                   pop ebp
// 0083f3ce  5b                   pop ebx
// 0083f3cf  83c414               add esp, 0x14
// 0083f3d2  c20400               ret 4
// copied from an identical function in another client (function ?OnUpdateCustomizeName@CXTPCustomizeSheet@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp