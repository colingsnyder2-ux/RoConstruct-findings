// roc 2009-12 007fdf40  unit: CXTPPaintManager  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fdf40
//
// 007fdf40  83b91401000000       cmp dword ptr [ecx + 0x114], 0
// 007fdf47  7e0b                 jle 0x7fdf54
// 007fdf49  8b8910010000         mov ecx, dword ptr [ecx + 0x110]
// 007fdf4f  8d4409ef             lea eax, [ecx + ecx - 0x11]
// 007fdf53  c3                   ret 
// 007fdf54  8b8110010000         mov eax, dword ptr [ecx + 0x110]
// 007fdf5a  83c003               add eax, 3
// 007fdf5d  83f816               cmp eax, 0x16
// 007fdf60  7d05                 jge 0x7fdf67
// 007fdf62  b816000000           mov eax, 0x16
// 007fdf67  8d4400ef             lea eax, [eax + eax - 0x11]
// 007fdf6b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetSplitDropDownHeight@CXTPPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
