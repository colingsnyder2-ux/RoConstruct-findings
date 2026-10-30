// roc 2009-12 0086ec40  unit: CXTPResourceManager  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086ec40
//
// 0086ec40  6aff                 push -1
// 0086ec42  68b8fa9500           push 0x95fab8
// 0086ec47  64a100000000         mov eax, dword ptr fs:[0]
// 0086ec4d  50                   push eax
// 0086ec4e  83ec08               sub esp, 8
// 0086ec51  53                   push ebx
// 0086ec52  56                   push esi
// 0086ec53  57                   push edi
// 0086ec54  a10052b600           mov eax, dword ptr [0xb65200]
// 0086ec59  33c4                 xor eax, esp
// 0086ec5b  50                   push eax
// 0086ec5c  8d442418             lea eax, [esp + 0x18]
// 0086ec60  64a300000000         mov dword ptr fs:[0], eax
// 0086ec66  e855f4ffff           call 0x86e0c0
// 0086ec6b  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0086ec6f  8b3d48ca9800         mov edi, dword ptr [0x98ca48]
// 0086ec75  85c0                 test eax, eax
// 0086ec77  7461                 je 0x86ecda
// 0086ec79  0fb7f3               movzx esi, bx
// 0086ec7c  6a0c                 push 0xc
// 0086ec7e  56                   push esi
// 0086ec7f  50                   push eax
// 0086ec80  ff15ecb19800         call dword ptr [0x98b1ec]
// 0086ec86  85c0                 test eax, eax
// 0086ec88  7450                 je 0x86ecda
// 0086ec8a  8d4c2410             lea ecx, [esp + 0x10]
// 0086ec8e  e86dfdffff           call 0x86ea00
// 0086ec93  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0086ec9b  e87e4ef8ff           call 0x7f3b1e
// 0086eca0  56                   push esi
// 0086eca1  6a0c                 push 0xc
// 0086eca3  56                   push esi
// 0086eca4  e83555f8ff           call 0x7f41de
// 0086eca9  50                   push eax
// 0086ecaa  ffd7                 call edi
// 0086ecac  8d4c2410             lea ecx, [esp + 0x10]
// 0086ecb0  8bf0                 mov esi, eax
// 0086ecb2  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0086ecba  e881f9ffff           call 0x86e640
// 0086ecbf  85f6                 test esi, esi
// 0086ecc1  7417                 je 0x86ecda
// 0086ecc3  8bc6                 mov eax, esi
// 0086ecc5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0086ecc9  64890d00000000       mov dword ptr fs:[0], ecx
// 0086ecd0  59                   pop ecx
// 0086ecd1  5f                   pop edi
// 0086ecd2  5e                   pop esi
// 0086ecd3  5b                   pop ebx
// 0086ecd4  83c414               add esp, 0x14
// 0086ecd7  c20400               ret 4
// 0086ecda  e83f4ef8ff           call 0x7f3b1e
// 0086ecdf  0fb7c3               movzx eax, bx
// 0086ece2  50                   push eax
// 0086ece3  6a0c                 push 0xc
// 0086ece5  50                   push eax
// 0086ece6  e8f354f8ff           call 0x7f41de
// 0086eceb  50                   push eax
// 0086ecec  ffd7                 call edi
// 0086ecee  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0086ecf2  64890d00000000       mov dword ptr fs:[0], ecx
// 0086ecf9  59                   pop ecx
// 0086ecfa  5f                   pop edi
// 0086ecfb  5e                   pop esi
// 0086ecfc  5b                   pop ebx
// 0086ecfd  83c414               add esp, 0x14
// 0086ed00  c20400               ret 4
// copied from an identical function in another client (function ?LoadCursorA@CXTPResourceManager@@UAEPAUHICON__@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPResourceManager.cpp