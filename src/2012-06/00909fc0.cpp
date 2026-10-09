// roc 2012-06 00909fc0  unit: RBX::Body  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00909fc0
//
// 00909fc0  68509f9000           push 0x909f50
// 00909fc5  686068e500           push 0xe56860
// 00909fca  e8d175afff           call 0x4015a0
// 00909fcf  a1e467e500           mov eax, dword ptr [0xe567e4]
// 00909fd4  83c408               add esp, 8
// 00909fd7  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?getLocalScope@Guid@RBX@@SAABVName@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
