// roc 2009-06 00883a2b  unit: seg_00880000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00883a2b
//
// 00883a2b  6860d14900           push 0x49d160
// 00883a30  6a06                 push 6
// 00883a32  6a04                 push 4
// 00883a34  8b8504ffffff         mov eax, dword ptr [ebp - 0xfc]
// 00883a3a  83c00c               add eax, 0xc
// 00883a3d  50                   push eax
// 00883a3e  e83361e9ff           call 0x719b76
// 00883a43  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$??0Sky@G3D@@AAE@PAVRenderDevice@1@QAV?$ReferenceCountedPointer@VTexture@G3D@@@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N3N@Z$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
