// roc 2011-06 00592ce0  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00592ce0
//
// 00592ce0  68c02c5900           push 0x592cc0
// 00592ce5  68f4bacb00           push 0xcbbaf4
// 00592cea  e821e9e6ff           call 0x401610
// 00592cef  a19cbacb00           mov eax, dword ptr [0xcbba9c]
// 00592cf4  83c408               add esp, 8
// 00592cf7  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?getLocalScope@Guid@RBX@@SAABVName@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
