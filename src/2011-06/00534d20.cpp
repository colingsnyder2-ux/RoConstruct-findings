// roc 2011-06 00534d20  unit: seg_00530000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00534d20
//
// 00534d20  8bc1                 mov eax, ecx
// 00534d22  c700ffffffff         mov dword ptr [eax], 0xffffffff
// 00534d28  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0ios_base@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
