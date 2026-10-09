// roc 2009-06 005cd960  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cd960
//
// 005cd960  6820d85c00           push 0x5cd820
// 005cd965  68fc3ba400           push 0xa43bfc
// 005cd96a  e8a13de3ff           call 0x401710
// 005cd96f  a1bc3ba400           mov eax, dword ptr [0xa43bbc]
// 005cd974  83c408               add esp, 8
// 005cd977  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?getLocalScope@Guid@RBX@@SAABVName@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
