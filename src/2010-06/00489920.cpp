// roc 2010-06 00489920  unit: G3D::H_N::?$Table  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00489920
//
// 00489920  83ec14               sub esp, 0x14
// 00489923  8b442418             mov eax, dword ptr [esp + 0x18]
// 00489927  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0048992b  89442404             mov dword ptr [esp + 4], eax
// 0048992f  8d0424               lea eax, [esp]
// 00489932  50                   push eax
// 00489933  81c1d8010000         add ecx, 0x1d8
// 00489939  c644240410           mov byte ptr [esp + 4], 0x10
// 0048993e  8954240c             mov dword ptr [esp + 0xc], edx
// 00489942  e889fcffff           call 0x4895d0
// 00489947  83c414               add esp, 0x14
// 0048994a  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?injectSizeEvent@Win32Window@G3D@@AAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
