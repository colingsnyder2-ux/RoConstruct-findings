// roc 2007-08 00480010  unit: G3D::Win32Window  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00480010
//
// 00480010  56                   push esi
// 00480011  8bf1                 mov esi, ecx
// 00480013  e888ffffff           call 0x47ffa0
// 00480018  8b86b4010000         mov eax, dword ptr [esi + 0x1b4]
// 0048001e  8b4008               mov eax, dword ptr [eax + 8]
// 00480021  5e                   pop esi
// 00480022  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?numJoysticks@Win32Window@G3D@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
