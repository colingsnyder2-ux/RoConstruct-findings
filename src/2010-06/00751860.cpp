// roc 2010-06 00751860  unit: RBX::Body  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00751860
//
// 00751860  68f0177500           push 0x7517f0
// 00751865  68d02dc200           push 0xc22dd0
// 0075186a  e821fecaff           call 0x401690
// 0075186f  a1582dc200           mov eax, dword ptr [0xc22d58]
// 00751874  83c408               add esp, 8
// 00751877  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?getLocalScope@Guid@RBX@@SAABVName@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
