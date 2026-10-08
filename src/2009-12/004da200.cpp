// roc 2009-12 004da200  unit: G3D::Win32Window  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004da200
//
// 004da200  8b442404             mov eax, dword ptr [esp + 4]
// 004da204  85c0                 test eax, eax
// 004da206  750d                 jne 0x4da215
// 004da208  68560d0000           push 0xd56
// 004da20d  e89e020000           call 0x4da4b0
// 004da212  83c404               add esp, 4
// 004da215  83f810               cmp eax, 0x10
// 004da218  7411                 je 0x4da22b
// 004da21a  83f818               cmp eax, 0x18
// 004da21d  7406                 je 0x4da225
// 004da21f  a1d4dbb700           mov eax, dword ptr [0xb7dbd4]
// 004da224  c3                   ret 
// 004da225  a17cdbb700           mov eax, dword ptr [0xb7db7c]
// 004da22a  c3                   ret 
// 004da22b  a190dbb700           mov eax, dword ptr [0xb7db90]
// 004da230  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ?depth@TextureFormat@G3D@@SAPBV12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
