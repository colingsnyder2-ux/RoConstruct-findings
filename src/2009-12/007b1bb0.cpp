// roc 2009-12 007b1bb0  unit: RBX::Body  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b1bb0
//
// 007b1bb0  68401b7b00           push 0x7b1b40
// 007b1bb5  688c8bb900           push 0xb98b8c
// 007b1bba  e871fac4ff           call 0x401630
// 007b1bbf  a1148bb900           mov eax, dword ptr [0xb98b14]
// 007b1bc4  83c408               add esp, 8
// 007b1bc7  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?getLocalScope@Guid@RBX@@SAABVName@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
