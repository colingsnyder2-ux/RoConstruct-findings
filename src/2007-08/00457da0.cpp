// roc 2007-08 00457da0  unit: G3D::GImage  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00457da0
//
// 00457da0  56                   push esi
// 00457da1  8bf1                 mov esi, ecx
// 00457da3  3935d8d08b00         cmp dword ptr [0x8bd0d8], esi
// 00457da9  7410                 je 0x457dbb
// 00457dab  8b06                 mov eax, dword ptr [esi]
// 00457dad  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 00457db3  ffd2                 call edx
// 00457db5  8935d8d08b00         mov dword ptr [0x8bd0d8], esi
// 00457dbb  5e                   pop esi
// 00457dbc  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?makeCurrent@GWindow@G3D@@QBEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
