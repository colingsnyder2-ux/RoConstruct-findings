// roc 2009-06 004b36e0  unit: G3D::GWindow  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b36e0
//
// 004b36e0  83790800             cmp dword ptr [ecx + 8], 0
// 004b36e4  7e35                 jle 0x4b371b
// 004b36e6  8b4108               mov eax, dword ptr [ecx + 8]
// 004b36e9  56                   push esi
// 004b36ea  8d7104               lea esi, [ecx + 4]
// 004b36ed  8b0e                 mov ecx, dword ptr [esi]
// 004b36ef  8d0440               lea eax, [eax + eax*2]
// 004b36f2  807c81fc00           cmp byte ptr [ecx + eax*4 - 4], 0
// 004b36f7  7421                 je 0x4b371a
// 004b36f9  8b4604               mov eax, dword ptr [esi + 4]
// 004b36fc  8d1440               lea edx, [eax + eax*2]
// 004b36ff  8bc1                 mov eax, ecx
// 004b3701  8b4c90f4             mov ecx, dword ptr [eax + edx*4 - 0xc]
// 004b3705  8b11                 mov edx, dword ptr [ecx]
// 004b3707  8b422c               mov eax, dword ptr [edx + 0x2c]
// 004b370a  ffd0                 call eax
// 004b370c  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b370f  49                   dec ecx
// 004b3710  6a00                 push 0
// 004b3712  51                   push ecx
// 004b3713  8bce                 mov ecx, esi
// 004b3715  e8c66effff           call 0x4aa5e0
// 004b371a  5e                   pop esi
// 004b371b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?popLoopBody@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
