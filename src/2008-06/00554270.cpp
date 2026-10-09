// roc 2008-06 00554270  unit: RBX::RenderBase::AggregateChunk  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00554270
//
// 00554270  682c3a9700           push 0x973a2c
// 00554275  6860415500           push 0x554160
// 0055427a  e8b1300000           call 0x557330
// 0055427f  a1d0399700           mov eax, dword ptr [0x9739d0]
// 00554284  83c408               add esp, 8
// 00554287  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?getLocalScope@Guid@RBX@@SAABVName@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
