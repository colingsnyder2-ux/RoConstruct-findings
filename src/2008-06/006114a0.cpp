// from server: 100% by auto
// roc 2008-06 006114a0  unit: RBX::BlockBlockContact  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006114a0
//
// 006114a0  83ec08               sub esp, 8
// 006114a3  8b442410             mov eax, dword ptr [esp + 0x10]
// 006114a7  8b542418             mov edx, dword ptr [esp + 0x18]
// 006114ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006114af  52                   push edx
// 006114b0  89442404             mov dword ptr [esp + 4], eax
// 006114b4  8d442404             lea eax, [esp + 4]
// 006114b8  50                   push eax
// 006114b9  894c240c             mov dword ptr [esp + 0xc], ecx
// 006114bd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006114c1  6880146100           push 0x611480
// 006114c6  51                   push ecx
// 006114c7  e824150000           call 0x6129f0
// 006114cc  83c418               add esp, 0x18
// 006114cf  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_loadbuffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
