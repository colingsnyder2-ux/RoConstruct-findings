// roc 2009-06 006e9850  unit: RBX::PartDropTool  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e9850
//
// 006e9850  55                   push ebp
// 006e9851  8b6c2408             mov ebp, dword ptr [esp + 8]
// 006e9855  56                   push esi
// 006e9856  57                   push edi
// 006e9857  8db598000000         lea esi, [ebp + 0x98]
// 006e985d  bf09000000           mov edi, 9
// 006e9862  8b06                 mov eax, dword ptr [esi]
// 006e9864  85c0                 test eax, eax
// 006e9866  7410                 je 0x6e9878
// 006e9868  f6400503             test byte ptr [eax + 5], 3
// 006e986c  740a                 je 0x6e9878
// 006e986e  50                   push eax
// 006e986f  55                   push ebp
// 006e9870  e88bf5ffff           call 0x6e8e00
// 006e9875  83c408               add esp, 8
// 006e9878  83c604               add esi, 4
// 006e987b  83ef01               sub edi, 1
// 006e987e  75e2                 jne 0x6e9862
// 006e9880  5f                   pop edi
// 006e9881  5e                   pop esi
// 006e9882  5d                   pop ebp
// 006e9883  c3                   ret 
// library lua-5.1.4/lgc.c (function _markmt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
