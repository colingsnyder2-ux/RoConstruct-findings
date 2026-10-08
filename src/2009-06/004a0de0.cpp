// roc 2009-06 004a0de0  unit: G3D::VARArea  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a0de0
//
// 004a0de0  6aff                 push -1
// 004a0de2  6848068700           push 0x870648
// 004a0de7  64a100000000         mov eax, dword ptr fs:[0]
// 004a0ded  50                   push eax
// 004a0dee  64892500000000       mov dword ptr fs:[0], esp
// 004a0df5  83ec34               sub esp, 0x34
// 004a0df8  53                   push ebx
// 004a0df9  56                   push esi
// 004a0dfa  57                   push edi
// 004a0dfb  8bf1                 mov esi, ecx
// 004a0dfd  8d86d8070000         lea eax, [esi + 0x7d8]
// 004a0e03  50                   push eax
// 004a0e04  8d4c2414             lea ecx, [esp + 0x14]
// 004a0e08  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 004a0e10  e86b91ffff           call 0x499f80
// 004a0e15  bb01000000           mov ebx, 1
// 004a0e1a  841df8c6a300         test byte ptr [0xa3c6f8], bl
// 004a0e20  751a                 jne 0x4a0e3c
// 004a0e22  d9ee                 fldz 
// 004a0e24  091df8c6a300         or dword ptr [0xa3c6f8], ebx
// 004a0e2a  d915ecc6a300         fst dword ptr [0xa3c6ec]
// 004a0e30  d915f0c6a300         fst dword ptr [0xa3c6f0]
// 004a0e36  d91df4c6a300         fstp dword ptr [0xa3c6f4]
// 004a0e3c  d905ecc6a300         fld dword ptr [0xa3c6ec]
// 004a0e42  51                   push ecx
// 004a0e43  d95c2438             fstp dword ptr [esp + 0x38]
// 004a0e47  8bcc                 mov ecx, esp
// 004a0e49  d905f0c6a300         fld dword ptr [0xa3c6f0]
// 004a0e4f  89642410             mov dword ptr [esp + 0x10], esp
// 004a0e53  d95c243c             fstp dword ptr [esp + 0x3c]
// 004a0e57  d905f4c6a300         fld dword ptr [0xa3c6f4]
// 004a0e5d  d95c2440             fstp dword ptr [esp + 0x40]
// 004a0e61  c70100000000         mov dword ptr [ecx], 0
// 004a0e67  8b442458             mov eax, dword ptr [esp + 0x58]
// 004a0e6b  50                   push eax
// 004a0e6c  e8efe9ffff           call 0x49f860
// 004a0e71  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 004a0e75  57                   push edi
// 004a0e76  8bce                 mov ecx, esi
// 004a0e78  e8b3faffff           call 0x4a0930
// 004a0e7d  8d4c2410             lea ecx, [esp + 0x10]
// 004a0e81  51                   push ecx
// 004a0e82  57                   push edi
// 004a0e83  8bce                 mov ecx, esi
// 004a0e85  e8b6f9ffff           call 0x4a0840
// 004a0e8a  015e78               add dword ptr [esi + 0x78], ebx
// 004a0e8d  015e70               add dword ptr [esi + 0x70], ebx
// 004a0e90  81c7c0840000         add edi, 0x84c0
// 004a0e96  57                   push edi
// 004a0e97  ff1564d1a300         call dword ptr [0xa3d164]
// 004a0e9d  8b35f8ea8900         mov esi, dword ptr [0x89eaf8]
// 004a0ea3  6812850000           push 0x8512
// 004a0ea8  6800250000           push 0x2500
// 004a0ead  6800200000           push 0x2000
// 004a0eb2  ffd6                 call esi
// 004a0eb4  6812850000           push 0x8512
// 004a0eb9  6800250000           push 0x2500
// 004a0ebe  6801200000           push 0x2001
// 004a0ec3  ffd6                 call esi
// 004a0ec5  6812850000           push 0x8512
// 004a0eca  6800250000           push 0x2500
// 004a0ecf  6802200000           push 0x2002
// 004a0ed4  ffd6                 call esi
// 004a0ed6  8b35aceb8900         mov esi, dword ptr [0x89ebac]
// 004a0edc  68600c0000           push 0xc60
// 004a0ee1  ffd6                 call esi
// 004a0ee3  68610c0000           push 0xc61
// 004a0ee8  ffd6                 call esi
// 004a0eea  68620c0000           push 0xc62
// 004a0eef  ffd6                 call esi
// 004a0ef1  8b442454             mov eax, dword ptr [esp + 0x54]
// 004a0ef5  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 004a0efd  85c0                 test eax, eax
// 004a0eff  7426                 je 0x4a0f27
// 004a0f01  83c004               add eax, 4
// 004a0f04  50                   push eax
// 004a0f05  ff15a4e18900         call dword ptr [0x89e1a4]
// 004a0f0b  85c0                 test eax, eax
// 004a0f0d  7518                 jne 0x4a0f27
// 004a0f0f  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004a0f13  e8683efaff           call 0x444d80
// 004a0f18  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004a0f1c  85c9                 test ecx, ecx
// 004a0f1e  7407                 je 0x4a0f27
// 004a0f20  8b11                 mov edx, dword ptr [ecx]
// 004a0f22  8b02                 mov eax, dword ptr [edx]
// 004a0f24  53                   push ebx
// 004a0f25  ffd0                 call eax
// 004a0f27  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004a0f2b  5f                   pop edi
// 004a0f2c  5e                   pop esi
// 004a0f2d  64890d00000000       mov dword ptr fs:[0], ecx
// 004a0f34  5b                   pop ebx
// 004a0f35  83c440               add esp, 0x40
// 004a0f38  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?configureReflectionMap@RenderDevice@G3D@@QAEXIV?$ReferenceCountedPointer@VTexture@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
