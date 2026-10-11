// roc 2007-08 00565f60  unit: RBX::Verb  size: 924 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00565f60
//
// 00565f60  83ec24               sub esp, 0x24
// 00565f63  57                   push edi
// 00565f64  8d44243c             lea eax, [esp + 0x3c]
// 00565f68  33ff                 xor edi, edi
// 00565f6a  50                   push eax
// 00565f6b  8d4c2434             lea ecx, [esp + 0x34]
// 00565f6f  897c240c             mov dword ptr [esp + 0xc], edi
// 00565f73  e838f7ffff           call 0x5656b0
// 00565f78  84c0                 test al, al
// 00565f7a  0f855d030000         jne 0x5662dd
// 00565f80  53                   push ebx
// 00565f81  55                   push ebp
// 00565f82  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 00565f86  56                   push esi
// 00565f87  eb09                 jmp 0x565f92
// 00565f89  8da42400000000       lea esp, [esp]
// 00565f90  33ff                 xor edi, edi
// 00565f92  8a442444             mov al, byte ptr [esp + 0x44]
// 00565f96  84c0                 test al, al
// 00565f98  8b742440             mov esi, dword ptr [esp + 0x40]
// 00565f9c  751f                 jne 0x565fbd
// 00565f9e  3bf7                 cmp esi, edi
// 00565fa0  7413                 je 0x565fb5
// 00565fa2  8bce                 mov ecx, esi
// 00565fa4  ff15bce47700         call dword ptr [0x77e4bc]
// 00565faa  83f8ff               cmp eax, -1
// 00565fad  7406                 je 0x565fb5
// 00565faf  88442445             mov byte ptr [esp + 0x45], al
// 00565fb3  eb06                 jmp 0x565fbb
// 00565fb5  33f6                 xor esi, esi
// 00565fb7  89742440             mov dword ptr [esp + 0x40], esi
// 00565fbb  b001                 mov al, 1
// 00565fbd  84c0                 test al, al
// 00565fbf  8a5c2445             mov bl, byte ptr [esp + 0x45]
// 00565fc3  885c2410             mov byte ptr [esp + 0x10], bl
// 00565fc7  7515                 jne 0x565fde
// 00565fc9  3bf7                 cmp esi, edi
// 00565fcb  7429                 je 0x565ff6
// 00565fcd  8bce                 mov ecx, esi
// 00565fcf  ff15bce47700         call dword ptr [0x77e4bc]
// 00565fd5  83f8ff               cmp eax, -1
// 00565fd8  741c                 je 0x565ff6
// 00565fda  88442445             mov byte ptr [esp + 0x45], al
// 00565fde  3bf7                 cmp esi, edi
// 00565fe0  7414                 je 0x565ff6
// 00565fe2  8bce                 mov ecx, esi
// 00565fe4  ff15c0e47700         call dword ptr [0x77e4c0]
// 00565fea  83f8ff               cmp eax, -1
// 00565fed  7407                 je 0x565ff6
// 00565fef  c644244400           mov byte ptr [esp + 0x44], 0
// 00565ff4  eb09                 jmp 0x565fff
// 00565ff6  897c2440             mov dword ptr [esp + 0x40], edi
// 00565ffa  c644244401           mov byte ptr [esp + 0x44], 1
// 00565fff  8d4c2448             lea ecx, [esp + 0x48]
// 00566003  51                   push ecx
// 00566004  8d4c2440             lea ecx, [esp + 0x40]
// 00566008  e8a3f6ffff           call 0x5656b0
// 0056600d  84c0                 test al, al
// 0056600f  0f852a020000         jne 0x56623f
// 00566015  8a442444             mov al, byte ptr [esp + 0x44]
// 00566019  84c0                 test al, al
// 0056601b  8b742440             mov esi, dword ptr [esp + 0x40]
// 0056601f  751f                 jne 0x566040
// 00566021  3bf7                 cmp esi, edi
// 00566023  7413                 je 0x566038
// 00566025  8bce                 mov ecx, esi
// 00566027  ff15bce47700         call dword ptr [0x77e4bc]
// 0056602d  83f8ff               cmp eax, -1
// 00566030  7406                 je 0x566038
// 00566032  88442445             mov byte ptr [esp + 0x45], al
// 00566036  eb06                 jmp 0x56603e
// 00566038  33f6                 xor esi, esi
// 0056603a  89742440             mov dword ptr [esp + 0x40], esi
// 0056603e  b001                 mov al, 1
// 00566040  84c0                 test al, al
// 00566042  8a5c2445             mov bl, byte ptr [esp + 0x45]
// 00566046  885c2411             mov byte ptr [esp + 0x11], bl
// 0056604a  7515                 jne 0x566061
// 0056604c  3bf7                 cmp esi, edi
// 0056604e  7429                 je 0x566079
// 00566050  8bce                 mov ecx, esi
// 00566052  ff15bce47700         call dword ptr [0x77e4bc]
// 00566058  83f8ff               cmp eax, -1
// 0056605b  741c                 je 0x566079
// 0056605d  88442445             mov byte ptr [esp + 0x45], al
// 00566061  3bf7                 cmp esi, edi
// 00566063  7414                 je 0x566079
// 00566065  8bce                 mov ecx, esi
// 00566067  ff15c0e47700         call dword ptr [0x77e4c0]
// 0056606d  83f8ff               cmp eax, -1
// 00566070  7407                 je 0x566079
// 00566072  c644244400           mov byte ptr [esp + 0x44], 0
// 00566077  eb09                 jmp 0x566082
// 00566079  897c2440             mov dword ptr [esp + 0x40], edi
// 0056607d  c644244401           mov byte ptr [esp + 0x44], 1
// 00566082  8d542448             lea edx, [esp + 0x48]
// 00566086  52                   push edx
// 00566087  8d4c2440             lea ecx, [esp + 0x40]
// 0056608b  e820f6ffff           call 0x5656b0
// 00566090  84c0                 test al, al
// 00566092  0f85e2010000         jne 0x56627a
// 00566098  8a442444             mov al, byte ptr [esp + 0x44]
// 0056609c  84c0                 test al, al
// 0056609e  8b742440             mov esi, dword ptr [esp + 0x40]
// 005660a2  751f                 jne 0x5660c3
// 005660a4  3bf7                 cmp esi, edi
// 005660a6  7413                 je 0x5660bb
// 005660a8  8bce                 mov ecx, esi
// 005660aa  ff15bce47700         call dword ptr [0x77e4bc]
// 005660b0  83f8ff               cmp eax, -1
// 005660b3  7406                 je 0x5660bb
// 005660b5  88442445             mov byte ptr [esp + 0x45], al
// 005660b9  eb06                 jmp 0x5660c1
// 005660bb  33f6                 xor esi, esi
// 005660bd  89742440             mov dword ptr [esp + 0x40], esi
// 005660c1  b001                 mov al, 1
// 005660c3  84c0                 test al, al
// 005660c5  8a5c2445             mov bl, byte ptr [esp + 0x45]
// 005660c9  7515                 jne 0x5660e0
// 005660cb  3bf7                 cmp esi, edi
// 005660cd  7429                 je 0x5660f8
// 005660cf  8bce                 mov ecx, esi
// 005660d1  ff15bce47700         call dword ptr [0x77e4bc]
// 005660d7  83f8ff               cmp eax, -1
// 005660da  741c                 je 0x5660f8
// 005660dc  88442445             mov byte ptr [esp + 0x45], al
// 005660e0  3bf7                 cmp esi, edi
// 005660e2  7414                 je 0x5660f8
// 005660e4  8bce                 mov ecx, esi
// 005660e6  ff15c0e47700         call dword ptr [0x77e4c0]
// 005660ec  83f8ff               cmp eax, -1
// 005660ef  7407                 je 0x5660f8
// 005660f1  c644244400           mov byte ptr [esp + 0x44], 0
// 005660f6  eb09                 jmp 0x566101
// 005660f8  897c2440             mov dword ptr [esp + 0x40], edi
// 005660fc  c644244401           mov byte ptr [esp + 0x44], 1
// 00566101  0fb6742410           movzx esi, byte ptr [esp + 0x10]
// 00566106  8bc6                 mov eax, esi
// 00566108  c1e802               shr eax, 2
// 0056610b  3bef                 cmp ebp, edi
// 0056610d  8a0c8590f38900       mov cl, byte ptr [eax*4 + 0x89f390]
// 00566114  884c2418             mov byte ptr [esp + 0x18], cl
// 00566118  7412                 je 0x56612c
// 0056611a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0056611e  52                   push edx
// 0056611f  8bcd                 mov ecx, ebp
// 00566121  ff15b4e57700         call dword ptr [0x77e5b4]
// 00566127  83f8ff               cmp eax, -1
// 0056612a  7505                 jne 0x566131
// 0056612c  c644245801           mov byte ptr [esp + 0x58], 1
// 00566131  0fb67c2411           movzx edi, byte ptr [esp + 0x11]
// 00566136  83e603               and esi, 3
// 00566139  8bc7                 mov eax, edi
// 0056613b  c1e804               shr eax, 4
// 0056613e  c1e604               shl esi, 4
// 00566141  03c6                 add eax, esi
// 00566143  85ed                 test ebp, ebp
// 00566145  8a0c8590f38900       mov cl, byte ptr [eax*4 + 0x89f390]
// 0056614c  884c241c             mov byte ptr [esp + 0x1c], cl
// 00566150  7412                 je 0x566164
// 00566152  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00566156  52                   push edx
// 00566157  8bcd                 mov ecx, ebp
// 00566159  ff15b4e57700         call dword ptr [0x77e5b4]
// 0056615f  83f8ff               cmp eax, -1
// 00566162  7505                 jne 0x566169
// 00566164  c644245801           mov byte ptr [esp + 0x58], 1
// 00566169  0fb6f3               movzx esi, bl
// 0056616c  8bc6                 mov eax, esi
// 0056616e  c1e806               shr eax, 6
// 00566171  83e70f               and edi, 0xf
// 00566174  85ed                 test ebp, ebp
// 00566176  8d0cb8               lea ecx, [eax + edi*4]
// 00566179  8a148d90f38900       mov dl, byte ptr [ecx*4 + 0x89f390]
// 00566180  88542420             mov byte ptr [esp + 0x20], dl
// 00566184  7412                 je 0x566198
// 00566186  8b442420             mov eax, dword ptr [esp + 0x20]
// 0056618a  50                   push eax
// 0056618b  8bcd                 mov ecx, ebp
// 0056618d  ff15b4e57700         call dword ptr [0x77e5b4]
// 00566193  83f8ff               cmp eax, -1
// 00566196  7505                 jne 0x56619d
// 00566198  c644245801           mov byte ptr [esp + 0x58], 1
// 0056619d  83e63f               and esi, 0x3f
// 005661a0  85ed                 test ebp, ebp
// 005661a2  8a0cb590f38900       mov cl, byte ptr [esi*4 + 0x89f390]
// 005661a9  884c2424             mov byte ptr [esp + 0x24], cl
// 005661ad  7412                 je 0x5661c1
// 005661af  8b542424             mov edx, dword ptr [esp + 0x24]
// 005661b3  52                   push edx
// 005661b4  8bcd                 mov ecx, ebp
// 005661b6  ff15b4e57700         call dword ptr [0x77e5b4]
// 005661bc  83f8ff               cmp eax, -1
// 005661bf  7505                 jne 0x5661c6
// 005661c1  c644245801           mov byte ptr [esp + 0x58], 1
// 005661c6  837c241411           cmp dword ptr [esp + 0x14], 0x11
// 005661cb  7552                 jne 0x56621f
// 005661cd  85ed                 test ebp, ebp
// 005661cf  8b442458             mov eax, dword ptr [esp + 0x58]
// 005661d3  8b742454             mov esi, dword ptr [esp + 0x54]
// 005661d7  8944242c             mov dword ptr [esp + 0x2c], eax
// 005661db  740f                 je 0x5661ec
// 005661dd  6a0d                 push 0xd
// 005661df  8bcd                 mov ecx, ebp
// 005661e1  ff15b4e57700         call dword ptr [0x77e5b4]
// 005661e7  83f8ff               cmp eax, -1
// 005661ea  7505                 jne 0x5661f1
// 005661ec  c644242c01           mov byte ptr [esp + 0x2c], 1
// 005661f1  85ed                 test ebp, ebp
// 005661f3  740f                 je 0x566204
// 005661f5  6a0a                 push 0xa
// 005661f7  8bcd                 mov ecx, ebp
// 005661f9  ff15b4e57700         call dword ptr [0x77e5b4]
// 005661ff  83f8ff               cmp eax, -1
// 00566202  7505                 jne 0x566209
// 00566204  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00566209  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0056620d  89742454             mov dword ptr [esp + 0x54], esi
// 00566211  894c2458             mov dword ptr [esp + 0x58], ecx
// 00566215  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0056621d  eb05                 jmp 0x566224
// 0056621f  8344241401           add dword ptr [esp + 0x14], 1
// 00566224  8d542448             lea edx, [esp + 0x48]
// 00566228  52                   push edx
// 00566229  8d4c2440             lea ecx, [esp + 0x40]
// 0056622d  e87ef4ffff           call 0x5656b0
// 00566232  84c0                 test al, al
// 00566234  0f8456fdffff         je 0x565f90
// 0056623a  e99b000000           jmp 0x5662da
// 0056623f  3bef                 cmp ebp, edi
// 00566241  0f8493000000         je 0x5662da
// 00566247  0fb6f3               movzx esi, bl
// 0056624a  8bc6                 mov eax, esi
// 0056624c  c1e802               shr eax, 2
// 0056624f  0fb60c8590f38900     movzx ecx, byte ptr [eax*4 + 0x89f390]
// 00566257  51                   push ecx
// 00566258  8bcd                 mov ecx, ebp
// 0056625a  ff15b4e57700         call dword ptr [0x77e5b4]
// 00566260  83e603               and esi, 3
// 00566263  c1e606               shl esi, 6
// 00566266  0fb69690f38900       movzx edx, byte ptr [esi + 0x89f390]
// 0056626d  52                   push edx
// 0056626e  8bcd                 mov ecx, ebp
// 00566270  ff15b4e57700         call dword ptr [0x77e5b4]
// 00566276  6a3d                 push 0x3d
// 00566278  eb4e                 jmp 0x5662c8
// 0056627a  3bef                 cmp ebp, edi
// 0056627c  745c                 je 0x5662da
// 0056627e  0fb6742410           movzx esi, byte ptr [esp + 0x10]
// 00566283  8bc6                 mov eax, esi
// 00566285  c1e802               shr eax, 2
// 00566288  0fb60c8590f38900     movzx ecx, byte ptr [eax*4 + 0x89f390]
// 00566290  51                   push ecx
// 00566291  8bcd                 mov ecx, ebp
// 00566293  ff15b4e57700         call dword ptr [0x77e5b4]
// 00566299  0fb6fb               movzx edi, bl
// 0056629c  8bd7                 mov edx, edi
// 0056629e  83e603               and esi, 3
// 005662a1  c1ea04               shr edx, 4
// 005662a4  c1e604               shl esi, 4
// 005662a7  03d6                 add edx, esi
// 005662a9  0fb6049590f38900     movzx eax, byte ptr [edx*4 + 0x89f390]
// 005662b1  50                   push eax
// 005662b2  8bcd                 mov ecx, ebp
// 005662b4  ff15b4e57700         call dword ptr [0x77e5b4]
// 005662ba  83e70f               and edi, 0xf
// 005662bd  c1e704               shl edi, 4
// 005662c0  0fb68f90f38900       movzx ecx, byte ptr [edi + 0x89f390]
// 005662c7  51                   push ecx
// 005662c8  8bcd                 mov ecx, ebp
// 005662ca  ff15b4e57700         call dword ptr [0x77e5b4]
// 005662d0  6a3d                 push 0x3d
// 005662d2  8bcd                 mov ecx, ebp
// 005662d4  ff15b4e57700         call dword ptr [0x77e5b4]
// 005662da  5e                   pop esi
// 005662db  5d                   pop ebp
// 005662dc  5b                   pop ebx
// 005662dd  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005662e1  8b542430             mov edx, dword ptr [esp + 0x30]
// 005662e5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005662e9  8910                 mov dword ptr [eax], edx
// 005662eb  8b542438             mov edx, dword ptr [esp + 0x38]
// 005662ef  894804               mov dword ptr [eax + 4], ecx
// 005662f2  895008               mov dword ptr [eax + 8], edx
// 005662f5  5f                   pop edi
// 005662f6  83c424               add esp, 0x24
// 005662f9  c23000               ret 0x30
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ??$put@V?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@V?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@HUcrlf@?$base64@DU?$char_traits@D@std@@@@@?$base64@DU?$char_traits@D@std@@@@QBE?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@V12@0V?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@AAHUcrlf@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlSerializer.cpp
