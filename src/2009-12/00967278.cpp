// roc 2009-12 00967278  unit: seg_00960000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00967278
//
// 00967278  6820cc5c00           push 0x5ccc20
// 0096727d  6a06                 push 6
// 0096727f  6a04                 push 4
// 00967281  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 00967284  83c00c               add eax, 0xc
// 00967287  50                   push eax
// 00967288  e817d7e8ff           call 0x7f49a4
// 0096728d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$??1Sky@G3D@@UAE@XZ$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
