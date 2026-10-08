// from server: 100% by auto
// roc 2010-06 007212e0  unit: RBX::UniversalTool  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007212e0
//
// 007212e0  8b442408             mov eax, dword ptr [esp + 8]
// 007212e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007212e8  83ec1c               sub esp, 0x1c
// 007212eb  e8b0faffff           call 0x720da0
// 007212f0  83780803             cmp dword ptr [eax + 8], 3
// 007212f4  7416                 je 0x72130c
// 007212f6  8d4c240c             lea ecx, [esp + 0xc]
// 007212fa  51                   push ecx
// 007212fb  50                   push eax
// 007212fc  e82f9e0500           call 0x77b130
// 00721301  83c408               add esp, 8
// 00721304  85c0                 test eax, eax
// 00721306  7504                 jne 0x72130c
// 00721308  83c41c               add esp, 0x1c
// 0072130b  c3                   ret 
// 0072130c  dd00                 fld qword ptr [eax]
// 0072130e  dd5c2404             fstp qword ptr [esp + 4]
// 00721312  dd442404             fld qword ptr [esp + 4]
// 00721316  db1c24               fistp dword ptr [esp]
// 00721319  8b0424               mov eax, dword ptr [esp]
// 0072131c  83c41c               add esp, 0x1c
// 0072131f  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_tointeger)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
