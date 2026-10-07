// roc 2008-06 007ee12b  unit: seg_007e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ee12b
//
// 007ee12b  68702a5000           push 0x502a70
// 007ee130  6a06                 push 6
// 007ee132  6a04                 push 4
// 007ee134  8b8504ffffff         mov eax, dword ptr [ebp - 0xfc]
// 007ee13a  83c00c               add eax, 0xc
// 007ee13d  50                   push eax
// 007ee13e  e81835ebff           call 0x6a165b
// 007ee143  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$??0Sky@G3D@@AAE@PAVRenderDevice@1@QAV?$ReferenceCountedPointer@VTexture@G3D@@@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N3N@Z$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
