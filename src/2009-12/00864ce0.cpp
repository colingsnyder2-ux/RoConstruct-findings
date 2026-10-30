// roc 2009-12 00864ce0  unit: CPropertyGridItemBrickColor  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864ce0
//
// 00864ce0  6aff                 push -1
// 00864ce2  68e2ed9500           push 0x95ede2
// 00864ce7  64a100000000         mov eax, dword ptr fs:[0]
// 00864ced  50                   push eax
// 00864cee  83ec08               sub esp, 8
// 00864cf1  56                   push esi
// 00864cf2  57                   push edi
// 00864cf3  a10052b600           mov eax, dword ptr [0xb65200]
// 00864cf8  33c4                 xor eax, esp
// 00864cfa  50                   push eax
// 00864cfb  8d442414             lea eax, [esp + 0x14]
// 00864cff  64a300000000         mov dword ptr fs:[0], eax
// 00864d05  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00864d09  8b09                 mov ecx, dword ptr [ecx]
// 00864d0b  8d442410             lea eax, [esp + 0x10]
// 00864d0f  50                   push eax
// 00864d10  e8dbd8bcff           call 0x4325f0
// 00864d15  8bf0                 mov esi, eax
// 00864d17  8b442424             mov eax, dword ptr [esp + 0x24]
// 00864d1b  8b08                 mov ecx, dword ptr [eax]
// 00864d1d  8d54240c             lea edx, [esp + 0xc]
// 00864d21  52                   push edx
// 00864d22  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00864d2a  e8c1d8bcff           call 0x4325f0
// 00864d2f  8bf8                 mov edi, eax
// 00864d31  8bce                 mov ecx, esi
// 00864d33  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00864d38  ff1580de9800         call dword ptr [0x98de80]
// 00864d3e  50                   push eax
// 00864d3f  8bcf                 mov ecx, edi
// 00864d41  ff1584de9800         call dword ptr [0x98de84]
// 00864d47  8d4c240c             lea ecx, [esp + 0xc]
// 00864d4b  8bf0                 mov esi, eax
// 00864d4d  ff15c0de9800         call dword ptr [0x98dec0]
// 00864d53  8d4c2410             lea ecx, [esp + 0x10]
// 00864d57  ff15c0de9800         call dword ptr [0x98dec0]
// 00864d5d  8bc6                 mov eax, esi
// 00864d5f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00864d63  64890d00000000       mov dword ptr fs:[0], ecx
// 00864d6a  59                   pop ecx
// 00864d6b  5f                   pop edi
// 00864d6c  5e                   pop esi
// 00864d6d  83c414               add esp, 0x14
// 00864d70  c3                   ret 
// copied from an identical function in another client (function ?CompareFunc@CXTPPropertyGridItems@@CAHPAPBVCXTPPropertyGridItem@@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp