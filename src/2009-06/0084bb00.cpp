// from server: 100% by auto
// roc 2009-06 0084bb00  unit: G3D::H::PAV?$Array::?$Set  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084bb00
//
// 0084bb00  64a100000000         mov eax, dword ptr fs:[0]
// 0084bb06  6aff                 push -1
// 0084bb08  680b408800           push 0x88400b
// 0084bb0d  50                   push eax
// 0084bb0e  b830000600           mov eax, 0x60030
// 0084bb13  64892500000000       mov dword ptr fs:[0], esp
// 0084bb1a  e8c1e0ecff           call 0x719be0
// 0084bb1f  dd842450000600       fld qword ptr [esp + 0x60050]
// 0084bb26  8b84244c000600       mov eax, dword ptr [esp + 0x6004c]
// 0084bb2d  8b8c2448000600       mov ecx, dword ptr [esp + 0x60048]
// 0084bb34  8b942444000600       mov edx, dword ptr [esp + 0x60044]
// 0084bb3b  83ec08               sub esp, 8
// 0084bb3e  dd1c24               fstp qword ptr [esp]
// 0084bb41  50                   push eax
// 0084bb42  8b84244c000600       mov eax, dword ptr [esp + 0x6004c]
// 0084bb49  51                   push ecx
// 0084bb4a  52                   push edx
// 0084bb4b  50                   push eax
// 0084bb4c  8d4c2418             lea ecx, [esp + 0x18]
// 0084bb50  e8cbf7ffff           call 0x84b320
// 0084bb55  8d0c24               lea ecx, [esp]
// 0084bb58  c784243800060000000000 mov dword ptr [esp + 0x60038], 0
// 0084bb63  e8c8feffff           call 0x84ba30
// 0084bb68  6890ae4900           push 0x49ae90
// 0084bb6d  6800800000           push 0x8000
// 0084bb72  6a0c                 push 0xc
// 0084bb74  8d4c240c             lea ecx, [esp + 0xc]
// 0084bb78  51                   push ecx
// 0084bb79  c7842448000600ffffffff mov dword ptr [esp + 0x60048], 0xffffffff
// 0084bb84  e8eddfecff           call 0x719b76
// 0084bb89  8b8c2430000600       mov ecx, dword ptr [esp + 0x60030]
// 0084bb90  64890d00000000       mov dword ptr fs:[0], ecx
// 0084bb97  81c43c000600         add esp, 0x6003c
// 0084bb9d  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?computeWeld@MeshAlg@G3D@@SAXABV?$Array@VVector3@G3D@@@2@AAV32@AAV?$Array@H@2@2N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
