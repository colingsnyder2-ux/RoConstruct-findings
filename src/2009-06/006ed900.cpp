// roc 2009-06 006ed900  unit: seg_006e0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ed900
//
// 006ed900  8b5130               mov edx, dword ptr [ecx + 0x30]
// 006ed903  50                   push eax
// 006ed904  52                   push edx
// 006ed905  e876c50000           call 0x6f9e80
// 006ed90a  83c9ff               or ecx, 0xffffffff
// 006ed90d  83c408               add esp, 8
// 006ed910  894e10               mov dword ptr [esi + 0x10], ecx
// 006ed913  894e14               mov dword ptr [esi + 0x14], ecx
// 006ed916  c70604000000         mov dword ptr [esi], 4
// 006ed91c  894608               mov dword ptr [esi + 8], eax
// 006ed91f  c3                   ret 
// library lua-5.1.4/lparser.c (function _codestring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
