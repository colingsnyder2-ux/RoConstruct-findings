// roc 2012-06 009776b0  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009776b0
//
// 009776b0  6830769700           push 0x977630
// 009776b5  68a48be500           push 0xe58ba4
// 009776ba  e8e19ea8ff           call 0x4015a0
// 009776bf  a1a881e500           mov eax, dword ptr [0xe581a8]
// 009776c4  83c408               add esp, 8
// 009776c7  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?getLocalScope@Guid@RBX@@SAABVName@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
