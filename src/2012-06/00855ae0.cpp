// from server: 100% by auto
// roc 2012-06 00855ae0  unit: lua_exception  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00855ae0
//
// 00855ae0  56                   push esi
// 00855ae1  8b742408             mov esi, dword ptr [esp + 8]
// 00855ae5  57                   push edi
// 00855ae6  6a05                 push 5
// 00855ae8  6a01                 push 1
// 00855aea  56                   push esi
// 00855aeb  e8b0ddfdff           call 0x8338a0
// 00855af0  6a01                 push 1
// 00855af2  56                   push esi
// 00855af3  e868c4fdff           call 0x831f60
// 00855af8  68e83bb400           push 0xb43be8
// 00855afd  6a28                 push 0x28
// 00855aff  56                   push esi
// 00855b00  8bf8                 mov edi, eax
// 00855b02  e829d4fdff           call 0x832f30
// 00855b07  6a02                 push 2
// 00855b09  56                   push esi
// 00855b0a  e8d1c1fdff           call 0x831ce0
// 00855b0f  83c428               add esp, 0x28
// 00855b12  85c0                 test eax, eax
// 00855b14  7e0d                 jle 0x855b23
// 00855b16  6a06                 push 6
// 00855b18  6a02                 push 2
// 00855b1a  56                   push esi
// 00855b1b  e880ddfdff           call 0x8338a0
// 00855b20  83c40c               add esp, 0xc
// 00855b23  6a02                 push 2
// 00855b25  56                   push esi
// 00855b26  e8d5bffdff           call 0x831b00
// 00855b2b  57                   push edi
// 00855b2c  6a01                 push 1
// 00855b2e  56                   push esi
// 00855b2f  e8acfbffff           call 0x8556e0
// 00855b34  83c414               add esp, 0x14
// 00855b37  5f                   pop edi
// 00855b38  33c0                 xor eax, eax
// 00855b3a  5e                   pop esi
// 00855b3b  c3                   ret 
// library lua-5.1.4/ltablib.c (function _sort)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
