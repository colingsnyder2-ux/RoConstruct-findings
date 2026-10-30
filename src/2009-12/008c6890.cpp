// roc 2009-12 008c6890  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6890
//
// 008c6890  6aff                 push -1
// 008c6892  6803469600           push 0x964603
// 008c6897  64a100000000         mov eax, dword ptr fs:[0]
// 008c689d  50                   push eax
// 008c689e  51                   push ecx
// 008c689f  56                   push esi
// 008c68a0  a10052b600           mov eax, dword ptr [0xb65200]
// 008c68a5  33c4                 xor eax, esp
// 008c68a7  50                   push eax
// 008c68a8  8d44240c             lea eax, [esp + 0xc]
// 008c68ac  64a300000000         mov dword ptr fs:[0], eax
// 008c68b2  8bf1                 mov esi, ecx
// 008c68b4  89742408             mov dword ptr [esp + 8], esi
// 008c68b8  c706249ba000         mov dword ptr [esi], 0xa09b24
// 008c68be  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008c68c6  e8d5fdffff           call 0x8c66a0
// 008c68cb  8d4e20               lea ecx, [esi + 0x20]
// 008c68ce  c644241400           mov byte ptr [esp + 0x14], 0
// 008c68d3  e858fdffff           call 0x8c6630
// 008c68d8  8bce                 mov ecx, esi
// 008c68da  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008c68e2  e8fbdaf2ff           call 0x7f43e2
// 008c68e7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c68eb  64890d00000000       mov dword ptr fs:[0], ecx
// 008c68f2  59                   pop ecx
// 008c68f3  5e                   pop esi
// 008c68f4  83c410               add esp, 0x10
// 008c68f7  c3                   ret 
// copied from an identical function in another client (function ??1CXTPPropertyGridItemConstraints@@MAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp