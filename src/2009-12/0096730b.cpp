// roc 2009-12 0096730b  unit: seg_00960000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096730b
//
// 0096730b  6820cc5c00           push 0x5ccc20
// 00967310  6a06                 push 6
// 00967312  6a04                 push 4
// 00967314  8b8504ffffff         mov eax, dword ptr [ebp - 0xfc]
// 0096731a  83c00c               add eax, 0xc
// 0096731d  50                   push eax
// 0096731e  e881d6e8ff           call 0x7f49a4
// 00967323  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$??0Sky@G3D@@AAE@PAVRenderDevice@1@QAV?$ReferenceCountedPointer@VTexture@G3D@@@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N3N@Z$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
