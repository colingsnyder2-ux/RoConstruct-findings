// roc 2008-06 00480da0  unit: G3D::H_N::?$Table  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00480da0
//
// 00480da0  83ec14               sub esp, 0x14
// 00480da3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00480da7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00480dab  89442404             mov dword ptr [esp + 4], eax
// 00480daf  8d0424               lea eax, [esp]
// 00480db2  50                   push eax
// 00480db3  81c1d8010000         add ecx, 0x1d8
// 00480db9  c644240410           mov byte ptr [esp + 4], 0x10
// 00480dbe  8954240c             mov dword ptr [esp + 0xc], edx
// 00480dc2  e859fcffff           call 0x480a20
// 00480dc7  83c414               add esp, 0x14
// 00480dca  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?injectSizeEvent@Win32Window@G3D@@AAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
