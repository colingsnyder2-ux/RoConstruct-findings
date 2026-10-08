// from server: 100% by auto
// roc 2011-06 00763a90  unit: seg_00760000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00763a90
//
// 00763a90  56                   push esi
// 00763a91  8b742408             mov esi, dword ptr [esp + 8]
// 00763a95  8b06                 mov eax, dword ptr [esi]
// 00763a97  2bc6                 sub eax, esi
// 00763a99  83e80c               sub eax, 0xc
// 00763a9c  7418                 je 0x763ab6
// 00763a9e  57                   push edi
// 00763a9f  50                   push eax
// 00763aa0  8b4608               mov eax, dword ptr [esi + 8]
// 00763aa3  8d7e0c               lea edi, [esi + 0xc]
// 00763aa6  57                   push edi
// 00763aa7  50                   push eax
// 00763aa8  e8b3eeffff           call 0x762960
// 00763aad  83c40c               add esp, 0xc
// 00763ab0  ff4604               inc dword ptr [esi + 4]
// 00763ab3  893e                 mov dword ptr [esi], edi
// 00763ab5  5f                   pop edi
// 00763ab6  8b4e04               mov ecx, dword ptr [esi + 4]
// 00763ab9  8b5608               mov edx, dword ptr [esi + 8]
// 00763abc  51                   push ecx
// 00763abd  52                   push edx
// 00763abe  e86df8ffff           call 0x763330
// 00763ac3  83c408               add esp, 8
// 00763ac6  c7460401000000       mov dword ptr [esi + 4], 1
// 00763acd  5e                   pop esi
// 00763ace  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_pushresult)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
