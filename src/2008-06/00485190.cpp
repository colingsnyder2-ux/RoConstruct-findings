// roc 2008-06 00485190  unit: G3D::Win32Window  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00485190
//
// 00485190  a13cf89600           mov eax, dword ptr [0x96f83c]
// 00485195  56                   push esi
// 00485196  8bf1                 mov esi, ecx
// 00485198  85c0                 test eax, eax
// 0048519a  740b                 je 0x4851a7
// 0048519c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0048519f  68f2840000           push 0x84f2
// 004851a4  51                   push ecx
// 004851a5  ffd0                 call eax
// 004851a7  c6462c01             mov byte ptr [esi + 0x2c], 1
// 004851ab  5e                   pop esi
// 004851ac  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ?set@Milestone@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
