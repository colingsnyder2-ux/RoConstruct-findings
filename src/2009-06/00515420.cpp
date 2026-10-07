// roc 2009-06 00515420  unit: seg_00510000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00515420
//
// 00515420  8bc1                 mov eax, ecx
// 00515422  c700c06a8b00         mov dword ptr [eax], 0x8b6ac0
// 00515428  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0ios_base@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
