// from server: 100% by auto
// roc 2012-06 00936ec0  unit: seg_00930000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00936ec0
//
// 00936ec0  83ec20               sub esp, 0x20
// 00936ec3  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00936ec7  8b442424             mov eax, dword ptr [esp + 0x24]
// 00936ecb  8b542430             mov edx, dword ptr [esp + 0x30]
// 00936ecf  894c2410             mov dword ptr [esp + 0x10], ecx
// 00936ed3  8944240c             mov dword ptr [esp + 0xc], eax
// 00936ed7  8b442434             mov eax, dword ptr [esp + 0x34]
// 00936edb  8d0c24               lea ecx, [esp]
// 00936ede  51                   push ecx
// 00936edf  89542418             mov dword ptr [esp + 0x18], edx
// 00936ee3  8944241c             mov dword ptr [esp + 0x1c], eax
// 00936ee7  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00936eef  e84c4d0000           call 0x93bc40
// 00936ef4  83c404               add esp, 4
// 00936ef7  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00936efc  751c                 jne 0x936f1a
// 00936efe  8b542414             mov edx, dword ptr [esp + 0x14]
// 00936f02  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00936f06  52                   push edx
// 00936f07  6a0c                 push 0xc
// 00936f09  8d442408             lea eax, [esp + 8]
// 00936f0d  50                   push eax
// 00936f0e  51                   push ecx
// 00936f0f  ff542420             call dword ptr [esp + 0x20]
// 00936f13  83c410               add esp, 0x10
// 00936f16  8944241c             mov dword ptr [esp + 0x1c], eax
// 00936f1a  8b442428             mov eax, dword ptr [esp + 0x28]
// 00936f1e  8d54240c             lea edx, [esp + 0xc]
// 00936f22  52                   push edx
// 00936f23  6a00                 push 0
// 00936f25  50                   push eax
// 00936f26  e825feffff           call 0x936d50
// 00936f2b  8b442428             mov eax, dword ptr [esp + 0x28]
// 00936f2f  83c42c               add esp, 0x2c
// 00936f32  c3                   ret 
// library lua-5.1.4/ldump.c (function _luaU_dump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
