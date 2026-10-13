// roc 2008-06 00475510  unit: G3D::Texture  size: 1247 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00475510
//
// 00475510  55                   push ebp
// 00475511  8d6c24c0             lea ebp, [esp - 0x40]
// 00475515  83ec40               sub esp, 0x40
// 00475518  6aff                 push -1
// 0047551a  6853487c00           push 0x7c4853
// 0047551f  64a100000000         mov eax, dword ptr fs:[0]
// 00475525  50                   push eax
// 00475526  64892500000000       mov dword ptr fs:[0], esp
// 0047552d  81ecb8010000         sub esp, 0x1b8
// 00475533  33c0                 xor eax, eax
// 00475535  894538               mov dword ptr [ebp + 0x38], eax
// 00475538  53                   push ebx
// 00475539  56                   push esi
// 0047553a  8945fc               mov dword ptr [ebp - 4], eax
// 0047553d  894520               mov dword ptr [ebp + 0x20], eax
// 00475540  894524               mov dword ptr [ebp + 0x24], eax
// 00475543  894528               mov dword ptr [ebp + 0x28], eax
// 00475546  89452c               mov dword ptr [ebp + 0x2c], eax
// 00475549  894530               mov dword ptr [ebp + 0x30], eax
// 0047554c  894534               mov dword ptr [ebp + 0x34], eax
// 0047554f  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00475552  57                   push edi
// 00475553  8965f0               mov dword ptr [ebp - 0x10], esp
// 00475556  83f805               cmp eax, 5
// 00475559  750a                 jne 0x475565
// 0047555b  bf06000000           mov edi, 6
// 00475560  897d3c               mov dword ptr [ebp + 0x3c], edi
// 00475563  eb12                 jmp 0x475577
// 00475565  83e807               sub eax, 7
// 00475568  f7d8                 neg eax
// 0047556a  1bc0                 sbb eax, eax
// 0047556c  83e0fb               and eax, 0xfffffffb
// 0047556f  83c006               add eax, 6
// 00475572  89453c               mov dword ptr [ebp + 0x3c], eax
// 00475575  8bf8                 mov edi, eax
// 00475577  8b754c               mov esi, dword ptr [ebp + 0x4c]
// 0047557a  56                   push esi
// 0047557b  8d4dd4               lea ecx, [ebp - 0x2c]
// 0047557e  ff155c248000         call dword ptr [0x80245c]
// 00475584  bb01000000           mov ebx, 1
// 00475589  8d4d00               lea ecx, [ebp]
// 0047558c  895dfc               mov dword ptr [ebp - 4], ebx
// 0047558f  ff1560248000         call dword ptr [0x802460]
// 00475595  8b4550               mov eax, dword ptr [ebp + 0x50]
// 00475598  50                   push eax
// 00475599  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 0047559f  c645fc02             mov byte ptr [ebp - 4], 2
// 004755a3  ff155c248000         call dword ptr [0x80245c]
// 004755a9  8d8db4feffff         lea ecx, [ebp - 0x14c]
// 004755af  c645fc03             mov byte ptr [ebp - 4], 3
// 004755b3  ff1560248000         call dword ptr [0x802460]
// 004755b9  c645fc04             mov byte ptr [ebp - 4], 4
// 004755bd  83ff06               cmp edi, 6
// 004755c0  7511                 jne 0x4755d3
// 004755c2  8d4d00               lea ecx, [ebp]
// 004755c5  51                   push ecx
// 004755c6  8d55d4               lea edx, [ebp - 0x2c]
// 004755c9  52                   push edx
// 004755ca  56                   push esi
// 004755cb  e880ddffff           call 0x473350
// 004755d0  83c40c               add esp, 0xc
// 004755d3  6830e25000           push 0x50e230
// 004755d8  68a0ac4500           push 0x45aca0
// 004755dd  6a06                 push 6
// 004755df  6a14                 push 0x14
// 004755e1  8d85ecfeffff         lea eax, [ebp - 0x114]
// 004755e7  50                   push eax
// 004755e8  e8abbf2200           call 0x6a1598
// 004755ed  6830e25000           push 0x50e230
// 004755f2  68a0ac4500           push 0x45aca0
// 004755f7  6a06                 push 6
// 004755f9  6a14                 push 0x14
// 004755fb  8d8d3cfeffff         lea ecx, [ebp - 0x1c4]
// 00475601  51                   push ecx
// 00475602  c645fc05             mov byte ptr [ebp - 4], 5
// 00475606  e88dbf2200           call 0x6a1598
// 0047560b  8b5548               mov edx, dword ptr [ebp + 0x48]
// 0047560e  c70200000000         mov dword ptr [edx], 0
// 00475614  895d38               mov dword ptr [ebp + 0x38], ebx
// 00475617  c645fc07             mov byte ptr [ebp - 4], 7
// 0047561b  33db                 xor ebx, ebx
// 0047561d  8d4900               lea ecx, [ecx]
// 00475620  3bdf                 cmp ebx, edi
// 00475622  0f8d12020000         jge 0x47583a
// 00475628  56                   push esi
// 00475629  8d4db8               lea ecx, [ebp - 0x48]
// 0047562c  ff155c248000         call dword ptr [0x80245c]
// 00475632  8b4550               mov eax, dword ptr [ebp + 0x50]
// 00475635  50                   push eax
// 00475636  8d4d9c               lea ecx, [ebp - 0x64]
// 00475639  c645fc08             mov byte ptr [ebp - 4], 8
// 0047563d  ff155c248000         call dword ptr [0x80245c]
// 00475643  c645fc09             mov byte ptr [ebp - 4], 9
// 00475647  83ff06               cmp edi, 6
// 0047564a  0f85bc000000         jne 0x47570c
// 00475650  8b0c9dac379300       mov ecx, dword ptr [ebx*4 + 0x9337ac]
// 00475657  8b3de4238000         mov edi, dword ptr [0x8023e4]
// 0047565d  51                   push ecx
// 0047565e  8d55d4               lea edx, [ebp - 0x2c]
// 00475661  52                   push edx
// 00475662  8d8564ffffff         lea eax, [ebp - 0x9c]
// 00475668  50                   push eax
// 00475669  ffd7                 call edi
// 0047566b  83c40c               add esp, 0xc
// 0047566e  8b35a8248000         mov esi, dword ptr [0x8024a8]
// 00475674  8d4d00               lea ecx, [ebp]
// 00475677  51                   push ecx
// 00475678  50                   push eax
// 00475679  8d5580               lea edx, [ebp - 0x80]
// 0047567c  52                   push edx
// 0047567d  c645fc0a             mov byte ptr [ebp - 4], 0xa
// 00475681  ffd6                 call esi
// 00475683  83c40c               add esp, 0xc
// 00475686  50                   push eax
// 00475687  8d4db8               lea ecx, [ebp - 0x48]
// 0047568a  c645fc0b             mov byte ptr [ebp - 4], 0xb
// 0047568e  ff150c248000         call dword ptr [0x80240c]
// 00475694  8d4d80               lea ecx, [ebp - 0x80]
// 00475697  c645fc0a             mov byte ptr [ebp - 4], 0xa
// 0047569b  ff1568248000         call dword ptr [0x802468]
// 004756a1  8d8d64ffffff         lea ecx, [ebp - 0x9c]
// 004756a7  c645fc09             mov byte ptr [ebp - 4], 9
// 004756ab  ff1568248000         call dword ptr [0x802468]
// 004756b1  8b049dac379300       mov eax, dword ptr [ebx*4 + 0x9337ac]
// 004756b8  50                   push eax
// 004756b9  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 004756bf  51                   push ecx
// 004756c0  8d5580               lea edx, [ebp - 0x80]
// 004756c3  52                   push edx
// 004756c4  ffd7                 call edi
// 004756c6  83c40c               add esp, 0xc
// 004756c9  8d8db4feffff         lea ecx, [ebp - 0x14c]
// 004756cf  51                   push ecx
// 004756d0  50                   push eax
// 004756d1  8d9564ffffff         lea edx, [ebp - 0x9c]
// 004756d7  52                   push edx
// 004756d8  c645fc0c             mov byte ptr [ebp - 4], 0xc
// 004756dc  ffd6                 call esi
// 004756de  83c40c               add esp, 0xc
// 004756e1  50                   push eax
// 004756e2  8d4d9c               lea ecx, [ebp - 0x64]
// 004756e5  c645fc0d             mov byte ptr [ebp - 4], 0xd
// 004756e9  ff150c248000         call dword ptr [0x80240c]
// 004756ef  8d8d64ffffff         lea ecx, [ebp - 0x9c]
// 004756f5  c645fc0c             mov byte ptr [ebp - 4], 0xc
// 004756f9  ff1568248000         call dword ptr [0x802468]
// 004756ff  8d4d80               lea ecx, [ebp - 0x80]
// 00475702  c645fc09             mov byte ptr [ebp - 4], 9
// 00475706  ff1568248000         call dword ptr [0x802468]
// 0047570c  8d349b               lea esi, [ebx + ebx*4]
// 0047570f  03f6                 add esi, esi
// 00475711  6a08                 push 8
// 00475713  8d45b8               lea eax, [ebp - 0x48]
// 00475716  03f6                 add esi, esi
// 00475718  50                   push eax
// 00475719  8d8c35ecfeffff       lea ecx, [ebp + esi - 0x114]
// 00475720  e86bad0900           call 0x510490
// 00475725  6a08                 push 8
// 00475727  8d4d9c               lea ecx, [ebp - 0x64]
// 0047572a  51                   push ecx
// 0047572b  8d8c353cfeffff       lea ecx, [ebp + esi - 0x1c4]
// 00475732  e859ad0900           call 0x510490
// 00475737  83bc35fcfeffff04     cmp dword ptr [ebp + esi - 0x104], 4
// 0047573f  7541                 jne 0x475782
// 00475741  8b8c35f0feffff       mov ecx, dword ptr [ebp + esi - 0x110]
// 00475748  33c0                 xor eax, eax
// 0047574a  8d9b00000000         lea ebx, [ebx]
// 00475750  8b9435f4feffff       mov edx, dword ptr [ebp + esi - 0x10c]
// 00475757  0faf9435f8feffff     imul edx, dword ptr [ebp + esi - 0x108]
// 0047575f  3bc2                 cmp eax, edx
// 00475761  0f8da9000000         jge 0x475810
// 00475767  8b94354cfeffff       mov edx, dword ptr [ebp + esi - 0x1b4]
// 0047576e  8bbc3540feffff       mov edi, dword ptr [ebp + esi - 0x1c0]
// 00475775  0fafd0               imul edx, eax
// 00475778  8a143a               mov dl, byte ptr [edx + edi]
// 0047577b  88548103             mov byte ptr [ecx + eax*4 + 3], dl
// 0047577f  40                   inc eax
// 00475780  ebce                 jmp 0x475750
// 00475782  8b8435f4feffff       mov eax, dword ptr [ebp + esi - 0x10c]
// 00475789  0faf8435f8feffff     imul eax, dword ptr [ebp + esi - 0x108]
// 00475791  03c0                 add eax, eax
// 00475793  03c0                 add eax, eax
// 00475795  50                   push eax
// 00475796  e8bbb12200           call 0x6a0956
// 0047579b  83c404               add esp, 4
// 0047579e  8bc8                 mov ecx, eax
// 004757a0  33c0                 xor eax, eax
// 004757a2  eb0c                 jmp 0x4757b0
// 004757a4  8da42400000000       lea esp, [esp]
// 004757ab  eb03                 jmp 0x4757b0
// 004757ad  8d4900               lea ecx, [ecx]
// 004757b0  8b9435f4feffff       mov edx, dword ptr [ebp + esi - 0x10c]
// 004757b7  0faf9435f8feffff     imul edx, dword ptr [ebp + esi - 0x108]
// 004757bf  3bc2                 cmp eax, edx
// 004757c1  7d4d                 jge 0x475810
// 004757c3  8b9435f0feffff       mov edx, dword ptr [ebp + esi - 0x110]
// 004757ca  8d3c40               lea edi, [eax + eax*2]
// 004757cd  0fb61417             movzx edx, byte ptr [edi + edx]
// 004757d1  881481               mov byte ptr [ecx + eax*4], dl
// 004757d4  8b9435f0feffff       mov edx, dword ptr [ebp + esi - 0x110]
// 004757db  0fb6543a01           movzx edx, byte ptr [edx + edi + 1]
// 004757e0  88548101             mov byte ptr [ecx + eax*4 + 1], dl
// 004757e4  8b9435f0feffff       mov edx, dword ptr [ebp + esi - 0x110]
// 004757eb  0fb6543a02           movzx edx, byte ptr [edx + edi + 2]
// 004757f0  88548102             mov byte ptr [ecx + eax*4 + 2], dl
// 004757f4  8b94354cfeffff       mov edx, dword ptr [ebp + esi - 0x1b4]
// 004757fb  8bbc3540feffff       mov edi, dword ptr [ebp + esi - 0x1c0]
// 00475802  0fafd0               imul edx, eax
// 00475805  0fb6143a             movzx edx, byte ptr [edx + edi]
// 00475809  88548103             mov byte ptr [ecx + eax*4 + 3], dl
// 0047580d  40                   inc eax
// 0047580e  eba0                 jmp 0x4757b0
// 00475810  894c9d20             mov dword ptr [ebp + ebx*4 + 0x20], ecx
// 00475814  8d4d9c               lea ecx, [ebp - 0x64]
// 00475817  c645fc08             mov byte ptr [ebp - 4], 8
// 0047581b  ff1568248000         call dword ptr [0x802468]
// 00475821  8d4db8               lea ecx, [ebp - 0x48]
// 00475824  c645fc07             mov byte ptr [ebp - 4], 7
// 00475828  ff1568248000         call dword ptr [0x802468]
// 0047582e  8b7d3c               mov edi, dword ptr [ebp + 0x3c]
// 00475831  8b754c               mov esi, dword ptr [ebp + 0x4c]
// 00475834  43                   inc ebx
// 00475835  e9e6fdffff           jmp 0x475620
// 0047583a  d9e8                 fld1 
// 0047583c  8b4564               mov eax, dword ptr [ebp + 0x64]
// 0047583f  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 00475842  8b555c               mov edx, dword ptr [ebp + 0x5c]
// 00475845  83ec08               sub esp, 8
// 00475848  d95c2404             fstp dword ptr [esp + 4]
// 0047584c  d94568               fld dword ptr [ebp + 0x68]
// 0047584f  d91c24               fstp dword ptr [esp]
// 00475852  50                   push eax
// 00475853  8b4558               mov eax, dword ptr [ebp + 0x58]
// 00475856  51                   push ecx
// 00475857  8b4d54               mov ecx, dword ptr [ebp + 0x54]
// 0047585a  52                   push edx
// 0047585b  8b95f8feffff         mov edx, dword ptr [ebp - 0x108]
// 00475861  50                   push eax
// 00475862  8b85f4feffff         mov eax, dword ptr [ebp - 0x10c]
// 00475868  51                   push ecx
// 00475869  8b0da8fa9600         mov ecx, dword ptr [0x96faa8]
// 0047586f  6a01                 push 1
// 00475871  52                   push edx
// 00475872  50                   push eax
// 00475873  51                   push ecx
// 00475874  8d5520               lea edx, [ebp + 0x20]
// 00475877  52                   push edx
// 00475878  8d4560               lea eax, [ebp + 0x60]
// 0047587b  56                   push esi
// 0047587c  50                   push eax
// 0047587d  e80eeeffff           call 0x474690
// 00475882  83c438               add esp, 0x38
// 00475885  8b38                 mov edi, dword ptr [eax]
// 00475887  8b7548               mov esi, dword ptr [ebp + 0x48]
// 0047588a  8b06                 mov eax, dword ptr [esi]
// 0047588c  c645fc0e             mov byte ptr [ebp - 4], 0xe
// 00475890  3bf8                 cmp edi, eax
// 00475892  7463                 je 0x4758f7
// 00475894  85c0                 test eax, eax
// 00475896  744f                 je 0x4758e7
// 00475898  83c004               add eax, 4
// 0047589b  50                   push eax
// 0047589c  ff15ac218000         call dword ptr [0x8021ac]
// 004758a2  85c0                 test eax, eax
// 004758a4  7538                 jne 0x4758de
// 004758a6  8b06                 mov eax, dword ptr [esi]
// 004758a8  8b7008               mov esi, dword ptr [eax + 8]
// 004758ab  eb03                 jmp 0x4758b0
// 004758ad  8d4900               lea ecx, [ecx]
// 004758b0  85f6                 test esi, esi
// 004758b2  7419                 je 0x4758cd
// 004758b4  8b0e                 mov ecx, dword ptr [esi]
// 004758b6  8b11                 mov edx, dword ptr [ecx]
// 004758b8  8b4204               mov eax, dword ptr [edx + 4]
// 004758bb  ffd0                 call eax
// 004758bd  8bc6                 mov eax, esi
// 004758bf  8b7604               mov esi, dword ptr [esi + 4]
// 004758c2  50                   push eax
// 004758c3  e8b2ad2200           call 0x6a067a
// 004758c8  83c404               add esp, 4
// 004758cb  ebe3                 jmp 0x4758b0
// 004758cd  8b4d48               mov ecx, dword ptr [ebp + 0x48]
// 004758d0  8b09                 mov ecx, dword ptr [ecx]
// 004758d2  85c9                 test ecx, ecx
// 004758d4  7408                 je 0x4758de
// 004758d6  8b11                 mov edx, dword ptr [ecx]
// 004758d8  8b02                 mov eax, dword ptr [edx]
// 004758da  6a01                 push 1
// 004758dc  ffd0                 call eax
// 004758de  8b7548               mov esi, dword ptr [ebp + 0x48]
// 004758e1  c70600000000         mov dword ptr [esi], 0
// 004758e7  85ff                 test edi, edi
// 004758e9  740c                 je 0x4758f7
// 004758eb  8d4704               lea eax, [edi + 4]
// 004758ee  50                   push eax
// 004758ef  893e                 mov dword ptr [esi], edi
// 004758f1  ff15b0218000         call dword ptr [0x8021b0]
// 004758f7  8b4560               mov eax, dword ptr [ebp + 0x60]
// 004758fa  c645fc07             mov byte ptr [ebp - 4], 7
// 004758fe  85c0                 test eax, eax
// 00475900  7440                 je 0x475942
// 00475902  83c004               add eax, 4
// 00475905  50                   push eax
// 00475906  ff15ac218000         call dword ptr [0x8021ac]
// 0047590c  85c0                 test eax, eax
// 0047590e  7532                 jne 0x475942
// 00475910  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 00475913  8b7108               mov esi, dword ptr [ecx + 8]
// 00475916  85f6                 test esi, esi
// 00475918  741c                 je 0x475936
// 0047591a  8b0e                 mov ecx, dword ptr [esi]
// 0047591c  8b11                 mov edx, dword ptr [ecx]
// 0047591e  8b4204               mov eax, dword ptr [edx + 4]
// 00475921  ffd0                 call eax
// 00475923  8bc6                 mov eax, esi
// 00475925  8b7604               mov esi, dword ptr [esi + 4]
// 00475928  50                   push eax
// 00475929  e84cad2200           call 0x6a067a
// 0047592e  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 00475931  83c404               add esp, 4
// 00475934  ebe0                 jmp 0x475916
// 00475936  85c9                 test ecx, ecx
// 00475938  7408                 je 0x475942
// 0047593a  8b11                 mov edx, dword ptr [ecx]
// 0047593c  8b02                 mov eax, dword ptr [edx]
// 0047593e  6a01                 push 1
// 00475940  ffd0                 call eax
// 00475942  83bdfcfeffff03       cmp dword ptr [ebp - 0x104], 3
// 00475949  751a                 jne 0x475965
// 0047594b  33f6                 xor esi, esi
// 0047594d  8d4900               lea ecx, [ecx]
// 00475950  3b753c               cmp esi, dword ptr [ebp + 0x3c]
// 00475953  7d10                 jge 0x475965
// 00475955  8b4cb520             mov ecx, dword ptr [ebp + esi*4 + 0x20]
// 00475959  51                   push ecx
// 0047595a  e8ebaf2200           call 0x6a094a
// 0047595f  83c404               add esp, 4
// 00475962  46                   inc esi
// 00475963  ebeb                 jmp 0x475950
// 00475965  c745fc06000000       mov dword ptr [ebp - 4], 6
// 0047596c  6830e25000           push 0x50e230
// 00475971  6a06                 push 6
// 00475973  6a14                 push 0x14
// 00475975  8d953cfeffff         lea edx, [ebp - 0x1c4]
// 0047597b  52                   push edx
// 0047597c  c645fc05             mov byte ptr [ebp - 4], 5
// 00475980  e8d6bc2200           call 0x6a165b
// 00475985  6830e25000           push 0x50e230
// 0047598a  6a06                 push 6
// 0047598c  6a14                 push 0x14
// 0047598e  8d85ecfeffff         lea eax, [ebp - 0x114]
// 00475994  50                   push eax
// 00475995  c645fc04             mov byte ptr [ebp - 4], 4
// 00475999  e8bdbc2200           call 0x6a165b
// 0047599e  8d8db4feffff         lea ecx, [ebp - 0x14c]
// 004759a4  c645fc03             mov byte ptr [ebp - 4], 3
// 004759a8  ff1568248000         call dword ptr [0x802468]
// 004759ae  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 004759b4  c645fc02             mov byte ptr [ebp - 4], 2
// 004759b8  ff1568248000         call dword ptr [0x802468]
// 004759be  8d4d00               lea ecx, [ebp]
// 004759c1  c645fc01             mov byte ptr [ebp - 4], 1
// 004759c5  ff1568248000         call dword ptr [0x802468]
// 004759cb  8d4dd4               lea ecx, [ebp - 0x2c]
// 004759ce  c645fc00             mov byte ptr [ebp - 4], 0
// 004759d2  ff1568248000         call dword ptr [0x802468]
// 004759d8  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004759db  8b4548               mov eax, dword ptr [ebp + 0x48]
// 004759de  5f                   pop edi
// 004759df  5e                   pop esi
// 004759e0  64890d00000000       mov dword ptr fs:[0], ecx
// 004759e7  5b                   pop ebx
// 004759e8  83c540               add ebp, 0x40
// 004759eb  8be5                 mov esp, ebp
// 004759ed  5d                   pop ebp
// 004759ee  c3                   ret 
// library g3d-6.09-rbx2008/GLG3Dcpp\roc_export_a69fe47bb0e6952c.cpp (function ?fromTwoFiles@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0PBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 GLG3Dcpp/roc_export_a69fe47bb0e6952c.cpp
