// from server: 100% by auto
// roc 2009-06 00883998  unit: seg_00880000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00883998
//
// 00883998  6860d14900           push 0x49d160
// 0088399d  6a06                 push 6
// 0088399f  6a04                 push 4
// 008839a1  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 008839a4  83c00c               add eax, 0xc
// 008839a7  50                   push eax
// 008839a8  e8c961e9ff           call 0x719b76
// 008839ad  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$??1Sky@G3D@@UAE@XZ$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
