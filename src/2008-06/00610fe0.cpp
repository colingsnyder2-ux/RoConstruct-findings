// roc 2008-06 00610fe0  unit: RBX::BlockBlockContact  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00610fe0
//
// 00610fe0  56                   push esi
// 00610fe1  8b742408             mov esi, dword ptr [esp + 8]
// 00610fe5  8b06                 mov eax, dword ptr [esi]
// 00610fe7  2bc6                 sub eax, esi
// 00610fe9  83e80c               sub eax, 0xc
// 00610fec  7418                 je 0x611006
// 00610fee  57                   push edi
// 00610fef  50                   push eax
// 00610ff0  8b4608               mov eax, dword ptr [esi + 8]
// 00610ff3  8d7e0c               lea edi, [esi + 0xc]
// 00610ff6  57                   push edi
// 00610ff7  50                   push eax
// 00610ff8  e843120000           call 0x612240
// 00610ffd  83c40c               add esp, 0xc
// 00611000  ff4604               inc dword ptr [esi + 4]
// 00611003  893e                 mov dword ptr [esi], edi
// 00611005  5f                   pop edi
// 00611006  8b4e04               mov ecx, dword ptr [esi + 4]
// 00611009  8b5608               mov edx, dword ptr [esi + 8]
// 0061100c  51                   push ecx
// 0061100d  52                   push edx
// 0061100e  e8ad1b0000           call 0x612bc0
// 00611013  83c408               add esp, 8
// 00611016  c7460401000000       mov dword ptr [esi + 4], 1
// 0061101d  5e                   pop esi
// 0061101e  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_pushresult)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
