// from server: 100% by auto
// roc 2007-08 004ef6e0  unit: RBX::Render::SceneManager  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ef6e0
//
// 004ef6e0  56                   push esi
// 004ef6e1  8bf1                 mov esi, ecx
// 004ef6e3  8b4608               mov eax, dword ptr [esi + 8]
// 004ef6e6  85c0                 test eax, eax
// 004ef6e8  742c                 je 0x4ef716
// 004ef6ea  83c004               add eax, 4
// 004ef6ed  50                   push eax
// 004ef6ee  ff15e8d27700         call dword ptr [0x77d2e8]
// 004ef6f4  85c0                 test eax, eax
// 004ef6f6  7517                 jne 0x4ef70f
// 004ef6f8  8b4e08               mov ecx, dword ptr [esi + 8]
// 004ef6fb  e8d086f6ff           call 0x457dd0
// 004ef700  8b4e08               mov ecx, dword ptr [esi + 8]
// 004ef703  85c9                 test ecx, ecx
// 004ef705  7408                 je 0x4ef70f
// 004ef707  8b01                 mov eax, dword ptr [ecx]
// 004ef709  8b10                 mov edx, dword ptr [eax]
// 004ef70b  6a01                 push 1
// 004ef70d  ffd2                 call edx
// 004ef70f  c7460800000000       mov dword ptr [esi + 8], 0
// 004ef716  5e                   pop esi
// 004ef717  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??1ModelSorter@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
