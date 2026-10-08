// from server: 100% by auto
// roc 2008-06 007ee098  unit: seg_007e0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ee098
//
// 007ee098  68702a5000           push 0x502a70
// 007ee09d  6a06                 push 6
// 007ee09f  6a04                 push 4
// 007ee0a1  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 007ee0a4  83c00c               add eax, 0xc
// 007ee0a7  50                   push eax
// 007ee0a8  e8ae35ebff           call 0x6a165b
// 007ee0ad  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$??1Sky@G3D@@UAE@XZ$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
