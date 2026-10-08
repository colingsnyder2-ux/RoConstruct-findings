// roc 2009-12 004e0440  unit: G3D::GWindow  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004e0440
//
// 004e0440  83790800             cmp dword ptr [ecx + 8], 0
// 004e0444  7e35                 jle 0x4e047b
// 004e0446  8b4108               mov eax, dword ptr [ecx + 8]
// 004e0449  56                   push esi
// 004e044a  8d7104               lea esi, [ecx + 4]
// 004e044d  8b0e                 mov ecx, dword ptr [esi]
// 004e044f  8d0440               lea eax, [eax + eax*2]
// 004e0452  807c81fc00           cmp byte ptr [ecx + eax*4 - 4], 0
// 004e0457  7421                 je 0x4e047a
// 004e0459  8b4604               mov eax, dword ptr [esi + 4]
// 004e045c  8d1440               lea edx, [eax + eax*2]
// 004e045f  8bc1                 mov eax, ecx
// 004e0461  8b4c90f4             mov ecx, dword ptr [eax + edx*4 - 0xc]
// 004e0465  8b11                 mov edx, dword ptr [ecx]
// 004e0467  8b422c               mov eax, dword ptr [edx + 0x2c]
// 004e046a  ffd0                 call eax
// 004e046c  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e046f  49                   dec ecx
// 004e0470  6a00                 push 0
// 004e0472  51                   push ecx
// 004e0473  8bce                 mov ecx, esi
// 004e0475  e8666cffff           call 0x4d70e0
// 004e047a  5e                   pop esi
// 004e047b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?popLoopBody@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
