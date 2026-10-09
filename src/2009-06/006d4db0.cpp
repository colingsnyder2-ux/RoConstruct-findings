// roc 2009-06 006d4db0  unit: RBX::Body  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d4db0
//
// 006d4db0  68404d6d00           push 0x6d4d40
// 006d4db5  6868ffa400           push 0xa4ff68
// 006d4dba  e851c9d2ff           call 0x401710
// 006d4dbf  a1f0fea400           mov eax, dword ptr [0xa4fef0]
// 006d4dc4  83c408               add esp, 8
// 006d4dc7  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?getLocalScope@Guid@RBX@@SAABVName@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
