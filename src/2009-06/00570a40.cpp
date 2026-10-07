// roc 2009-06 00570a40  unit: G3D::Log  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00570a40
//
// 00570a40  56                   push esi
// 00570a41  8bf1                 mov esi, ecx
// 00570a43  8b4604               mov eax, dword ptr [esi + 4]
// 00570a46  50                   push eax
// 00570a47  c7460800000000       mov dword ptr [esi + 8], 0
// 00570a4e  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00570a55  e806a7ffff           call 0x56b160
// 00570a5a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00570a5e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00570a62  8b542414             mov edx, dword ptr [esp + 0x14]
// 00570a66  894608               mov dword ptr [esi + 8], eax
// 00570a69  0fafc1               imul eax, ecx
// 00570a6c  0fafc2               imul eax, edx
// 00570a6f  6a01                 push 1
// 00570a71  50                   push eax
// 00570a72  c7460400000000       mov dword ptr [esi + 4], 0
// 00570a79  894e0c               mov dword ptr [esi + 0xc], ecx
// 00570a7c  895610               mov dword ptr [esi + 0x10], edx
// 00570a7f  e8cca6ffff           call 0x56b150
// 00570a84  83c40c               add esp, 0xc
// 00570a87  894604               mov dword ptr [esi + 4], eax
// 00570a8a  5e                   pop esi
// 00570a8b  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?resize@GImage@G3D@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
