// roc 2010-06 005787a0  unit: seg_00570000  size: 412 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005787a0
//
// 005787a0  81ec04030000         sub esp, 0x304
// 005787a6  56                   push esi
// 005787a7  8bb4240c030000       mov esi, dword ptr [esp + 0x30c]
// 005787ae  8b4668               mov eax, dword ptr [esi + 0x68]
// 005787b1  a801                 test al, 1
// 005787b3  7507                 jne 0x5787bc
// 005787b5  68206ea200           push 0xa26e20
// 005787ba  eb31                 jmp 0x5787ed
// 005787bc  a804                 test al, 4
// 005787be  7424                 je 0x5787e4
// 005787c0  68086ea200           push 0xa26e08
// 005787c5  56                   push esi
// 005787c6  e89593ffff           call 0x571b60
// 005787cb  8b84241c030000       mov eax, dword ptr [esp + 0x31c]
// 005787d2  50                   push eax
// 005787d3  56                   push esi
// 005787d4  e837fdffff           call 0x578510
// 005787d9  83c410               add esp, 0x10
// 005787dc  5e                   pop esi
// 005787dd  81c404030000         add esp, 0x304
// 005787e3  c3                   ret 
// 005787e4  a802                 test al, 2
// 005787e6  740e                 je 0x5787f6
// 005787e8  68f06da200           push 0xa26df0
// 005787ed  56                   push esi
// 005787ee  e8bd92ffff           call 0x571ab0
// 005787f3  83c408               add esp, 8
// 005787f6  8a8e26010000         mov cl, byte ptr [esi + 0x126]
// 005787fc  834e6802             or dword ptr [esi + 0x68], 2
// 00578800  f6c102               test cl, 2
// 00578803  7524                 jne 0x578829
// 00578805  68c86da200           push 0xa26dc8
// 0057880a  56                   push esi
// 0057880b  e85093ffff           call 0x571b60
// 00578810  8b8c241c030000       mov ecx, dword ptr [esp + 0x31c]
// 00578817  51                   push ecx
// 00578818  56                   push esi
// 00578819  e8f2fcffff           call 0x578510
// 0057881e  83c410               add esp, 0x10
// 00578821  5e                   pop esi
// 00578822  81c404030000         add esp, 0x304
// 00578828  c3                   ret 
// 00578829  57                   push edi
// 0057882a  8bbc2418030000       mov edi, dword ptr [esp + 0x318]
// 00578831  81ff00030000         cmp edi, 0x300
// 00578837  7712                 ja 0x57884b
// 00578839  b8abaaaaaa           mov eax, 0xaaaaaaab
// 0057883e  f7e7                 mul edi
// 00578840  d1ea                 shr edx, 1
// 00578842  8d1452               lea edx, [edx + edx*2]
// 00578845  8bc7                 mov eax, edi
// 00578847  2bc2                 sub eax, edx
// 00578849  742b                 je 0x578876
// 0057884b  68b06da200           push 0xa26db0
// 00578850  56                   push esi
// 00578851  80f903               cmp cl, 3
// 00578854  7418                 je 0x57886e
// 00578856  e80593ffff           call 0x571b60
// 0057885b  57                   push edi
// 0057885c  56                   push esi
// 0057885d  e8aefcffff           call 0x578510
// 00578862  83c410               add esp, 0x10
// 00578865  5f                   pop edi
// 00578866  5e                   pop esi
// 00578867  81c404030000         add esp, 0x304
// 0057886d  c3                   ret 
// 0057886e  e83d92ffff           call 0x571ab0
// 00578873  83c408               add esp, 8
// 00578876  b856555555           mov eax, 0x55555556
// 0057887b  f7ef                 imul edi
// 0057887d  53                   push ebx
// 0057887e  8bda                 mov ebx, edx
// 00578880  c1eb1f               shr ebx, 0x1f
// 00578883  03da                 add ebx, edx
// 00578885  85db                 test ebx, ebx
// 00578887  7e41                 jle 0x5788ca
// 00578889  55                   push ebp
// 0057888a  8d7c2416             lea edi, [esp + 0x16]
// 0057888e  8beb                 mov ebp, ebx
// 00578890  6a03                 push 3
// 00578892  8d4c2414             lea ecx, [esp + 0x14]
// 00578896  51                   push ecx
// 00578897  56                   push esi
// 00578898  e8733bffff           call 0x56c410
// 0057889d  6a03                 push 3
// 0057889f  8d542420             lea edx, [esp + 0x20]
// 005788a3  52                   push edx
// 005788a4  56                   push esi
// 005788a5  e836c7feff           call 0x564fe0
// 005788aa  8a442428             mov al, byte ptr [esp + 0x28]
// 005788ae  8a4c2429             mov cl, byte ptr [esp + 0x29]
// 005788b2  8a54242a             mov dl, byte ptr [esp + 0x2a]
// 005788b6  8847fe               mov byte ptr [edi - 2], al
// 005788b9  884fff               mov byte ptr [edi - 1], cl
// 005788bc  8817                 mov byte ptr [edi], dl
// 005788be  83c418               add esp, 0x18
// 005788c1  83c703               add edi, 3
// 005788c4  83ed01               sub ebp, 1
// 005788c7  75c7                 jne 0x578890
// 005788c9  5d                   pop ebp
// 005788ca  6a00                 push 0
// 005788cc  56                   push esi
// 005788cd  e83efcffff           call 0x578510
// 005788d2  8bbc2420030000       mov edi, dword ptr [esp + 0x320]
// 005788d9  53                   push ebx
// 005788da  8d44241c             lea eax, [esp + 0x1c]
// 005788de  50                   push eax
// 005788df  57                   push edi
// 005788e0  56                   push esi
// 005788e1  e88abbfeff           call 0x564470
// 005788e6  83c418               add esp, 0x18
// 005788e9  80be2601000003       cmp byte ptr [esi + 0x126], 3
// 005788f0  7540                 jne 0x578932
// 005788f2  85ff                 test edi, edi
// 005788f4  743c                 je 0x578932
// 005788f6  f6470810             test byte ptr [edi + 8], 0x10
// 005788fa  7436                 je 0x578932
// 005788fc  66399e1a010000       cmp word ptr [esi + 0x11a], bx
// 00578903  7615                 jbe 0x57891a
// 00578905  68886da200           push 0xa26d88
// 0057890a  56                   push esi
// 0057890b  e85092ffff           call 0x571b60
// 00578910  83c408               add esp, 8
// 00578913  66899e1a010000       mov word ptr [esi + 0x11a], bx
// 0057891a  66395f16             cmp word ptr [edi + 0x16], bx
// 0057891e  7612                 jbe 0x578932
// 00578920  685c6da200           push 0xa26d5c
// 00578925  56                   push esi
// 00578926  e83592ffff           call 0x571b60
// 0057892b  83c408               add esp, 8
// 0057892e  66895f16             mov word ptr [edi + 0x16], bx
// 00578932  5b                   pop ebx
// 00578933  5f                   pop edi
// 00578934  5e                   pop esi
// 00578935  81c404030000         add esp, 0x304
// 0057893b  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_PLTE)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
