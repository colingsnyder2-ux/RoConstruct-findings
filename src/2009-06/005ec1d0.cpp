// roc 2009-06 005ec1d0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ec1d0
//
// 005ec1d0  64a100000000         mov eax, dword ptr fs:[0]
// 005ec1d6  6aff                 push -1
// 005ec1d8  689e548600           push 0x86549e
// 005ec1dd  50                   push eax
// 005ec1de  b801000000           mov eax, 1
// 005ec1e3  64892500000000       mov dword ptr fs:[0], esp
// 005ec1ea  8405b080a400         test byte ptr [0xa480b0], al
// 005ec1f0  7530                 jne 0x5ec222
// 005ec1f2  0905b080a400         or dword ptr [0xa480b0], eax
// 005ec1f8  6888438e00           push 0x8e4388
// 005ec1fd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ec205  e8e6e2e1ff           call 0x40a4f0
// 005ec20a  50                   push eax
// 005ec20b  b9f07fa400           mov ecx, 0xa47ff0
// 005ec210  e8cbd50000           call 0x5f97e0
// 005ec215  6890858900           push 0x898590
// 005ec21a  e8dcd81200           call 0x719afb
// 005ec21f  83c404               add esp, 4
// 005ec222  8b0c24               mov ecx, dword ptr [esp]
// 005ec225  b8f07fa400           mov eax, 0xa47ff0
// 005ec22a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec231  83c40c               add esp, 0xc
// 005ec234  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
