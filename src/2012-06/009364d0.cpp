// from server: 100% by auto
// roc 2012-06 009364d0  unit: seg_00930000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009364d0
//
// 009364d0  53                   push ebx
// 009364d1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 009364d5  55                   push ebp
// 009364d6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 009364da  56                   push esi
// 009364db  57                   push edi
// 009364dc  8d3c9d14000000       lea edi, [ebx*4 + 0x14]
// 009364e3  57                   push edi
// 009364e4  6a00                 push 0
// 009364e6  6a00                 push 0
// 009364e8  55                   push ebp
// 009364e9  e8720a0000           call 0x936f60
// 009364ee  8bf0                 mov esi, eax
// 009364f0  6a06                 push 6
// 009364f2  56                   push esi
// 009364f3  55                   push ebp
// 009364f4  e807cfffff           call 0x933400
// 009364f9  8b442438             mov eax, dword ptr [esp + 0x38]
// 009364fd  83c41c               add esp, 0x1c
// 00936500  c6460600             mov byte ptr [esi + 6], 0
// 00936504  89460c               mov dword ptr [esi + 0xc], eax
// 00936507  885e07               mov byte ptr [esi + 7], bl
// 0093650a  85db                 test ebx, ebx
// 0093650c  7411                 je 0x93651f
// 0093650e  8d0437               lea eax, [edi + esi]
// 00936511  4b                   dec ebx
// 00936512  83e804               sub eax, 4
// 00936515  c70000000000         mov dword ptr [eax], 0
// 0093651b  85db                 test ebx, ebx
// 0093651d  75f2                 jne 0x936511
// 0093651f  5f                   pop edi
// 00936520  8bc6                 mov eax, esi
// 00936522  5e                   pop esi
// 00936523  5d                   pop ebp
// 00936524  5b                   pop ebx
// 00936525  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newLclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
