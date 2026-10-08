// from server: 100% by auto
// roc 2010-06 00737fe0  unit: seg_00730000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00737fe0
//
// 00737fe0  56                   push esi
// 00737fe1  57                   push edi
// 00737fe2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00737fe6  68edd8ffff           push 0xffffd8ed
// 00737feb  57                   push edi
// 00737fec  e86f94feff           call 0x721460
// 00737ff1  57                   push edi
// 00737ff2  8bf0                 mov esi, eax
// 00737ff4  e8578ffeff           call 0x720f50
// 00737ff9  83c40c               add esp, 0xc
// 00737ffc  8bce                 mov ecx, esi
// 00737ffe  e89dfeffff           call 0x737ea0
// 00738003  8bf0                 mov esi, eax
// 00738005  85f6                 test esi, esi
// 00738007  7d35                 jge 0x73803e
// 00738009  6aff                 push -1
// 0073800b  57                   push edi
// 0073800c  e8df91feff           call 0x7211f0
// 00738011  83c408               add esp, 8
// 00738014  85c0                 test eax, eax
// 00738016  741b                 je 0x738033
// 00738018  6a01                 push 1
// 0073801a  57                   push edi
// 0073801b  e810a4feff           call 0x722430
// 00738020  6afe                 push -2
// 00738022  57                   push edi
// 00738023  e8d88ffeff           call 0x721000
// 00738028  6a02                 push 2
// 0073802a  57                   push edi
// 0073802b  e8f09efeff           call 0x721f20
// 00738030  83c418               add esp, 0x18
// 00738033  57                   push edi
// 00738034  e8979efeff           call 0x721ed0
// 00738039  83c404               add esp, 4
// 0073803c  8bc6                 mov eax, esi
// 0073803e  5f                   pop edi
// 0073803f  5e                   pop esi
// 00738040  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_auxwrap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
