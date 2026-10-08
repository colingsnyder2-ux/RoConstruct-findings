// from server: 100% by auto
// roc 2011-06 007dada0  unit: seg_007d0000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dada0
//
// 007dada0  83ec20               sub esp, 0x20
// 007dada3  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007dada7  8b442424             mov eax, dword ptr [esp + 0x24]
// 007dadab  8b542430             mov edx, dword ptr [esp + 0x30]
// 007dadaf  894c2410             mov dword ptr [esp + 0x10], ecx
// 007dadb3  8944240c             mov dword ptr [esp + 0xc], eax
// 007dadb7  8b442434             mov eax, dword ptr [esp + 0x34]
// 007dadbb  8d0c24               lea ecx, [esp]
// 007dadbe  51                   push ecx
// 007dadbf  89542418             mov dword ptr [esp + 0x18], edx
// 007dadc3  8944241c             mov dword ptr [esp + 0x1c], eax
// 007dadc7  c744242000000000     mov dword ptr [esp + 0x20], 0
// 007dadcf  e85c390000           call 0x7de730
// 007dadd4  83c404               add esp, 4
// 007dadd7  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007daddc  751c                 jne 0x7dadfa
// 007dadde  8b542414             mov edx, dword ptr [esp + 0x14]
// 007dade2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007dade6  52                   push edx
// 007dade7  6a0c                 push 0xc
// 007dade9  8d442408             lea eax, [esp + 8]
// 007daded  50                   push eax
// 007dadee  51                   push ecx
// 007dadef  ff542420             call dword ptr [esp + 0x20]
// 007dadf3  83c410               add esp, 0x10
// 007dadf6  8944241c             mov dword ptr [esp + 0x1c], eax
// 007dadfa  8b442428             mov eax, dword ptr [esp + 0x28]
// 007dadfe  8d54240c             lea edx, [esp + 0xc]
// 007dae02  52                   push edx
// 007dae03  6a00                 push 0
// 007dae05  50                   push eax
// 007dae06  e825feffff           call 0x7dac30
// 007dae0b  8b442428             mov eax, dword ptr [esp + 0x28]
// 007dae0f  83c42c               add esp, 0x2c
// 007dae12  c3                   ret 
// library lua-5.1.4/ldump.c (function _luaU_dump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
