// roc 2008-06 004d5980  unit: CSHA1  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d5980
//
// 004d5980  8bc1                 mov eax, ecx
// 004d5982  c6805802000000       mov byte ptr [eax + 0x258], 0
// 004d5989  c3                   ret 
// library rbxgs-raknet/DataBlockEncryptor.cpp (function ??0DataBlockEncryptor@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DataBlockEncryptor.cpp
