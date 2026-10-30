// from server: 100% by auto
// roc 2007-08 006ffa10  unit: CXTPTabPaintManager  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ffa10
//
// 006ffa10  8b5168               mov edx, dword ptr [ecx + 0x68]
// 006ffa13  035160               add edx, dword ptr [ecx + 0x60]
// 006ffa16  8b442404             mov eax, dword ptr [esp + 4]
// 006ffa1a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006ffa1e  03c2                 add eax, edx
// 006ffa20  85c9                 test ecx, ecx
// 006ffa22  7e06                 jle 0x6ffa2a
// 006ffa24  3bc8                 cmp ecx, eax
// 006ffa26  7e02                 jle 0x6ffa2a
// 006ffa28  8bc1                 mov eax, ecx
// 006ffa2a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ffa2e  85c9                 test ecx, ecx
// 006ffa30  7e06                 jle 0x6ffa38
// 006ffa32  3bc8                 cmp ecx, eax
// 006ffa34  7d02                 jge 0x6ffa38
// 006ffa36  8bc1                 mov eax, ecx
// 006ffa38  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManager.cpp (function ?_GetButtonLength@CXTPTabPaintManager@@IAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManager.cpp
