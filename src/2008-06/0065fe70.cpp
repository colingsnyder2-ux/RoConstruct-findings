// roc 2008-06 0065fe70  unit: seg_00650000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065fe70
//
// 0065fe70  83ec20               sub esp, 0x20
// 0065fe73  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0065fe77  8b442424             mov eax, dword ptr [esp + 0x24]
// 0065fe7b  8b542430             mov edx, dword ptr [esp + 0x30]
// 0065fe7f  894c2410             mov dword ptr [esp + 0x10], ecx
// 0065fe83  8944240c             mov dword ptr [esp + 0xc], eax
// 0065fe87  8b442434             mov eax, dword ptr [esp + 0x34]
// 0065fe8b  8d0c24               lea ecx, [esp]
// 0065fe8e  51                   push ecx
// 0065fe8f  89542418             mov dword ptr [esp + 0x18], edx
// 0065fe93  8944241c             mov dword ptr [esp + 0x1c], eax
// 0065fe97  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0065fe9f  e83c400000           call 0x663ee0
// 0065fea4  83c404               add esp, 4
// 0065fea7  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0065feac  751c                 jne 0x65feca
// 0065feae  8b542414             mov edx, dword ptr [esp + 0x14]
// 0065feb2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065feb6  52                   push edx
// 0065feb7  6a0c                 push 0xc
// 0065feb9  8d442408             lea eax, [esp + 8]
// 0065febd  50                   push eax
// 0065febe  51                   push ecx
// 0065febf  ff542420             call dword ptr [esp + 0x20]
// 0065fec3  83c410               add esp, 0x10
// 0065fec6  8944241c             mov dword ptr [esp + 0x1c], eax
// 0065feca  8b442428             mov eax, dword ptr [esp + 0x28]
// 0065fece  8d54240c             lea edx, [esp + 0xc]
// 0065fed2  52                   push edx
// 0065fed3  6a00                 push 0
// 0065fed5  50                   push eax
// 0065fed6  e825feffff           call 0x65fd00
// 0065fedb  8b442428             mov eax, dword ptr [esp + 0x28]
// 0065fedf  83c42c               add esp, 0x2c
// 0065fee2  c3                   ret 
// library lua-5.1.4/ldump.c (function _luaU_dump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
