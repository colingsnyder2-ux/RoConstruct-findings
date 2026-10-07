// roc 2011-06 007d6e30  unit: RBX::EquationDisplay  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d6e30
//
// 007d6e30  55                   push ebp
// 007d6e31  8b6c2408             mov ebp, dword ptr [esp + 8]
// 007d6e35  56                   push esi
// 007d6e36  57                   push edi
// 007d6e37  8db598000000         lea esi, [ebp + 0x98]
// 007d6e3d  bf09000000           mov edi, 9
// 007d6e42  8b06                 mov eax, dword ptr [esi]
// 007d6e44  85c0                 test eax, eax
// 007d6e46  7410                 je 0x7d6e58
// 007d6e48  f6400503             test byte ptr [eax + 5], 3
// 007d6e4c  740a                 je 0x7d6e58
// 007d6e4e  50                   push eax
// 007d6e4f  55                   push ebp
// 007d6e50  e87bf5ffff           call 0x7d63d0
// 007d6e55  83c408               add esp, 8
// 007d6e58  83c604               add esi, 4
// 007d6e5b  83ef01               sub edi, 1
// 007d6e5e  75e2                 jne 0x7d6e42
// 007d6e60  5f                   pop edi
// 007d6e61  5e                   pop esi
// 007d6e62  5d                   pop ebp
// 007d6e63  c3                   ret 
// library lua-5.1.4/lgc.c (function _markmt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
