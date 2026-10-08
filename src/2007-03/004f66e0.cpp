// roc 2007-03 004f66e0  unit: seg_004f0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f66e0
//
// 004f66e0  837e1800             cmp dword ptr [esi + 0x18], 0
// 004f66e4  7512                 jne 0x4f66f8
// 004f66e6  8b4604               mov eax, dword ptr [esi + 4]
// 004f66e9  8b08                 mov ecx, dword ptr [eax]
// 004f66eb  6a20                 push 0x20
// 004f66ed  6a00                 push 0
// 004f66ef  56                   push esi
// 004f66f0  ffd1                 call ecx
// 004f66f2  83c40c               add esp, 0xc
// 004f66f5  894618               mov dword ptr [esi + 0x18], eax
// 004f66f8  8b4618               mov eax, dword ptr [esi + 0x18]
// 004f66fb  8b542408             mov edx, dword ptr [esp + 8]
// 004f66ff  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f6703  895018               mov dword ptr [eax + 0x18], edx
// 004f6706  894814               mov dword ptr [eax + 0x14], ecx
// 004f6709  c7400880664f00       mov dword ptr [eax + 8], 0x4f6680
// 004f6710  c7400ca0664f00       mov dword ptr [eax + 0xc], 0x4f66a0
// 004f6717  c74010c0664f00       mov dword ptr [eax + 0x10], 0x4f66c0
// 004f671e  c3                   ret 
// library rbxgs-g3d/G3Dcpp\GImage_jpeg.cpp (function ?jpeg_memory_dest@G3D@@YAXPAUjpeg_compress_struct@@PAEH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GImage_jpeg.cpp
