// from server: 100% by auto
// roc 2010-06 00722530  unit: RBX::UniversalTool  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00722530
//
// 00722530  8b442408             mov eax, dword ptr [esp + 8]
// 00722534  56                   push esi
// 00722535  8b742408             mov esi, dword ptr [esp + 8]
// 00722539  50                   push eax
// 0072253a  56                   push esi
// 0072253b  e810e9ffff           call 0x720e50
// 00722540  83c408               add esp, 8
// 00722543  85c0                 test eax, eax
// 00722545  7513                 jne 0x72255a
// 00722547  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0072254b  51                   push ecx
// 0072254c  68f0cea400           push 0xa4cef0
// 00722551  56                   push esi
// 00722552  e849ffffff           call 0x7224a0
// 00722557  83c40c               add esp, 0xc
// 0072255a  5e                   pop esi
// 0072255b  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
