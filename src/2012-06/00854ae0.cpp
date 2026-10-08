// from server: 100% by auto
// roc 2012-06 00854ae0  unit: lua_exception  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00854ae0
//
// 00854ae0  56                   push esi
// 00854ae1  8b742408             mov esi, dword ptr [esp + 8]
// 00854ae5  668b4634             mov ax, word ptr [esi + 0x34]
// 00854ae9  663b4636             cmp ax, word ptr [esi + 0x36]
// 00854aed  760e                 jbe 0x854afd
// 00854aef  680c39bd00           push 0xbd390c
// 00854af4  56                   push esi
// 00854af5  e816c4ffff           call 0x850f10
// 00854afa  83c408               add esp, 8
// 00854afd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00854b01  8b5608               mov edx, dword ptr [esi + 8]
// 00854b04  c1e104               shl ecx, 4
// 00854b07  2bd1                 sub edx, ecx
// 00854b09  89560c               mov dword ptr [esi + 0xc], edx
// 00854b0c  c6460601             mov byte ptr [esi + 6], 1
// 00854b10  83c8ff               or eax, 0xffffffff
// 00854b13  5e                   pop esi
// 00854b14  c3                   ret 
// library lua-5.1.4/ldo.c (function _lua_yield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
