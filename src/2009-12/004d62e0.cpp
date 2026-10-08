// roc 2009-12 004d62e0  unit: G3D::Win32Window  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d62e0
//
// 004d62e0  56                   push esi
// 004d62e1  8bf1                 mov esi, ecx
// 004d62e3  8b06                 mov eax, dword ptr [esi]
// 004d62e5  50                   push eax
// 004d62e6  e8f5401100           call 0x5ea3e0
// 004d62eb  33c0                 xor eax, eax
// 004d62ed  83c404               add esp, 4
// 004d62f0  8906                 mov dword ptr [esi], eax
// 004d62f2  894604               mov dword ptr [esi + 4], eax
// 004d62f5  894608               mov dword ptr [esi + 8], eax
// 004d62f8  5e                   pop esi
// 004d62f9  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??1?$Array@VVector3@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
