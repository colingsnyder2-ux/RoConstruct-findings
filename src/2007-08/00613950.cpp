// from server: 100% by auto
// roc 2007-08 00613950  unit: seg_00610000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613950
//
// 00613950  83ec20               sub esp, 0x20
// 00613953  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00613957  8b442424             mov eax, dword ptr [esp + 0x24]
// 0061395b  8b542430             mov edx, dword ptr [esp + 0x30]
// 0061395f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00613963  8944240c             mov dword ptr [esp + 0xc], eax
// 00613967  8b442434             mov eax, dword ptr [esp + 0x34]
// 0061396b  8d0c24               lea ecx, [esp]
// 0061396e  51                   push ecx
// 0061396f  89542418             mov dword ptr [esp + 0x18], edx
// 00613973  8944241c             mov dword ptr [esp + 0x1c], eax
// 00613977  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0061397f  e8ac380000           call 0x617230
// 00613984  83c404               add esp, 4
// 00613987  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0061398c  751c                 jne 0x6139aa
// 0061398e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00613992  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00613996  52                   push edx
// 00613997  6a0c                 push 0xc
// 00613999  8d442408             lea eax, [esp + 8]
// 0061399d  50                   push eax
// 0061399e  51                   push ecx
// 0061399f  ff542420             call dword ptr [esp + 0x20]
// 006139a3  83c410               add esp, 0x10
// 006139a6  8944241c             mov dword ptr [esp + 0x1c], eax
// 006139aa  8b442428             mov eax, dword ptr [esp + 0x28]
// 006139ae  8d54240c             lea edx, [esp + 0xc]
// 006139b2  52                   push edx
// 006139b3  6a00                 push 0
// 006139b5  50                   push eax
// 006139b6  e825feffff           call 0x6137e0
// 006139bb  8b442428             mov eax, dword ptr [esp + 0x28]
// 006139bf  83c42c               add esp, 0x2c
// 006139c2  c3                   ret 
// library lua-5.1.4/ldump.c (function _luaU_dump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
