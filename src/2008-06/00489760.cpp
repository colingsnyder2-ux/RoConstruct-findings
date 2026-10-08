// from server: 100% by auto
// roc 2008-06 00489760  unit: G3D::GWindow  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00489760
//
// 00489760  83790800             cmp dword ptr [ecx + 8], 0
// 00489764  7e35                 jle 0x48979b
// 00489766  8b4108               mov eax, dword ptr [ecx + 8]
// 00489769  56                   push esi
// 0048976a  8d7104               lea esi, [ecx + 4]
// 0048976d  8b0e                 mov ecx, dword ptr [esi]
// 0048976f  8d0440               lea eax, [eax + eax*2]
// 00489772  807c81fc00           cmp byte ptr [ecx + eax*4 - 4], 0
// 00489777  7421                 je 0x48979a
// 00489779  8b4604               mov eax, dword ptr [esi + 4]
// 0048977c  8d1440               lea edx, [eax + eax*2]
// 0048977f  8bc1                 mov eax, ecx
// 00489781  8b4c90f4             mov ecx, dword ptr [eax + edx*4 - 0xc]
// 00489785  8b11                 mov edx, dword ptr [ecx]
// 00489787  8b422c               mov eax, dword ptr [edx + 0x2c]
// 0048978a  ffd0                 call eax
// 0048978c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0048978f  49                   dec ecx
// 00489790  6a00                 push 0
// 00489792  51                   push ecx
// 00489793  8bce                 mov ecx, esi
// 00489795  e8266fffff           call 0x4806c0
// 0048979a  5e                   pop esi
// 0048979b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?popLoopBody@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
