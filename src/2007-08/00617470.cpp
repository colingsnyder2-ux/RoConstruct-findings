// roc 2007-08 00617470  unit: seg_00610000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00617470
//
// 00617470  53                   push ebx
// 00617471  56                   push esi
// 00617472  57                   push edi
// 00617473  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00617477  33db                 xor ebx, ebx
// 00617479  8da42400000000       lea esp, [esp]
// 00617480  8b349db0387c00       mov esi, dword ptr [ebx*4 + 0x7c38b0]
// 00617487  8bc6                 mov eax, esi
// 00617489  8d5001               lea edx, [eax + 1]
// 0061748c  8d642400             lea esp, [esp]
// 00617490  8a08                 mov cl, byte ptr [eax]
// 00617492  83c001               add eax, 1
// 00617495  84c9                 test cl, cl
// 00617497  75f7                 jne 0x617490
// 00617499  2bc2                 sub eax, edx
// 0061749b  50                   push eax
// 0061749c  56                   push esi
// 0061749d  57                   push edi
// 0061749e  e8cdb8ffff           call 0x612d70
// 006174a3  80480520             or byte ptr [eax + 5], 0x20
// 006174a7  8acb                 mov cl, bl
// 006174a9  80c101               add cl, 1
// 006174ac  83c301               add ebx, 1
// 006174af  83c40c               add esp, 0xc
// 006174b2  83fb15               cmp ebx, 0x15
// 006174b5  884806               mov byte ptr [eax + 6], cl
// 006174b8  7cc6                 jl 0x617480
// 006174ba  5f                   pop edi
// 006174bb  5e                   pop esi
// 006174bc  5b                   pop ebx
// 006174bd  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_init)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
