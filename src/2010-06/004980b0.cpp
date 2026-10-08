// from server: 100% by auto
// roc 2010-06 004980b0  unit: G3D::GWindow  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004980b0
//
// 004980b0  a1dc39c000           mov eax, dword ptr [0xc039dc]
// 004980b5  56                   push esi
// 004980b6  8bf1                 mov esi, ecx
// 004980b8  85c0                 test eax, eax
// 004980ba  740b                 je 0x4980c7
// 004980bc  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004980bf  68f2840000           push 0x84f2
// 004980c4  51                   push ecx
// 004980c5  ffd0                 call eax
// 004980c7  c6462c01             mov byte ptr [esi + 0x2c], 1
// 004980cb  5e                   pop esi
// 004980cc  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ?set@Milestone@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
