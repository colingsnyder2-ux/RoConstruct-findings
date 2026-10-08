// from server: 100% by auto
// roc 2008-06 00625430  unit: lua_exception  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00625430
//
// 00625430  56                   push esi
// 00625431  8b742408             mov esi, dword ptr [esp + 8]
// 00625435  6a05                 push 5
// 00625437  6a01                 push 1
// 00625439  56                   push esi
// 0062543a  e801c2feff           call 0x611640
// 0062543f  6a01                 push 1
// 00625441  56                   push esi
// 00625442  e839ccfeff           call 0x612080
// 00625447  50                   push eax
// 00625448  56                   push esi
// 00625449  e8d2cdfeff           call 0x612220
// 0062544e  83c41c               add esp, 0x1c
// 00625451  b801000000           mov eax, 1
// 00625456  5e                   pop esi
// 00625457  c3                   ret 
// library lua-5.1.4/ltablib.c (function _getn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
