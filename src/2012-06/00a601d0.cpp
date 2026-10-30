// roc 2012-06 00a601d0  unit: CXTColorPageStandard  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a601d0
//
// 00a601d0  6aff                 push -1
// 00a601d2  68d87bae00           push 0xae7bd8
// 00a601d7  64a100000000         mov eax, dword ptr fs:[0]
// 00a601dd  50                   push eax
// 00a601de  51                   push ecx
// 00a601df  56                   push esi
// 00a601e0  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a601e5  33c4                 xor eax, esp
// 00a601e7  50                   push eax
// 00a601e8  8d44240c             lea eax, [esp + 0xc]
// 00a601ec  64a300000000         mov dword ptr fs:[0], eax
// 00a601f2  8bf1                 mov esi, ecx
// 00a601f4  89742408             mov dword ptr [esp + 8], esi
// 00a601f8  c7064c45c200         mov dword ptr [esi], 0xc2454c
// 00a601fe  8d8e88000000         lea ecx, [esi + 0x88]
// 00a60204  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00a6020c  e8bff9ffff           call 0xa5fbd0
// 00a60211  8bce                 mov ecx, esi
// 00a60213  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00a6021b  e8389b0300           call 0xa99d58
// 00a60220  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a60224  64890d00000000       mov dword ptr fs:[0], ecx
// 00a6022b  59                   pop ecx
// 00a6022c  5e                   pop esi
// 00a6022d  83c410               add esp, 0x10
// 00a60230  c3                   ret 
// copied from an identical function in another client (function ??1CXTColorPageStandard@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageStandard.cpp