// roc 2008-06 006115b0  unit: RBX::BlockBlockContact  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006115b0
//
// 006115b0  53                   push ebx
// 006115b1  55                   push ebp
// 006115b2  56                   push esi
// 006115b3  8b742410             mov esi, dword ptr [esp + 0x10]
// 006115b7  57                   push edi
// 006115b8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006115bc  57                   push edi
// 006115bd  56                   push esi
// 006115be  e85d0b0000           call 0x612120
// 006115c3  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 006115c7  8bd8                 mov ebx, eax
// 006115c9  83c408               add esp, 8
// 006115cc  85db                 test ebx, ebx
// 006115ce  743d                 je 0x61160d
// 006115d0  57                   push edi
// 006115d1  56                   push esi
// 006115d2  e8d90f0000           call 0x6125b0
// 006115d7  83c408               add esp, 8
// 006115da  85c0                 test eax, eax
// 006115dc  742f                 je 0x61160d
// 006115de  55                   push ebp
// 006115df  68f0d8ffff           push 0xffffd8f0
// 006115e4  56                   push esi
// 006115e5  e8a60e0000           call 0x612490
// 006115ea  6afe                 push -2
// 006115ec  6aff                 push -1
// 006115ee  56                   push esi
// 006115ef  e8ec080000           call 0x611ee0
// 006115f4  83c418               add esp, 0x18
// 006115f7  85c0                 test eax, eax
// 006115f9  7412                 je 0x61160d
// 006115fb  6afd                 push -3
// 006115fd  56                   push esi
// 006115fe  e81d060000           call 0x611c20
// 00611603  83c408               add esp, 8
// 00611606  5f                   pop edi
// 00611607  5e                   pop esi
// 00611608  5d                   pop ebp
// 00611609  8bc3                 mov eax, ebx
// 0061160b  5b                   pop ebx
// 0061160c  c3                   ret 
// 0061160d  57                   push edi
// 0061160e  56                   push esi
// 0061160f  e8ec070000           call 0x611e00
// 00611614  50                   push eax
// 00611615  56                   push esi
// 00611616  e805080000           call 0x611e20
// 0061161b  50                   push eax
// 0061161c  55                   push ebp
// 0061161d  6820388400           push 0x843820
// 00611622  56                   push esi
// 00611623  e8f80c0000           call 0x612320
// 00611628  50                   push eax
// 00611629  57                   push edi
// 0061162a  56                   push esi
// 0061162b  e8a0feffff           call 0x6114d0
// 00611630  83c42c               add esp, 0x2c
// 00611633  5f                   pop edi
// 00611634  5e                   pop esi
// 00611635  5d                   pop ebp
// 00611636  33c0                 xor eax, eax
// 00611638  5b                   pop ebx
// 00611639  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkudata)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
