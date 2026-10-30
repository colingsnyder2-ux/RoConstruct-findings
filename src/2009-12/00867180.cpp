// roc 2009-12 00867180  unit: CXTPPropertyGridItemColor  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00867180
//
// 00867180  6aff                 push -1
// 00867182  6899e39500           push 0x95e399
// 00867187  64a100000000         mov eax, dword ptr fs:[0]
// 0086718d  50                   push eax
// 0086718e  56                   push esi
// 0086718f  57                   push edi
// 00867190  a10052b600           mov eax, dword ptr [0xb65200]
// 00867195  33c4                 xor eax, esp
// 00867197  50                   push eax
// 00867198  8d44240c             lea eax, [esp + 0xc]
// 0086719c  64a300000000         mov dword ptr fs:[0], eax
// 008671a2  8bf1                 mov esi, ecx
// 008671a4  8b3e                 mov edi, dword ptr [esi]
// 008671a6  8d4c241c             lea ecx, [esp + 0x1c]
// 008671aa  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008671b2  ff1580de9800         call dword ptr [0x98de80]
// 008671b8  50                   push eax
// 008671b9  e8d2fdffff           call 0x866f90
// 008671be  83c404               add esp, 4
// 008671c1  50                   push eax
// 008671c2  8b87e4000000         mov eax, dword ptr [edi + 0xe4]
// 008671c8  8bce                 mov ecx, esi
// 008671ca  ffd0                 call eax
// 008671cc  8d4c241c             lea ecx, [esp + 0x1c]
// 008671d0  ff15c0de9800         call dword ptr [0x98dec0]
// 008671d6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008671da  64890d00000000       mov dword ptr fs:[0], ecx
// 008671e1  59                   pop ecx
// 008671e2  5f                   pop edi
// 008671e3  5e                   pop esi
// 008671e4  83c40c               add esp, 0xc
// 008671e7  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPPropertyGridItemColor@@MAEXV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\PropertyGrid\XTPPropertyGridItemColor.cpp