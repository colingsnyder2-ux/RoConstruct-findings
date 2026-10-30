// roc 2007-03 00524700  unit: seg_00520000  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00524700
//
// 00524700  81ec8c010000         sub esp, 0x18c
// 00524706  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0052470b  33c4                 xor eax, esp
// 0052470d  89842488010000       mov dword ptr [esp + 0x188], eax
// 00524714  8b842490010000       mov eax, dword ptr [esp + 0x190]
// 0052471b  53                   push ebx
// 0052471c  55                   push ebp
// 0052471d  8bac24a0010000       mov ebp, dword ptr [esp + 0x1a0]
// 00524724  56                   push esi
// 00524725  57                   push edi
// 00524726  8bbc24a4010000       mov edi, dword ptr [esp + 0x1a4]
// 0052472d  8bf1                 mov esi, ecx
// 0052472f  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 00524735  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00524738  c1fd02               sar ebp, 2
// 0052473b  c1ff02               sar edi, 2
// 0052473e  c1fe03               sar esi, 3
// 00524741  89ac24a8010000       mov dword ptr [esp + 0x1a8], ebp
// 00524748  8d8c2498000000       lea ecx, [esp + 0x98]
// 0052474f  51                   push ecx
// 00524750  89bc24a8010000       mov dword ptr [esp + 0x1a8], edi
// 00524757  8bde                 mov ebx, esi
// 00524759  c1e505               shl ebp, 5
// 0052475c  c1e705               shl edi, 5
// 0052475f  c1e305               shl ebx, 5
// 00524762  83c504               add ebp, 4
// 00524765  83c704               add edi, 4
// 00524768  83c302               add ebx, 2
// 0052476b  55                   push ebp
// 0052476c  57                   push edi
// 0052476d  8bcb                 mov ecx, ebx
// 0052476f  8944241c             mov dword ptr [esp + 0x1c], eax
// 00524773  89542420             mov dword ptr [esp + 0x20], edx
// 00524777  e834fcffff           call 0x5243b0
// 0052477c  8d542424             lea edx, [esp + 0x24]
// 00524780  52                   push edx
// 00524781  8b542420             mov edx, dword ptr [esp + 0x20]
// 00524785  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 0052478c  51                   push ecx
// 0052478d  50                   push eax
// 0052478e  55                   push ebp
// 0052478f  53                   push ebx
// 00524790  57                   push edi
// 00524791  52                   push edx
// 00524792  e8e9fdffff           call 0x524580
// 00524797  8b8424d0010000       mov eax, dword ptr [esp + 0x1d0]
// 0052479e  8b9424cc010000       mov edx, dword ptr [esp + 0x1cc]
// 005247a5  03f6                 add esi, esi
// 005247a7  03f6                 add esi, esi
// 005247a9  03f6                 add esi, esi
// 005247ab  03c0                 add eax, eax
// 005247ad  03c0                 add eax, eax
// 005247af  c1e605               shl esi, 5
// 005247b2  03d2                 add edx, edx
// 005247b4  03f0                 add esi, eax
// 005247b6  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005247ba  03d2                 add edx, edx
// 005247bc  83c428               add esp, 0x28
// 005247bf  03f6                 add esi, esi
// 005247c1  8d4c2418             lea ecx, [esp + 0x18]
// 005247c5  89742410             mov dword ptr [esp + 0x10], esi
// 005247c9  8d3c90               lea edi, [eax + edx*4]
// 005247cc  bd04000000           mov ebp, 4
// 005247d1  8b542410             mov edx, dword ptr [esp + 0x10]
// 005247d5  bb08000000           mov ebx, 8
// 005247da  8d9b00000000         lea ebx, [ebx]
// 005247e0  8b07                 mov eax, dword ptr [edi]
// 005247e2  0fb631               movzx esi, byte ptr [ecx]
// 005247e5  6683c601             add si, 1
// 005247e9  03c2                 add eax, edx
// 005247eb  668930               mov word ptr [eax], si
// 005247ee  0fb67101             movzx esi, byte ptr [ecx + 1]
// 005247f2  6683c601             add si, 1
// 005247f6  66897002             mov word ptr [eax + 2], si
// 005247fa  0fb67102             movzx esi, byte ptr [ecx + 2]
// 005247fe  6683c601             add si, 1
// 00524802  66897004             mov word ptr [eax + 4], si
// 00524806  0fb67103             movzx esi, byte ptr [ecx + 3]
// 0052480a  6683c601             add si, 1
// 0052480e  83c104               add ecx, 4
// 00524811  83c240               add edx, 0x40
// 00524814  83eb01               sub ebx, 1
// 00524817  66897006             mov word ptr [eax + 6], si
// 0052481b  75c3                 jne 0x5247e0
// 0052481d  83c704               add edi, 4
// 00524820  83ed01               sub ebp, 1
// 00524823  75ac                 jne 0x5247d1
// 00524825  8b8c2498010000       mov ecx, dword ptr [esp + 0x198]
// 0052482c  5f                   pop edi
// 0052482d  5e                   pop esi
// 0052482e  5d                   pop ebp
// 0052482f  5b                   pop ebx
// 00524830  33cc                 xor ecx, esp
// 00524832  e86fa60f00           call 0x61eea6
// 00524837  81c48c010000         add esp, 0x18c
// 0052483d  c3                   ret 
// library jpeg-6b/jquant2.c (function _fill_inverse_cmap)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: jpeg-6b jquant2.c
