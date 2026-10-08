// from server: 100% by auto
// roc 2008-06 007badc0  unit: G3D::H::PAV?$Array::?$Set  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007badc0
//
// 007badc0  64a100000000         mov eax, dword ptr fs:[0]
// 007badc6  6aff                 push -1
// 007badc8  68ebe67e00           push 0x7ee6eb
// 007badcd  50                   push eax
// 007badce  b830000600           mov eax, 0x60030
// 007badd3  64892500000000       mov dword ptr fs:[0], esp
// 007badda  e84167eeff           call 0x6a1520
// 007baddf  dd842450000600       fld qword ptr [esp + 0x60050]
// 007bade6  8b84244c000600       mov eax, dword ptr [esp + 0x6004c]
// 007baded  8b8c2448000600       mov ecx, dword ptr [esp + 0x60048]
// 007badf4  8b942444000600       mov edx, dword ptr [esp + 0x60044]
// 007badfb  83ec08               sub esp, 8
// 007badfe  dd1c24               fstp qword ptr [esp]
// 007bae01  50                   push eax
// 007bae02  8b84244c000600       mov eax, dword ptr [esp + 0x6004c]
// 007bae09  51                   push ecx
// 007bae0a  52                   push edx
// 007bae0b  50                   push eax
// 007bae0c  8d4c2418             lea ecx, [esp + 0x18]
// 007bae10  e8cbf7ffff           call 0x7ba5e0
// 007bae15  8d0c24               lea ecx, [esp]
// 007bae18  c784243800060000000000 mov dword ptr [esp + 0x60038], 0
// 007bae23  e8c8feffff           call 0x7bacf0
// 007bae28  68e0336400           push 0x6433e0
// 007bae2d  6800800000           push 0x8000
// 007bae32  6a0c                 push 0xc
// 007bae34  8d4c240c             lea ecx, [esp + 0xc]
// 007bae38  51                   push ecx
// 007bae39  c7842448000600ffffffff mov dword ptr [esp + 0x60048], 0xffffffff
// 007bae44  e81268eeff           call 0x6a165b
// 007bae49  8b8c2430000600       mov ecx, dword ptr [esp + 0x60030]
// 007bae50  64890d00000000       mov dword ptr fs:[0], ecx
// 007bae57  81c43c000600         add esp, 0x6003c
// 007bae5d  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?computeWeld@MeshAlg@G3D@@SAXABV?$Array@VVector3@G3D@@@2@AAV32@AAV?$Array@H@2@2N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
