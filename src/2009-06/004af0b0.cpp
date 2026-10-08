// from server: 100% by auto
// roc 2009-06 004af0b0  unit: G3D::Win32Window  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004af0b0
//
// 004af0b0  a19cd1a300           mov eax, dword ptr [0xa3d19c]
// 004af0b5  56                   push esi
// 004af0b6  8bf1                 mov esi, ecx
// 004af0b8  85c0                 test eax, eax
// 004af0ba  740b                 je 0x4af0c7
// 004af0bc  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004af0bf  68f2840000           push 0x84f2
// 004af0c4  51                   push ecx
// 004af0c5  ffd0                 call eax
// 004af0c7  c6462c01             mov byte ptr [esi + 0x2c], 1
// 004af0cb  5e                   pop esi
// 004af0cc  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ?set@Milestone@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
