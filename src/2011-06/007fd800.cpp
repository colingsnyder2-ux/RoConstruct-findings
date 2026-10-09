// roc 2011-06 007fd800  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007fd800
//
// 007fd800  6880d77f00           push 0x7fd780
// 007fd805  686c6cd100           push 0xd16c6c
// 007fd80a  e8013ec0ff           call 0x401610
// 007fd80f  a17862d100           mov eax, dword ptr [0xd16278]
// 007fd814  83c408               add esp, 8
// 007fd817  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?getLocalScope@Guid@RBX@@SAABVName@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
