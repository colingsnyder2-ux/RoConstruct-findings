// from server: 100% by auto
// roc 2007-08 00486740  unit: G3D::GWindow  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00486740
//
// 00486740  83790800             cmp dword ptr [ecx + 8], 0
// 00486744  7e37                 jle 0x48677d
// 00486746  8b4108               mov eax, dword ptr [ecx + 8]
// 00486749  56                   push esi
// 0048674a  8d7104               lea esi, [ecx + 4]
// 0048674d  8b0e                 mov ecx, dword ptr [esi]
// 0048674f  8d0440               lea eax, [eax + eax*2]
// 00486752  807c81fc00           cmp byte ptr [ecx + eax*4 - 4], 0
// 00486757  7423                 je 0x48677c
// 00486759  8b4604               mov eax, dword ptr [esi + 4]
// 0048675c  8d1440               lea edx, [eax + eax*2]
// 0048675f  8bc1                 mov eax, ecx
// 00486761  8b4c90f4             mov ecx, dword ptr [eax + edx*4 - 0xc]
// 00486765  8b11                 mov edx, dword ptr [ecx]
// 00486767  8b422c               mov eax, dword ptr [edx + 0x2c]
// 0048676a  ffd0                 call eax
// 0048676c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0048676f  83e901               sub ecx, 1
// 00486772  6a00                 push 0
// 00486774  51                   push ecx
// 00486775  8bce                 mov ecx, esi
// 00486777  e85469ffff           call 0x47d0d0
// 0048677c  5e                   pop esi
// 0048677d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?popLoopBody@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
