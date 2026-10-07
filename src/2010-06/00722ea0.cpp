// roc 2010-06 00722ea0  unit: RBX::UniversalTool  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00722ea0
//
// 00722ea0  56                   push esi
// 00722ea1  8b742408             mov esi, dword ptr [esp + 8]
// 00722ea5  57                   push edi
// 00722ea6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00722eaa  57                   push edi
// 00722eab  56                   push esi
// 00722eac  e88fe2ffff           call 0x721140
// 00722eb1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00722eb5  83c408               add esp, 8
// 00722eb8  3bc1                 cmp eax, ecx
// 00722eba  7431                 je 0x722eed
// 00722ebc  53                   push ebx
// 00722ebd  51                   push ecx
// 00722ebe  56                   push esi
// 00722ebf  e89ce2ffff           call 0x721160
// 00722ec4  57                   push edi
// 00722ec5  56                   push esi
// 00722ec6  8bd8                 mov ebx, eax
// 00722ec8  e873e2ffff           call 0x721140
// 00722ecd  50                   push eax
// 00722ece  56                   push esi
// 00722ecf  e88ce2ffff           call 0x721160
// 00722ed4  50                   push eax
// 00722ed5  53                   push ebx
// 00722ed6  6894cfa400           push 0xa4cf94
// 00722edb  56                   push esi
// 00722edc  e84fe7ffff           call 0x721630
// 00722ee1  50                   push eax
// 00722ee2  57                   push edi
// 00722ee3  56                   push esi
// 00722ee4  e847feffff           call 0x722d30
// 00722ee9  83c434               add esp, 0x34
// 00722eec  5b                   pop ebx
// 00722eed  5f                   pop edi
// 00722eee  5e                   pop esi
// 00722eef  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checktype)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
