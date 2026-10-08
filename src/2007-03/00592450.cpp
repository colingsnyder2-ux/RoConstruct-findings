// roc 2007-03 00592450  unit: seg_00590000  size: 316 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00592450
//
// 00592450  8b442404             mov eax, dword ptr [esp + 4]
// 00592454  53                   push ebx
// 00592455  8b19                 mov ebx, dword ptr [ecx]
// 00592457  85db                 test ebx, ebx
// 00592459  55                   push ebp
// 0059245a  8b6904               mov ebp, dword ptr [ecx + 4]
// 0059245d  56                   push esi
// 0059245e  57                   push edi
// 0059245f  7508                 jne 0x592469
// 00592461  81fd00000080         cmp ebp, 0x80000000
// 00592467  7451                 je 0x5924ba
// 00592469  83fbff               cmp ebx, -1
// 0059246c  7508                 jne 0x592476
// 0059246e  81fdffffff7f         cmp ebp, 0x7fffffff
// 00592474  7444                 je 0x5924ba
// 00592476  83fbfe               cmp ebx, -2
// 00592479  750c                 jne 0x592487
// 0059247b  81fdffffff7f         cmp ebp, 0x7fffffff
// 00592481  0f84e2000000         je 0x592569
// 00592487  8b30                 mov esi, dword ptr [eax]
// 00592489  85f6                 test esi, esi
// 0059248b  8b7804               mov edi, dword ptr [eax + 4]
// 0059248e  7508                 jne 0x592498
// 00592490  81ff00000080         cmp edi, 0x80000000
// 00592496  7422                 je 0x5924ba
// 00592498  83feff               cmp esi, -1
// 0059249b  7508                 jne 0x5924a5
// 0059249d  81ffffffff7f         cmp edi, 0x7fffffff
// 005924a3  7415                 je 0x5924ba
// 005924a5  83fefe               cmp esi, -2
// 005924a8  0f859b000000         jne 0x592549
// 005924ae  81ffffffff7f         cmp edi, 0x7fffffff
// 005924b4  0f858f000000         jne 0x592549
// 005924ba  83fbfe               cmp ebx, -2
// 005924bd  750c                 jne 0x5924cb
// 005924bf  81fdffffff7f         cmp ebp, 0x7fffffff
// 005924c5  0f849e000000         je 0x592569
// 005924cb  8b30                 mov esi, dword ptr [eax]
// 005924cd  83fefe               cmp esi, -2
// 005924d0  8b7804               mov edi, dword ptr [eax + 4]
// 005924d3  750c                 jne 0x5924e1
// 005924d5  81ffffffff7f         cmp edi, 0x7fffffff
// 005924db  0f849f000000         je 0x592580
// 005924e1  85db                 test ebx, ebx
// 005924e3  7510                 jne 0x5924f5
// 005924e5  81fd00000080         cmp ebp, 0x80000000
// 005924eb  7508                 jne 0x5924f5
// 005924ed  85f6                 test esi, esi
// 005924ef  7519                 jne 0x59250a
// 005924f1  3bfd                 cmp edi, ebp
// 005924f3  7515                 jne 0x59250a
// 005924f5  83feff               cmp esi, -1
// 005924f8  751a                 jne 0x592514
// 005924fa  81ffffffff7f         cmp edi, 0x7fffffff
// 00592500  7512                 jne 0x592514
// 00592502  3bde                 cmp ebx, esi
// 00592504  7504                 jne 0x59250a
// 00592506  3bef                 cmp ebp, edi
// 00592508  7417                 je 0x592521
// 0059250a  5f                   pop edi
// 0059250b  5e                   pop esi
// 0059250c  5d                   pop ebp
// 0059250d  83c8ff               or eax, 0xffffffff
// 00592510  5b                   pop ebx
// 00592511  c20400               ret 4
// 00592514  83fbff               cmp ebx, -1
// 00592517  7516                 jne 0x59252f
// 00592519  81fdffffff7f         cmp ebp, 0x7fffffff
// 0059251f  750e                 jne 0x59252f
// 00592521  57                   push edi
// 00592522  56                   push esi
// 00592523  e85826fbff           call 0x544b80
// 00592528  83c408               add esp, 8
// 0059252b  84c0                 test al, al
// 0059252d  742e                 je 0x59255d
// 0059252f  85f6                 test esi, esi
// 00592531  7516                 jne 0x592549
// 00592533  81ff00000080         cmp edi, 0x80000000
// 00592539  750e                 jne 0x592549
// 0059253b  55                   push ebp
// 0059253c  53                   push ebx
// 0059253d  e81e26fbff           call 0x544b60
// 00592542  83c408               add esp, 8
// 00592545  84c0                 test al, al
// 00592547  7414                 je 0x59255d
// 00592549  3bef                 cmp ebp, edi
// 0059254b  7f10                 jg 0x59255d
// 0059254d  7cbb                 jl 0x59250a
// 0059254f  3bde                 cmp ebx, esi
// 00592551  72b7                 jb 0x59250a
// 00592553  3bef                 cmp ebp, edi
// 00592555  7c20                 jl 0x592577
// 00592557  7f04                 jg 0x59255d
// 00592559  3bde                 cmp ebx, esi
// 0059255b  761a                 jbe 0x592577
// 0059255d  5f                   pop edi
// 0059255e  5e                   pop esi
// 0059255f  5d                   pop ebp
// 00592560  b801000000           mov eax, 1
// 00592565  5b                   pop ebx
// 00592566  c20400               ret 4
// 00592569  8338fe               cmp dword ptr [eax], -2
// 0059256c  7512                 jne 0x592580
// 0059256e  817804ffffff7f       cmp dword ptr [eax + 4], 0x7fffffff
// 00592575  7509                 jne 0x592580
// 00592577  5f                   pop edi
// 00592578  5e                   pop esi
// 00592579  5d                   pop ebp
// 0059257a  33c0                 xor eax, eax
// 0059257c  5b                   pop ebx
// 0059257d  c20400               ret 4
// 00592580  5f                   pop edi
// 00592581  5e                   pop esi
// 00592582  5d                   pop ebp
// 00592583  b802000000           mov eax, 2
// 00592588  5b                   pop ebx
// 00592589  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?compare@?$int_adapter@_J@date_time@boost@@ABEHABV123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
