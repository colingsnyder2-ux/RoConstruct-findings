// roc 2012-06 009384f0  unit: seg_00930000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009384f0
//
// 009384f0  8b5130               mov edx, dword ptr [ecx + 0x30]
// 009384f3  50                   push eax
// 009384f4  52                   push edx
// 009384f5  e8c6ee0200           call 0x9673c0
// 009384fa  83c9ff               or ecx, 0xffffffff
// 009384fd  83c408               add esp, 8
// 00938500  894e10               mov dword ptr [esi + 0x10], ecx
// 00938503  894e14               mov dword ptr [esi + 0x14], ecx
// 00938506  c70604000000         mov dword ptr [esi], 4
// 0093850c  894608               mov dword ptr [esi + 8], eax
// 0093850f  c3                   ret 
// library lua-5.1.4/lparser.c (function _codestring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
