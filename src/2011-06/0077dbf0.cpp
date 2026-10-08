// from server: 100% by auto
// roc 2011-06 0077dbf0  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077dbf0
//
// 0077dbf0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0077dbf4  57                   push edi
// 0077dbf5  8b7c2408             mov edi, dword ptr [esp + 8]
// 0077dbf9  8d442410             lea eax, [esp + 0x10]
// 0077dbfd  50                   push eax
// 0077dbfe  51                   push ecx
// 0077dbff  57                   push edi
// 0077dc00  e82befffff           call 0x77cb30
// 0077dc05  50                   push eax
// 0077dc06  e8e5feffff           call 0x77daf0
// 0077dc0b  57                   push edi
// 0077dc0c  e84fffffff           call 0x77db60
// 0077dc11  83c414               add esp, 0x14
// 0077dc14  5f                   pop edi
// 0077dc15  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_runerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
