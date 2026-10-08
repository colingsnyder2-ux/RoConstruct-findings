// from server: 100% by auto
// roc 2008-06 0065f490  unit: seg_00650000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065f490
//
// 0065f490  53                   push ebx
// 0065f491  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0065f495  55                   push ebp
// 0065f496  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0065f49a  56                   push esi
// 0065f49b  57                   push edi
// 0065f49c  8d3c9d14000000       lea edi, [ebx*4 + 0x14]
// 0065f4a3  57                   push edi
// 0065f4a4  6a00                 push 0
// 0065f4a6  6a00                 push 0
// 0065f4a8  55                   push ebp
// 0065f4a9  e842120000           call 0x6606f0
// 0065f4ae  8bf0                 mov esi, eax
// 0065f4b0  6a06                 push 6
// 0065f4b2  56                   push esi
// 0065f4b3  55                   push ebp
// 0065f4b4  e827d0ffff           call 0x65c4e0
// 0065f4b9  8b442438             mov eax, dword ptr [esp + 0x38]
// 0065f4bd  83c41c               add esp, 0x1c
// 0065f4c0  c6460600             mov byte ptr [esi + 6], 0
// 0065f4c4  89460c               mov dword ptr [esi + 0xc], eax
// 0065f4c7  885e07               mov byte ptr [esi + 7], bl
// 0065f4ca  85db                 test ebx, ebx
// 0065f4cc  7411                 je 0x65f4df
// 0065f4ce  8d0437               lea eax, [edi + esi]
// 0065f4d1  4b                   dec ebx
// 0065f4d2  83e804               sub eax, 4
// 0065f4d5  c70000000000         mov dword ptr [eax], 0
// 0065f4db  85db                 test ebx, ebx
// 0065f4dd  75f2                 jne 0x65f4d1
// 0065f4df  5f                   pop edi
// 0065f4e0  8bc6                 mov eax, esi
// 0065f4e2  5e                   pop esi
// 0065f4e3  5d                   pop ebp
// 0065f4e4  5b                   pop ebx
// 0065f4e5  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newLclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
