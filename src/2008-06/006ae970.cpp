// roc 2008-06 006ae970  unit: CXTPPaintManager  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ae970
//
// 006ae970  83b91401000000       cmp dword ptr [ecx + 0x114], 0
// 006ae977  7e0b                 jle 0x6ae984
// 006ae979  8b8910010000         mov ecx, dword ptr [ecx + 0x110]
// 006ae97f  8d4409ef             lea eax, [ecx + ecx - 0x11]
// 006ae983  c3                   ret 
// 006ae984  8b8110010000         mov eax, dword ptr [ecx + 0x110]
// 006ae98a  83c003               add eax, 3
// 006ae98d  83f816               cmp eax, 0x16
// 006ae990  7d05                 jge 0x6ae997
// 006ae992  b816000000           mov eax, 0x16
// 006ae997  8d4400ef             lea eax, [eax + eax - 0x11]
// 006ae99b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetSplitDropDownHeight@CXTPPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
