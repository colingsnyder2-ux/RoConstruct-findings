// roc 2009-06 008004a0  unit: CXTColorPageStandard  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008004a0
//
// 008004a0  6aff                 push -1
// 008004a2  68b8138800           push 0x8813b8
// 008004a7  64a100000000         mov eax, dword ptr fs:[0]
// 008004ad  50                   push eax
// 008004ae  51                   push ecx
// 008004af  56                   push esi
// 008004b0  a1304fa200           mov eax, dword ptr [0xa24f30]
// 008004b5  33c4                 xor eax, esp
// 008004b7  50                   push eax
// 008004b8  8d44240c             lea eax, [esp + 0xc]
// 008004bc  64a300000000         mov dword ptr fs:[0], eax
// 008004c2  8bf1                 mov esi, ecx
// 008004c4  89742408             mov dword ptr [esp + 8], esi
// 008004c8  c70624ac9000         mov dword ptr [esi], 0x90ac24
// 008004ce  8d8e88000000         lea ecx, [esi + 0x88]
// 008004d4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008004dc  e8bff9ffff           call 0x7ffea0
// 008004e1  8bce                 mov ecx, esi
// 008004e3  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008004eb  e800be0400           call 0x84c2f0
// 008004f0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008004f4  64890d00000000       mov dword ptr fs:[0], ecx
// 008004fb  59                   pop ecx
// 008004fc  5e                   pop esi
// 008004fd  83c410               add esp, 0x10
// 00800500  c3                   ret 
// copied from an identical function in another client (function ??1CXTColorPageStandard@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageStandard.cpp