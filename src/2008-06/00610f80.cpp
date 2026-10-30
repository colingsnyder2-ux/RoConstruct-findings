// from server: 100% by auto
// roc 2008-06 00610f80  unit: RBX::BlockBlockContact  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00610f80
//
// 00610f80  53                   push ebx
// 00610f81  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00610f85  85db                 test ebx, ebx
// 00610f87  744c                 je 0x610fd5
// 00610f89  55                   push ebp
// 00610f8a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00610f8e  56                   push esi
// 00610f8f  8b742410             mov esi, dword ptr [esp + 0x10]
// 00610f93  57                   push edi
// 00610f94  8b06                 mov eax, dword ptr [esi]
// 00610f96  8d8e0c020000         lea ecx, [esi + 0x20c]
// 00610f9c  4b                   dec ebx
// 00610f9d  3bc1                 cmp eax, ecx
// 00610f9f  7223                 jb 0x610fc4
// 00610fa1  2bc6                 sub eax, esi
// 00610fa3  83e80c               sub eax, 0xc
// 00610fa6  741c                 je 0x610fc4
// 00610fa8  50                   push eax
// 00610fa9  8b4608               mov eax, dword ptr [esi + 8]
// 00610fac  8d7e0c               lea edi, [esi + 0xc]
// 00610faf  57                   push edi
// 00610fb0  50                   push eax
// 00610fb1  e88a120000           call 0x612240
// 00610fb6  ff4604               inc dword ptr [esi + 4]
// 00610fb9  56                   push esi
// 00610fba  893e                 mov dword ptr [esi], edi
// 00610fbc  e80fffffff           call 0x610ed0
// 00610fc1  83c410               add esp, 0x10
// 00610fc4  8a5500               mov dl, byte ptr [ebp]
// 00610fc7  8b0e                 mov ecx, dword ptr [esi]
// 00610fc9  8811                 mov byte ptr [ecx], dl
// 00610fcb  ff06                 inc dword ptr [esi]
// 00610fcd  45                   inc ebp
// 00610fce  85db                 test ebx, ebx
// 00610fd0  75c2                 jne 0x610f94
// 00610fd2  5f                   pop edi
// 00610fd3  5e                   pop esi
// 00610fd4  5d                   pop ebp
// 00610fd5  5b                   pop ebx
// 00610fd6  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_addlstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
