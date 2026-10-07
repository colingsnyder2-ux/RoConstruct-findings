// roc 2008-06 00660890  unit: RBX::FilterStairs  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00660890
//
// 00660890  8b5130               mov edx, dword ptr [ecx + 0x30]
// 00660893  50                   push eax
// 00660894  52                   push edx
// 00660895  e846a60000           call 0x66aee0
// 0066089a  83c9ff               or ecx, 0xffffffff
// 0066089d  83c408               add esp, 8
// 006608a0  894e10               mov dword ptr [esi + 0x10], ecx
// 006608a3  894e14               mov dword ptr [esi + 0x14], ecx
// 006608a6  c70604000000         mov dword ptr [esi], 4
// 006608ac  894608               mov dword ptr [esi + 8], eax
// 006608af  c3                   ret 
// library lua-5.1.4/lparser.c (function _codestring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
