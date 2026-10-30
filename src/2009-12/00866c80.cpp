// roc 2009-12 00866c80  unit: CXTPPropertyGridItems  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00866c80
//
// 00866c80  6aff                 push -1
// 00866c82  6823f09500           push 0x95f023
// 00866c87  64a100000000         mov eax, dword ptr fs:[0]
// 00866c8d  50                   push eax
// 00866c8e  51                   push ecx
// 00866c8f  56                   push esi
// 00866c90  a10052b600           mov eax, dword ptr [0xb65200]
// 00866c95  33c4                 xor eax, esp
// 00866c97  50                   push eax
// 00866c98  8d44240c             lea eax, [esp + 0xc]
// 00866c9c  64a300000000         mov dword ptr fs:[0], eax
// 00866ca2  8bf1                 mov esi, ecx
// 00866ca4  89742408             mov dword ptr [esp + 8], esi
// 00866ca8  c7065cea9f00         mov dword ptr [esi], 0x9fea5c
// 00866cae  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00866cb6  e8e5f8ffff           call 0x8665a0
// 00866cbb  8d4e20               lea ecx, [esi + 0x20]
// 00866cbe  c644241400           mov byte ptr [esp + 0x14], 0
// 00866cc3  e8f8f1ffff           call 0x865ec0
// 00866cc8  8bce                 mov ecx, esi
// 00866cca  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00866cd2  e80bd7f8ff           call 0x7f43e2
// 00866cd7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00866cdb  64890d00000000       mov dword ptr fs:[0], ecx
// 00866ce2  59                   pop ecx
// 00866ce3  5e                   pop esi
// 00866ce4  83c410               add esp, 0x10
// 00866ce7  c3                   ret 
// copied from an identical function in another client (function ??1CXTPPropertyGridItemConstraints@@MAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp