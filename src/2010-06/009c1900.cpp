// roc 2010-06 009c1900  unit: seg_009c0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c1900
//
// 009c1900  a100a49e00           mov eax, dword ptr [0x9ea400]
// 009c1905  50                   push eax
// 009c1906  6a06                 push 6
// 009c1908  6a1c                 push 0x1c
// 009c190a  8d8d4cffffff         lea ecx, [ebp - 0xb4]
// 009c1910  51                   push ecx
// 009c1911  e8c871deff           call 0x7a8ade
// 009c1916  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$?fromFile@Sky@G3D@@SA?AV?$ReferenceCountedPointer@VSky@G3D@@@2@PAVRenderDevice@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_NNH@Z$0)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
