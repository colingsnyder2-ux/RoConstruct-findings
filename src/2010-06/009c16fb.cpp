// roc 2010-06 009c16fb  unit: seg_009c0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c16fb
//
// 009c16fb  68f0ca5200           push 0x52caf0
// 009c1700  6a06                 push 6
// 009c1702  6a04                 push 4
// 009c1704  8b8504ffffff         mov eax, dword ptr [ebp - 0xfc]
// 009c170a  83c00c               add eax, 0xc
// 009c170d  50                   push eax
// 009c170e  e8cb73deff           call 0x7a8ade
// 009c1713  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$??0Sky@G3D@@AAE@PAVRenderDevice@1@QAV?$ReferenceCountedPointer@VTexture@G3D@@@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N3N@Z$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
