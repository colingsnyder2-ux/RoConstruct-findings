// roc 2009-06 006c3140  unit: lua_exception  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c3140
//
// 006c3140  56                   push esi
// 006c3141  8b742408             mov esi, dword ptr [esp + 8]
// 006c3145  668b4634             mov ax, word ptr [esi + 0x34]
// 006c3149  663b4636             cmp ax, word ptr [esi + 0x36]
// 006c314d  760e                 jbe 0x6c315d
// 006c314f  68bcb68e00           push 0x8eb6bc
// 006c3154  56                   push esi
// 006c3155  e8e6560000           call 0x6c8840
// 006c315a  83c408               add esp, 8
// 006c315d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c3161  8b5608               mov edx, dword ptr [esi + 8]
// 006c3164  c1e104               shl ecx, 4
// 006c3167  2bd1                 sub edx, ecx
// 006c3169  89560c               mov dword ptr [esi + 0xc], edx
// 006c316c  c6460601             mov byte ptr [esi + 6], 1
// 006c3170  83c8ff               or eax, 0xffffffff
// 006c3173  5e                   pop esi
// 006c3174  c3                   ret 
// library lua-5.1.4/ldo.c (function _lua_yield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
