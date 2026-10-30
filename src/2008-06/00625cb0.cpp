// from server: 100% by auto
// roc 2008-06 00625cb0  unit: seg_00620000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00625cb0
//
// 00625cb0  56                   push esi
// 00625cb1  8b742408             mov esi, dword ptr [esp + 8]
// 00625cb5  6a01                 push 1
// 00625cb7  56                   push esi
// 00625cb8  e8c3bafeff           call 0x611780
// 00625cbd  83c408               add esp, 8
// 00625cc0  e801c10700           call 0x6a1dc6
// 00625cc5  83ec08               sub esp, 8
// 00625cc8  dd1c24               fstp qword ptr [esp]
// 00625ccb  56                   push esi
// 00625ccc  e82fc5feff           call 0x612200
// 00625cd1  83c40c               add esp, 0xc
// 00625cd4  b801000000           mov eax, 1
// 00625cd9  5e                   pop esi
// 00625cda  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
