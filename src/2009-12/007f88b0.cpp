// roc 2009-12 007f88b0  unit: CXTPControlAction  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f88b0
//
// 007f88b0  6aff                 push -1
// 007f88b2  6833899500           push 0x958933
// 007f88b7  64a100000000         mov eax, dword ptr fs:[0]
// 007f88bd  50                   push eax
// 007f88be  51                   push ecx
// 007f88bf  56                   push esi
// 007f88c0  a10052b600           mov eax, dword ptr [0xb65200]
// 007f88c5  33c4                 xor eax, esp
// 007f88c7  50                   push eax
// 007f88c8  8d44240c             lea eax, [esp + 0xc]
// 007f88cc  64a300000000         mov dword ptr fs:[0], eax
// 007f88d2  8bf1                 mov esi, ecx
// 007f88d4  89742408             mov dword ptr [esp + 8], esi
// 007f88d8  c70674189f00         mov dword ptr [esi], 0x9f1874
// 007f88de  c744241401000000     mov dword ptr [esp + 0x14], 1
// 007f88e6  e815f5ffff           call 0x7f7e00
// 007f88eb  8d4e20               lea ecx, [esi + 0x20]
// 007f88ee  c644241400           mov byte ptr [esp + 0x14], 0
// 007f88f3  e8e8efffff           call 0x7f78e0
// 007f88f8  8bce                 mov ecx, esi
// 007f88fa  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 007f8902  e8dbbaffff           call 0x7f43e2
// 007f8907  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f890b  64890d00000000       mov dword ptr fs:[0], ecx
// 007f8912  59                   pop ecx
// 007f8913  5e                   pop esi
// 007f8914  83c410               add esp, 0x10
// 007f8917  c3                   ret 
// copied from an identical function in another client (function ??1CXTPPropertyGridItemConstraints@@MAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp