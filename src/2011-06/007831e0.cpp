// from server: 100% by auto
// roc 2011-06 007831e0  unit: seg_00780000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007831e0
//
// 007831e0  56                   push esi
// 007831e1  8b742408             mov esi, dword ptr [esp + 8]
// 007831e5  e8f6feffff           call 0x7830e0
// 007831ea  68c080ab00           push 0xab80c0
// 007831ef  688850a900           push 0xa95088
// 007831f4  56                   push esi
// 007831f5  e84613feff           call 0x764540
// 007831fa  83c40c               add esp, 0xc
// 007831fd  b802000000           mov eax, 2
// 00783202  5e                   pop esi
// 00783203  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaopen_base)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
