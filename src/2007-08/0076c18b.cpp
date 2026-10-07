// roc 2007-08 0076c18b  unit: seg_00760000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076c18b
//
// 0076c18b  68f0374600           push 0x4637f0
// 0076c190  6a06                 push 6
// 0076c192  6a04                 push 4
// 0076c194  8b85d0feffff         mov eax, dword ptr [ebp - 0x130]
// 0076c19a  83c00c               add eax, 0xc
// 0076c19d  50                   push eax
// 0076c19e  e85449ecff           call 0x630af7
// 0076c1a3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$??0Sky@G3D@@AAE@PAVRenderDevice@1@QAV?$ReferenceCountedPointer@VTexture@G3D@@@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N3N@Z$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
