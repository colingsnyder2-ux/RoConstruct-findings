// roc 2009-06 005eb830  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb830
//
// 005eb830  64a100000000         mov eax, dword ptr fs:[0]
// 005eb836  6aff                 push -1
// 005eb838  68de518600           push 0x8651de
// 005eb83d  50                   push eax
// 005eb83e  b801000000           mov eax, 1
// 005eb843  64892500000000       mov dword ptr fs:[0], esp
// 005eb84a  8405806fa400         test byte ptr [0xa46f80], al
// 005eb850  7530                 jne 0x5eb882
// 005eb852  0905806fa400         or dword ptr [0xa46f80], eax
// 005eb858  689804a200           push 0xa20498
// 005eb85d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb865  e886ece1ff           call 0x40a4f0
// 005eb86a  50                   push eax
// 005eb86b  b9c06ea400           mov ecx, 0xa46ec0
// 005eb870  e86bdf0000           call 0x5f97e0
// 005eb875  68f0868900           push 0x8986f0
// 005eb87a  e87ce21200           call 0x719afb
// 005eb87f  83c404               add esp, 4
// 005eb882  8b0c24               mov ecx, dword ptr [esp]
// 005eb885  b8c06ea400           mov eax, 0xa46ec0
// 005eb88a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb891  83c40c               add esp, 0xc
// 005eb894  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
