// roc 2009-12 005efa10  unit: G3D::Log  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005efa10
//
// 005efa10  56                   push esi
// 005efa11  8bf1                 mov esi, ecx
// 005efa13  8b4604               mov eax, dword ptr [esi + 4]
// 005efa16  50                   push eax
// 005efa17  c7460800000000       mov dword ptr [esi + 8], 0
// 005efa1e  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005efa25  e876c7f6ff           call 0x55c1a0
// 005efa2a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005efa2e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005efa32  8b542414             mov edx, dword ptr [esp + 0x14]
// 005efa36  894608               mov dword ptr [esi + 8], eax
// 005efa39  0fafc1               imul eax, ecx
// 005efa3c  0fafc2               imul eax, edx
// 005efa3f  6a01                 push 1
// 005efa41  50                   push eax
// 005efa42  c7460400000000       mov dword ptr [esi + 4], 0
// 005efa49  894e0c               mov dword ptr [esi + 0xc], ecx
// 005efa4c  895610               mov dword ptr [esi + 0x10], edx
// 005efa4f  e85ca8ffff           call 0x5ea2b0
// 005efa54  83c40c               add esp, 0xc
// 005efa57  894604               mov dword ptr [esi + 4], eax
// 005efa5a  5e                   pop esi
// 005efa5b  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?resize@GImage@G3D@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
