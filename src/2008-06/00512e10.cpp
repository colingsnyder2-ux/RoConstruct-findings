// from server: 100% by auto
// roc 2008-06 00512e10  unit: G3D::GCamera  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00512e10
//
// 00512e10  6aff                 push -1
// 00512e12  6802c57c00           push 0x7cc502
// 00512e17  64a100000000         mov eax, dword ptr fs:[0]
// 00512e1d  50                   push eax
// 00512e1e  64892500000000       mov dword ptr fs:[0], esp
// 00512e25  83ec38               sub esp, 0x38
// 00512e28  8b442450             mov eax, dword ptr [esp + 0x50]
// 00512e2c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00512e30  56                   push esi
// 00512e31  50                   push eax
// 00512e32  51                   push ecx
// 00512e33  8d542428             lea edx, [esp + 0x28]
// 00512e37  52                   push edx
// 00512e38  e8b36bffff           call 0x5099f0
// 00512e3d  83c40c               add esp, 0xc
// 00512e40  8d4c2404             lea ecx, [esp + 4]
// 00512e44  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00512e4c  ff1560248000         call dword ptr [0x802460]
// 00512e52  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00512e56  8d442404             lea eax, [esp + 4]
// 00512e5a  50                   push eax
// 00512e5b  8d4c2424             lea ecx, [esp + 0x24]
// 00512e5f  51                   push ecx
// 00512e60  8bce                 mov ecx, esi
// 00512e62  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00512e67  e824f7ffff           call 0x512590
// 00512e6c  8d542404             lea edx, [esp + 4]
// 00512e70  52                   push edx
// 00512e71  8bce                 mov ecx, esi
// 00512e73  e848fcffff           call 0x512ac0
// 00512e78  8d4c2404             lea ecx, [esp + 4]
// 00512e7c  c644244400           mov byte ptr [esp + 0x44], 0
// 00512e81  ff1568248000         call dword ptr [0x802468]
// 00512e87  8d4c2420             lea ecx, [esp + 0x20]
// 00512e8b  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 00512e93  ff1568248000         call dword ptr [0x802468]
// 00512e99  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00512e9d  5e                   pop esi
// 00512e9e  64890d00000000       mov dword ptr fs:[0], ecx
// 00512ea5  83c444               add esp, 0x44
// 00512ea8  c3                   ret 
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?vprintf@TextOutput@G3D@@QAAXPBDPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
