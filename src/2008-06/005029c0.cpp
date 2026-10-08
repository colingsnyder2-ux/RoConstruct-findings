// from server: 100% by auto
// roc 2008-06 005029c0  unit: G3D::Sphere  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005029c0
//
// 005029c0  8b442408             mov eax, dword ptr [esp + 8]
// 005029c4  53                   push ebx
// 005029c5  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005029c9  56                   push esi
// 005029ca  57                   push edi
// 005029cb  8b7804               mov edi, dword ptr [eax + 4]
// 005029ce  8b00                 mov eax, dword ptr [eax]
// 005029d0  50                   push eax
// 005029d1  57                   push edi
// 005029d2  6a04                 push 4
// 005029d4  53                   push ebx
// 005029d5  8bf1                 mov esi, ecx
// 005029d7  e8748af7ff           call 0x47b450
// 005029dc  8bce                 mov ecx, esi
// 005029de  e84d72f7ff           call 0x479c30
// 005029e3  57                   push edi
// 005029e4  53                   push ebx
// 005029e5  8bce                 mov ecx, esi
// 005029e7  e81455f7ff           call 0x477f00
// 005029ec  5f                   pop edi
// 005029ed  5e                   pop esi
// 005029ee  5b                   pop ebx
// 005029ef  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??$sendIndices@H@RenderDevice@G3D@@QAEXW4Primitive@01@ABV?$Array@H@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
