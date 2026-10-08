// roc 2009-12 005fe570  unit: G3D::H::PAV?$Array::?$Set  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fe570
//
// 005fe570  64a100000000         mov eax, dword ptr fs:[0]
// 005fe576  6aff                 push -1
// 005fe578  68ebfa9300           push 0x93faeb
// 005fe57d  50                   push eax
// 005fe57e  b830000600           mov eax, 0x60030
// 005fe583  64892500000000       mov dword ptr fs:[0], esp
// 005fe58a  e881641f00           call 0x7f4a10
// 005fe58f  dd842450000600       fld qword ptr [esp + 0x60050]
// 005fe596  8b84244c000600       mov eax, dword ptr [esp + 0x6004c]
// 005fe59d  8b8c2448000600       mov ecx, dword ptr [esp + 0x60048]
// 005fe5a4  8b942444000600       mov edx, dword ptr [esp + 0x60044]
// 005fe5ab  83ec08               sub esp, 8
// 005fe5ae  dd1c24               fstp qword ptr [esp]
// 005fe5b1  50                   push eax
// 005fe5b2  8b84244c000600       mov eax, dword ptr [esp + 0x6004c]
// 005fe5b9  51                   push ecx
// 005fe5ba  52                   push edx
// 005fe5bb  50                   push eax
// 005fe5bc  8d4c2418             lea ecx, [esp + 0x18]
// 005fe5c0  e81bf7ffff           call 0x5fdce0
// 005fe5c5  8d0c24               lea ecx, [esp]
// 005fe5c8  c784243800060000000000 mov dword ptr [esp + 0x60038], 0
// 005fe5d3  e8c8feffff           call 0x5fe4a0
// 005fe5d8  68e0624d00           push 0x4d62e0
// 005fe5dd  6800800000           push 0x8000
// 005fe5e2  6a0c                 push 0xc
// 005fe5e4  8d4c240c             lea ecx, [esp + 0xc]
// 005fe5e8  51                   push ecx
// 005fe5e9  c7842448000600ffffffff mov dword ptr [esp + 0x60048], 0xffffffff
// 005fe5f4  e8ab631f00           call 0x7f49a4
// 005fe5f9  8b8c2430000600       mov ecx, dword ptr [esp + 0x60030]
// 005fe600  64890d00000000       mov dword ptr fs:[0], ecx
// 005fe607  81c43c000600         add esp, 0x6003c
// 005fe60d  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?computeWeld@MeshAlg@G3D@@SAXABV?$Array@VVector3@G3D@@@2@AAV32@AAV?$Array@H@2@2N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
