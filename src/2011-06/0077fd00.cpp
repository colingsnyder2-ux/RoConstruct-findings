// from server: 100% by auto
// roc 2011-06 0077fd00  unit: lua_exception  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077fd00
//
// 0077fd00  56                   push esi
// 0077fd01  8b742408             mov esi, dword ptr [esp + 8]
// 0077fd05  57                   push edi
// 0077fd06  6a05                 push 5
// 0077fd08  6a01                 push 1
// 0077fd0a  56                   push esi
// 0077fd0b  e80044feff           call 0x764110
// 0077fd10  6a01                 push 1
// 0077fd12  56                   push esi
// 0077fd13  e8b82afeff           call 0x7627d0
// 0077fd18  68cabea500           push 0xa5beca
// 0077fd1d  6a28                 push 0x28
// 0077fd1f  56                   push esi
// 0077fd20  8bf8                 mov edi, eax
// 0077fd22  e8793afeff           call 0x7637a0
// 0077fd27  6a02                 push 2
// 0077fd29  56                   push esi
// 0077fd2a  e82128feff           call 0x762550
// 0077fd2f  83c428               add esp, 0x28
// 0077fd32  85c0                 test eax, eax
// 0077fd34  7e0d                 jle 0x77fd43
// 0077fd36  6a06                 push 6
// 0077fd38  6a02                 push 2
// 0077fd3a  56                   push esi
// 0077fd3b  e8d043feff           call 0x764110
// 0077fd40  83c40c               add esp, 0xc
// 0077fd43  6a02                 push 2
// 0077fd45  56                   push esi
// 0077fd46  e82526feff           call 0x762370
// 0077fd4b  57                   push edi
// 0077fd4c  6a01                 push 1
// 0077fd4e  56                   push esi
// 0077fd4f  e8acfbffff           call 0x77f900
// 0077fd54  83c414               add esp, 0x14
// 0077fd57  5f                   pop edi
// 0077fd58  33c0                 xor eax, eax
// 0077fd5a  5e                   pop esi
// 0077fd5b  c3                   ret 
// library lua-5.1.4/ltablib.c (function _sort)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
