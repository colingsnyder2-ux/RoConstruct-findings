// from server: 100% by auto
// roc 2008-06 00664720  unit: seg_00660000  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00664720
//
// 00664720  83ec5c               sub esp, 0x5c
// 00664723  53                   push ebx
// 00664724  55                   push ebp
// 00664725  57                   push edi
// 00664726  8b3e                 mov edi, dword ptr [esi]
// 00664728  33ed                 xor ebp, ebp
// 0066472a  57                   push edi
// 0066472b  8bde                 mov ebx, esi
// 0066472d  896c2410             mov dword ptr [esp + 0x10], ebp
// 00664731  897c2418             mov dword ptr [esp + 0x18], edi
// 00664735  e816f9ffff           call 0x664050
// 0066473a  8b4638               mov eax, dword ptr [esi + 0x38]
// 0066473d  8b08                 mov ecx, dword ptr [eax]
// 0066473f  83c404               add esp, 4
// 00664742  8d51ff               lea edx, [ecx - 1]
// 00664745  8910                 mov dword ptr [eax], edx
// 00664747  85c9                 test ecx, ecx
// 00664749  760f                 jbe 0x66475a
// 0066474b  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0066474e  8b5104               mov edx, dword ptr [ecx + 4]
// 00664751  0fb602               movzx eax, byte ptr [edx]
// 00664754  42                   inc edx
// 00664755  895104               mov dword ptr [ecx + 4], edx
// 00664758  eb0c                 jmp 0x664766
// 0066475a  8b4638               mov eax, dword ptr [esi + 0x38]
// 0066475d  50                   push eax
// 0066475e  e8cdb0ffff           call 0x65f830
// 00664763  83c404               add esp, 4
// 00664766  8906                 mov dword ptr [esi], eax
// 00664768  83f83d               cmp eax, 0x3d
// 0066476b  0f85dd000000         jne 0x66484e
// 00664771  8d68c4               lea ebp, [eax - 0x3c]
// 00664774  8b7e3c               mov edi, dword ptr [esi + 0x3c]
// 00664777  8b5704               mov edx, dword ptr [edi + 4]
// 0066477a  8b4708               mov eax, dword ptr [edi + 8]
// 0066477d  8b0e                 mov ecx, dword ptr [esi]
// 0066477f  03d5                 add edx, ebp
// 00664781  894c2410             mov dword ptr [esp + 0x10], ecx
// 00664785  3bd0                 cmp edx, eax
// 00664787  7676                 jbe 0x6647ff
// 00664789  3dfeffff7f           cmp eax, 0x7ffffffe
// 0066478e  723d                 jb 0x6647cd
// 00664790  8b4640               mov eax, dword ptr [esi + 0x40]
// 00664793  6a50                 push 0x50
// 00664795  83c010               add eax, 0x10
// 00664798  50                   push eax
// 00664799  8d4c2420             lea ecx, [esp + 0x20]
// 0066479d  51                   push ecx
// 0066479e  e83de3fbff           call 0x622ae0
// 006647a3  8b5604               mov edx, dword ptr [esi + 4]
// 006647a6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006647a9  6880ca8400           push 0x84ca80
// 006647ae  52                   push edx
// 006647af  8d44242c             lea eax, [esp + 0x2c]
// 006647b3  50                   push eax
// 006647b4  68104a8400           push 0x844a10
// 006647b9  51                   push ecx
// 006647ba  e801e3fbff           call 0x622ac0
// 006647bf  8b5634               mov edx, dword ptr [esi + 0x34]
// 006647c2  6a03                 push 3
// 006647c4  52                   push edx
// 006647c5  e886d8fbff           call 0x622050
// 006647ca  83c428               add esp, 0x28
// 006647cd  8b4708               mov eax, dword ptr [edi + 8]
// 006647d0  8d1c00               lea ebx, [eax + eax]
// 006647d3  8d4b01               lea ecx, [ebx + 1]
// 006647d6  83f9fd               cmp ecx, -3
// 006647d9  7713                 ja 0x6647ee
// 006647db  8b17                 mov edx, dword ptr [edi]
// 006647dd  53                   push ebx
// 006647de  50                   push eax
// 006647df  8b4634               mov eax, dword ptr [esi + 0x34]
// 006647e2  52                   push edx
// 006647e3  50                   push eax
// 006647e4  e807bfffff           call 0x6606f0
// 006647e9  83c410               add esp, 0x10
// 006647ec  eb0c                 jmp 0x6647fa
// 006647ee  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006647f1  51                   push ecx
// 006647f2  e8d9beffff           call 0x6606d0
// 006647f7  83c404               add esp, 4
// 006647fa  8907                 mov dword ptr [edi], eax
// 006647fc  895f08               mov dword ptr [edi + 8], ebx
// 006647ff  8b4704               mov eax, dword ptr [edi + 4]
// 00664802  8b17                 mov edx, dword ptr [edi]
// 00664804  8a4c2410             mov cl, byte ptr [esp + 0x10]
// 00664808  880c02               mov byte ptr [edx + eax], cl
// 0066480b  016f04               add dword ptr [edi + 4], ebp
// 0066480e  8b4638               mov eax, dword ptr [esi + 0x38]
// 00664811  8b08                 mov ecx, dword ptr [eax]
// 00664813  8d51ff               lea edx, [ecx - 1]
// 00664816  8910                 mov dword ptr [eax], edx
// 00664818  85c9                 test ecx, ecx
// 0066481a  760f                 jbe 0x66482b
// 0066481c  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0066481f  8b5104               mov edx, dword ptr [ecx + 4]
// 00664822  0fb602               movzx eax, byte ptr [edx]
// 00664825  42                   inc edx
// 00664826  895104               mov dword ptr [ecx + 4], edx
// 00664829  eb0c                 jmp 0x664837
// 0066482b  8b4638               mov eax, dword ptr [esi + 0x38]
// 0066482e  50                   push eax
// 0066482f  e8fcafffff           call 0x65f830
// 00664834  83c404               add esp, 4
// 00664837  016c240c             add dword ptr [esp + 0xc], ebp
// 0066483b  8906                 mov dword ptr [esi], eax
// 0066483d  83f83d               cmp eax, 0x3d
// 00664840  0f842effffff         je 0x664774
// 00664846  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0066484a  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0066484e  393e                 cmp dword ptr [esi], edi
// 00664850  7509                 jne 0x66485b
// 00664852  5f                   pop edi
// 00664853  8bc5                 mov eax, ebp
// 00664855  5d                   pop ebp
// 00664856  5b                   pop ebx
// 00664857  83c45c               add esp, 0x5c
// 0066485a  c3                   ret 
// 0066485b  83c8ff               or eax, 0xffffffff
// 0066485e  5f                   pop edi
// 0066485f  2bc5                 sub eax, ebp
// 00664861  5d                   pop ebp
// 00664862  5b                   pop ebx
// 00664863  83c45c               add esp, 0x5c
// 00664866  c3                   ret 
// library lua-5.1.4/llex.c (function _skip_sep)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
