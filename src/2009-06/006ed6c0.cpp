// from server: 100% by auto
// roc 2009-06 006ed6c0  unit: seg_006e0000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ed6c0
//
// 006ed6c0  83ec20               sub esp, 0x20
// 006ed6c3  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006ed6c7  8b442424             mov eax, dword ptr [esp + 0x24]
// 006ed6cb  8b542430             mov edx, dword ptr [esp + 0x30]
// 006ed6cf  894c2410             mov dword ptr [esp + 0x10], ecx
// 006ed6d3  8944240c             mov dword ptr [esp + 0xc], eax
// 006ed6d7  8b442434             mov eax, dword ptr [esp + 0x34]
// 006ed6db  8d0c24               lea ecx, [esp]
// 006ed6de  51                   push ecx
// 006ed6df  89542418             mov dword ptr [esp + 0x18], edx
// 006ed6e3  8944241c             mov dword ptr [esp + 0x1c], eax
// 006ed6e7  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006ed6ef  e8cc380000           call 0x6f0fc0
// 006ed6f4  83c404               add esp, 4
// 006ed6f7  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 006ed6fc  751c                 jne 0x6ed71a
// 006ed6fe  8b542414             mov edx, dword ptr [esp + 0x14]
// 006ed702  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ed706  52                   push edx
// 006ed707  6a0c                 push 0xc
// 006ed709  8d442408             lea eax, [esp + 8]
// 006ed70d  50                   push eax
// 006ed70e  51                   push ecx
// 006ed70f  ff542420             call dword ptr [esp + 0x20]
// 006ed713  83c410               add esp, 0x10
// 006ed716  8944241c             mov dword ptr [esp + 0x1c], eax
// 006ed71a  8b442428             mov eax, dword ptr [esp + 0x28]
// 006ed71e  8d54240c             lea edx, [esp + 0xc]
// 006ed722  52                   push edx
// 006ed723  6a00                 push 0
// 006ed725  50                   push eax
// 006ed726  e825feffff           call 0x6ed550
// 006ed72b  8b442428             mov eax, dword ptr [esp + 0x28]
// 006ed72f  83c42c               add esp, 0x2c
// 006ed732  c3                   ret 
// library lua-5.1.4/ldump.c (function _luaU_dump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
