// from server: 100% by auto
// roc 2009-06 00856d00  unit: seg_00850000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00856d00
//
// 00856d00  a1c4e48900           mov eax, dword ptr [0x89e4c4]
// 00856d05  50                   push eax
// 00856d06  6a06                 push 6
// 00856d08  6a1c                 push 0x1c
// 00856d0a  8d8d4cffffff         lea ecx, [ebp - 0xb4]
// 00856d10  51                   push ecx
// 00856d11  e8602eecff           call 0x719b76
// 00856d16  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$?fromFile@Sky@G3D@@SA?AV?$ReferenceCountedPointer@VSky@G3D@@@2@PAVRenderDevice@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_NNH@Z$0)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
