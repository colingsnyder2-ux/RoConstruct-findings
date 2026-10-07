// roc 2010-06 0048bf50  unit: G3D::Win32Window  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048bf50
//
// 0048bf50  56                   push esi
// 0048bf51  8bf1                 mov esi, ecx
// 0048bf53  e888ffffff           call 0x48bee0
// 0048bf58  8b86b4010000         mov eax, dword ptr [esi + 0x1b4]
// 0048bf5e  8b4008               mov eax, dword ptr [eax + 8]
// 0048bf61  5e                   pop esi
// 0048bf62  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?numJoysticks@Win32Window@G3D@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
