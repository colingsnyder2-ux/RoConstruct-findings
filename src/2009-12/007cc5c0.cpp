// roc 2009-12 007cc5c0  unit: RBX::EquationDisplay  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007cc5c0
//
// 007cc5c0  6820c57c00           push 0x7cc520
// 007cc5c5  687c8db900           push 0xb98d7c
// 007cc5ca  e86150c3ff           call 0x401630
// 007cc5cf  a1808db900           mov eax, dword ptr [0xb98d80]
// 007cc5d4  83c408               add esp, 8
// 007cc5d7  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?getLocalScope@Guid@RBX@@SAABVName@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
