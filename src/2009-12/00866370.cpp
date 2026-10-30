// roc 2009-12 00866370  unit: CXTPPropertyGridItem  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00866370
//
// 00866370  6aff                 push -1
// 00866372  6838b89500           push 0x95b838
// 00866377  64a100000000         mov eax, dword ptr fs:[0]
// 0086637d  50                   push eax
// 0086637e  51                   push ecx
// 0086637f  56                   push esi
// 00866380  a10052b600           mov eax, dword ptr [0xb65200]
// 00866385  33c4                 xor eax, esp
// 00866387  50                   push eax
// 00866388  8d44240c             lea eax, [esp + 0xc]
// 0086638c  64a300000000         mov dword ptr fs:[0], eax
// 00866392  8bf1                 mov esi, ecx
// 00866394  89742408             mov dword ptr [esp + 8], esi
// 00866398  8d4e20               lea ecx, [esi + 0x20]
// 0086639b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008663a3  e8d8faffff           call 0x865e80
// 008663a8  8bce                 mov ecx, esi
// 008663aa  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008663b2  e82be0f8ff           call 0x7f43e2
// 008663b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008663bb  64890d00000000       mov dword ptr fs:[0], ecx
// 008663c2  59                   pop ecx
// 008663c3  5e                   pop esi
// 008663c4  83c410               add esp, 0x10
// 008663c7  c3                   ret 
// copied from an identical function in another client (function ??1CXTPPropertyGridItems@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp