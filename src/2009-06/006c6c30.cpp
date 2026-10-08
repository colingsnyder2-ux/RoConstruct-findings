// from server: 100% by auto
// roc 2009-06 006c6c30  unit: seg_006c0000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c6c30
//
// 006c6c30  56                   push esi
// 006c6c31  8b742408             mov esi, dword ptr [esp + 8]
// 006c6c35  57                   push edi
// 006c6c36  6a01                 push 1
// 006c6c38  6a02                 push 2
// 006c6c3a  56                   push esi
// 006c6c3b  e83042ffff           call 0x6bae70
// 006c6c40  6a01                 push 1
// 006c6c42  56                   push esi
// 006c6c43  8bf8                 mov edi, eax
// 006c6c45  e84621ffff           call 0x6b8d90
// 006c6c4a  6a01                 push 1
// 006c6c4c  56                   push esi
// 006c6c4d  e8ce23ffff           call 0x6b9020
// 006c6c52  83c41c               add esp, 0x1c
// 006c6c55  85c0                 test eax, eax
// 006c6c57  741e                 je 0x6c6c77
// 006c6c59  85ff                 test edi, edi
// 006c6c5b  7e1a                 jle 0x6c6c77
// 006c6c5d  57                   push edi
// 006c6c5e  56                   push esi
// 006c6c5f  e86c35ffff           call 0x6ba1d0
// 006c6c64  6a01                 push 1
// 006c6c66  56                   push esi
// 006c6c67  e8d422ffff           call 0x6b8f40
// 006c6c6c  6a02                 push 2
// 006c6c6e  56                   push esi
// 006c6c6f  e8dc30ffff           call 0x6b9d50
// 006c6c74  83c418               add esp, 0x18
// 006c6c77  56                   push esi
// 006c6c78  e88330ffff           call 0x6b9d00
// 006c6c7d  83c404               add esp, 4
// 006c6c80  5f                   pop edi
// 006c6c81  5e                   pop esi
// 006c6c82  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
