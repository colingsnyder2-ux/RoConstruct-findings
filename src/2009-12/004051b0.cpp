// roc 2009-12 004051b0  unit: ATL::CRegObject  size: 938 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004051b0
//
// 004051b0  55                   push ebp
// 004051b1  8bec                 mov ebp, esp
// 004051b3  6aff                 push -1
// 004051b5  686e719200           push 0x92716e
// 004051ba  64a100000000         mov eax, dword ptr fs:[0]
// 004051c0  50                   push eax
// 004051c1  64892500000000       mov dword ptr fs:[0], esp
// 004051c8  51                   push ecx
// 004051c9  b820110000           mov eax, 0x1120
// 004051ce  e83df83e00           call 0x7f4a10
// 004051d3  53                   push ebx
// 004051d4  56                   push esi
// 004051d5  57                   push edi
// 004051d6  8d85d0eeffff         lea eax, [ebp - 0x1130]
// 004051dc  8965f0               mov dword ptr [ebp - 0x10], esp
// 004051df  8bf1                 mov esi, ecx
// 004051e1  33ff                 xor edi, edi
// 004051e3  50                   push eax
// 004051e4  8975e4               mov dword ptr [ebp - 0x1c], esi
// 004051e7  897dec               mov dword ptr [ebp - 0x14], edi
// 004051ea  e861e0ffff           call 0x403250
// 004051ef  3bc7                 cmp eax, edi
// 004051f1  0f8c4a030000         jl 0x405541
// 004051f7  8d4dec               lea ecx, [ebp - 0x14]
// 004051fa  51                   push ecx
// 004051fb  8d95d0eeffff         lea edx, [ebp - 0x1130]
// 00405201  52                   push edx
// 00405202  e889deffff           call 0x403090
// 00405207  83c408               add esp, 8
// 0040520a  85c0                 test eax, eax
// 0040520c  750a                 jne 0x405218
// 0040520e  b809000280           mov eax, 0x80020009
// 00405213  e929030000           jmp 0x405541
// 00405218  8bce                 mov ecx, esi
// 0040521a  e8d1dfffff           call 0x4031f0
// 0040521f  8d85d0eeffff         lea eax, [ebp - 0x1130]
// 00405225  50                   push eax
// 00405226  8bce                 mov ecx, esi
// 00405228  e823e0ffff           call 0x403250
// 0040522d  3bc7                 cmp eax, edi
// 0040522f  0f8c0c030000         jl 0x405541
// 00405235  0fb745ec             movzx eax, word ptr [ebp - 0x14]
// 00405239  83f813               cmp eax, 0x13
// 0040523c  0f8ff7010000         jg 0x405439
// 00405242  0f8440010000         je 0x405388
// 00405248  83f808               cmp eax, 8
// 0040524b  0f841b010000         je 0x40536c
// 00405251  83f811               cmp eax, 0x11
// 00405254  0f85d2020000         jne 0x40552c
// 0040525a  8d8dd0eeffff         lea ecx, [ebp - 0x1130]
// 00405260  51                   push ecx
// 00405261  ff1518b29800         call dword ptr [0x98b218]
// 00405267  8bd8                 mov ebx, eax
// 00405269  895de8               mov dword ptr [ebp - 0x18], ebx
// 0040526c  f6c301               test bl, 1
// 0040526f  7560                 jne 0x4052d1
// 00405271  99                   cdq 
// 00405272  2bc2                 sub eax, edx
// 00405274  8bf8                 mov edi, eax
// 00405276  d1ff                 sar edi, 1
// 00405278  897dec               mov dword ptr [ebp - 0x14], edi
// 0040527b  c785d0feffff00000000 mov dword ptr [ebp - 0x130], 0
// 00405285  c745fc04000000       mov dword ptr [ebp - 4], 4
// 0040528c  57                   push edi
// 0040528d  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 00405293  c645fc05             mov byte ptr [ebp - 4], 5
// 00405297  e824f9ffff           call 0x404bc0
// 0040529c  eb14                 jmp 0x4052b2
// 0040529e  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 004052a1  e896e83e00           call 0x7f3b3c
// 004052a6  b8ac524000           mov eax, 0x4052ac
// 004052ab  c3                   ret 
// 004052ac  8b5de8               mov ebx, dword ptr [ebp - 0x18]
// 004052af  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 004052b2  8b85d0feffff         mov eax, dword ptr [ebp - 0x130]
// 004052b8  85c0                 test eax, eax
// 004052ba  751f                 jne 0x4052db
// 004052bc  8d95d4feffff         lea edx, [ebp - 0x12c]
// 004052c2  85d2                 test edx, edx
// 004052c4  740b                 je 0x4052d1
// 004052c6  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 004052cc  e8efbc4400           call 0x850fc0
// 004052d1  b805400080           mov eax, 0x80004005
// 004052d6  e966020000           jmp 0x405541
// 004052db  57                   push edi
// 004052dc  6a00                 push 0
// 004052de  50                   push eax
// 004052df  e8c0f73e00           call 0x7f4aa4
// 004052e4  83c40c               add esp, 0xc
// 004052e7  33f6                 xor esi, esi
// 004052e9  85db                 test ebx, ebx
// 004052eb  7e3f                 jle 0x40532c
// 004052ed  8d4900               lea ecx, [ecx]
// 004052f0  0fb69435d0eeffff     movzx edx, byte ptr [ebp + esi - 0x1130]
// 004052f8  8b8dd0feffff         mov ecx, dword ptr [ebp - 0x130]
// 004052fe  8bc6                 mov eax, esi
// 00405300  d1e8                 shr eax, 1
// 00405302  52                   push edx
// 00405303  8d3c08               lea edi, [eax + ecx]
// 00405306  e835deffff           call 0x403140
// 0040530b  8bce                 mov ecx, esi
// 0040530d  83e101               and ecx, 1
// 00405310  03c9                 add ecx, ecx
// 00405312  03c9                 add ecx, ecx
// 00405314  8bd1                 mov edx, ecx
// 00405316  b904000000           mov ecx, 4
// 0040531b  2bca                 sub ecx, edx
// 0040531d  d2e0                 shl al, cl
// 0040531f  46                   inc esi
// 00405320  83c404               add esp, 4
// 00405323  0807                 or byte ptr [edi], al
// 00405325  3bf3                 cmp esi, ebx
// 00405327  7cc7                 jl 0x4052f0
// 00405329  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 0040532c  8b8dd0feffff         mov ecx, dword ptr [ebp - 0x130]
// 00405332  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00405335  8b4508               mov eax, dword ptr [ebp + 8]
// 00405338  8b00                 mov eax, dword ptr [eax]
// 0040533a  57                   push edi
// 0040533b  51                   push ecx
// 0040533c  6a03                 push 3
// 0040533e  6a00                 push 0
// 00405340  52                   push edx
// 00405341  50                   push eax
// 00405342  ff1514b09800         call dword ptr [0x98b014]
// 00405348  8bf0                 mov esi, eax
// 0040534a  8d85d4feffff         lea eax, [ebp - 0x12c]
// 00405350  3985d0feffff         cmp dword ptr [ebp - 0x130], eax
// 00405356  0f84bc010000         je 0x405518
// 0040535c  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 00405362  e859bc4400           call 0x850fc0
// 00405367  e9ac010000           jmp 0x405518
// 0040536c  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0040536f  6a01                 push 1
// 00405371  8d8dd0eeffff         lea ecx, [ebp - 0x1130]
// 00405377  51                   push ecx
// 00405378  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040537b  52                   push edx
// 0040537c  e86fdbffff           call 0x402ef0
// 00405381  8bf0                 mov esi, eax
// 00405383  e990010000           jmp 0x405518
// 00405388  897dec               mov dword ptr [ebp - 0x14], edi
// 0040538b  8d85d0eeffff         lea eax, [ebp - 0x1130]
// 00405391  50                   push eax
// 00405392  c745fc03000000       mov dword ptr [ebp - 4], 3
// 00405399  ff1518b29800         call dword ptr [0x98b218]
// 0040539f  40                   inc eax
// 004053a0  6a02                 push 2
// 004053a2  50                   push eax
// 004053a3  8d4de8               lea ecx, [ebp - 0x18]
// 004053a6  51                   push ecx
// 004053a7  8945e8               mov dword ptr [ebp - 0x18], eax
// 004053aa  e8d1d6ffff           call 0x402a80
// 004053af  83c40c               add esp, 0xc
// 004053b2  85c0                 test eax, eax
// 004053b4  7c45                 jl 0x4053fb
// 004053b6  8b75e8               mov esi, dword ptr [ebp - 0x18]
// 004053b9  81fe00040000         cmp esi, 0x400
// 004053bf  7f1b                 jg 0x4053dc
// 004053c1  56                   push esi
// 004053c2  e829e7ffff           call 0x403af0
// 004053c7  83c404               add esp, 4
// 004053ca  84c0                 test al, al
// 004053cc  740e                 je 0x4053dc
// 004053ce  8bc6                 mov eax, esi
// 004053d0  e86bf63e00           call 0x7f4a40
// 004053d5  8965f0               mov dword ptr [ebp - 0x10], esp
// 004053d8  8bc4                 mov eax, esp
// 004053da  eb09                 jmp 0x4053e5
// 004053dc  56                   push esi
// 004053dd  8d4dec               lea ecx, [ebp - 0x14]
// 004053e0  e8abecffff           call 0x404090
// 004053e5  6a03                 push 3
// 004053e7  d1ee                 shr esi, 1
// 004053e9  56                   push esi
// 004053ea  8d95d0eeffff         lea edx, [ebp - 0x1130]
// 004053f0  52                   push edx
// 004053f1  50                   push eax
// 004053f2  e8d9d6ffff           call 0x402ad0
// 004053f7  3bc7                 cmp eax, edi
// 004053f9  7512                 jne 0x40540d
// 004053fb  8d4dec               lea ecx, [ebp - 0x14]
// 004053fe  e87de4ffff           call 0x403880
// 00405403  b80e000780           mov eax, 0x8007000e
// 00405408  e934010000           jmp 0x405541
// 0040540d  8d4de0               lea ecx, [ebp - 0x20]
// 00405410  51                   push ecx
// 00405411  57                   push edi
// 00405412  57                   push edi
// 00405413  50                   push eax
// 00405414  ff151cba9800         call dword ptr [0x98ba1c]
// 0040541a  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 0040541d  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00405420  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00405423  52                   push edx
// 00405424  50                   push eax
// 00405425  e8a6daffff           call 0x402ed0
// 0040542a  8d4dec               lea ecx, [ebp - 0x14]
// 0040542d  8bf0                 mov esi, eax
// 0040542f  e84ce4ffff           call 0x403880
// 00405434  e9df000000           jmp 0x405518
// 00405439  3d08400000           cmp eax, 0x4008
// 0040543e  0f85e8000000         jne 0x40552c
// 00405444  8d8dd0eeffff         lea ecx, [ebp - 0x1130]
// 0040544a  51                   push ecx
// 0040544b  ff1518b29800         call dword ptr [0x98b218]
// 00405451  83c002               add eax, 2
// 00405454  89bdd0feffff         mov dword ptr [ebp - 0x130], edi
// 0040545a  897dfc               mov dword ptr [ebp - 4], edi
// 0040545d  50                   push eax
// 0040545e  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 00405464  c645fc01             mov byte ptr [ebp - 4], 1
// 00405468  e853f7ffff           call 0x404bc0
// 0040546d  8bbdd0feffff         mov edi, dword ptr [ebp - 0x130]
// 00405473  85ff                 test edi, edi
// 00405475  0f8483000000         je 0x4054fe
// 0040547b  80bdd0eeffff00       cmp byte ptr [ebp - 0x1130], 0
// 00405482  8db5d0eeffff         lea esi, [ebp - 0x1130]
// 00405488  7450                 je 0x4054da
// 0040548a  8b1dd4cb9800         mov ebx, dword ptr [0x98cbd4]
// 00405490  56                   push esi
// 00405491  ffd3                 call ebx
// 00405493  8a0e                 mov cl, byte ptr [esi]
// 00405495  80f95c               cmp cl, 0x5c
// 00405498  751e                 jne 0x4054b8
// 0040549a  803830               cmp byte ptr [eax], 0x30
// 0040549d  7519                 jne 0x4054b8
// 0040549f  c60700               mov byte ptr [edi], 0
// 004054a2  50                   push eax
// 004054a3  47                   inc edi
// 004054a4  ffd3                 call ebx
// 004054a6  8bf0                 mov esi, eax
// 004054a8  eb2b                 jmp 0x4054d5
// 004054aa  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 004054ad  e88ae63e00           call 0x7f3b3c
// 004054b2  b86d544000           mov eax, 0x40546d
// 004054b7  c3                   ret 
// 004054b8  880f                 mov byte ptr [edi], cl
// 004054ba  0fb616               movzx edx, byte ptr [esi]
// 004054bd  52                   push edx
// 004054be  ff1510b29800         call dword ptr [0x98b210]
// 004054c4  85c0                 test eax, eax
// 004054c6  740b                 je 0x4054d3
// 004054c8  8a4601               mov al, byte ptr [esi + 1]
// 004054cb  46                   inc esi
// 004054cc  47                   inc edi
// 004054cd  84c0                 test al, al
// 004054cf  7409                 je 0x4054da
// 004054d1  8807                 mov byte ptr [edi], al
// 004054d3  47                   inc edi
// 004054d4  46                   inc esi
// 004054d5  803e00               cmp byte ptr [esi], 0
// 004054d8  75b6                 jne 0x405490
// 004054da  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004054dd  c60700               mov byte ptr [edi], 0
// 004054e0  c6470100             mov byte ptr [edi + 1], 0
// 004054e4  8b85d0feffff         mov eax, dword ptr [ebp - 0x130]
// 004054ea  50                   push eax
// 004054eb  51                   push ecx
// 004054ec  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004054ef  e83cdaffff           call 0x402f30
// 004054f4  8bbdd0feffff         mov edi, dword ptr [ebp - 0x130]
// 004054fa  8bf0                 mov esi, eax
// 004054fc  eb05                 jmp 0x405503
// 004054fe  be0e000000           mov esi, 0xe
// 00405503  8d95d4feffff         lea edx, [ebp - 0x12c]
// 00405509  3bfa                 cmp edi, edx
// 0040550b  740b                 je 0x405518
// 0040550d  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 00405513  e8a8ba4400           call 0x850fc0
// 00405518  33ff                 xor edi, edi
// 0040551a  3bf7                 cmp esi, edi
// 0040551c  740b                 je 0x405529
// 0040551e  56                   push esi
// 0040551f  e85cd7ffff           call 0x402c80
// 00405524  83c404               add esp, 4
// 00405527  eb18                 jmp 0x405541
// 00405529  8b75e4               mov esi, dword ptr [ebp - 0x1c]
// 0040552c  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0040552f  50                   push eax
// 00405530  8bce                 mov ecx, esi
// 00405532  e819ddffff           call 0x403250
// 00405537  33c9                 xor ecx, ecx
// 00405539  3bc7                 cmp eax, edi
// 0040553b  0f9dc1               setge cl
// 0040553e  49                   dec ecx
// 0040553f  23c1                 and eax, ecx
// 00405541  8da5c4eeffff         lea esp, [ebp - 0x113c]
// 00405547  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040554a  64890d00000000       mov dword ptr fs:[0], ecx
// 00405551  5f                   pop edi
// 00405552  5e                   pop esi
// 00405553  5b                   pop ebx
// 00405554  8be5                 mov esp, ebp
// 00405556  5d                   pop ebp
// 00405557  c20c00               ret 0xc
// copied from an identical function in another client (function ?AddValue@CRegParser@ATL@@IAEJAAVCRegKey@2@PBDPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_04fd8290f2921435.cpp