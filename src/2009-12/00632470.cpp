// roc 2009-12 00632470  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00632470
//
// 00632470  6850246300           push 0x632450
// 00632475  684051b800           push 0xb85140
// 0063247a  e8b1f1dcff           call 0x401630
// 0063247f  a10051b800           mov eax, dword ptr [0xb85100]
// 00632484  83c408               add esp, 8
// 00632487  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?getLocalScope@Guid@RBX@@SAABVName@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
