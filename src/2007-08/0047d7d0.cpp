// roc 2007-08 0047d7d0  unit: G3D::H_N::?$Table  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047d7d0
//
// 0047d7d0  83ec14               sub esp, 0x14
// 0047d7d3  8b442418             mov eax, dword ptr [esp + 0x18]
// 0047d7d7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0047d7db  89442404             mov dword ptr [esp + 4], eax
// 0047d7df  8d0424               lea eax, [esp]
// 0047d7e2  50                   push eax
// 0047d7e3  81c1d8010000         add ecx, 0x1d8
// 0047d7e9  c644240410           mov byte ptr [esp + 4], 0x10
// 0047d7ee  8954240c             mov dword ptr [esp + 0xc], edx
// 0047d7f2  e879fcffff           call 0x47d470
// 0047d7f7  83c414               add esp, 0x14
// 0047d7fa  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?injectSizeEvent@Win32Window@G3D@@AAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
