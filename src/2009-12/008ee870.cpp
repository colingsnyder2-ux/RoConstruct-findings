// roc 2009-12 008ee870  unit: CXTPRibbonGroups  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ee870
//
// 008ee870  6aff                 push -1
// 008ee872  68c3679600           push 0x9667c3
// 008ee877  64a100000000         mov eax, dword ptr fs:[0]
// 008ee87d  50                   push eax
// 008ee87e  51                   push ecx
// 008ee87f  56                   push esi
// 008ee880  a10052b600           mov eax, dword ptr [0xb65200]
// 008ee885  33c4                 xor eax, esp
// 008ee887  50                   push eax
// 008ee888  8d44240c             lea eax, [esp + 0xc]
// 008ee88c  64a300000000         mov dword ptr fs:[0], eax
// 008ee892  8bf1                 mov esi, ecx
// 008ee894  89742408             mov dword ptr [esp + 8], esi
// 008ee898  c7066cdaa000         mov dword ptr [esi], 0xa0da6c
// 008ee89e  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008ee8a6  e8b5f3ffff           call 0x8edc60
// 008ee8ab  8d4e20               lea ecx, [esi + 0x20]
// 008ee8ae  c644241400           mov byte ptr [esp + 0x14], 0
// 008ee8b3  e838f3ffff           call 0x8edbf0
// 008ee8b8  8bce                 mov ecx, esi
// 008ee8ba  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008ee8c2  e81b5bf0ff           call 0x7f43e2
// 008ee8c7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ee8cb  64890d00000000       mov dword ptr fs:[0], ecx
// 008ee8d2  59                   pop ecx
// 008ee8d3  5e                   pop esi
// 008ee8d4  83c410               add esp, 0x10
// 008ee8d7  c3                   ret 
// copied from an identical function in another client (function ??1CXTPPropertyGridItemConstraints@@MAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp