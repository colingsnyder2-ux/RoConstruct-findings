// from server: 100% by auto
// roc 2008-06 00665670  unit: seg_00660000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00665670
//
// 00665670  8bc1                 mov eax, ecx
// 00665672  c70084cb8400         mov dword ptr [eax], 0x84cb84
// 00665678  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0ios_base@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
