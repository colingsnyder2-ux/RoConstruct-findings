// from server: 100% by auto
// roc 2010-06 0077eba0  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077eba0
//
// 0077eba0  8b5130               mov edx, dword ptr [ecx + 0x30]
// 0077eba3  50                   push eax
// 0077eba4  52                   push edx
// 0077eba5  e8560c0100           call 0x78f800
// 0077ebaa  83c9ff               or ecx, 0xffffffff
// 0077ebad  83c408               add esp, 8
// 0077ebb0  894e10               mov dword ptr [esi + 0x10], ecx
// 0077ebb3  894e14               mov dword ptr [esi + 0x14], ecx
// 0077ebb6  c70604000000         mov dword ptr [esi], 4
// 0077ebbc  894608               mov dword ptr [esi + 8], eax
// 0077ebbf  c3                   ret 
// library lua-5.1.4/lparser.c (function _codestring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
