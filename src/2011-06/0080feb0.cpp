// roc 2011-06 0080feb0  unit: CXTPPaintManager  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080feb0
//
// 0080feb0  83b91401000000       cmp dword ptr [ecx + 0x114], 0
// 0080feb7  7e0b                 jle 0x80fec4
// 0080feb9  8b8910010000         mov ecx, dword ptr [ecx + 0x110]
// 0080febf  8d4409ef             lea eax, [ecx + ecx - 0x11]
// 0080fec3  c3                   ret 
// 0080fec4  8b8110010000         mov eax, dword ptr [ecx + 0x110]
// 0080feca  83c003               add eax, 3
// 0080fecd  83f816               cmp eax, 0x16
// 0080fed0  7d05                 jge 0x80fed7
// 0080fed2  b816000000           mov eax, 0x16
// 0080fed7  8d4400ef             lea eax, [eax + eax - 0x11]
// 0080fedb  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetSplitDropDownHeight@CXTPPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
