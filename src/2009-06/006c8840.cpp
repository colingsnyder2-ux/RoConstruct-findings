// from server: 100% by auto
// roc 2009-06 006c8840  unit: seg_006c0000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c8840
//
// 006c8840  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006c8844  57                   push edi
// 006c8845  8b7c2408             mov edi, dword ptr [esp + 8]
// 006c8849  8d442410             lea eax, [esp + 0x10]
// 006c884d  50                   push eax
// 006c884e  51                   push ecx
// 006c884f  57                   push edi
// 006c8850  e85b050000           call 0x6c8db0
// 006c8855  50                   push eax
// 006c8856  e8e5feffff           call 0x6c8740
// 006c885b  57                   push edi
// 006c885c  e84fffffff           call 0x6c87b0
// 006c8861  83c414               add esp, 0x14
// 006c8864  5f                   pop edi
// 006c8865  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_runerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
