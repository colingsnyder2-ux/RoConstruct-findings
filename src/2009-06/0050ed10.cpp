// roc 2009-06 0050ed10  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0050ed10
//
// 0050ed10  8bc1                 mov eax, ecx
// 0050ed12  c6805802000000       mov byte ptr [eax + 0x258], 0
// 0050ed19  c3                   ret 
// library rbxgs-raknet/DataBlockEncryptor.cpp (function ??0DataBlockEncryptor@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DataBlockEncryptor.cpp
