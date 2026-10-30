// roc 2012-06 00988190  unit: CXTPPaintManager  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00988190
//
// 00988190  83b91401000000       cmp dword ptr [ecx + 0x114], 0
// 00988197  7e0b                 jle 0x9881a4
// 00988199  8b8910010000         mov ecx, dword ptr [ecx + 0x110]
// 0098819f  8d4409ef             lea eax, [ecx + ecx - 0x11]
// 009881a3  c3                   ret 
// 009881a4  8b8110010000         mov eax, dword ptr [ecx + 0x110]
// 009881aa  83c003               add eax, 3
// 009881ad  83f816               cmp eax, 0x16
// 009881b0  7d05                 jge 0x9881b7
// 009881b2  b816000000           mov eax, 0x16
// 009881b7  8d4400ef             lea eax, [eax + eax - 0x11]
// 009881bb  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetSplitDropDownHeight@CXTPPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
