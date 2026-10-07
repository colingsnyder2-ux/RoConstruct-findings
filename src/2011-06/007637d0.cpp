// roc 2011-06 007637d0  unit: seg_00760000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007637d0
//
// 007637d0  8b442408             mov eax, dword ptr [esp + 8]
// 007637d4  56                   push esi
// 007637d5  8b742408             mov esi, dword ptr [esp + 8]
// 007637d9  50                   push eax
// 007637da  56                   push esi
// 007637db  e810f5ffff           call 0x762cf0
// 007637e0  83c408               add esp, 8
// 007637e3  85c0                 test eax, eax
// 007637e5  742d                 je 0x763814
// 007637e7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007637eb  51                   push ecx
// 007637ec  56                   push esi
// 007637ed  e8aef1ffff           call 0x7629a0
// 007637f2  6afe                 push -2
// 007637f4  56                   push esi
// 007637f5  e816f4ffff           call 0x762c10
// 007637fa  6aff                 push -1
// 007637fc  56                   push esi
// 007637fd  e84eedffff           call 0x762550
// 00763802  83c418               add esp, 0x18
// 00763805  85c0                 test eax, eax
// 00763807  750f                 jne 0x763818
// 00763809  6afd                 push -3
// 0076380b  56                   push esi
// 0076380c  e85febffff           call 0x762370
// 00763811  83c408               add esp, 8
// 00763814  33c0                 xor eax, eax
// 00763816  5e                   pop esi
// 00763817  c3                   ret 
// 00763818  6afe                 push -2
// 0076381a  56                   push esi
// 0076381b  e8a0ebffff           call 0x7623c0
// 00763820  83c408               add esp, 8
// 00763823  b801000000           mov eax, 1
// 00763828  5e                   pop esi
// 00763829  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_getmetafield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
