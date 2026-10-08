// from server: 100% by auto
// roc 2010-06 00738230  unit: seg_00730000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00738230
//
// 00738230  56                   push esi
// 00738231  8b742408             mov esi, dword ptr [esp + 8]
// 00738235  e8f6feffff           call 0x738130
// 0073823a  68b8e6a400           push 0xa4e6b8
// 0073823f  68c4e9a400           push 0xa4e9c4
// 00738244  56                   push esi
// 00738245  e886b0feff           call 0x7232d0
// 0073824a  83c40c               add esp, 0xc
// 0073824d  b802000000           mov eax, 2
// 00738252  5e                   pop esi
// 00738253  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaopen_base)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
