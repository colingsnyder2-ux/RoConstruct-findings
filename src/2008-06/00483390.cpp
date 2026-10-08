// from server: 100% by auto
// roc 2008-06 00483390  unit: G3D::Win32Window  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00483390
//
// 00483390  56                   push esi
// 00483391  8bf1                 mov esi, ecx
// 00483393  e888ffffff           call 0x483320
// 00483398  8b86b4010000         mov eax, dword ptr [esi + 0x1b4]
// 0048339e  8b4008               mov eax, dword ptr [eax + 8]
// 004833a1  5e                   pop esi
// 004833a2  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?numJoysticks@Win32Window@G3D@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
