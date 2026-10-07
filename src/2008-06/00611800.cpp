// roc 2008-06 00611800  unit: seg_00610000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00611800
//
// 00611800  53                   push ebx
// 00611801  56                   push esi
// 00611802  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00611806  57                   push edi
// 00611807  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0061180b  57                   push edi
// 0061180c  56                   push esi
// 0061180d  e88e070000           call 0x611fa0
// 00611812  8bd8                 mov ebx, eax
// 00611814  83c408               add esp, 8
// 00611817  85db                 test ebx, ebx
// 00611819  7542                 jne 0x61185d
// 0061181b  57                   push edi
// 0061181c  56                   push esi
// 0061181d  e84e060000           call 0x611e70
// 00611822  83c408               add esp, 8
// 00611825  85c0                 test eax, eax
// 00611827  7532                 jne 0x61185b
// 00611829  55                   push ebp
// 0061182a  6a03                 push 3
// 0061182c  56                   push esi
// 0061182d  e8ee050000           call 0x611e20
// 00611832  57                   push edi
// 00611833  56                   push esi
// 00611834  8be8                 mov ebp, eax
// 00611836  e8c5050000           call 0x611e00
// 0061183b  50                   push eax
// 0061183c  56                   push esi
// 0061183d  e8de050000           call 0x611e20
// 00611842  50                   push eax
// 00611843  55                   push ebp
// 00611844  6820388400           push 0x843820
// 00611849  56                   push esi
// 0061184a  e8d10a0000           call 0x612320
// 0061184f  50                   push eax
// 00611850  57                   push edi
// 00611851  56                   push esi
// 00611852  e879fcffff           call 0x6114d0
// 00611857  83c434               add esp, 0x34
// 0061185a  5d                   pop ebp
// 0061185b  8bc3                 mov eax, ebx
// 0061185d  5f                   pop edi
// 0061185e  5e                   pop esi
// 0061185f  5b                   pop ebx
// 00611860  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkinteger)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
