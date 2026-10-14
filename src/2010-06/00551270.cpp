// roc 2010-06 00551270  unit: G3D::Log  size: 1295 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00551270
//
// 00551270  64a100000000         mov eax, dword ptr fs:[0]
// 00551276  6aff                 push -1
// 00551278  68140f9900           push 0x990f14
// 0055127d  50                   push eax
// 0055127e  64892500000000       mov dword ptr fs:[0], esp
// 00551285  81ecc0000000         sub esp, 0xc0
// 0055128b  56                   push esi
// 0055128c  8bb424d4000000       mov esi, dword ptr [esp + 0xd4]
// 00551293  8b4638               mov eax, dword ptr [esi + 0x38]
// 00551296  57                   push edi
// 00551297  8bf9                 mov edi, ecx
// 00551299  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0055129c  2bc1                 sub eax, ecx
// 0055129e  83c0ee               add eax, -0x12
// 005512a1  894644               mov dword ptr [esi + 0x44], eax
// 005512a4  7805                 js 0x5512ab
// 005512a6  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 005512a9  7e0c                 jle 0x5512b7
// 005512ab  03c1                 add eax, ecx
// 005512ad  6a00                 push 0
// 005512af  50                   push eax
// 005512b0  8bce                 mov ecx, esi
// 005512b2  e899750000           call 0x558850
// 005512b7  6a10                 push 0x10
// 005512b9  8d442434             lea eax, [esp + 0x34]
// 005512bd  50                   push eax
// 005512be  8bce                 mov ecx, esi
// 005512c0  e82b7b0000           call 0x558df0
// 005512c5  8d4c2430             lea ecx, [esp + 0x30]
// 005512c9  68f400a200           push 0xa200f4
// 005512ce  51                   push ecx
// 005512cf  c78424d800000000000000 mov dword ptr [esp + 0xd8], 0
// 005512da  ff159ca49e00         call dword ptr [0x9ea49c]
// 005512e0  83c408               add esp, 8
// 005512e3  84c0                 test al, al
// 005512e5  7449                 je 0x551330
// 005512e7  68e400a200           push 0xa200e4
// 005512ec  8d4c2418             lea ecx, [esp + 0x18]
// 005512f0  ff1510a49e00         call dword ptr [0x9ea410]
// 005512f6  8d54244c             lea edx, [esp + 0x4c]
// 005512fa  52                   push edx
// 005512fb  8bce                 mov ecx, esi
// 005512fd  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 00551305  e866eeffff           call 0x550170
// 0055130a  50                   push eax
// 0055130b  8d442418             lea eax, [esp + 0x18]
// 0055130f  50                   push eax
// 00551310  8d4c2470             lea ecx, [esp + 0x70]
// 00551314  c68424d800000002     mov byte ptr [esp + 0xd8], 2
// 0055131c  e8df26f3ff           call 0x483a00
// 00551321  6894edb000           push 0xb0ed94
// 00551326  8d4c246c             lea ecx, [esp + 0x6c]
// 0055132a  51                   push ecx
// 0055132b  e882762500           call 0x7a89b2
// 00551330  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00551333  8bc1                 mov eax, ecx
// 00551335  f7d8                 neg eax
// 00551337  894644               mov dword ptr [esi + 0x44], eax
// 0055133a  7805                 js 0x551341
// 0055133c  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0055133f  7e0c                 jle 0x55134d
// 00551341  03c1                 add eax, ecx
// 00551343  6a00                 push 0
// 00551345  50                   push eax
// 00551346  8bce                 mov ecx, esi
// 00551348  e803750000           call 0x558850
// 0055134d  8b4644               mov eax, dword ptr [esi + 0x44]
// 00551350  8d5001               lea edx, [eax + 1]
// 00551353  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 00551356  7e0f                 jle 0x551367
// 00551358  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0055135b  03c8                 add ecx, eax
// 0055135d  6a01                 push 1
// 0055135f  51                   push ecx
// 00551360  8bce                 mov ecx, esi
// 00551362  e8e9740000           call 0x558850
// 00551367  8b4644               mov eax, dword ptr [esi + 0x44]
// 0055136a  8b5640               mov edx, dword ptr [esi + 0x40]
// 0055136d  8a0c10               mov cl, byte ptr [eax + edx]
// 00551370  40                   inc eax
// 00551371  55                   push ebp
// 00551372  0fb6e9               movzx ebp, cl
// 00551375  8d4801               lea ecx, [eax + 1]
// 00551378  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0055137b  894644               mov dword ptr [esi + 0x44], eax
// 0055137e  7e0f                 jle 0x55138f
// 00551380  8b5634               mov edx, dword ptr [esi + 0x34]
// 00551383  6a01                 push 1
// 00551385  03d0                 add edx, eax
// 00551387  52                   push edx
// 00551388  8bce                 mov ecx, esi
// 0055138a  e8c1740000           call 0x558850
// 0055138f  ff4644               inc dword ptr [esi + 0x44]
// 00551392  8b4644               mov eax, dword ptr [esi + 0x44]
// 00551395  8d4801               lea ecx, [eax + 1]
// 00551398  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0055139b  7e0f                 jle 0x5513ac
// 0055139d  8b5634               mov edx, dword ptr [esi + 0x34]
// 005513a0  6a01                 push 1
// 005513a2  03d0                 add edx, eax
// 005513a4  52                   push edx
// 005513a5  8bce                 mov ecx, esi
// 005513a7  e8a4740000           call 0x558850
// 005513ac  8b4644               mov eax, dword ptr [esi + 0x44]
// 005513af  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005513b2  8a0c08               mov cl, byte ptr [eax + ecx]
// 005513b5  0fb6c9               movzx ecx, cl
// 005513b8  40                   inc eax
// 005513b9  894644               mov dword ptr [esi + 0x44], eax
// 005513bc  83f902               cmp ecx, 2
// 005513bf  7449                 je 0x55140a
// 005513c1  68b000a200           push 0xa200b0
// 005513c6  8d4c241c             lea ecx, [esp + 0x1c]
// 005513ca  ff1510a49e00         call dword ptr [0x9ea410]
// 005513d0  8d542450             lea edx, [esp + 0x50]
// 005513d4  52                   push edx
// 005513d5  8bce                 mov ecx, esi
// 005513d7  c68424d800000003     mov byte ptr [esp + 0xd8], 3
// 005513df  e88cedffff           call 0x550170
// 005513e4  50                   push eax
// 005513e5  8d44241c             lea eax, [esp + 0x1c]
// 005513e9  50                   push eax
// 005513ea  8d4c2474             lea ecx, [esp + 0x74]
// 005513ee  c68424dc00000004     mov byte ptr [esp + 0xdc], 4
// 005513f6  e80526f3ff           call 0x483a00
// 005513fb  6894edb000           push 0xb0ed94
// 00551400  8d4c2470             lea ecx, [esp + 0x70]
// 00551404  51                   push ecx
// 00551405  e8a8752500           call 0x7a89b2
// 0055140a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0055140d  8d440805             lea eax, [eax + ecx + 5]
// 00551411  2bc1                 sub eax, ecx
// 00551413  894644               mov dword ptr [esi + 0x44], eax
// 00551416  7805                 js 0x55141d
// 00551418  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0055141b  7e0c                 jle 0x551429
// 0055141d  03c1                 add eax, ecx
// 0055141f  6a00                 push 0
// 00551421  50                   push eax
// 00551422  8bce                 mov ecx, esi
// 00551424  e827740000           call 0x558850
// 00551429  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0055142c  8b5644               mov edx, dword ptr [esi + 0x44]
// 0055142f  8d441104             lea eax, [ecx + edx + 4]
// 00551433  2bc1                 sub eax, ecx
// 00551435  894644               mov dword ptr [esi + 0x44], eax
// 00551438  7805                 js 0x55143f
// 0055143a  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0055143d  7e0c                 jle 0x55144b
// 0055143f  03c1                 add eax, ecx
// 00551441  6a00                 push 0
// 00551443  50                   push eax
// 00551444  8bce                 mov ecx, esi
// 00551446  e805740000           call 0x558850
// 0055144b  8bce                 mov ecx, esi
// 0055144d  e89eedffff           call 0x5501f0
// 00551452  0fb7c0               movzx eax, ax
// 00551455  98                   cwde 
// 00551456  8bce                 mov ecx, esi
// 00551458  894708               mov dword ptr [edi + 8], eax
// 0055145b  e890edffff           call 0x5501f0
// 00551460  0fb7c0               movzx eax, ax
// 00551463  0fbfc8               movsx ecx, ax
// 00551466  894f0c               mov dword ptr [edi + 0xc], ecx
// 00551469  8b4644               mov eax, dword ptr [esi + 0x44]
// 0055146c  8d5001               lea edx, [eax + 1]
// 0055146f  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 00551472  7e0f                 jle 0x551483
// 00551474  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00551477  03c8                 add ecx, eax
// 00551479  6a01                 push 1
// 0055147b  51                   push ecx
// 0055147c  8bce                 mov ecx, esi
// 0055147e  e8cd730000           call 0x558850
// 00551483  8b4644               mov eax, dword ptr [esi + 0x44]
// 00551486  8b5640               mov edx, dword ptr [esi + 0x40]
// 00551489  8a0c10               mov cl, byte ptr [eax + edx]
// 0055148c  40                   inc eax
// 0055148d  894644               mov dword ptr [esi + 0x44], eax
// 00551490  0fb6c1               movzx eax, cl
// 00551493  53                   push ebx
// 00551494  bb03000000           mov ebx, 3
// 00551499  83f818               cmp eax, 0x18
// 0055149c  7457                 je 0x5514f5
// 0055149e  83f820               cmp eax, 0x20
// 005514a1  7449                 je 0x5514ec
// 005514a3  689000a200           push 0xa20090
// 005514a8  8d4c2420             lea ecx, [esp + 0x20]
// 005514ac  ff1510a49e00         call dword ptr [0x9ea410]
// 005514b2  8d442454             lea eax, [esp + 0x54]
// 005514b6  50                   push eax
// 005514b7  8bce                 mov ecx, esi
// 005514b9  c68424dc00000005     mov byte ptr [esp + 0xdc], 5
// 005514c1  e8aaecffff           call 0x550170
// 005514c6  50                   push eax
// 005514c7  8d4c2420             lea ecx, [esp + 0x20]
// 005514cb  51                   push ecx
// 005514cc  8d4c2478             lea ecx, [esp + 0x78]
// 005514d0  c68424e000000006     mov byte ptr [esp + 0xe0], 6
// 005514d8  e82325f3ff           call 0x483a00
// 005514dd  6894edb000           push 0xb0ed94
// 005514e2  8d542474             lea edx, [esp + 0x74]
// 005514e6  52                   push edx
// 005514e7  e8c6742500           call 0x7a89b2
// 005514ec  c7471004000000       mov dword ptr [edi + 0x10], 4
// 005514f3  eb03                 jmp 0x5514f8
// 005514f5  895f10               mov dword ptr [edi + 0x10], ebx
// 005514f8  8b4644               mov eax, dword ptr [esi + 0x44]
// 005514fb  8d4801               lea ecx, [eax + 1]
// 005514fe  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00551501  7e0f                 jle 0x551512
// 00551503  8b5634               mov edx, dword ptr [esi + 0x34]
// 00551506  6a01                 push 1
// 00551508  03d0                 add edx, eax
// 0055150a  52                   push edx
// 0055150b  8bce                 mov ecx, esi
// 0055150d  e83e730000           call 0x558850
// 00551512  ff4644               inc dword ptr [esi + 0x44]
// 00551515  8b4644               mov eax, dword ptr [esi + 0x44]
// 00551518  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0055151b  03c1                 add eax, ecx
// 0055151d  03c5                 add eax, ebp
// 0055151f  2bc1                 sub eax, ecx
// 00551521  894644               mov dword ptr [esi + 0x44], eax
// 00551524  7805                 js 0x55152b
// 00551526  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 00551529  7e0c                 jle 0x551537
// 0055152b  03c1                 add eax, ecx
// 0055152d  6a00                 push 0
// 0055152f  50                   push eax
// 00551530  8bce                 mov ecx, esi
// 00551532  e819730000           call 0x558850
// 00551537  8b4708               mov eax, dword ptr [edi + 8]
// 0055153a  0faf470c             imul eax, dword ptr [edi + 0xc]
// 0055153e  0faf4710             imul eax, dword ptr [edi + 0x10]
// 00551542  50                   push eax
// 00551543  e85896fbff           call 0x50aba0
// 00551548  83c404               add esp, 4
// 0055154b  894704               mov dword ptr [edi + 4], eax
// 0055154e  8b470c               mov eax, dword ptr [edi + 0xc]
// 00551551  395f10               cmp dword ptr [edi + 0x10], ebx
// 00551554  0f85e2000000         jne 0x55163c
// 0055155a  83e801               sub eax, 1
// 0055155d  89442410             mov dword ptr [esp + 0x10], eax
// 00551561  0f88e8010000         js 0x55174f
// 00551567  eb07                 jmp 0x551570
// 00551569  8da42400000000       lea esp, [esp]
// 00551570  33ed                 xor ebp, ebp
// 00551572  396f08               cmp dword ptr [edi + 8], ebp
// 00551575  0f8eb1000000         jle 0x55162c
// 0055157b  eb03                 jmp 0x551580
// 0055157d  8d4900               lea ecx, [ecx]
// 00551580  8b4644               mov eax, dword ptr [esi + 0x44]
// 00551583  8d4801               lea ecx, [eax + 1]
// 00551586  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00551589  7e0f                 jle 0x55159a
// 0055158b  8b5634               mov edx, dword ptr [esi + 0x34]
// 0055158e  6a01                 push 1
// 00551590  03d0                 add edx, eax
// 00551592  52                   push edx
// 00551593  8bce                 mov ecx, esi
// 00551595  e8b6720000           call 0x558850
// 0055159a  8b4644               mov eax, dword ptr [esi + 0x44]
// 0055159d  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005515a0  8a0c08               mov cl, byte ptr [eax + ecx]
// 005515a3  40                   inc eax
// 005515a4  0fb6d1               movzx edx, cl
// 005515a7  8d4801               lea ecx, [eax + 1]
// 005515aa  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005515ad  894644               mov dword ptr [esi + 0x44], eax
// 005515b0  89542414             mov dword ptr [esp + 0x14], edx
// 005515b4  7e0f                 jle 0x5515c5
// 005515b6  8b5634               mov edx, dword ptr [esi + 0x34]
// 005515b9  6a01                 push 1
// 005515bb  03d0                 add edx, eax
// 005515bd  52                   push edx
// 005515be  8bce                 mov ecx, esi
// 005515c0  e88b720000           call 0x558850
// 005515c5  8b4644               mov eax, dword ptr [esi + 0x44]
// 005515c8  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005515cb  8a0c08               mov cl, byte ptr [eax + ecx]
// 005515ce  40                   inc eax
// 005515cf  8d5001               lea edx, [eax + 1]
// 005515d2  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 005515d5  894644               mov dword ptr [esi + 0x44], eax
// 005515d8  0fb6d9               movzx ebx, cl
// 005515db  7e0f                 jle 0x5515ec
// 005515dd  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005515e0  03c8                 add ecx, eax
// 005515e2  6a01                 push 1
// 005515e4  51                   push ecx
// 005515e5  8bce                 mov ecx, esi
// 005515e7  e864720000           call 0x558850
// 005515ec  8b4644               mov eax, dword ptr [esi + 0x44]
// 005515ef  8b5640               mov edx, dword ptr [esi + 0x40]
// 005515f2  8a0c10               mov cl, byte ptr [eax + edx]
// 005515f5  40                   inc eax
// 005515f6  894644               mov dword ptr [esi + 0x44], eax
// 005515f9  8b4708               mov eax, dword ptr [edi + 8]
// 005515fc  0faf442410           imul eax, dword ptr [esp + 0x10]
// 00551601  8b5704               mov edx, dword ptr [edi + 4]
// 00551604  0fb6c9               movzx ecx, cl
// 00551607  03c5                 add eax, ebp
// 00551609  8d0440               lea eax, [eax + eax*2]
// 0055160c  880c10               mov byte ptr [eax + edx], cl
// 0055160f  8b4f04               mov ecx, dword ptr [edi + 4]
// 00551612  885c0101             mov byte ptr [ecx + eax + 1], bl
// 00551616  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 0055161b  8b5704               mov edx, dword ptr [edi + 4]
// 0055161e  45                   inc ebp
// 0055161f  884c0202             mov byte ptr [edx + eax + 2], cl
// 00551623  3b6f08               cmp ebp, dword ptr [edi + 8]
// 00551626  0f8c54ffffff         jl 0x551580
// 0055162c  836c241001           sub dword ptr [esp + 0x10], 1
// 00551631  0f8939ffffff         jns 0x551570
// 00551637  e913010000           jmp 0x55174f
// 0055163c  83e801               sub eax, 1
// 0055163f  89442410             mov dword ptr [esp + 0x10], eax
// 00551643  0f8806010000         js 0x55174f
// 00551649  8da42400000000       lea esp, [esp]
// 00551650  33ed                 xor ebp, ebp
// 00551652  396f08               cmp dword ptr [edi + 8], ebp
// 00551655  0f8ee9000000         jle 0x551744
// 0055165b  eb03                 jmp 0x551660
// 0055165d  8d4900               lea ecx, [ecx]
// 00551660  8b4644               mov eax, dword ptr [esi + 0x44]
// 00551663  8d5001               lea edx, [eax + 1]
// 00551666  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 00551669  7e0f                 jle 0x55167a
// 0055166b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0055166e  03c8                 add ecx, eax
// 00551670  6a01                 push 1
// 00551672  51                   push ecx
// 00551673  8bce                 mov ecx, esi
// 00551675  e8d6710000           call 0x558850
// 0055167a  8b4644               mov eax, dword ptr [esi + 0x44]
// 0055167d  8b5640               mov edx, dword ptr [esi + 0x40]
// 00551680  8a0c10               mov cl, byte ptr [eax + edx]
// 00551683  40                   inc eax
// 00551684  0fb6c9               movzx ecx, cl
// 00551687  8d5001               lea edx, [eax + 1]
// 0055168a  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 0055168d  894644               mov dword ptr [esi + 0x44], eax
// 00551690  894c2418             mov dword ptr [esp + 0x18], ecx
// 00551694  7e0f                 jle 0x5516a5
// 00551696  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00551699  03c8                 add ecx, eax
// 0055169b  6a01                 push 1
// 0055169d  51                   push ecx
// 0055169e  8bce                 mov ecx, esi
// 005516a0  e8ab710000           call 0x558850
// 005516a5  8b4644               mov eax, dword ptr [esi + 0x44]
// 005516a8  8b5640               mov edx, dword ptr [esi + 0x40]
// 005516ab  8a0c10               mov cl, byte ptr [eax + edx]
// 005516ae  40                   inc eax
// 005516af  0fb6c9               movzx ecx, cl
// 005516b2  8d5001               lea edx, [eax + 1]
// 005516b5  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 005516b8  894644               mov dword ptr [esi + 0x44], eax
// 005516bb  894c2414             mov dword ptr [esp + 0x14], ecx
// 005516bf  7e0f                 jle 0x5516d0
// 005516c1  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005516c4  03c8                 add ecx, eax
// 005516c6  6a01                 push 1
// 005516c8  51                   push ecx
// 005516c9  8bce                 mov ecx, esi
// 005516cb  e880710000           call 0x558850
// 005516d0  8b4644               mov eax, dword ptr [esi + 0x44]
// 005516d3  8b5640               mov edx, dword ptr [esi + 0x40]
// 005516d6  8a0c10               mov cl, byte ptr [eax + edx]
// 005516d9  40                   inc eax
// 005516da  0fb6d9               movzx ebx, cl
// 005516dd  8d4801               lea ecx, [eax + 1]
// 005516e0  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005516e3  894644               mov dword ptr [esi + 0x44], eax
// 005516e6  7e0f                 jle 0x5516f7
// 005516e8  8b5634               mov edx, dword ptr [esi + 0x34]
// 005516eb  6a01                 push 1
// 005516ed  03d0                 add edx, eax
// 005516ef  52                   push edx
// 005516f0  8bce                 mov ecx, esi
// 005516f2  e859710000           call 0x558850
// 005516f7  8b4644               mov eax, dword ptr [esi + 0x44]
// 005516fa  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005516fd  8a0c08               mov cl, byte ptr [eax + ecx]
// 00551700  40                   inc eax
// 00551701  894644               mov dword ptr [esi + 0x44], eax
// 00551704  8b4708               mov eax, dword ptr [edi + 8]
// 00551707  0faf442410           imul eax, dword ptr [esp + 0x10]
// 0055170c  8b5704               mov edx, dword ptr [edi + 4]
// 0055170f  03c5                 add eax, ebp
// 00551711  03c0                 add eax, eax
// 00551713  03c0                 add eax, eax
// 00551715  881c10               mov byte ptr [eax + edx], bl
// 00551718  8b5704               mov edx, dword ptr [edi + 4]
// 0055171b  0fb65c2414           movzx ebx, byte ptr [esp + 0x14]
// 00551720  885c0201             mov byte ptr [edx + eax + 1], bl
// 00551724  8b5704               mov edx, dword ptr [edi + 4]
// 00551727  0fb65c2418           movzx ebx, byte ptr [esp + 0x18]
// 0055172c  885c0202             mov byte ptr [edx + eax + 2], bl
// 00551730  8b5704               mov edx, dword ptr [edi + 4]
// 00551733  0fb6c9               movzx ecx, cl
// 00551736  45                   inc ebp
// 00551737  884c0203             mov byte ptr [edx + eax + 3], cl
// 0055173b  3b6f08               cmp ebp, dword ptr [edi + 8]
// 0055173e  0f8c1cffffff         jl 0x551660
// 00551744  836c241001           sub dword ptr [esp + 0x10], 1
// 00551749  0f8901ffffff         jns 0x551650
// 0055174f  8d4c2438             lea ecx, [esp + 0x38]
// 00551753  c78424d8000000ffffffff mov dword ptr [esp + 0xd8], 0xffffffff
// 0055175e  ff1500a49e00         call dword ptr [0x9ea400]
// 00551764  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 0055176b  5b                   pop ebx
// 0055176c  5d                   pop ebp
// 0055176d  5f                   pop edi
// 0055176e  5e                   pop esi
// 0055176f  64890d00000000       mov dword ptr fs:[0], ecx
// 00551776  81c4cc000000         add esp, 0xcc
// 0055177c  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\GImage_tga.cpp (function ?decodeTGA@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_tga.cpp
