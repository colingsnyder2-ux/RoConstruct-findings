// roc 2011-06 007641f0  unit: seg_00760000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007641f0
//
// 007641f0  56                   push esi
// 007641f1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007641f5  57                   push edi
// 007641f6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007641fa  56                   push esi
// 007641fb  57                   push edi
// 007641fc  e84fe3ffff           call 0x762550
// 00764201  83c408               add esp, 8
// 00764204  85c0                 test eax, eax
// 00764206  7f2d                 jg 0x764235
// 00764208  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0076420c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00764210  85ff                 test edi, edi
// 00764212  7430                 je 0x764244
// 00764214  85c0                 test eax, eax
// 00764216  7416                 je 0x76422e
// 00764218  8bc8                 mov ecx, eax
// 0076421a  8d7101               lea esi, [ecx + 1]
// 0076421d  8d4900               lea ecx, [ecx]
// 00764220  8a11                 mov dl, byte ptr [ecx]
// 00764222  41                   inc ecx
// 00764223  84d2                 test dl, dl
// 00764225  75f9                 jne 0x764220
// 00764227  2bce                 sub ecx, esi
// 00764229  890f                 mov dword ptr [edi], ecx
// 0076422b  5f                   pop edi
// 0076422c  5e                   pop esi
// 0076422d  c3                   ret 
// 0076422e  33c9                 xor ecx, ecx
// 00764230  890f                 mov dword ptr [edi], ecx
// 00764232  5f                   pop edi
// 00764233  5e                   pop esi
// 00764234  c3                   ret 
// 00764235  8b442418             mov eax, dword ptr [esp + 0x18]
// 00764239  50                   push eax
// 0076423a  56                   push esi
// 0076423b  57                   push edi
// 0076423c  e84fffffff           call 0x764190
// 00764241  83c40c               add esp, 0xc
// 00764244  5f                   pop edi
// 00764245  5e                   pop esi
// 00764246  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_optlstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
