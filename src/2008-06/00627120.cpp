// roc 2008-06 00627120  unit: seg_00620000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00627120
//
// 00627120  53                   push ebx
// 00627121  55                   push ebp
// 00627122  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00627126  56                   push esi
// 00627127  8bf0                 mov esi, eax
// 00627129  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0062712c  57                   push edi
// 0062712d  85db                 test ebx, ebx
// 0062712f  7509                 jne 0x62713a
// 00627131  85ed                 test ebp, ebp
// 00627133  7405                 je 0x62713a
// 00627135  bb01000000           mov ebx, 1
// 0062713a  8b4608               mov eax, dword ptr [esi + 8]
// 0062713d  68c8518400           push 0x8451c8
// 00627142  53                   push ebx
// 00627143  50                   push eax
// 00627144  e8a79bfeff           call 0x610cf0
// 00627149  83c40c               add esp, 0xc
// 0062714c  33ff                 xor edi, edi
// 0062714e  85db                 test ebx, ebx
// 00627150  7e10                 jle 0x627162
// 00627152  8b442418             mov eax, dword ptr [esp + 0x18]
// 00627156  8bcd                 mov ecx, ebp
// 00627158  e843ffffff           call 0x6270a0
// 0062715d  47                   inc edi
// 0062715e  3bfb                 cmp edi, ebx
// 00627160  7cf0                 jl 0x627152
// 00627162  5f                   pop edi
// 00627163  5e                   pop esi
// 00627164  5d                   pop ebp
// 00627165  8bc3                 mov eax, ebx
// 00627167  5b                   pop ebx
// 00627168  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _push_captures)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
