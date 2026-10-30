// roc 2009-12 0080d310  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080d310
//
// 0080d310  6aff                 push -1
// 0080d312  68639a9500           push 0x959a63
// 0080d317  64a100000000         mov eax, dword ptr fs:[0]
// 0080d31d  50                   push eax
// 0080d31e  51                   push ecx
// 0080d31f  56                   push esi
// 0080d320  a10052b600           mov eax, dword ptr [0xb65200]
// 0080d325  33c4                 xor eax, esp
// 0080d327  50                   push eax
// 0080d328  8d44240c             lea eax, [esp + 0xc]
// 0080d32c  64a300000000         mov dword ptr fs:[0], eax
// 0080d332  8bf1                 mov esi, ecx
// 0080d334  89742408             mov dword ptr [esp + 8], esi
// 0080d338  c70654319f00         mov dword ptr [esi], 0x9f3154
// 0080d33e  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0080d346  e835f4ffff           call 0x80c780
// 0080d34b  8d4e20               lea ecx, [esi + 0x20]
// 0080d34e  c644241400           mov byte ptr [esp + 0x14], 0
// 0080d353  e8e8e3ffff           call 0x80b740
// 0080d358  8bce                 mov ecx, esi
// 0080d35a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0080d362  e87b70feff           call 0x7f43e2
// 0080d367  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080d36b  64890d00000000       mov dword ptr fs:[0], ecx
// 0080d372  59                   pop ecx
// 0080d373  5e                   pop esi
// 0080d374  83c410               add esp, 0x10
// 0080d377  c3                   ret 
// copied from an identical function in another client (function ??1CXTPPropertyGridItemConstraints@@MAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp