// from server: 100% by auto
// roc 2011-06 00762260  unit: seg_00760000  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00762260
//
// 00762260  8b442408             mov eax, dword ptr [esp + 8]
// 00762264  3d401f0000           cmp eax, 0x1f40
// 00762269  53                   push ebx
// 0076226a  56                   push esi
// 0076226b  bb01000000           mov ebx, 1
// 00762270  7f4c                 jg 0x7622be
// 00762272  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00762276  8b4e08               mov ecx, dword ptr [esi + 8]
// 00762279  8bd1                 mov edx, ecx
// 0076227b  2b560c               sub edx, dword ptr [esi + 0xc]
// 0076227e  c1fa04               sar edx, 4
// 00762281  03d0                 add edx, eax
// 00762283  81fa401f0000         cmp edx, 0x1f40
// 00762289  7f33                 jg 0x7622be
// 0076228b  85c0                 test eax, eax
// 0076228d  7e2a                 jle 0x7622b9
// 0076228f  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00762292  57                   push edi
// 00762293  8bf8                 mov edi, eax
// 00762295  c1e704               shl edi, 4
// 00762298  2bd1                 sub edx, ecx
// 0076229a  3bd7                 cmp edx, edi
// 0076229c  7f0a                 jg 0x7622a8
// 0076229e  50                   push eax
// 0076229f  56                   push esi
// 007622a0  e82bc00100           call 0x77e2d0
// 007622a5  83c408               add esp, 8
// 007622a8  8b4608               mov eax, dword ptr [esi + 8]
// 007622ab  8b7614               mov esi, dword ptr [esi + 0x14]
// 007622ae  03c7                 add eax, edi
// 007622b0  5f                   pop edi
// 007622b1  394608               cmp dword ptr [esi + 8], eax
// 007622b4  7303                 jae 0x7622b9
// 007622b6  894608               mov dword ptr [esi + 8], eax
// 007622b9  5e                   pop esi
// 007622ba  8bc3                 mov eax, ebx
// 007622bc  5b                   pop ebx
// 007622bd  c3                   ret 
// 007622be  5e                   pop esi
// 007622bf  33c0                 xor eax, eax
// 007622c1  5b                   pop ebx
// 007622c2  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_checkstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
