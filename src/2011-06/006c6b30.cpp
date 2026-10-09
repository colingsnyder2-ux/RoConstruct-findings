// roc 2011-06 006c6b30  unit: RBX::InstanceLocksmith  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006c6b30
//
// 006c6b30  68906a6c00           push 0x6c6a90
// 006c6b35  684c0ecd00           push 0xcd0e4c
// 006c6b3a  e8d1aad3ff           call 0x401610
// 006c6b3f  a1540ecd00           mov eax, dword ptr [0xcd0e54]
// 006c6b44  83c408               add esp, 8
// 006c6b47  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?getLocalScope@Guid@RBX@@SAABVName@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
