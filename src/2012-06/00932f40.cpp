// roc 2012-06 00932f40  unit: RBX::BallCellContact  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00932f40
//
// 00932f40  55                   push ebp
// 00932f41  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00932f45  56                   push esi
// 00932f46  57                   push edi
// 00932f47  8db598000000         lea esi, [ebp + 0x98]
// 00932f4d  bf09000000           mov edi, 9
// 00932f52  8b06                 mov eax, dword ptr [esi]
// 00932f54  85c0                 test eax, eax
// 00932f56  7410                 je 0x932f68
// 00932f58  f6400503             test byte ptr [eax + 5], 3
// 00932f5c  740a                 je 0x932f68
// 00932f5e  50                   push eax
// 00932f5f  55                   push ebp
// 00932f60  e86bf5ffff           call 0x9324d0
// 00932f65  83c408               add esp, 8
// 00932f68  83c604               add esi, 4
// 00932f6b  83ef01               sub edi, 1
// 00932f6e  75e2                 jne 0x932f52
// 00932f70  5f                   pop edi
// 00932f71  5e                   pop esi
// 00932f72  5d                   pop ebp
// 00932f73  c3                   ret 
// library lua-5.1.4/lgc.c (function _markmt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
