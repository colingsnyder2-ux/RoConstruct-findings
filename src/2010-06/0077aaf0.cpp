// roc 2010-06 0077aaf0  unit: RBX::PartDropTool  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077aaf0
//
// 0077aaf0  55                   push ebp
// 0077aaf1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0077aaf5  56                   push esi
// 0077aaf6  57                   push edi
// 0077aaf7  8db598000000         lea esi, [ebp + 0x98]
// 0077aafd  bf09000000           mov edi, 9
// 0077ab02  8b06                 mov eax, dword ptr [esi]
// 0077ab04  85c0                 test eax, eax
// 0077ab06  7410                 je 0x77ab18
// 0077ab08  f6400503             test byte ptr [eax + 5], 3
// 0077ab0c  740a                 je 0x77ab18
// 0077ab0e  50                   push eax
// 0077ab0f  55                   push ebp
// 0077ab10  e88bf5ffff           call 0x77a0a0
// 0077ab15  83c408               add esp, 8
// 0077ab18  83c604               add esi, 4
// 0077ab1b  83ef01               sub edi, 1
// 0077ab1e  75e2                 jne 0x77ab02
// 0077ab20  5f                   pop edi
// 0077ab21  5e                   pop esi
// 0077ab22  5d                   pop ebp
// 0077ab23  c3                   ret 
// library lua-5.1.4/lgc.c (function _markmt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
