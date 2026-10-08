// roc 2009-12 004d7790  unit: G3D::H_N::?$Table  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d7790
//
// 004d7790  83ec14               sub esp, 0x14
// 004d7793  8b442418             mov eax, dword ptr [esp + 0x18]
// 004d7797  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004d779b  89442404             mov dword ptr [esp + 4], eax
// 004d779f  8d0424               lea eax, [esp]
// 004d77a2  50                   push eax
// 004d77a3  81c1d8010000         add ecx, 0x1d8
// 004d77a9  c644240410           mov byte ptr [esp + 4], 0x10
// 004d77ae  8954240c             mov dword ptr [esp + 0xc], edx
// 004d77b2  e859fcffff           call 0x4d7410
// 004d77b7  83c414               add esp, 0x14
// 004d77ba  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?injectSizeEvent@Win32Window@G3D@@AAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
