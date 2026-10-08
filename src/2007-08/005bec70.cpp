// from server: 100% by auto
// roc 2007-08 005bec70  unit: boost::detail::H::?$sp_counted_impl_p  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bec70
//
// 005bec70  56                   push esi
// 005bec71  8b742408             mov esi, dword ptr [esp + 8]
// 005bec75  8b06                 mov eax, dword ptr [esi]
// 005bec77  2bc6                 sub eax, esi
// 005bec79  83e80c               sub eax, 0xc
// 005bec7c  7419                 je 0x5bec97
// 005bec7e  57                   push edi
// 005bec7f  50                   push eax
// 005bec80  8b4608               mov eax, dword ptr [esi + 8]
// 005bec83  8d7e0c               lea edi, [esi + 0xc]
// 005bec86  57                   push edi
// 005bec87  50                   push eax
// 005bec88  e823efffff           call 0x5bdbb0
// 005bec8d  83c40c               add esp, 0xc
// 005bec90  83460401             add dword ptr [esi + 4], 1
// 005bec94  893e                 mov dword ptr [esi], edi
// 005bec96  5f                   pop edi
// 005bec97  8b4e04               mov ecx, dword ptr [esi + 4]
// 005bec9a  8b5608               mov edx, dword ptr [esi + 8]
// 005bec9d  51                   push ecx
// 005bec9e  52                   push edx
// 005bec9f  e88cf8ffff           call 0x5be530
// 005beca4  83c408               add esp, 8
// 005beca7  c7460401000000       mov dword ptr [esi + 4], 1
// 005becae  5e                   pop esi
// 005becaf  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_pushresult)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
