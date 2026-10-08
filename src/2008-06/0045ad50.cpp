// from server: 100% by auto
// roc 2008-06 0045ad50  unit: G3D::GImage  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045ad50
//
// 0045ad50  56                   push esi
// 0045ad51  8bf1                 mov esi, ecx
// 0045ad53  3935f4ef9600         cmp dword ptr [0x96eff4], esi
// 0045ad59  7410                 je 0x45ad6b
// 0045ad5b  8b06                 mov eax, dword ptr [esi]
// 0045ad5d  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 0045ad63  ffd2                 call edx
// 0045ad65  8935f4ef9600         mov dword ptr [0x96eff4], esi
// 0045ad6b  5e                   pop esi
// 0045ad6c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?makeCurrent@GWindow@G3D@@QBEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
