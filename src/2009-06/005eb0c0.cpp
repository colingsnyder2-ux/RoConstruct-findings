// roc 2009-06 005eb0c0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb0c0
//
// 005eb0c0  64a100000000         mov eax, dword ptr fs:[0]
// 005eb0c6  6aff                 push -1
// 005eb0c8  68be4f8600           push 0x864fbe
// 005eb0cd  50                   push eax
// 005eb0ce  b801000000           mov eax, 1
// 005eb0d3  64892500000000       mov dword ptr fs:[0], esp
// 005eb0da  84053862a400         test byte ptr [0xa46238], al
// 005eb0e0  7530                 jne 0x5eb112
// 005eb0e2  09053862a400         or dword ptr [0xa46238], eax
// 005eb0e8  68804b8e00           push 0x8e4b80
// 005eb0ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb0f5  e856ffffff           call 0x5eb050
// 005eb0fa  50                   push eax
// 005eb0fb  b97861a400           mov ecx, 0xa46178
// 005eb100  e8dbe60000           call 0x5f97e0
// 005eb105  6800888900           push 0x898800
// 005eb10a  e8ece91200           call 0x719afb
// 005eb10f  83c404               add esp, 4
// 005eb112  8b0c24               mov ecx, dword ptr [esp]
// 005eb115  b87861a400           mov eax, 0xa46178
// 005eb11a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb121  83c40c               add esp, 0xc
// 005eb124  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
