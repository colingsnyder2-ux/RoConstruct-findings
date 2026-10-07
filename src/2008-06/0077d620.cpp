// roc 2008-06 0077d620  unit: CXTPTabPaintManager  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d620
//
// 0077d620  8b5168               mov edx, dword ptr [ecx + 0x68]
// 0077d623  035160               add edx, dword ptr [ecx + 0x60]
// 0077d626  8b442404             mov eax, dword ptr [esp + 4]
// 0077d62a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0077d62e  03c2                 add eax, edx
// 0077d630  85c9                 test ecx, ecx
// 0077d632  7e06                 jle 0x77d63a
// 0077d634  3bc8                 cmp ecx, eax
// 0077d636  7e02                 jle 0x77d63a
// 0077d638  8bc1                 mov eax, ecx
// 0077d63a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0077d63e  85c9                 test ecx, ecx
// 0077d640  7e06                 jle 0x77d648
// 0077d642  3bc8                 cmp ecx, eax
// 0077d644  7d02                 jge 0x77d648
// 0077d646  8bc1                 mov eax, ecx
// 0077d648  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?_GetButtonLength@CXTPTabPaintManager@@IAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
