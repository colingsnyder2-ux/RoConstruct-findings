// roc 2007-03 004c0730  unit: seg_004c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c0730
//
// 004c0730  8bc1                 mov eax, ecx
// 004c0732  c6805802000000       mov byte ptr [eax + 0x258], 0
// 004c0739  c3                   ret 
// library rbxgs-raknet/DataBlockEncryptor.cpp (function ??0DataBlockEncryptor@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DataBlockEncryptor.cpp
