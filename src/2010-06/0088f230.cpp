// roc 2010-06 0088f230  unit: CXTColorPageStandard  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0088f230
//
// 0088f230  6aff                 push -1
// 0088f232  6888b49b00           push 0x9bb488
// 0088f237  64a100000000         mov eax, dword ptr fs:[0]
// 0088f23d  50                   push eax
// 0088f23e  51                   push ecx
// 0088f23f  56                   push esi
// 0088f240  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0088f245  33c4                 xor eax, esp
// 0088f247  50                   push eax
// 0088f248  8d44240c             lea eax, [esp + 0xc]
// 0088f24c  64a300000000         mov dword ptr fs:[0], eax
// 0088f252  8bf1                 mov esi, ecx
// 0088f254  89742408             mov dword ptr [esp + 8], esi
// 0088f258  c7068cf3a600         mov dword ptr [esi], 0xa6f38c
// 0088f25e  8d8e88000000         lea ecx, [esi + 0x88]
// 0088f264  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0088f26c  e8bff9ffff           call 0x88ec30
// 0088f271  8bce                 mov ecx, esi
// 0088f273  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0088f27b  e818df0e00           call 0x97d198
// 0088f280  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088f284  64890d00000000       mov dword ptr fs:[0], ecx
// 0088f28b  59                   pop ecx
// 0088f28c  5e                   pop esi
// 0088f28d  83c410               add esp, 0x10
// 0088f290  c3                   ret 
// copied from an identical function in another client (function ??1CXTColorPageStandard@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageStandard.cpp