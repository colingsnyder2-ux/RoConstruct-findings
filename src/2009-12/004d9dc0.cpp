// roc 2009-12 004d9dc0  unit: G3D::Win32Window  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d9dc0
//
// 004d9dc0  56                   push esi
// 004d9dc1  8bf1                 mov esi, ecx
// 004d9dc3  e888ffffff           call 0x4d9d50
// 004d9dc8  8b86b4010000         mov eax, dword ptr [esi + 0x1b4]
// 004d9dce  8b4008               mov eax, dword ptr [eax + 8]
// 004d9dd1  5e                   pop esi
// 004d9dd2  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?numJoysticks@Win32Window@G3D@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
