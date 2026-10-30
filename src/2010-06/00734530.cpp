// from server: 100% by auto
// roc 2010-06 00734530  unit: seg_00730000  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00734530
//
// 00734530  56                   push esi
// 00734531  8b742408             mov esi, dword ptr [esp + 8]
// 00734535  6a05                 push 5
// 00734537  6a01                 push 1
// 00734539  56                   push esi
// 0073453a  e861e9feff           call 0x722ea0
// 0073453f  6a06                 push 6
// 00734541  6a02                 push 2
// 00734543  56                   push esi
// 00734544  e857e9feff           call 0x722ea0
// 00734549  56                   push esi
// 0073454a  e8a1cffeff           call 0x7214f0
// 0073454f  6a01                 push 1
// 00734551  56                   push esi
// 00734552  e889d9feff           call 0x721ee0
// 00734557  83c424               add esp, 0x24
// 0073455a  85c0                 test eax, eax
// 0073455c  744a                 je 0x7345a8
// 0073455e  8bff                 mov edi, edi
// 00734560  6a02                 push 2
// 00734562  56                   push esi
// 00734563  e8a8cbfeff           call 0x721110
// 00734568  6afd                 push -3
// 0073456a  56                   push esi
// 0073456b  e8a0cbfeff           call 0x721110
// 00734570  6afd                 push -3
// 00734572  56                   push esi
// 00734573  e898cbfeff           call 0x721110
// 00734578  6a01                 push 1
// 0073457a  6a02                 push 2
// 0073457c  56                   push esi
// 0073457d  e8eed6feff           call 0x721c70
// 00734582  6aff                 push -1
// 00734584  56                   push esi
// 00734585  e8b6cbfeff           call 0x721140
// 0073458a  83c42c               add esp, 0x2c
// 0073458d  85c0                 test eax, eax
// 0073458f  751b                 jne 0x7345ac
// 00734591  6afd                 push -3
// 00734593  56                   push esi
// 00734594  e8c7c9feff           call 0x720f60
// 00734599  6a01                 push 1
// 0073459b  56                   push esi
// 0073459c  e83fd9feff           call 0x721ee0
// 007345a1  83c410               add esp, 0x10
// 007345a4  85c0                 test eax, eax
// 007345a6  75b8                 jne 0x734560
// 007345a8  33c0                 xor eax, eax
// 007345aa  5e                   pop esi
// 007345ab  c3                   ret 
// 007345ac  b801000000           mov eax, 1
// 007345b1  5e                   pop esi
// 007345b2  c3                   ret 
// library lua-5.1.4/ltablib.c (function _foreach)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
