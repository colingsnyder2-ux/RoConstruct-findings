// roc 2007-08 00511530  unit: G3D::H::PAV?$Array::?$Set  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00511530
//
// 00511530  6aff                 push -1
// 00511532  68eb017500           push 0x7501eb
// 00511537  64a100000000         mov eax, dword ptr fs:[0]
// 0051153d  50                   push eax
// 0051153e  b830000600           mov eax, 0x60030
// 00511543  e818f61100           call 0x630b60
// 00511548  a188518b00           mov eax, dword ptr [0x8b5188]
// 0051154d  33c4                 xor eax, esp
// 0051154f  50                   push eax
// 00511550  8d842434000600       lea eax, [esp + 0x60034]
// 00511557  64a300000000         mov dword ptr fs:[0], eax
// 0051155d  dd842454000600       fld qword ptr [esp + 0x60054]
// 00511564  8b842450000600       mov eax, dword ptr [esp + 0x60050]
// 0051156b  8b8c244c000600       mov ecx, dword ptr [esp + 0x6004c]
// 00511572  8b942448000600       mov edx, dword ptr [esp + 0x60048]
// 00511579  83ec08               sub esp, 8
// 0051157c  dd1c24               fstp qword ptr [esp]
// 0051157f  50                   push eax
// 00511580  8b842450000600       mov eax, dword ptr [esp + 0x60050]
// 00511587  51                   push ecx
// 00511588  52                   push edx
// 00511589  50                   push eax
// 0051158a  8d4c241c             lea ecx, [esp + 0x1c]
// 0051158e  e89df6ffff           call 0x510c30
// 00511593  8d4c2404             lea ecx, [esp + 4]
// 00511597  c784243c00060000000000 mov dword ptr [esp + 0x6003c], 0
// 005115a2  e8a9feffff           call 0x511450
// 005115a7  6840c04700           push 0x47c040
// 005115ac  6800800000           push 0x8000
// 005115b1  6a0c                 push 0xc
// 005115b3  8d4c2410             lea ecx, [esp + 0x10]
// 005115b7  51                   push ecx
// 005115b8  c784244c000600ffffffff mov dword ptr [esp + 0x6004c], 0xffffffff
// 005115c3  e82ff51100           call 0x630af7
// 005115c8  8b8c2434000600       mov ecx, dword ptr [esp + 0x60034]
// 005115cf  64890d00000000       mov dword ptr fs:[0], ecx
// 005115d6  59                   pop ecx
// 005115d7  81c43c000600         add esp, 0x6003c
// 005115dd  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?computeWeld@MeshAlg@G3D@@SAXABV?$Array@VVector3@G3D@@@2@AAV32@AAV?$Array@H@2@2N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
