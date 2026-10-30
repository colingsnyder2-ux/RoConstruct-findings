// roc 2009-12 0086af60  unit: CXTPPropertyGridItemBool  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086af60
//
// 0086af60  6aff                 push -1
// 0086af62  680af59500           push 0x95f50a
// 0086af67  64a100000000         mov eax, dword ptr fs:[0]
// 0086af6d  50                   push eax
// 0086af6e  83ec08               sub esp, 8
// 0086af71  53                   push ebx
// 0086af72  56                   push esi
// 0086af73  a10052b600           mov eax, dword ptr [0xb65200]
// 0086af78  33c4                 xor eax, esp
// 0086af7a  50                   push eax
// 0086af7b  8d442414             lea eax, [esp + 0x14]
// 0086af7f  64a300000000         mov dword ptr fs:[0], eax
// 0086af85  33db                 xor ebx, ebx
// 0086af87  895c240c             mov dword ptr [esp + 0xc], ebx
// 0086af8b  39991c010000         cmp dword ptr [ecx + 0x11c], ebx
// 0086af91  7407                 je 0x86af9a
// 0086af93  b856fd9900           mov eax, 0x99fd56
// 0086af98  eb1f                 jmp 0x86afb9
// 0086af9a  8d442410             lea eax, [esp + 0x10]
// 0086af9e  50                   push eax
// 0086af9f  e89c99ffff           call 0x864940
// 0086afa4  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0086afa8  bb01000000           mov ebx, 1
// 0086afad  8bc8                 mov ecx, eax
// 0086afaf  895c240c             mov dword ptr [esp + 0xc], ebx
// 0086afb3  ff1580de9800         call dword ptr [0x98de80]
// 0086afb9  8b742424             mov esi, dword ptr [esp + 0x24]
// 0086afbd  50                   push eax
// 0086afbe  8bce                 mov ecx, esi
// 0086afc0  ff15b8de9800         call dword ptr [0x98deb8]
// 0086afc6  83cb02               or ebx, 2
// 0086afc9  f6c301               test bl, 1
// 0086afcc  740a                 je 0x86afd8
// 0086afce  8d4c2410             lea ecx, [esp + 0x10]
// 0086afd2  ff15c0de9800         call dword ptr [0x98dec0]
// 0086afd8  8bc6                 mov eax, esi
// 0086afda  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0086afde  64890d00000000       mov dword ptr fs:[0], ecx
// 0086afe5  59                   pop ecx
// 0086afe6  5e                   pop esi
// 0086afe7  5b                   pop ebx
// 0086afe8  83c414               add esp, 0x14
// 0086afeb  c20400               ret 4
// copied from an identical function in another client (function ?GetViewValue@CXTPPropertyGridItemBool@@MAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\PropertyGrid\XTPPropertyGridItemBool.cpp