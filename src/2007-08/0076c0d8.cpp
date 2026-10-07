// roc 2007-08 0076c0d8  unit: seg_00760000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076c0d8
//
// 0076c0d8  68f0374600           push 0x4637f0
// 0076c0dd  6a06                 push 6
// 0076c0df  6a04                 push 4
// 0076c0e1  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 0076c0e4  83c00c               add eax, 0xc
// 0076c0e7  50                   push eax
// 0076c0e8  e80a4aecff           call 0x630af7
// 0076c0ed  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$??1Sky@G3D@@UAE@XZ$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
