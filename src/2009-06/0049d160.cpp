// from server: 100% by auto
// roc 2009-06 0049d160  unit: G3D::Texture  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049d160
//
// 0049d160  56                   push esi
// 0049d161  8bf1                 mov esi, ecx
// 0049d163  8b06                 mov eax, dword ptr [esi]
// 0049d165  85c0                 test eax, eax
// 0049d167  7429                 je 0x49d192
// 0049d169  83c004               add eax, 4
// 0049d16c  50                   push eax
// 0049d16d  ff15a4e18900         call dword ptr [0x89e1a4]
// 0049d173  85c0                 test eax, eax
// 0049d175  7515                 jne 0x49d18c
// 0049d177  8b0e                 mov ecx, dword ptr [esi]
// 0049d179  e8027cfaff           call 0x444d80
// 0049d17e  8b0e                 mov ecx, dword ptr [esi]
// 0049d180  85c9                 test ecx, ecx
// 0049d182  7408                 je 0x49d18c
// 0049d184  8b01                 mov eax, dword ptr [ecx]
// 0049d186  8b10                 mov edx, dword ptr [eax]
// 0049d188  6a01                 push 1
// 0049d18a  ffd2                 call edx
// 0049d18c  c70600000000         mov dword ptr [esi], 0
// 0049d192  5e                   pop esi
// 0049d193  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?zeroPointer@?$ReferenceCountedPointer@VRenderbuffer@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
