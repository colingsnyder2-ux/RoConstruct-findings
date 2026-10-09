// roc 2009-06 005ebad0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ebad0
//
// 005ebad0  64a100000000         mov eax, dword ptr fs:[0]
// 005ebad6  6aff                 push -1
// 005ebad8  689e528600           push 0x86529e
// 005ebadd  50                   push eax
// 005ebade  b801000000           mov eax, 1
// 005ebae3  64892500000000       mov dword ptr fs:[0], esp
// 005ebaea  84053074a400         test byte ptr [0xa47430], al
// 005ebaf0  7530                 jne 0x5ebb22
// 005ebaf2  09053074a400         or dword ptr [0xa47430], eax
// 005ebaf8  68c8cea100           push 0xa1cec8
// 005ebafd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ebb05  e8e6e9e1ff           call 0x40a4f0
// 005ebb0a  50                   push eax
// 005ebb0b  b97073a400           mov ecx, 0xa47370
// 005ebb10  e8cbdc0000           call 0x5f97e0
// 005ebb15  6890868900           push 0x898690
// 005ebb1a  e8dcdf1200           call 0x719afb
// 005ebb1f  83c404               add esp, 4
// 005ebb22  8b0c24               mov ecx, dword ptr [esp]
// 005ebb25  b87073a400           mov eax, 0xa47370
// 005ebb2a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ebb31  83c40c               add esp, 0xc
// 005ebb34  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
