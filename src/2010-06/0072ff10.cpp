// from server: 100% by auto
// roc 2010-06 0072ff10  unit: lua_exception  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072ff10
//
// 0072ff10  56                   push esi
// 0072ff11  8b742408             mov esi, dword ptr [esp + 8]
// 0072ff15  668b4634             mov ax, word ptr [esi + 0x34]
// 0072ff19  663b4636             cmp ax, word ptr [esi + 0x36]
// 0072ff1d  760e                 jbe 0x72ff2d
// 0072ff1f  68f0dba400           push 0xa4dbf0
// 0072ff24  56                   push esi
// 0072ff25  e8763c0000           call 0x733ba0
// 0072ff2a  83c408               add esp, 8
// 0072ff2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072ff31  8b5608               mov edx, dword ptr [esi + 8]
// 0072ff34  c1e104               shl ecx, 4
// 0072ff37  2bd1                 sub edx, ecx
// 0072ff39  89560c               mov dword ptr [esi + 0xc], edx
// 0072ff3c  c6460601             mov byte ptr [esi + 6], 1
// 0072ff40  83c8ff               or eax, 0xffffffff
// 0072ff43  5e                   pop esi
// 0072ff44  c3                   ret 
// library lua-5.1.4/ldo.c (function _lua_yield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
