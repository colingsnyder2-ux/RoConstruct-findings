// from server: 100% by auto
// roc 2008-06 00599190  unit: RBX::VPartInstance::?$FactoryProduct  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00599190
//
// 00599190  b801000000           mov eax, 1
// 00599195  840564639700         test byte ptr [0x976364], al
// 0059919b  751a                 jne 0x5991b7
// 0059919d  d9e8                 fld1 
// 0059919f  090564639700         or dword ptr [0x976364], eax
// 005991a5  d91558639700         fst dword ptr [0x976358]
// 005991ab  d9155c639700         fst dword ptr [0x97635c]
// 005991b1  d91d60639700         fstp dword ptr [0x976360]
// 005991b7  b858639700           mov eax, 0x976358
// 005991bc  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?white@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
