// roc 2009-06 005eacd0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eacd0
//
// 005eacd0  64a100000000         mov eax, dword ptr fs:[0]
// 005eacd6  6aff                 push -1
// 005eacd8  689e4e8600           push 0x864e9e
// 005eacdd  50                   push eax
// 005eacde  b801000000           mov eax, 1
// 005eace3  64892500000000       mov dword ptr fs:[0], esp
// 005eacea  8405305ba400         test byte ptr [0xa45b30], al
// 005eacf0  7530                 jne 0x5ead22
// 005eacf2  0905305ba400         or dword ptr [0xa45b30], eax
// 005eacf8  6830728d00           push 0x8d7230
// 005eacfd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ead05  e80648eeff           call 0x4cf510
// 005ead0a  50                   push eax
// 005ead0b  b9705aa400           mov ecx, 0xa45a70
// 005ead10  e8cbea0000           call 0x5f97e0
// 005ead15  6890888900           push 0x898890
// 005ead1a  e8dced1200           call 0x719afb
// 005ead1f  83c404               add esp, 4
// 005ead22  8b0c24               mov ecx, dword ptr [esp]
// 005ead25  b8705aa400           mov eax, 0xa45a70
// 005ead2a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ead31  83c40c               add esp, 0xc
// 005ead34  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
