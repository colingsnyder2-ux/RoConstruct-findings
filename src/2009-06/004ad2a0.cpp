// from server: 100% by auto
// roc 2009-06 004ad2a0  unit: G3D::Win32Window  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ad2a0
//
// 004ad2a0  56                   push esi
// 004ad2a1  8bf1                 mov esi, ecx
// 004ad2a3  e888ffffff           call 0x4ad230
// 004ad2a8  8b86b4010000         mov eax, dword ptr [esi + 0x1b4]
// 004ad2ae  8b4008               mov eax, dword ptr [eax + 8]
// 004ad2b1  5e                   pop esi
// 004ad2b2  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?numJoysticks@Win32Window@G3D@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
