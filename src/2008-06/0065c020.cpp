// roc 2008-06 0065c020  unit: RBX::BallBallContact  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065c020
//
// 0065c020  55                   push ebp
// 0065c021  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0065c025  56                   push esi
// 0065c026  57                   push edi
// 0065c027  8db598000000         lea esi, [ebp + 0x98]
// 0065c02d  bf09000000           mov edi, 9
// 0065c032  8b06                 mov eax, dword ptr [esi]
// 0065c034  85c0                 test eax, eax
// 0065c036  7410                 je 0x65c048
// 0065c038  f6400503             test byte ptr [eax + 5], 3
// 0065c03c  740a                 je 0x65c048
// 0065c03e  50                   push eax
// 0065c03f  55                   push ebp
// 0065c040  e88bf5ffff           call 0x65b5d0
// 0065c045  83c408               add esp, 8
// 0065c048  83c604               add esi, 4
// 0065c04b  83ef01               sub edi, 1
// 0065c04e  75e2                 jne 0x65c032
// 0065c050  5f                   pop edi
// 0065c051  5e                   pop esi
// 0065c052  5d                   pop ebp
// 0065c053  c3                   ret 
// library lua-5.1.4/lgc.c (function _markmt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
