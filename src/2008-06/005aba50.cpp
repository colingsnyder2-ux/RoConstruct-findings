// roc 2008-06 005aba50  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 1330 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aba50
//
// 005aba50  55                   push ebp
// 005aba51  8bec                 mov ebp, esp
// 005aba53  83e4c0               and esp, 0xffffffc0
// 005aba56  64a100000000         mov eax, dword ptr fs:[0]
// 005aba5c  6aff                 push -1
// 005aba5e  6898317d00           push 0x7d3198
// 005aba63  50                   push eax
// 005aba64  64892500000000       mov dword ptr fs:[0], esp
// 005aba6b  83ec6c               sub esp, 0x6c
// 005aba6e  56                   push esi
// 005aba6f  8b7508               mov esi, dword ptr [ebp + 8]
// 005aba72  8b06                 mov eax, dword ptr [esi]
// 005aba74  8b4008               mov eax, dword ptr [eax + 8]
// 005aba77  57                   push edi
// 005aba78  8b3d78288000         mov edi, dword ptr [0x802878]
// 005aba7e  50                   push eax
// 005aba7f  b914969200           mov ecx, 0x929614
// 005aba84  ffd7                 call edi
// 005aba86  84c0                 test al, al
// 005aba88  0f85e1040000         jne 0x5abf6f
// 005aba8e  8b06                 mov eax, dword ptr [esi]
// 005aba90  8b4808               mov ecx, dword ptr [eax + 8]
// 005aba93  51                   push ecx
// 005aba94  b9d0be9200           mov ecx, 0x92bed0
// 005aba99  ffd7                 call edi
// 005aba9b  84c0                 test al, al
// 005aba9d  742c                 je 0x5abacb
// 005aba9f  83c604               add esi, 4
// 005abaa2  56                   push esi
// 005abaa3  e828a4e6ff           call 0x415ed0
// 005abaa8  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005abaab  50                   push eax
// 005abaac  52                   push edx
// 005abaad  e86e670600           call 0x612220
// 005abab2  83c40c               add esp, 0xc
// 005abab5  b801000000           mov eax, 1
// 005ababa  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005ababe  64890d00000000       mov dword ptr fs:[0], ecx
// 005abac5  5f                   pop edi
// 005abac6  5e                   pop esi
// 005abac7  8be5                 mov esp, ebp
// 005abac9  5d                   pop ebp
// 005abaca  c3                   ret 
// 005abacb  8b06                 mov eax, dword ptr [esi]
// 005abacd  8b4008               mov eax, dword ptr [eax + 8]
// 005abad0  50                   push eax
// 005abad1  b944969200           mov ecx, 0x929644
// 005abad6  ffd7                 call edi
// 005abad8  84c0                 test al, al
// 005abada  742f                 je 0x5abb0b
// 005abadc  83c604               add esi, 4
// 005abadf  56                   push esi
// 005abae0  e87ba4e6ff           call 0x415f60
// 005abae5  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005abae8  0fb6c8               movzx ecx, al
// 005abaeb  51                   push ecx
// 005abaec  52                   push edx
// 005abaed  e8fe680600           call 0x6123f0
// 005abaf2  83c40c               add esp, 0xc
// 005abaf5  b801000000           mov eax, 1
// 005abafa  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005abafe  64890d00000000       mov dword ptr fs:[0], ecx
// 005abb05  5f                   pop edi
// 005abb06  5e                   pop esi
// 005abb07  8be5                 mov esp, ebp
// 005abb09  5d                   pop ebp
// 005abb0a  c3                   ret 
// 005abb0b  8b06                 mov eax, dword ptr [esi]
// 005abb0d  8b4008               mov eax, dword ptr [eax + 8]
// 005abb10  50                   push eax
// 005abb11  b9dcbe9200           mov ecx, 0x92bedc
// 005abb16  ffd7                 call edi
// 005abb18  84c0                 test al, al
// 005abb1a  742f                 je 0x5abb4b
// 005abb1c  83c604               add esi, 4
// 005abb1f  56                   push esi
// 005abb20  e8cba4e6ff           call 0x415ff0
// 005abb25  51                   push ecx
// 005abb26  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005abb29  dd1c24               fstp qword ptr [esp]
// 005abb2c  51                   push ecx
// 005abb2d  e8ce660600           call 0x612200
// 005abb32  83c40c               add esp, 0xc
// 005abb35  b801000000           mov eax, 1
// 005abb3a  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005abb3e  64890d00000000       mov dword ptr fs:[0], ecx
// 005abb45  5f                   pop edi
// 005abb46  5e                   pop esi
// 005abb47  8be5                 mov esp, ebp
// 005abb49  5d                   pop ebp
// 005abb4a  c3                   ret 
// 005abb4b  8b06                 mov eax, dword ptr [esi]
// 005abb4d  8b5008               mov edx, dword ptr [eax + 8]
// 005abb50  52                   push edx
// 005abb51  b9e8be9200           mov ecx, 0x92bee8
// 005abb56  ffd7                 call edi
// 005abb58  84c0                 test al, al
// 005abb5a  742f                 je 0x5abb8b
// 005abb5c  83c604               add esi, 4
// 005abb5f  56                   push esi
// 005abb60  e81ba5e6ff           call 0x416080
// 005abb65  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005abb68  51                   push ecx
// 005abb69  dd1c24               fstp qword ptr [esp]
// 005abb6c  50                   push eax
// 005abb6d  e88e660600           call 0x612200
// 005abb72  83c40c               add esp, 0xc
// 005abb75  b801000000           mov eax, 1
// 005abb7a  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005abb7e  64890d00000000       mov dword ptr fs:[0], ecx
// 005abb85  5f                   pop edi
// 005abb86  5e                   pop esi
// 005abb87  8be5                 mov esp, ebp
// 005abb89  5d                   pop ebp
// 005abb8a  c3                   ret 
// 005abb8b  8bce                 mov ecx, esi
// 005abb8d  e84ee4ffff           call 0x5a9fe0
// 005abb92  84c0                 test al, al
// 005abb94  742c                 je 0x5abbc2
// 005abb96  83c604               add esi, 4
// 005abb99  56                   push esi
// 005abb9a  e8f1f4ffff           call 0x5ab090
// 005abb9f  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005abba2  50                   push eax
// 005abba3  51                   push ecx
// 005abba4  e89780feff           call 0x593c40
// 005abba9  83c40c               add esp, 0xc
// 005abbac  b801000000           mov eax, 1
// 005abbb1  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005abbb5  64890d00000000       mov dword ptr fs:[0], ecx
// 005abbbc  5f                   pop edi
// 005abbbd  5e                   pop esi
// 005abbbe  8be5                 mov esp, ebp
// 005abbc0  5d                   pop ebp
// 005abbc1  c3                   ret 
// 005abbc2  8bce                 mov ecx, esi
// 005abbc4  e847a1e6ff           call 0x415d10
// 005abbc9  84c0                 test al, al
// 005abbcb  743d                 je 0x5abc0a
// 005abbcd  83c604               add esi, 4
// 005abbd0  56                   push esi
// 005abbd1  e89a88e8ff           call 0x434470
// 005abbd6  83c404               add esp, 4
// 005abbd9  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005abbdd  7205                 jb 0x5abbe4
// 005abbdf  8b4004               mov eax, dword ptr [eax + 4]
// 005abbe2  eb03                 jmp 0x5abbe7
// 005abbe4  83c004               add eax, 4
// 005abbe7  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005abbea  50                   push eax
// 005abbeb  52                   push edx
// 005abbec  e88f660600           call 0x612280
// 005abbf1  83c408               add esp, 8
// 005abbf4  b801000000           mov eax, 1
// 005abbf9  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005abbfd  64890d00000000       mov dword ptr fs:[0], ecx
// 005abc04  5f                   pop edi
// 005abc05  5e                   pop esi
// 005abc06  8be5                 mov esp, ebp
// 005abc08  5d                   pop ebp
// 005abc09  c3                   ret 
// 005abc0a  8bce                 mov ecx, esi
// 005abc0c  e87f15fcff           call 0x56d190
// 005abc11  84c0                 test al, al
// 005abc13  7444                 je 0x5abc59
// 005abc15  83c604               add esi, 4
// 005abc18  56                   push esi
// 005abc19  e8f2ecfeff           call 0x59a910
// 005abc1e  d900                 fld dword ptr [eax]
// 005abc20  83ec08               sub esp, 8
// 005abc23  8bcc                 mov ecx, esp
// 005abc25  d919                 fstp dword ptr [ecx]
// 005abc27  8964242c             mov dword ptr [esp + 0x2c], esp
// 005abc2b  d94004               fld dword ptr [eax + 4]
// 005abc2e  d95904               fstp dword ptr [ecx + 4]
// 005abc31  d94008               fld dword ptr [eax + 8]
// 005abc34  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005abc37  50                   push eax
// 005abc38  d95908               fstp dword ptr [ecx + 8]
// 005abc3b  e800d4ffff           call 0x5a9040
// 005abc40  83c410               add esp, 0x10
// 005abc43  b801000000           mov eax, 1
// 005abc48  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005abc4c  64890d00000000       mov dword ptr fs:[0], ecx
// 005abc53  5f                   pop edi
// 005abc54  5e                   pop esi
// 005abc55  8be5                 mov esp, ebp
// 005abc57  5d                   pop ebp
// 005abc58  c3                   ret 
// 005abc59  8bce                 mov ecx, esi
// 005abc5b  e85088fdff           call 0x5844b0
// 005abc60  84c0                 test al, al
// 005abc62  743a                 je 0x5abc9e
// 005abc64  83c604               add esi, 4
// 005abc67  56                   push esi
// 005abc68  e82389fdff           call 0x584590
// 005abc6d  83ec2c               sub esp, 0x2c
// 005abc70  8bcc                 mov ecx, esp
// 005abc72  89642450             mov dword ptr [esp + 0x50], esp
// 005abc76  50                   push eax
// 005abc77  e8f4a9ecff           call 0x476670
// 005abc7c  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005abc7f  51                   push ecx
// 005abc80  e87bd3ffff           call 0x5a9000
// 005abc85  83c434               add esp, 0x34
// 005abc88  b801000000           mov eax, 1
// 005abc8d  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005abc91  64890d00000000       mov dword ptr fs:[0], ecx
// 005abc98  5f                   pop edi
// 005abc99  5e                   pop esi
// 005abc9a  8be5                 mov esp, ebp
// 005abc9c  5d                   pop ebp
// 005abc9d  c3                   ret 
// 005abc9e  8bce                 mov ecx, esi
// 005abca0  e8dbe7feff           call 0x59a480
// 005abca5  84c0                 test al, al
// 005abca7  7444                 je 0x5abced
// 005abca9  83c604               add esi, 4
// 005abcac  56                   push esi
// 005abcad  e8ceebfeff           call 0x59a880
// 005abcb2  d900                 fld dword ptr [eax]
// 005abcb4  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005abcb7  83ec08               sub esp, 8
// 005abcba  8bcc                 mov ecx, esp
// 005abcbc  d919                 fstp dword ptr [ecx]
// 005abcbe  8964242c             mov dword ptr [esp + 0x2c], esp
// 005abcc2  d94004               fld dword ptr [eax + 4]
// 005abcc5  52                   push edx
// 005abcc6  d95904               fstp dword ptr [ecx + 4]
// 005abcc9  d94008               fld dword ptr [eax + 8]
// 005abccc  d95908               fstp dword ptr [ecx + 8]
// 005abccf  e8dcd3ffff           call 0x5a90b0
// 005abcd4  83c410               add esp, 0x10
// 005abcd7  b801000000           mov eax, 1
// 005abcdc  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005abce0  64890d00000000       mov dword ptr fs:[0], ecx
// 005abce7  5f                   pop edi
// 005abce8  5e                   pop esi
// 005abce9  8be5                 mov esp, ebp
// 005abceb  5d                   pop ebp
// 005abcec  c3                   ret 
// 005abced  8bce                 mov ecx, esi
// 005abcef  e83cf5edff           call 0x48b230
// 005abcf4  84c0                 test al, al
// 005abcf6  742e                 je 0x5abd26
// 005abcf8  83c604               add esi, 4
// 005abcfb  56                   push esi
// 005abcfc  e88ff9edff           call 0x48b690
// 005abd01  8b00                 mov eax, dword ptr [eax]
// 005abd03  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005abd06  50                   push eax
// 005abd07  51                   push ecx
// 005abd08  e883d0ffff           call 0x5a8d90
// 005abd0d  83c40c               add esp, 0xc
// 005abd10  b801000000           mov eax, 1
// 005abd15  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005abd19  64890d00000000       mov dword ptr fs:[0], ecx
// 005abd20  5f                   pop edi
// 005abd21  5e                   pop esi
// 005abd22  8be5                 mov esp, ebp
// 005abd24  5d                   pop ebp
// 005abd25  c3                   ret 
// 005abd26  8bce                 mov ecx, esi
// 005abd28  e803a0e6ff           call 0x415d30
// 005abd2d  84c0                 test al, al
// 005abd2f  740e                 je 0x5abd3f
// 005abd31  83c604               add esi, 4
// 005abd34  56                   push esi
// 005abd35  e806a4fdff           call 0x586140
// 005abd3a  e997feffff           jmp 0x5abbd6
// 005abd3f  8bce                 mov ecx, esi
// 005abd41  e86a14fcff           call 0x56d1b0
// 005abd46  84c0                 test al, al
// 005abd48  7438                 je 0x5abd82
// 005abd4a  83c604               add esi, 4
// 005abd4d  56                   push esi
// 005abd4e  e8cdf3ffff           call 0x5ab120
// 005abd53  51                   push ecx
// 005abd54  8bcc                 mov ecx, esp
// 005abd56  89642428             mov dword ptr [esp + 0x28], esp
// 005abd5a  50                   push eax
// 005abd5b  e8c0dcfaff           call 0x559a20
// 005abd60  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005abd63  50                   push eax
// 005abd64  e8c7e9ffff           call 0x5aa730
// 005abd69  83c40c               add esp, 0xc
// 005abd6c  b801000000           mov eax, 1
// 005abd71  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005abd75  64890d00000000       mov dword ptr fs:[0], ecx
// 005abd7c  5f                   pop edi
// 005abd7d  5e                   pop esi
// 005abd7e  8be5                 mov esp, ebp
// 005abd80  5d                   pop ebp
// 005abd81  c3                   ret 
// 005abd82  8bce                 mov ecx, esi
// 005abd84  e8b757eeff           call 0x491540
// 005abd89  84c0                 test al, al
// 005abd8b  7438                 je 0x5abdc5
// 005abd8d  83c604               add esi, 4
// 005abd90  56                   push esi
// 005abd91  e8fa58eeff           call 0x491690
// 005abd96  51                   push ecx
// 005abd97  8bcc                 mov ecx, esp
// 005abd99  89642428             mov dword ptr [esp + 0x28], esp
// 005abd9d  50                   push eax
// 005abd9e  e84d59e6ff           call 0x4116f0
// 005abda3  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005abda6  51                   push ecx
// 005abda7  e884e9ffff           call 0x5aa730
// 005abdac  83c40c               add esp, 0xc
// 005abdaf  b801000000           mov eax, 1
// 005abdb4  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005abdb8  64890d00000000       mov dword ptr fs:[0], ecx
// 005abdbf  5f                   pop edi
// 005abdc0  5e                   pop esi
// 005abdc1  8be5                 mov esp, ebp
// 005abdc3  5d                   pop ebp
// 005abdc4  c3                   ret 
// 005abdc5  8bce                 mov ecx, esi
// 005abdc7  e8849fe6ff           call 0x415d50
// 005abdcc  84c0                 test al, al
// 005abdce  7453                 je 0x5abe23
// 005abdd0  83c604               add esi, 4
// 005abdd3  56                   push esi
// 005abdd4  e887a4e6ff           call 0x416260
// 005abdd9  83c404               add esp, 4
// 005abddc  8bf0                 mov esi, eax
// 005abdde  8d542428             lea edx, [esp + 0x28]
// 005abde2  52                   push edx
// 005abde3  8bce                 mov ecx, esi
// 005abde5  e836410e00           call 0x68ff20
// 005abdea  8bf8                 mov edi, eax
// 005abdec  8d442420             lea eax, [esp + 0x20]
// 005abdf0  50                   push eax
// 005abdf1  8bce                 mov ecx, esi
// 005abdf3  e8f8400e00           call 0x68fef0
// 005abdf8  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005abdfb  8b5704               mov edx, dword ptr [edi + 4]
// 005abdfe  51                   push ecx
// 005abdff  8b0f                 mov ecx, dword ptr [edi]
// 005abe01  52                   push edx
// 005abe02  8b5004               mov edx, dword ptr [eax + 4]
// 005abe05  8b00                 mov eax, dword ptr [eax]
// 005abe07  51                   push ecx
// 005abe08  52                   push edx
// 005abe09  50                   push eax
// 005abe0a  e8f1e1ffff           call 0x5aa000
// 005abe0f  83c414               add esp, 0x14
// 005abe12  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005abe16  64890d00000000       mov dword ptr fs:[0], ecx
// 005abe1d  5f                   pop edi
// 005abe1e  5e                   pop esi
// 005abe1f  8be5                 mov esp, ebp
// 005abe21  5d                   pop ebp
// 005abe22  c3                   ret 
// 005abe23  8bce                 mov ecx, esi
// 005abe25  e8a6e2ffff           call 0x5aa0d0
// 005abe2a  84c0                 test al, al
// 005abe2c  0f8481000000         je 0x5abeb3
// 005abe32  83c604               add esi, 4
// 005abe35  56                   push esi
// 005abe36  e875f3ffff           call 0x5ab1b0
// 005abe3b  83c404               add esp, 4
// 005abe3e  8d4c2420             lea ecx, [esp + 0x20]
// 005abe42  8bf0                 mov esi, eax
// 005abe44  51                   push ecx
// 005abe45  8bce                 mov ecx, esi
// 005abe47  33ff                 xor edi, edi
// 005abe49  e8a2400e00           call 0x68fef0
// 005abe4e  8d542428             lea edx, [esp + 0x28]
// 005abe52  52                   push edx
// 005abe53  8bce                 mov ecx, esi
// 005abe55  e8c6400e00           call 0x68ff20
// 005abe5a  8d442428             lea eax, [esp + 0x28]
// 005abe5e  50                   push eax
// 005abe5f  8d4c2424             lea ecx, [esp + 0x24]
// 005abe63  e858abeeff           call 0x4969c0
// 005abe68  84c0                 test al, al
// 005abe6a  7434                 je 0x5abea0
// 005abe6c  8b750c               mov esi, dword ptr [ebp + 0xc]
// 005abe6f  90                   nop 
// 005abe70  56                   push esi
// 005abe71  8d4c2424             lea ecx, [esp + 0x24]
// 005abe75  e8f67ae6ff           call 0x413970
// 005abe7a  50                   push eax
// 005abe7b  e8d0fbffff           call 0x5aba50
// 005abe80  83c408               add esp, 8
// 005abe83  8d4c2420             lea ecx, [esp + 0x20]
// 005abe87  03f8                 add edi, eax
// 005abe89  e862c9ffff           call 0x5a87f0
// 005abe8e  8d4c2428             lea ecx, [esp + 0x28]
// 005abe92  51                   push ecx
// 005abe93  8d4c2424             lea ecx, [esp + 0x24]
// 005abe97  e824abeeff           call 0x4969c0
// 005abe9c  84c0                 test al, al
// 005abe9e  75d0                 jne 0x5abe70
// 005abea0  8bc7                 mov eax, edi
// 005abea2  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005abea6  64890d00000000       mov dword ptr fs:[0], ecx
// 005abead  5f                   pop edi
// 005abeae  5e                   pop esi
// 005abeaf  8be5                 mov esp, ebp
// 005abeb1  5d                   pop ebp
// 005abeb2  c3                   ret 
// 005abeb3  8bce                 mov ecx, esi
// 005abeb5  e836e2ffff           call 0x5aa0f0
// 005abeba  84c0                 test al, al
// 005abebc  0f84ad000000         je 0x5abf6f
// 005abec2  8d542420             lea edx, [esp + 0x20]
// 005abec6  52                   push edx
// 005abec7  8bce                 mov ecx, esi
// 005abec9  e812fbffff           call 0x5ab9e0
// 005abece  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005abed2  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 005abeda  85ff                 test edi, edi
// 005abedc  745a                 je 0x5abf38
// 005abede  8d442430             lea eax, [esp + 0x30]
// 005abee2  50                   push eax
// 005abee3  8bcf                 mov ecx, edi
// 005abee5  e836400e00           call 0x68ff20
// 005abeea  8d4c2438             lea ecx, [esp + 0x38]
// 005abeee  51                   push ecx
// 005abeef  8bcf                 mov ecx, edi
// 005abef1  8bf0                 mov esi, eax
// 005abef3  e8f83f0e00           call 0x68fef0
// 005abef8  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005abefb  8b4e04               mov ecx, dword ptr [esi + 4]
// 005abefe  52                   push edx
// 005abeff  8b16                 mov edx, dword ptr [esi]
// 005abf01  51                   push ecx
// 005abf02  8b4804               mov ecx, dword ptr [eax + 4]
// 005abf05  52                   push edx
// 005abf06  8b10                 mov edx, dword ptr [eax]
// 005abf08  51                   push ecx
// 005abf09  52                   push edx
// 005abf0a  e8e1030000           call 0x5ac2f0
// 005abf0f  83c414               add esp, 0x14
// 005abf12  8d4c2420             lea ecx, [esp + 0x20]
// 005abf16  8bf0                 mov esi, eax
// 005abf18  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 005abf20  e83b470500           call 0x600660
// 005abf25  8bc6                 mov eax, esi
// 005abf27  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005abf2b  64890d00000000       mov dword ptr fs:[0], ecx
// 005abf32  5f                   pop edi
// 005abf33  5e                   pop esi
// 005abf34  8be5                 mov esp, ebp
// 005abf36  5d                   pop ebp
// 005abf37  c3                   ret 
// 005abf38  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005abf3b  6a00                 push 0
// 005abf3d  6a00                 push 0
// 005abf3f  50                   push eax
// 005abf40  e82b660600           call 0x612570
// 005abf45  83c40c               add esp, 0xc
// 005abf48  8d4c2420             lea ecx, [esp + 0x20]
// 005abf4c  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 005abf54  e807470500           call 0x600660
// 005abf59  b801000000           mov eax, 1
// 005abf5e  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005abf62  64890d00000000       mov dword ptr fs:[0], ecx
// 005abf69  5f                   pop edi
// 005abf6a  5e                   pop esi
// 005abf6b  8be5                 mov esp, ebp
// 005abf6d  5d                   pop ebp
// 005abf6e  c3                   ret 
// 005abf6f  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005abf73  5f                   pop edi
// 005abf74  33c0                 xor eax, eax
// 005abf76  64890d00000000       mov dword ptr fs:[0], ecx
// 005abf7d  5e                   pop esi
// 005abf7e  8be5                 mov esp, ebp
// 005abf80  5d                   pop ebp
// 005abf81  c3                   ret 
// library rbxgs/roc_expanded_parser_native_family_4cf965f3a92f49c0.cpp (function ?push@LuaArguments@Lua@RBX@@SAHABVValue@Reflection@3@QAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_expanded_parser_native_family_4cf965f3a92f49c0.cpp
