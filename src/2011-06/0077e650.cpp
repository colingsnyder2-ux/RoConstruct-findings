// roc 2011-06 0077e650  unit: lua_exception  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077e650
//
// 0077e650  56                   push esi
// 0077e651  8b742408             mov esi, dword ptr [esp + 8]
// 0077e655  668b4634             mov ax, word ptr [esi + 0x34]
// 0077e659  663b4636             cmp ax, word ptr [esi + 0x36]
// 0077e65d  760e                 jbe 0x77e66d
// 0077e65f  683c78ab00           push 0xab783c
// 0077e664  56                   push esi
// 0077e665  e886f5ffff           call 0x77dbf0
// 0077e66a  83c408               add esp, 8
// 0077e66d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0077e671  8b5608               mov edx, dword ptr [esi + 8]
// 0077e674  c1e104               shl ecx, 4
// 0077e677  2bd1                 sub edx, ecx
// 0077e679  89560c               mov dword ptr [esi + 0xc], edx
// 0077e67c  c6460601             mov byte ptr [esi + 6], 1
// 0077e680  83c8ff               or eax, 0xffffffff
// 0077e683  5e                   pop esi
// 0077e684  c3                   ret 
// library lua-5.1.4/ldo.c (function _lua_yield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
