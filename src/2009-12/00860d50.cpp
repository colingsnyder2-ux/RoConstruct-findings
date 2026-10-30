// roc 2009-12 00860d50  unit: CXTPToolTipContextToolTip  size: 323 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00860d50
//
// 00860d50  6aff                 push -1
// 00860d52  6850e89500           push 0x95e850
// 00860d57  64a100000000         mov eax, dword ptr fs:[0]
// 00860d5d  50                   push eax
// 00860d5e  83ec78               sub esp, 0x78
// 00860d61  a10052b600           mov eax, dword ptr [0xb65200]
// 00860d66  33c4                 xor eax, esp
// 00860d68  89442474             mov dword ptr [esp + 0x74], eax
// 00860d6c  55                   push ebp
// 00860d6d  56                   push esi
// 00860d6e  57                   push edi
// 00860d6f  a10052b600           mov eax, dword ptr [0xb65200]
// 00860d74  33c4                 xor eax, esp
// 00860d76  50                   push eax
// 00860d77  8d842488000000       lea eax, [esp + 0x88]
// 00860d7e  64a300000000         mov dword ptr fs:[0], eax
// 00860d84  8bf1                 mov esi, ecx
// 00860d86  56                   push esi
// 00860d87  8d4c2434             lea ecx, [esp + 0x34]
// 00860d8b  e86034f9ff           call 0x7f41f0
// 00860d90  56                   push esi
// 00860d91  8d4c2414             lea ecx, [esp + 0x14]
// 00860d95  c784249400000000000000 mov dword ptr [esp + 0x94], 0
// 00860da0  e82ba5feff           call 0x84b2d0
// 00860da5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00860da9  8b16                 mov edx, dword ptr [esi]
// 00860dab  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 00860db1  83ec10               sub esp, 0x10
// 00860db4  8bc4                 mov eax, esp
// 00860db6  8908                 mov dword ptr [eax], ecx
// 00860db8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00860dbc  894804               mov dword ptr [eax + 4], ecx
// 00860dbf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00860dc3  894808               mov dword ptr [eax + 8], ecx
// 00860dc6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00860dca  89480c               mov dword ptr [eax + 0xc], ecx
// 00860dcd  8d7e70               lea edi, [esi + 0x70]
// 00860dd0  57                   push edi
// 00860dd1  8d442444             lea eax, [esp + 0x44]
// 00860dd5  50                   push eax
// 00860dd6  8bce                 mov ecx, esi
// 00860dd8  ffd2                 call edx
// 00860dda  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00860ddd  e84ef4ffff           call 0x860230
// 00860de2  6a01                 push 1
// 00860de4  8d4c2434             lea ecx, [esp + 0x34]
// 00860de8  8be8                 mov ebp, eax
// 00860dea  e8a1560c00           call 0x926490
// 00860def  55                   push ebp
// 00860df0  8d4c2434             lea ecx, [esp + 0x34]
// 00860df4  e827570c00           call 0x926520
// 00860df9  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00860dfc  0598000000           add eax, 0x98
// 00860e01  50                   push eax
// 00860e02  8d4c2434             lea ecx, [esp + 0x34]
// 00860e06  51                   push ecx
// 00860e07  8d4c2428             lea ecx, [esp + 0x28]
// 00860e0b  e850a8feff           call 0x84b660
// 00860e10  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00860e14  8b16                 mov edx, dword ptr [esi]
// 00860e16  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 00860e1c  83ec10               sub esp, 0x10
// 00860e1f  8bc4                 mov eax, esp
// 00860e21  8908                 mov dword ptr [eax], ecx
// 00860e23  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00860e27  894804               mov dword ptr [eax + 4], ecx
// 00860e2a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00860e2e  894808               mov dword ptr [eax + 8], ecx
// 00860e31  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00860e35  89480c               mov dword ptr [eax + 0xc], ecx
// 00860e38  57                   push edi
// 00860e39  8d442444             lea eax, [esp + 0x44]
// 00860e3d  50                   push eax
// 00860e3e  8bce                 mov ecx, esi
// 00860e40  c68424a800000001     mov byte ptr [esp + 0xa8], 1
// 00860e48  ffd2                 call edx
// 00860e4a  8d4c2420             lea ecx, [esp + 0x20]
// 00860e4e  c684249000000000     mov byte ptr [esp + 0x90], 0
// 00860e56  e885a8feff           call 0x84b6e0
// 00860e5b  8d4c2430             lea ecx, [esp + 0x30]
// 00860e5f  c7842490000000ffffffff mov dword ptr [esp + 0x90], 0xffffffff
// 00860e6a  e87b33f9ff           call 0x7f41ea
// 00860e6f  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00860e76  64890d00000000       mov dword ptr fs:[0], ecx
// 00860e7d  59                   pop ecx
// 00860e7e  5f                   pop edi
// 00860e7f  5e                   pop esi
// 00860e80  5d                   pop ebp
// 00860e81  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00860e85  33cc                 xor ecx, esp
// 00860e87  e80e45f9ff           call 0x7f539a
// 00860e8c  81c484000000         add esp, 0x84
// 00860e92  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPToolTipContextToolTip@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp