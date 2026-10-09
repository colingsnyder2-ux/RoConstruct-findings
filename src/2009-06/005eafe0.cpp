// roc 2009-06 005eafe0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eafe0
//
// 005eafe0  64a100000000         mov eax, dword ptr fs:[0]
// 005eafe6  6aff                 push -1
// 005eafe8  687e4f8600           push 0x864f7e
// 005eafed  50                   push eax
// 005eafee  b801000000           mov eax, 1
// 005eaff3  64892500000000       mov dword ptr fs:[0], esp
// 005eaffa  8405a860a400         test byte ptr [0xa460a8], al
// 005eb000  7530                 jne 0x5eb032
// 005eb002  0905a860a400         or dword ptr [0xa460a8], eax
// 005eb008  68b0f7a000           push 0xa0f7b0
// 005eb00d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb015  e8d6f4e1ff           call 0x40a4f0
// 005eb01a  50                   push eax
// 005eb01b  b9e85fa400           mov ecx, 0xa45fe8
// 005eb020  e8bbe70000           call 0x5f97e0
// 005eb025  6820888900           push 0x898820
// 005eb02a  e8ccea1200           call 0x719afb
// 005eb02f  83c404               add esp, 4
// 005eb032  8b0c24               mov ecx, dword ptr [esp]
// 005eb035  b8e85fa400           mov eax, 0xa45fe8
// 005eb03a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb041  83c40c               add esp, 0xc
// 005eb044  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
