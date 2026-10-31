// roc 2011-06 007db2c0  unit: seg_007d0000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007db2c0
//
// 007db2c0  57                   push edi
// 007db2c1  8b7c2408             mov edi, dword ptr [esp + 8]
// 007db2c5  85ff                 test edi, edi
// 007db2c7  751f                 jne 0x7db2e8
// 007db2c9  8b442410             mov eax, dword ptr [esp + 0x10]
// 007db2cd  83caff               or edx, 0xffffffff
// 007db2d0  895010               mov dword ptr [eax + 0x10], edx
// 007db2d3  895014               mov dword ptr [eax + 0x14], edx
// 007db2d6  c70008000000         mov dword ptr [eax], 8
// 007db2dc  c74008ff000000       mov dword ptr [eax + 8], 0xff
// 007db2e3  8d4708               lea eax, [edi + 8]
// 007db2e6  5f                   pop edi
// 007db2e7  c3                   ret 
// 007db2e8  0fb64732             movzx eax, byte ptr [edi + 0x32]
// 007db2ec  83e801               sub eax, 1
// 007db2ef  53                   push ebx
// 007db2f0  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007db2f4  56                   push esi
// 007db2f5  781f                 js 0x7db316
// 007db2f7  8b0f                 mov ecx, dword ptr [edi]
// 007db2f9  8b7118               mov esi, dword ptr [ecx + 0x18]
// 007db2fc  8d9447ac000000       lea edx, [edi + eax*2 + 0xac]
// 007db303  0fb70a               movzx ecx, word ptr [edx]
// 007db306  8d0c49               lea ecx, [ecx + ecx*2]
// 007db309  3b1c8e               cmp ebx, dword ptr [esi + ecx*4]
// 007db30c  7425                 je 0x7db333
// 007db30e  48                   dec eax
// 007db30f  83ea02               sub edx, 2
// 007db312  85c0                 test eax, eax
// 007db314  7ded                 jge 0x7db303
// 007db316  8b742418             mov esi, dword ptr [esp + 0x18]
// 007db31a  8b4708               mov eax, dword ptr [edi + 8]
// 007db31d  6a00                 push 0
// 007db31f  56                   push esi
// 007db320  53                   push ebx
// 007db321  50                   push eax
// 007db322  e899ffffff           call 0x7db2c0
// 007db327  83c410               add esp, 0x10
// 007db32a  83f808               cmp eax, 8
// 007db32d  7553                 jne 0x7db382
// 007db32f  5e                   pop esi
// 007db330  5b                   pop ebx
// 007db331  5f                   pop edi
// 007db332  c3                   ret 
// 007db333  85c0                 test eax, eax
// 007db335  7cdf                 jl 0x7db316
// 007db337  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007db33b  83caff               or edx, 0xffffffff
// 007db33e  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007db343  895110               mov dword ptr [ecx + 0x10], edx
// 007db346  895114               mov dword ptr [ecx + 0x14], edx
// 007db349  c70106000000         mov dword ptr [ecx], 6
// 007db34f  894108               mov dword ptr [ecx + 8], eax
// 007db352  7525                 jne 0x7db379
// 007db354  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 007db357  85c9                 test ecx, ecx
// 007db359  741e                 je 0x7db379
// 007db35b  eb03                 jmp 0x7db360
// 007db35d  8d4900               lea ecx, [ecx]
// 007db360  0fb65108             movzx edx, byte ptr [ecx + 8]
// 007db364  3bd0                 cmp edx, eax
// 007db366  7e0d                 jle 0x7db375
// 007db368  8b09                 mov ecx, dword ptr [ecx]
// 007db36a  85c9                 test ecx, ecx
// 007db36c  75f2                 jne 0x7db360
// 007db36e  5e                   pop esi
// 007db36f  5b                   pop ebx
// 007db370  8d4106               lea eax, [ecx + 6]
// 007db373  5f                   pop edi
// 007db374  c3                   ret 
// 007db375  c6410901             mov byte ptr [ecx + 9], 1
// 007db379  5e                   pop esi
// 007db37a  5b                   pop ebx
// 007db37b  b806000000           mov eax, 6
// 007db380  5f                   pop edi
// 007db381  c3                   ret 
// 007db382  56                   push esi
// 007db383  53                   push ebx
// 007db384  e8f7fdffff           call 0x7db180
// 007db389  83c408               add esp, 8
// 007db38c  894608               mov dword ptr [esi + 8], eax
// 007db38f  c70607000000         mov dword ptr [esi], 7
// 007db395  5e                   pop esi
// 007db396  5b                   pop ebx
// 007db397  b807000000           mov eax, 7
// 007db39c  5f                   pop edi
// 007db39d  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?singlevaraux@@YAHPAUFuncState@@PATTString@@PAUexpdesc@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
