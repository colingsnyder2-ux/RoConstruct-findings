// from server: 100% by auto
// roc 2007-08 0060fa90  unit: RBX::Ball  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060fa90
//
// 0060fa90  55                   push ebp
// 0060fa91  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0060fa95  56                   push esi
// 0060fa96  57                   push edi
// 0060fa97  8db598000000         lea esi, [ebp + 0x98]
// 0060fa9d  bf09000000           mov edi, 9
// 0060faa2  8b06                 mov eax, dword ptr [esi]
// 0060faa4  85c0                 test eax, eax
// 0060faa6  7410                 je 0x60fab8
// 0060faa8  f6400503             test byte ptr [eax + 5], 3
// 0060faac  740a                 je 0x60fab8
// 0060faae  50                   push eax
// 0060faaf  55                   push ebp
// 0060fab0  e85bf5ffff           call 0x60f010
// 0060fab5  83c408               add esp, 8
// 0060fab8  83c604               add esi, 4
// 0060fabb  83ef01               sub edi, 1
// 0060fabe  75e2                 jne 0x60faa2
// 0060fac0  5f                   pop edi
// 0060fac1  5e                   pop esi
// 0060fac2  5d                   pop ebp
// 0060fac3  c3                   ret 
// library lua-5.1.4/lgc.c (function _markmt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
