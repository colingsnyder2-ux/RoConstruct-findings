// roc 2008-06 007c46d0  unit: seg_007c0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c46d0
//
// 007c46d0  a168248000           mov eax, dword ptr [0x802468]
// 007c46d5  50                   push eax
// 007c46d6  6a06                 push 6
// 007c46d8  6a1c                 push 0x1c
// 007c46da  8d8d4cffffff         lea ecx, [ebp - 0xb4]
// 007c46e0  51                   push ecx
// 007c46e1  e875cfedff           call 0x6a165b
// 007c46e6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$?fromFile@Sky@G3D@@SA?AV?$ReferenceCountedPointer@VSky@G3D@@@2@PAVRenderDevice@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_NNH@Z$0)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
