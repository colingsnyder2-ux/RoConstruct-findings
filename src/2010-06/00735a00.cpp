// roc 2010-06 00735a00  unit: seg_00730000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00735a00
//
// 00735a00  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00735a04  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00735a08  8b542410             mov edx, dword ptr [esp + 0x10]
// 00735a0c  50                   push eax
// 00735a0d  51                   push ecx
// 00735a0e  52                   push edx
// 00735a0f  e8accdfeff           call 0x7227c0
// 00735a14  83c40c               add esp, 0xc
// 00735a17  33c0                 xor eax, eax
// 00735a19  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _writer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
