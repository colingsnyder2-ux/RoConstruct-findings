// roc 2010-06 00498070  unit: G3D::GWindow  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00498070
//
// 00498070  83790800             cmp dword ptr [ecx + 8], 0
// 00498074  7e35                 jle 0x4980ab
// 00498076  8b4108               mov eax, dword ptr [ecx + 8]
// 00498079  56                   push esi
// 0049807a  8d7104               lea esi, [ecx + 4]
// 0049807d  8b0e                 mov ecx, dword ptr [esi]
// 0049807f  8d0440               lea eax, [eax + eax*2]
// 00498082  807c81fc00           cmp byte ptr [ecx + eax*4 - 4], 0
// 00498087  7421                 je 0x4980aa
// 00498089  8b4604               mov eax, dword ptr [esi + 4]
// 0049808c  8d1440               lea edx, [eax + eax*2]
// 0049808f  8bc1                 mov eax, ecx
// 00498091  8b4c90f4             mov ecx, dword ptr [eax + edx*4 - 0xc]
// 00498095  8b11                 mov edx, dword ptr [ecx]
// 00498097  8b422c               mov eax, dword ptr [edx + 0x2c]
// 0049809a  ffd0                 call eax
// 0049809c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0049809f  49                   dec ecx
// 004980a0  6a00                 push 0
// 004980a2  51                   push ecx
// 004980a3  8bce                 mov ecx, esi
// 004980a5  e8f611ffff           call 0x4892a0
// 004980aa  5e                   pop esi
// 004980ab  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?popLoopBody@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
