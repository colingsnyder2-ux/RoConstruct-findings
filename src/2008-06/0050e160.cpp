// roc 2008-06 0050e160  unit: seg_00500000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050e160
//
// 0050e160  56                   push esi
// 0050e161  8bf1                 mov esi, ecx
// 0050e163  8b4604               mov eax, dword ptr [esi + 4]
// 0050e166  50                   push eax
// 0050e167  c7460800000000       mov dword ptr [esi + 8], 0
// 0050e16e  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0050e175  e8869bffff           call 0x507d00
// 0050e17a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0050e17e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050e182  8b542414             mov edx, dword ptr [esp + 0x14]
// 0050e186  894608               mov dword ptr [esi + 8], eax
// 0050e189  0fafc1               imul eax, ecx
// 0050e18c  0fafc2               imul eax, edx
// 0050e18f  6a01                 push 1
// 0050e191  50                   push eax
// 0050e192  c7460400000000       mov dword ptr [esi + 4], 0
// 0050e199  894e0c               mov dword ptr [esi + 0xc], ecx
// 0050e19c  895610               mov dword ptr [esi + 0x10], edx
// 0050e19f  e87ca9ffff           call 0x508b20
// 0050e1a4  83c40c               add esp, 0xc
// 0050e1a7  894604               mov dword ptr [esi + 4], eax
// 0050e1aa  5e                   pop esi
// 0050e1ab  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?resize@GImage@G3D@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
