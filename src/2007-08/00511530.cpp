// from server: 100% by tester
// roc 2007-03 00505c60  unit: seg_00500000  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00505c60
//
// 00505c60  6aff                 push -1
// 00505c62  685b117500           push 0x75115b
// 00505c67  64a100000000         mov eax, dword ptr fs:[0]
// 00505c6d  50                   push eax
// 00505c6e  b830000600           mov eax, 0x60030
// 00505c73  e878931100           call 0x61eff0
// 00505c78  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00505c7d  33c4                 xor eax, esp
// 00505c7f  50                   push eax
// 00505c80  8d842434000600       lea eax, [esp + 0x60034]
// 00505c87  64a300000000         mov dword ptr fs:[0], eax
// 00505c8d  dd842454000600       fld qword ptr [esp + 0x60054]
// 00505c94  8b842450000600       mov eax, dword ptr [esp + 0x60050]
// 00505c9b  8b8c244c000600       mov ecx, dword ptr [esp + 0x6004c]
// 00505ca2  8b942448000600       mov edx, dword ptr [esp + 0x60048]
// 00505ca9  83ec08               sub esp, 8
// 00505cac  dd1c24               fstp qword ptr [esp]
// 00505caf  50                   push eax
// 00505cb0  8b842450000600       mov eax, dword ptr [esp + 0x60050]
// 00505cb7  51                   push ecx
// 00505cb8  52                   push edx
// 00505cb9  50                   push eax
// 00505cba  8d4c241c             lea ecx, [esp + 0x1c]
// 00505cbe  e89df6ffff           call 0x505360
// 00505cc3  8d4c2404             lea ecx, [esp + 4]
// 00505cc7  c784243c00060000000000 mov dword ptr [esp + 0x6003c], 0
// 00505cd2  e8a9feffff           call 0x505b80
// 00505cd7  6880764e00           push 0x4e7680
// 00505cdc  6800800000           push 0x8000
// 00505ce1  6a0c                 push 0xc
// 00505ce3  8d4c2410             lea ecx, [esp + 0x10]
// 00505ce7  51                   push ecx
// 00505ce8  c784244c000600ffffffff mov dword ptr [esp + 0x6004c], 0xffffffff
// 00505cf3  e88d921100           call 0x61ef85
// 00505cf8  8b8c2434000600       mov ecx, dword ptr [esp + 0x60034]
// 00505cff  64890d00000000       mov dword ptr fs:[0], ecx
// 00505d06  59                   pop ecx
// 00505d07  81c43c000600         add esp, 0x6003c
// 00505d0d  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?computeWeld@MeshAlg@G3D@@SAXABV?$Array@VVector3@G3D@@@2@AAV32@AAV?$Array@H@2@2N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
