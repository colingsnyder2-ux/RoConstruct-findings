// from server: 100% by auto
// roc 2010-06 00733ba0  unit: seg_00730000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00733ba0
//
// 00733ba0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00733ba4  57                   push edi
// 00733ba5  8b7c2408             mov edi, dword ptr [esp + 8]
// 00733ba9  8d442410             lea eax, [esp + 0x10]
// 00733bad  50                   push eax
// 00733bae  51                   push ecx
// 00733baf  57                   push edi
// 00733bb0  e83befffff           call 0x732af0
// 00733bb5  50                   push eax
// 00733bb6  e8e5feffff           call 0x733aa0
// 00733bbb  57                   push edi
// 00733bbc  e84fffffff           call 0x733b10
// 00733bc1  83c414               add esp, 0x14
// 00733bc4  5f                   pop edi
// 00733bc5  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_runerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
