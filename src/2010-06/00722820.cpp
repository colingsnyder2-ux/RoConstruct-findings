// from server: 100% by auto
// roc 2010-06 00722820  unit: RBX::UniversalTool  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00722820
//
// 00722820  56                   push esi
// 00722821  8b742408             mov esi, dword ptr [esp + 8]
// 00722825  8b06                 mov eax, dword ptr [esi]
// 00722827  2bc6                 sub eax, esi
// 00722829  83e80c               sub eax, 0xc
// 0072282c  7418                 je 0x722846
// 0072282e  57                   push edi
// 0072282f  50                   push eax
// 00722830  8b4608               mov eax, dword ptr [esi + 8]
// 00722833  8d7e0c               lea edi, [esi + 0xc]
// 00722836  57                   push edi
// 00722837  50                   push eax
// 00722838  e813edffff           call 0x721550
// 0072283d  83c40c               add esp, 0xc
// 00722840  ff4604               inc dword ptr [esi + 4]
// 00722843  893e                 mov dword ptr [esi], edi
// 00722845  5f                   pop edi
// 00722846  8b4e04               mov ecx, dword ptr [esi + 4]
// 00722849  8b5608               mov edx, dword ptr [esi + 8]
// 0072284c  51                   push ecx
// 0072284d  52                   push edx
// 0072284e  e8cdf6ffff           call 0x721f20
// 00722853  83c408               add esp, 8
// 00722856  c7460401000000       mov dword ptr [esi + 4], 1
// 0072285d  5e                   pop esi
// 0072285e  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_pushresult)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
