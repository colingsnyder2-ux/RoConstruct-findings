// roc 2009-12 007b7350  unit: RBX::SleepStage  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b7350
//
// 007b7350  8bc1                 mov eax, ecx
// 007b7352  33c9                 xor ecx, ecx
// 007b7354  894804               mov dword ptr [eax + 4], ecx
// 007b7357  894808               mov dword ptr [eax + 8], ecx
// 007b735a  8908                 mov dword ptr [eax], ecx
// 007b735c  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ??0?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
