// roc 2010-06 00735540  unit: seg_00730000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00735540
//
// 00735540  51                   push ecx
// 00735541  56                   push esi
// 00735542  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00735546  8d442404             lea eax, [esp + 4]
// 0073554a  50                   push eax
// 0073554b  6a01                 push 1
// 0073554d  56                   push esi
// 0073554e  e8cdd9feff           call 0x722f20
// 00735553  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00735557  51                   push ecx
// 00735558  56                   push esi
// 00735559  e8d2bffeff           call 0x721530
// 0073555e  83c414               add esp, 0x14
// 00735561  b801000000           mov eax, 1
// 00735566  5e                   pop esi
// 00735567  59                   pop ecx
// 00735568  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_len)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
