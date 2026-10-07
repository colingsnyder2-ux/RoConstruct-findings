// roc 2011-06 008d5960  unit: CXTPTabPaintManager  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d5960
//
// 008d5960  8b5168               mov edx, dword ptr [ecx + 0x68]
// 008d5963  035160               add edx, dword ptr [ecx + 0x60]
// 008d5966  8b442404             mov eax, dword ptr [esp + 4]
// 008d596a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008d596e  03c2                 add eax, edx
// 008d5970  85c9                 test ecx, ecx
// 008d5972  7e06                 jle 0x8d597a
// 008d5974  3bc8                 cmp ecx, eax
// 008d5976  7e02                 jle 0x8d597a
// 008d5978  8bc1                 mov eax, ecx
// 008d597a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d597e  85c9                 test ecx, ecx
// 008d5980  7e06                 jle 0x8d5988
// 008d5982  3bc8                 cmp ecx, eax
// 008d5984  7d02                 jge 0x8d5988
// 008d5986  8bc1                 mov eax, ecx
// 008d5988  c20c00               ret 0xc
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ?_GetButtonLength@CXTPTabPaintManager@@IAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
