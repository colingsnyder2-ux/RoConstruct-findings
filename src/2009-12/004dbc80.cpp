// roc 2009-12 004dbc80  unit: G3D::Win32Window  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dbc80
//
// 004dbc80  a14cd9b700           mov eax, dword ptr [0xb7d94c]
// 004dbc85  56                   push esi
// 004dbc86  8bf1                 mov esi, ecx
// 004dbc88  85c0                 test eax, eax
// 004dbc8a  740b                 je 0x4dbc97
// 004dbc8c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004dbc8f  68f2840000           push 0x84f2
// 004dbc94  51                   push ecx
// 004dbc95  ffd0                 call eax
// 004dbc97  c6462c01             mov byte ptr [esi + 0x2c], 1
// 004dbc9b  5e                   pop esi
// 004dbc9c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ?set@Milestone@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
