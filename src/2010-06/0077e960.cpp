// roc 2010-06 0077e960  unit: seg_00770000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077e960
//
// 0077e960  83ec20               sub esp, 0x20
// 0077e963  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0077e967  8b442424             mov eax, dword ptr [esp + 0x24]
// 0077e96b  8b542430             mov edx, dword ptr [esp + 0x30]
// 0077e96f  894c2410             mov dword ptr [esp + 0x10], ecx
// 0077e973  8944240c             mov dword ptr [esp + 0xc], eax
// 0077e977  8b442434             mov eax, dword ptr [esp + 0x34]
// 0077e97b  8d0c24               lea ecx, [esp]
// 0077e97e  51                   push ecx
// 0077e97f  89542418             mov dword ptr [esp + 0x18], edx
// 0077e983  8944241c             mov dword ptr [esp + 0x1c], eax
// 0077e987  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0077e98f  e8cc380000           call 0x782260
// 0077e994  83c404               add esp, 4
// 0077e997  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0077e99c  751c                 jne 0x77e9ba
// 0077e99e  8b542414             mov edx, dword ptr [esp + 0x14]
// 0077e9a2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0077e9a6  52                   push edx
// 0077e9a7  6a0c                 push 0xc
// 0077e9a9  8d442408             lea eax, [esp + 8]
// 0077e9ad  50                   push eax
// 0077e9ae  51                   push ecx
// 0077e9af  ff542420             call dword ptr [esp + 0x20]
// 0077e9b3  83c410               add esp, 0x10
// 0077e9b6  8944241c             mov dword ptr [esp + 0x1c], eax
// 0077e9ba  8b442428             mov eax, dword ptr [esp + 0x28]
// 0077e9be  8d54240c             lea edx, [esp + 0xc]
// 0077e9c2  52                   push edx
// 0077e9c3  6a00                 push 0
// 0077e9c5  50                   push eax
// 0077e9c6  e825feffff           call 0x77e7f0
// 0077e9cb  8b442428             mov eax, dword ptr [esp + 0x28]
// 0077e9cf  83c42c               add esp, 0x2c
// 0077e9d2  c3                   ret 
// library lua-5.1.4/ldump.c (function _luaU_dump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
