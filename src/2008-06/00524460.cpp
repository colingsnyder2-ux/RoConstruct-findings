// from server: 100% by colin
// roc 2008-06 00524460  unit: seg_00520000  size: 1122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00524460
//
// 00524460  83ec34               sub esp, 0x34
// 00524463  56                   push esi
// 00524464  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00524468  83beec00000000       cmp dword ptr [esi + 0xec], 0
// 0052446f  752d                 jne 0x52449e
// 00524471  0fb68624010000       movzx eax, byte ptr [esi + 0x124]
// 00524478  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 0052447e  50                   push eax
// 0052447f  51                   push ecx
// 00524480  8d54240c             lea edx, [esp + 0xc]
// 00524484  6890ac8200           push 0x82ac90
// 00524489  52                   push edx
// 0052448a  ff1530288000         call dword ptr [0x802830]
// 00524490  8d442414             lea eax, [esp + 0x14]
// 00524494  50                   push eax
// 00524495  56                   push esi
// 00524496  e815550000           call 0x5299b0
// 0052449b  83c418               add esp, 0x18
// 0052449e  f7467000100000       test dword ptr [esi + 0x70], 0x1000
// 005244a5  7473                 je 0x52451a
// 005244a7  80be0801000003       cmp byte ptr [esi + 0x108], 3
// 005244ae  752f                 jne 0x5244df
// 005244b0  0fb78e1a010000       movzx ecx, word ptr [esi + 0x11a]
// 005244b7  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 005244bd  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 005244c3  51                   push ecx
// 005244c4  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 005244ca  52                   push edx
// 005244cb  50                   push eax
// 005244cc  41                   inc ecx
// 005244cd  51                   push ecx
// 005244ce  8d9600010000         lea edx, [esi + 0x100]
// 005244d4  52                   push edx
// 005244d5  e866e4ffff           call 0x522940
// 005244da  83c414               add esp, 0x14
// 005244dd  eb3b                 jmp 0x52451a
// 005244df  6683be1a01000000     cmp word ptr [esi + 0x11a], 0
// 005244e7  7418                 je 0x524501
// 005244e9  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 005244ef  8d868c010000         lea eax, [esi + 0x18c]
// 005244f5  50                   push eax
// 005244f6  41                   inc ecx
// 005244f7  51                   push ecx
// 005244f8  8d9600010000         lea edx, [esi + 0x100]
// 005244fe  52                   push edx
// 005244ff  eb11                 jmp 0x524512
// 00524501  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 00524507  6a00                 push 0
// 00524509  40                   inc eax
// 0052450a  50                   push eax
// 0052450b  8d8e00010000         lea ecx, [esi + 0x100]
// 00524511  51                   push ecx
// 00524512  e849e6ffff           call 0x522b60
// 00524517  83c40c               add esp, 0xc
// 0052451a  f7467000000400       test dword ptr [esi + 0x70], 0x40000
// 00524521  741c                 je 0x52453f
// 00524523  8b96ec000000         mov edx, dword ptr [esi + 0xec]
// 00524529  6880000000           push 0x80
// 0052452e  42                   inc edx
// 0052452f  52                   push edx
// 00524530  8d8600010000         lea eax, [esi + 0x100]
// 00524536  50                   push eax
// 00524537  e8b4b8ffff           call 0x51fdf0
// 0052453c  83c40c               add esp, 0xc
// 0052453f  f7467000006000       test dword ptr [esi + 0x70], 0x600000
// 00524546  7451                 je 0x524599
// 00524548  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 0052454e  41                   inc ecx
// 0052454f  51                   push ecx
// 00524550  8d9600010000         lea edx, [esi + 0x100]
// 00524556  52                   push edx
// 00524557  56                   push esi
// 00524558  e8f3c7ffff           call 0x520d50
// 0052455d  83c40c               add esp, 0xc
// 00524560  85c0                 test eax, eax
// 00524562  7435                 je 0x524599
// 00524564  817e7000004000       cmp dword ptr [esi + 0x70], 0x400000
// 0052456b  c6862802000001       mov byte ptr [esi + 0x228], 1
// 00524572  750e                 jne 0x524582
// 00524574  6868ac8200           push 0x82ac68
// 00524579  56                   push esi
// 0052457a  e8d1540000           call 0x529a50
// 0052457f  83c408               add esp, 8
// 00524582  817e7000002000       cmp dword ptr [esi + 0x70], 0x200000
// 00524589  750e                 jne 0x524599
// 0052458b  6868ac8200           push 0x82ac68
// 00524590  56                   push esi
// 00524591  e81a540000           call 0x5299b0
// 00524596  83c408               add esp, 8
// 00524599  f7467000400000       test dword ptr [esi + 0x70], 0x4000
// 005245a0  7420                 je 0x5245c2
// 005245a2  f7466800080000       test dword ptr [esi + 0x68], 0x800
// 005245a9  7517                 jne 0x5245c2
// 005245ab  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 005245b1  40                   inc eax
// 005245b2  50                   push eax
// 005245b3  8d8e00010000         lea ecx, [esi + 0x100]
// 005245b9  51                   push ecx
// 005245ba  e811c6ffff           call 0x520bd0
// 005245bf  83c408               add esp, 8
// 005245c2  f6467080             test byte ptr [esi + 0x70], 0x80
// 005245c6  7470                 je 0x524638
// 005245c8  6683be1a01000000     cmp word ptr [esi + 0x11a], 0
// 005245d0  7509                 jne 0x5245db
// 005245d2  f6862601000004       test byte ptr [esi + 0x126], 4
// 005245d9  745d                 je 0x524638
// 005245db  8b9658010000         mov edx, dword ptr [esi + 0x158]
// 005245e1  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 005245e7  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 005245ed  52                   push edx
// 005245ee  8b9670010000         mov edx, dword ptr [esi + 0x170]
// 005245f4  50                   push eax
// 005245f5  8b866c010000         mov eax, dword ptr [esi + 0x16c]
// 005245fb  51                   push ecx
// 005245fc  8b8e68010000         mov ecx, dword ptr [esi + 0x168]
// 00524602  52                   push edx
// 00524603  8b9664010000         mov edx, dword ptr [esi + 0x164]
// 00524609  50                   push eax
// 0052460a  51                   push ecx
// 0052460b  52                   push edx
// 0052460c  8d8642010000         lea eax, [esi + 0x142]
// 00524612  50                   push eax
// 00524613  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 00524619  8d8e38010000         lea ecx, [esi + 0x138]
// 0052461f  51                   push ecx
// 00524620  8d968c010000         lea edx, [esi + 0x18c]
// 00524626  52                   push edx
// 00524627  40                   inc eax
// 00524628  50                   push eax
// 00524629  8d8e00010000         lea ecx, [esi + 0x100]
// 0052462f  51                   push ecx
// 00524630  e86bceffff           call 0x5214a0
// 00524635  83c430               add esp, 0x30
// 00524638  8b4670               mov eax, dword ptr [esi + 0x70]
// 0052463b  a900200000           test eax, 0x2000
// 00524640  744c                 je 0x52468e
// 00524642  84c0                 test al, al
// 00524644  7913                 jns 0x524659
// 00524646  6683be1a01000000     cmp word ptr [esi + 0x11a], 0
// 0052464e  753e                 jne 0x52468e
// 00524650  f6862601000004       test byte ptr [esi + 0x126], 4
// 00524657  7535                 jne 0x52468e
// 00524659  80be2601000003       cmp byte ptr [esi + 0x126], 3
// 00524660  742c                 je 0x52468e
// 00524662  8b9658010000         mov edx, dword ptr [esi + 0x158]
// 00524668  8b8670010000         mov eax, dword ptr [esi + 0x170]
// 0052466e  8b8e64010000         mov ecx, dword ptr [esi + 0x164]
// 00524674  52                   push edx
// 00524675  8b96ec000000         mov edx, dword ptr [esi + 0xec]
// 0052467b  50                   push eax
// 0052467c  51                   push ecx
// 0052467d  42                   inc edx
// 0052467e  52                   push edx
// 0052467f  8d8600010000         lea eax, [esi + 0x100]
// 00524685  50                   push eax
// 00524686  e8b5deffff           call 0x522540
// 0052468b  83c414               add esp, 0x14
// 0052468e  f7467000040000       test dword ptr [esi + 0x70], 0x400
// 00524695  7417                 je 0x5246ae
// 00524697  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 0052469d  41                   inc ecx
// 0052469e  51                   push ecx
// 0052469f  8d9600010000         lea edx, [esi + 0x100]
// 005246a5  52                   push edx
// 005246a6  e845c0ffff           call 0x5206f0
// 005246ab  83c408               add esp, 8
// 005246ae  f6467040             test byte ptr [esi + 0x70], 0x40
// 005246b2  743c                 je 0x5246f0
// 005246b4  8b86f0010000         mov eax, dword ptr [esi + 0x1f0]
// 005246ba  8b8eec010000         mov ecx, dword ptr [esi + 0x1ec]
// 005246c0  8b96ec000000         mov edx, dword ptr [esi + 0xec]
// 005246c6  50                   push eax
// 005246c7  51                   push ecx
// 005246c8  42                   inc edx
// 005246c9  52                   push edx
// 005246ca  8d8600010000         lea eax, [esi + 0x100]
// 005246d0  50                   push eax
// 005246d1  e84ae8ffff           call 0x522f20
// 005246d6  83c410               add esp, 0x10
// 005246d9  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 005246e0  750e                 jne 0x5246f0
// 005246e2  6844ac8200           push 0x82ac44
// 005246e7  56                   push esi
// 005246e8  e8c3520000           call 0x5299b0
// 005246ed  83c408               add esp, 8
// 005246f0  f6467020             test byte ptr [esi + 0x70], 0x20
// 005246f4  7417                 je 0x52470d
// 005246f6  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 005246fc  41                   inc ecx
// 005246fd  51                   push ecx
// 005246fe  8d9600010000         lea edx, [esi + 0x100]
// 00524704  52                   push edx
// 00524705  e8c6b5ffff           call 0x51fcd0
// 0052470a  83c408               add esp, 8
// 0052470d  f6467008             test byte ptr [esi + 0x70], 8
// 00524711  741e                 je 0x524731
// 00524713  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00524719  8d8681010000         lea eax, [esi + 0x181]
// 0052471f  50                   push eax
// 00524720  41                   inc ecx
// 00524721  51                   push ecx
// 00524722  8d9600010000         lea edx, [esi + 0x100]
// 00524728  52                   push edx
// 00524729  e8e2bdffff           call 0x520510
// 0052472e  83c40c               add esp, 0xc
// 00524731  f6467004             test byte ptr [esi + 0x70], 4
// 00524735  7417                 je 0x52474e
// 00524737  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 0052473d  40                   inc eax
// 0052473e  50                   push eax
// 0052473f  8d8e00010000         lea ecx, [esi + 0x100]
// 00524745  51                   push ecx
// 00524746  e885bcffff           call 0x5203d0
// 0052474b  83c408               add esp, 8
// 0052474e  f6467001             test byte ptr [esi + 0x70], 1
// 00524752  7417                 je 0x52476b
// 00524754  8b96ec000000         mov edx, dword ptr [esi + 0xec]
// 0052475a  42                   inc edx
// 0052475b  52                   push edx
// 0052475c  8d8600010000         lea eax, [esi + 0x100]
// 00524762  50                   push eax
// 00524763  e8c8b8ffff           call 0x520030
// 00524768  83c408               add esp, 8
// 0052476b  f7467000000100       test dword ptr [esi + 0x70], 0x10000
// 00524772  7417                 je 0x52478b
// 00524774  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 0052477a  41                   inc ecx
// 0052477b  51                   push ecx
// 0052477c  8d9600010000         lea edx, [esi + 0x100]
// 00524782  52                   push edx
// 00524783  e818b6ffff           call 0x51fda0
// 00524788  83c408               add esp, 8
// 0052478b  f7467000400000       test dword ptr [esi + 0x70], 0x4000
// 00524792  7420                 je 0x5247b4
// 00524794  f7466800080000       test dword ptr [esi + 0x68], 0x800
// 0052479b  7417                 je 0x5247b4
// 0052479d  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 005247a3  40                   inc eax
// 005247a4  50                   push eax
// 005247a5  8d8e00010000         lea ecx, [esi + 0x100]
// 005247ab  51                   push ecx
// 005247ac  e81fc4ffff           call 0x520bd0
// 005247b1  83c408               add esp, 8
// 005247b4  f7467000800000       test dword ptr [esi + 0x70], 0x8000
// 005247bb  7423                 je 0x5247e0
// 005247bd  8b566c               mov edx, dword ptr [esi + 0x6c]
// 005247c0  0fb7862e010000       movzx eax, word ptr [esi + 0x12e]
// 005247c7  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 005247cd  52                   push edx
// 005247ce  50                   push eax
// 005247cf  41                   inc ecx
// 005247d0  51                   push ecx
// 005247d1  8d9600010000         lea edx, [esi + 0x100]
// 005247d7  52                   push edx
// 005247d8  e853c1ffff           call 0x520930
// 005247dd  83c410               add esp, 0x10
// 005247e0  f7467000000800       test dword ptr [esi + 0x70], 0x80000
// 005247e7  7417                 je 0x524800
// 005247e9  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 005247ef  40                   inc eax
// 005247f0  50                   push eax
// 005247f1  8d8e00010000         lea ecx, [esi + 0x100]
// 005247f7  51                   push ecx
// 005247f8  e873c0ffff           call 0x520870
// 005247fd  83c408               add esp, 8
// 00524800  f7467000000200       test dword ptr [esi + 0x70], 0x20000
// 00524807  7417                 je 0x524820
// 00524809  8b96ec000000         mov edx, dword ptr [esi + 0xec]
// 0052480f  42                   inc edx
// 00524810  52                   push edx
// 00524811  8d8600010000         lea eax, [esi + 0x100]
// 00524817  50                   push eax
// 00524818  e823bfffff           call 0x520740
// 0052481d  83c408               add esp, 8
// 00524820  f6467010             test byte ptr [esi + 0x70], 0x10
// 00524824  7417                 je 0x52483d
// 00524826  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 0052482c  41                   inc ecx
// 0052482d  51                   push ecx
// 0052482e  8d9600010000         lea edx, [esi + 0x100]
// 00524834  52                   push edx
// 00524835  e826b5ffff           call 0x51fd60
// 0052483a  83c408               add esp, 8
// 0052483d  f7467000001000       test dword ptr [esi + 0x70], 0x100000
// 00524844  7477                 je 0x5248bd
// 00524846  8b4658               mov eax, dword ptr [esi + 0x58]
// 00524849  85c0                 test eax, eax
// 0052484b  7415                 je 0x524862
// 0052484d  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00524853  41                   inc ecx
// 00524854  51                   push ecx
// 00524855  8d9600010000         lea edx, [esi + 0x100]
// 0052485b  52                   push edx
// 0052485c  56                   push esi
// 0052485d  ffd0                 call eax
// 0052485f  83c40c               add esp, 0xc
// 00524862  8a4664               mov al, byte ptr [esi + 0x64]
// 00524865  84c0                 test al, al
// 00524867  7406                 je 0x52486f
// 00524869  888609010000         mov byte ptr [esi + 0x109], al
// 0052486f  8a4665               mov al, byte ptr [esi + 0x65]
// 00524872  84c0                 test al, al
// 00524874  7406                 je 0x52487c
// 00524876  88860a010000         mov byte ptr [esi + 0x10a], al
// 0052487c  8a860a010000         mov al, byte ptr [esi + 0x10a]
// 00524882  f6ae09010000         imul byte ptr [esi + 0x109]
// 00524888  88860b010000         mov byte ptr [esi + 0x10b], al
// 0052488e  3c08                 cmp al, 8
// 00524890  0fb6c0               movzx eax, al
// 00524893  7215                 jb 0x5248aa
// 00524895  c1e803               shr eax, 3
// 00524898  0faf8600010000       imul eax, dword ptr [esi + 0x100]
// 0052489f  898604010000         mov dword ptr [esi + 0x104], eax
// 005248a5  5e                   pop esi
// 005248a6  83c434               add esp, 0x34
// 005248a9  c3                   ret 
// 005248aa  0faf8600010000       imul eax, dword ptr [esi + 0x100]
// 005248b1  83c007               add eax, 7
// 005248b4  c1e803               shr eax, 3
// 005248b7  898604010000         mov dword ptr [esi + 0x104], eax
// 005248bd  5e                   pop esi
// 005248be  83c434               add esp, 0x34
// 005248c1  c3                   ret 
// library g3d-6.09-png-dll/pngrtran.c (function _png_do_read_transformations)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09-png-dll pngrtran.c
