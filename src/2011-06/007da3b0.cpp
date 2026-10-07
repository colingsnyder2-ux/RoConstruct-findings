// roc 2011-06 007da3b0  unit: seg_007d0000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007da3b0
//
// 007da3b0  53                   push ebx
// 007da3b1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007da3b5  55                   push ebp
// 007da3b6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 007da3ba  56                   push esi
// 007da3bb  57                   push edi
// 007da3bc  8d3c9d14000000       lea edi, [ebx*4 + 0x14]
// 007da3c3  57                   push edi
// 007da3c4  6a00                 push 0
// 007da3c6  6a00                 push 0
// 007da3c8  55                   push ebp
// 007da3c9  e8720a0000           call 0x7dae40
// 007da3ce  8bf0                 mov esi, eax
// 007da3d0  6a06                 push 6
// 007da3d2  56                   push esi
// 007da3d3  55                   push ebp
// 007da3d4  e817cfffff           call 0x7d72f0
// 007da3d9  8b442438             mov eax, dword ptr [esp + 0x38]
// 007da3dd  83c41c               add esp, 0x1c
// 007da3e0  c6460600             mov byte ptr [esi + 6], 0
// 007da3e4  89460c               mov dword ptr [esi + 0xc], eax
// 007da3e7  885e07               mov byte ptr [esi + 7], bl
// 007da3ea  85db                 test ebx, ebx
// 007da3ec  7411                 je 0x7da3ff
// 007da3ee  8d0437               lea eax, [edi + esi]
// 007da3f1  4b                   dec ebx
// 007da3f2  83e804               sub eax, 4
// 007da3f5  c70000000000         mov dword ptr [eax], 0
// 007da3fb  85db                 test ebx, ebx
// 007da3fd  75f2                 jne 0x7da3f1
// 007da3ff  5f                   pop edi
// 007da400  8bc6                 mov eax, esi
// 007da402  5e                   pop esi
// 007da403  5d                   pop ebp
// 007da404  5b                   pop ebx
// 007da405  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newLclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
