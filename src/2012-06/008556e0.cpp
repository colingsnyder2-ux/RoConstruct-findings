// from server: 100% by auto
// roc 2012-06 008556e0  unit: lua_exception  size: 1011 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008556e0
//
// 008556e0  51                   push ecx
// 008556e1  53                   push ebx
// 008556e2  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008556e6  55                   push ebp
// 008556e7  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008556eb  3beb                 cmp ebp, ebx
// 008556ed  0f8ddc030000         jge 0x855acf
// 008556f3  56                   push esi
// 008556f4  8b742414             mov esi, dword ptr [esp + 0x14]
// 008556f8  57                   push edi
// 008556f9  eb0d                 jmp 0x855708
// 008556fb  eb03                 jmp 0x855700
// 008556fd  8d4900               lea ecx, [ecx]
// 00855700  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00855704  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00855708  55                   push ebp
// 00855709  6a01                 push 1
// 0085570b  56                   push esi
// 0085570c  e8cfccfdff           call 0x8323e0
// 00855711  53                   push ebx
// 00855712  6a01                 push 1
// 00855714  56                   push esi
// 00855715  e8c6ccfdff           call 0x8323e0
// 0085571a  6a02                 push 2
// 0085571c  56                   push esi
// 0085571d  e8bec5fdff           call 0x831ce0
// 00855722  83c420               add esp, 0x20
// 00855725  85c0                 test eax, eax
// 00855727  743b                 je 0x855764
// 00855729  6a02                 push 2
// 0085572b  56                   push esi
// 0085572c  e87fc5fdff           call 0x831cb0
// 00855731  6afe                 push -2
// 00855733  56                   push esi
// 00855734  e877c5fdff           call 0x831cb0
// 00855739  6afc                 push -4
// 0085573b  56                   push esi
// 0085573c  e86fc5fdff           call 0x831cb0
// 00855741  6a01                 push 1
// 00855743  6a02                 push 2
// 00855745  56                   push esi
// 00855746  e8c5d0fdff           call 0x832810
// 0085574b  6aff                 push -1
// 0085574d  56                   push esi
// 0085574e  e86dc7fdff           call 0x831ec0
// 00855753  6afe                 push -2
// 00855755  56                   push esi
// 00855756  8bf8                 mov edi, eax
// 00855758  e8a3c3fdff           call 0x831b00
// 0085575d  83c434               add esp, 0x34
// 00855760  8bc7                 mov eax, edi
// 00855762  eb0d                 jmp 0x855771
// 00855764  6afe                 push -2
// 00855766  6aff                 push -1
// 00855768  56                   push esi
// 00855769  e892c6fdff           call 0x831e00
// 0085576e  83c40c               add esp, 0xc
// 00855771  85c0                 test eax, eax
// 00855773  7417                 je 0x85578c
// 00855775  55                   push ebp
// 00855776  6a01                 push 1
// 00855778  56                   push esi
// 00855779  e8e2cefdff           call 0x832660
// 0085577e  53                   push ebx
// 0085577f  6a01                 push 1
// 00855781  56                   push esi
// 00855782  e8d9cefdff           call 0x832660
// 00855787  83c418               add esp, 0x18
// 0085578a  eb0b                 jmp 0x855797
// 0085578c  6afd                 push -3
// 0085578e  56                   push esi
// 0085578f  e86cc3fdff           call 0x831b00
// 00855794  83c408               add esp, 8
// 00855797  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0085579b  8beb                 mov ebp, ebx
// 0085579d  2be8                 sub ebp, eax
// 0085579f  83fd01               cmp ebp, 1
// 008557a2  0f8425030000         je 0x855acd
// 008557a8  03c3                 add eax, ebx
// 008557aa  99                   cdq 
// 008557ab  2bc2                 sub eax, edx
// 008557ad  8bf8                 mov edi, eax
// 008557af  d1ff                 sar edi, 1
// 008557b1  57                   push edi
// 008557b2  6a01                 push 1
// 008557b4  56                   push esi
// 008557b5  e826ccfdff           call 0x8323e0
// 008557ba  8b442428             mov eax, dword ptr [esp + 0x28]
// 008557be  50                   push eax
// 008557bf  6a01                 push 1
// 008557c1  56                   push esi
// 008557c2  e819ccfdff           call 0x8323e0
// 008557c7  6a02                 push 2
// 008557c9  56                   push esi
// 008557ca  e811c5fdff           call 0x831ce0
// 008557cf  83c420               add esp, 0x20
// 008557d2  85c0                 test eax, eax
// 008557d4  743f                 je 0x855815
// 008557d6  6a02                 push 2
// 008557d8  56                   push esi
// 008557d9  e8d2c4fdff           call 0x831cb0
// 008557de  6afd                 push -3
// 008557e0  56                   push esi
// 008557e1  e8cac4fdff           call 0x831cb0
// 008557e6  6afd                 push -3
// 008557e8  56                   push esi
// 008557e9  e8c2c4fdff           call 0x831cb0
// 008557ee  6a01                 push 1
// 008557f0  6a02                 push 2
// 008557f2  56                   push esi
// 008557f3  e818d0fdff           call 0x832810
// 008557f8  6aff                 push -1
// 008557fa  56                   push esi
// 008557fb  e8c0c6fdff           call 0x831ec0
// 00855800  6afe                 push -2
// 00855802  56                   push esi
// 00855803  8bd8                 mov ebx, eax
// 00855805  e8f6c2fdff           call 0x831b00
// 0085580a  8bc3                 mov eax, ebx
// 0085580c  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 00855810  83c434               add esp, 0x34
// 00855813  eb0d                 jmp 0x855822
// 00855815  6aff                 push -1
// 00855817  6afe                 push -2
// 00855819  56                   push esi
// 0085581a  e8e1c5fdff           call 0x831e00
// 0085581f  83c40c               add esp, 0xc
// 00855822  85c0                 test eax, eax
// 00855824  741e                 je 0x855844
// 00855826  57                   push edi
// 00855827  6a01                 push 1
// 00855829  56                   push esi
// 0085582a  e831cefdff           call 0x832660
// 0085582f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00855833  51                   push ecx
// 00855834  6a01                 push 1
// 00855836  56                   push esi
// 00855837  e824cefdff           call 0x832660
// 0085583c  83c418               add esp, 0x18
// 0085583f  e992000000           jmp 0x8558d6
// 00855844  6afe                 push -2
// 00855846  56                   push esi
// 00855847  e8b4c2fdff           call 0x831b00
// 0085584c  53                   push ebx
// 0085584d  6a01                 push 1
// 0085584f  56                   push esi
// 00855850  e88bcbfdff           call 0x8323e0
// 00855855  6a02                 push 2
// 00855857  56                   push esi
// 00855858  e883c4fdff           call 0x831ce0
// 0085585d  83c41c               add esp, 0x1c
// 00855860  85c0                 test eax, eax
// 00855862  743f                 je 0x8558a3
// 00855864  6a02                 push 2
// 00855866  56                   push esi
// 00855867  e844c4fdff           call 0x831cb0
// 0085586c  6afe                 push -2
// 0085586e  56                   push esi
// 0085586f  e83cc4fdff           call 0x831cb0
// 00855874  6afc                 push -4
// 00855876  56                   push esi
// 00855877  e834c4fdff           call 0x831cb0
// 0085587c  6a01                 push 1
// 0085587e  6a02                 push 2
// 00855880  56                   push esi
// 00855881  e88acffdff           call 0x832810
// 00855886  6aff                 push -1
// 00855888  56                   push esi
// 00855889  e832c6fdff           call 0x831ec0
// 0085588e  6afe                 push -2
// 00855890  56                   push esi
// 00855891  8bd8                 mov ebx, eax
// 00855893  e868c2fdff           call 0x831b00
// 00855898  8bc3                 mov eax, ebx
// 0085589a  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 0085589e  83c434               add esp, 0x34
// 008558a1  eb0d                 jmp 0x8558b0
// 008558a3  6afe                 push -2
// 008558a5  6aff                 push -1
// 008558a7  56                   push esi
// 008558a8  e853c5fdff           call 0x831e00
// 008558ad  83c40c               add esp, 0xc
// 008558b0  85c0                 test eax, eax
// 008558b2  7417                 je 0x8558cb
// 008558b4  57                   push edi
// 008558b5  6a01                 push 1
// 008558b7  56                   push esi
// 008558b8  e8a3cdfdff           call 0x832660
// 008558bd  53                   push ebx
// 008558be  6a01                 push 1
// 008558c0  56                   push esi
// 008558c1  e89acdfdff           call 0x832660
// 008558c6  83c418               add esp, 0x18
// 008558c9  eb0b                 jmp 0x8558d6
// 008558cb  6afd                 push -3
// 008558cd  56                   push esi
// 008558ce  e82dc2fdff           call 0x831b00
// 008558d3  83c408               add esp, 8
// 008558d6  83fd02               cmp ebp, 2
// 008558d9  0f84ee010000         je 0x855acd
// 008558df  57                   push edi
// 008558e0  6a01                 push 1
// 008558e2  56                   push esi
// 008558e3  e8f8cafdff           call 0x8323e0
// 008558e8  6aff                 push -1
// 008558ea  56                   push esi
// 008558eb  e8c0c3fdff           call 0x831cb0
// 008558f0  8d6bff               lea ebp, [ebx - 1]
// 008558f3  55                   push ebp
// 008558f4  6a01                 push 1
// 008558f6  56                   push esi
// 008558f7  896c2430             mov dword ptr [esp + 0x30], ebp
// 008558fb  e8e0cafdff           call 0x8323e0
// 00855900  57                   push edi
// 00855901  6a01                 push 1
// 00855903  56                   push esi
// 00855904  e857cdfdff           call 0x832660
// 00855909  55                   push ebp
// 0085590a  6a01                 push 1
// 0085590c  56                   push esi
// 0085590d  e84ecdfdff           call 0x832660
// 00855912  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 00855916  83c438               add esp, 0x38
// 00855919  8da42400000000       lea esp, [esp]
// 00855920  43                   inc ebx
// 00855921  53                   push ebx
// 00855922  6a01                 push 1
// 00855924  56                   push esi
// 00855925  e8b6cafdff           call 0x8323e0
// 0085592a  6a02                 push 2
// 0085592c  56                   push esi
// 0085592d  e8aec3fdff           call 0x831ce0
// 00855932  83c414               add esp, 0x14
// 00855935  85c0                 test eax, eax
// 00855937  743b                 je 0x855974
// 00855939  6a02                 push 2
// 0085593b  56                   push esi
// 0085593c  e86fc3fdff           call 0x831cb0
// 00855941  6afe                 push -2
// 00855943  56                   push esi
// 00855944  e867c3fdff           call 0x831cb0
// 00855949  6afc                 push -4
// 0085594b  56                   push esi
// 0085594c  e85fc3fdff           call 0x831cb0
// 00855951  6a01                 push 1
// 00855953  6a02                 push 2
// 00855955  56                   push esi
// 00855956  e8b5cefdff           call 0x832810
// 0085595b  6aff                 push -1
// 0085595d  56                   push esi
// 0085595e  e85dc5fdff           call 0x831ec0
// 00855963  6afe                 push -2
// 00855965  56                   push esi
// 00855966  8bf8                 mov edi, eax
// 00855968  e893c1fdff           call 0x831b00
// 0085596d  83c434               add esp, 0x34
// 00855970  8bc7                 mov eax, edi
// 00855972  eb0d                 jmp 0x855981
// 00855974  6afe                 push -2
// 00855976  6aff                 push -1
// 00855978  56                   push esi
// 00855979  e882c4fdff           call 0x831e00
// 0085597e  83c40c               add esp, 0xc
// 00855981  85c0                 test eax, eax
// 00855983  742b                 je 0x8559b0
// 00855985  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 00855989  7e0e                 jle 0x855999
// 0085598b  68943abd00           push 0xbd3a94
// 00855990  56                   push esi
// 00855991  e80ad5fdff           call 0x832ea0
// 00855996  83c408               add esp, 8
// 00855999  6afe                 push -2
// 0085599b  56                   push esi
// 0085599c  e85fc1fdff           call 0x831b00
// 008559a1  83c408               add esp, 8
// 008559a4  e977ffffff           jmp 0x855920
// 008559a9  8da42400000000       lea esp, [esp]
// 008559b0  4d                   dec ebp
// 008559b1  55                   push ebp
// 008559b2  6a01                 push 1
// 008559b4  56                   push esi
// 008559b5  e826cafdff           call 0x8323e0
// 008559ba  6a02                 push 2
// 008559bc  56                   push esi
// 008559bd  e81ec3fdff           call 0x831ce0
// 008559c2  83c414               add esp, 0x14
// 008559c5  85c0                 test eax, eax
// 008559c7  743b                 je 0x855a04
// 008559c9  6a02                 push 2
// 008559cb  56                   push esi
// 008559cc  e8dfc2fdff           call 0x831cb0
// 008559d1  6afc                 push -4
// 008559d3  56                   push esi
// 008559d4  e8d7c2fdff           call 0x831cb0
// 008559d9  6afd                 push -3
// 008559db  56                   push esi
// 008559dc  e8cfc2fdff           call 0x831cb0
// 008559e1  6a01                 push 1
// 008559e3  6a02                 push 2
// 008559e5  56                   push esi
// 008559e6  e825cefdff           call 0x832810
// 008559eb  6aff                 push -1
// 008559ed  56                   push esi
// 008559ee  e8cdc4fdff           call 0x831ec0
// 008559f3  6afe                 push -2
// 008559f5  56                   push esi
// 008559f6  8bf8                 mov edi, eax
// 008559f8  e803c1fdff           call 0x831b00
// 008559fd  83c434               add esp, 0x34
// 00855a00  8bc7                 mov eax, edi
// 00855a02  eb0d                 jmp 0x855a11
// 00855a04  6aff                 push -1
// 00855a06  6afd                 push -3
// 00855a08  56                   push esi
// 00855a09  e8f2c3fdff           call 0x831e00
// 00855a0e  83c40c               add esp, 0xc
// 00855a11  85c0                 test eax, eax
// 00855a13  7424                 je 0x855a39
// 00855a15  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 00855a19  7d0e                 jge 0x855a29
// 00855a1b  68943abd00           push 0xbd3a94
// 00855a20  56                   push esi
// 00855a21  e87ad4fdff           call 0x832ea0
// 00855a26  83c408               add esp, 8
// 00855a29  6afe                 push -2
// 00855a2b  56                   push esi
// 00855a2c  e8cfc0fdff           call 0x831b00
// 00855a31  83c408               add esp, 8
// 00855a34  e977ffffff           jmp 0x8559b0
// 00855a39  3beb                 cmp ebp, ebx
// 00855a3b  7c1a                 jl 0x855a57
// 00855a3d  53                   push ebx
// 00855a3e  6a01                 push 1
// 00855a40  56                   push esi
// 00855a41  e81accfdff           call 0x832660
// 00855a46  55                   push ebp
// 00855a47  6a01                 push 1
// 00855a49  56                   push esi
// 00855a4a  e811ccfdff           call 0x832660
// 00855a4f  83c418               add esp, 0x18
// 00855a52  e9c9feffff           jmp 0x855920
// 00855a57  6afc                 push -4
// 00855a59  56                   push esi
// 00855a5a  e8a1c0fdff           call 0x831b00
// 00855a5f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00855a63  57                   push edi
// 00855a64  6a01                 push 1
// 00855a66  56                   push esi
// 00855a67  e874c9fdff           call 0x8323e0
// 00855a6c  53                   push ebx
// 00855a6d  6a01                 push 1
// 00855a6f  56                   push esi
// 00855a70  e86bc9fdff           call 0x8323e0
// 00855a75  57                   push edi
// 00855a76  6a01                 push 1
// 00855a78  56                   push esi
// 00855a79  e8e2cbfdff           call 0x832660
// 00855a7e  53                   push ebx
// 00855a7f  6a01                 push 1
// 00855a81  56                   push esi
// 00855a82  e8d9cbfdff           call 0x832660
// 00855a87  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 00855a8b  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00855a8f  8bd5                 mov edx, ebp
// 00855a91  8bc3                 mov eax, ebx
// 00855a93  2bd3                 sub edx, ebx
// 00855a95  2bc7                 sub eax, edi
// 00855a97  83c438               add esp, 0x38
// 00855a9a  3bc2                 cmp eax, edx
// 00855a9c  7d0e                 jge 0x855aac
// 00855a9e  4b                   dec ebx
// 00855a9f  8d4b02               lea ecx, [ebx + 2]
// 00855aa2  8bc7                 mov eax, edi
// 00855aa4  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00855aa8  8bf9                 mov edi, ecx
// 00855aaa  eb0e                 jmp 0x855aba
// 00855aac  8d4301               lea eax, [ebx + 1]
// 00855aaf  8d50fe               lea edx, [eax - 2]
// 00855ab2  8bdd                 mov ebx, ebp
// 00855ab4  89542420             mov dword ptr [esp + 0x20], edx
// 00855ab8  8bea                 mov ebp, edx
// 00855aba  53                   push ebx
// 00855abb  50                   push eax
// 00855abc  56                   push esi
// 00855abd  e81efcffff           call 0x8556e0
// 00855ac2  83c40c               add esp, 0xc
// 00855ac5  3bfd                 cmp edi, ebp
// 00855ac7  0f8c33fcffff         jl 0x855700
// 00855acd  5f                   pop edi
// 00855ace  5e                   pop esi
// 00855acf  5d                   pop ebp
// 00855ad0  5b                   pop ebx
// 00855ad1  59                   pop ecx
// 00855ad2  c3                   ret 
// library lua-5.1.4/ltablib.c (function _auxsort)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
