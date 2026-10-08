// roc 2012-06 005c7750  unit: RakNet::RakPeer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c7750
//
// 005c7750  8bc1                 mov eax, ecx
// 005c7752  c6805802000000       mov byte ptr [eax + 0x258], 0
// 005c7759  c3                   ret 
// library rbxgs-raknet/DataBlockEncryptor.cpp (function ??0DataBlockEncryptor@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DataBlockEncryptor.cpp
