// roc 2010-06 00527d30  unit: G3D::VVector3::?$Table  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00527d30
//
// 00527d30  56                   push esi
// 00527d31  8b31                 mov esi, dword ptr [ecx]
// 00527d33  85f6                 test esi, esi
// 00527d35  7416                 je 0x527d4d
// 00527d37  8bce                 mov ecx, esi
// 00527d39  c706d8e9a100         mov dword ptr [esi], 0xa1e9d8
// 00527d3f  e8ecfaffff           call 0x527830
// 00527d44  56                   push esi
// 00527d45  e850fc2700           call 0x7a799a
// 00527d4a  83c404               add esp, 4
// 00527d4d  5e                   pop esi
// 00527d4e  c3                   ret 
// library rbxgs-view/View.cpp (function ??1?$auto_ptr@VTextureManager@G3D@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
