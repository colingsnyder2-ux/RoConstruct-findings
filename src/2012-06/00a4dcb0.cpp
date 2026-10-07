// roc 2012-06 00a4dcb0  unit: CXTPTabPaintManager  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4dcb0
//
// 00a4dcb0  8b5168               mov edx, dword ptr [ecx + 0x68]
// 00a4dcb3  035160               add edx, dword ptr [ecx + 0x60]
// 00a4dcb6  8b442404             mov eax, dword ptr [esp + 4]
// 00a4dcba  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a4dcbe  03c2                 add eax, edx
// 00a4dcc0  85c9                 test ecx, ecx
// 00a4dcc2  7e06                 jle 0xa4dcca
// 00a4dcc4  3bc8                 cmp ecx, eax
// 00a4dcc6  7e02                 jle 0xa4dcca
// 00a4dcc8  8bc1                 mov eax, ecx
// 00a4dcca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a4dcce  85c9                 test ecx, ecx
// 00a4dcd0  7e06                 jle 0xa4dcd8
// 00a4dcd2  3bc8                 cmp ecx, eax
// 00a4dcd4  7d02                 jge 0xa4dcd8
// 00a4dcd6  8bc1                 mov eax, ecx
// 00a4dcd8  c20c00               ret 0xc
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ?_GetButtonLength@CXTPTabPaintManager@@IAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
