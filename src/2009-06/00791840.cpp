// roc 2009-06 00791840  unit: CSelectionCaption  size: 395 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00791840
//
// 00791840  8b442418             mov eax, dword ptr [esp + 0x18]
// 00791844  8b542414             mov edx, dword ptr [esp + 0x14]
// 00791848  83ec10               sub esp, 0x10
// 0079184b  55                   push ebp
// 0079184c  56                   push esi
// 0079184d  50                   push eax
// 0079184e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00791852  8bf1                 mov esi, ecx
// 00791854  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00791858  51                   push ecx
// 00791859  52                   push edx
// 0079185a  0d00000002           or eax, 0x2000000
// 0079185f  50                   push eax
// 00791860  33ed                 xor ebp, ebp
// 00791862  55                   push ebp
// 00791863  8bce                 mov ecx, esi
// 00791865  e83481f8ff           call 0x71999e
// 0079186a  85c0                 test eax, eax
// 0079186c  7508                 jne 0x791876
// 0079186e  5e                   pop esi
// 0079186f  5d                   pop ebp
// 00791870  83c410               add esp, 0x10
// 00791873  c21800               ret 0x18
// 00791876  e8657cffff           call 0x7894e0
// 0079187b  05dc000000           add eax, 0xdc
// 00791880  7403                 je 0x791885
// 00791882  8b4004               mov eax, dword ptr [eax + 4]
// 00791885  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00791888  53                   push ebx
// 00791889  57                   push edi
// 0079188a  6a01                 push 1
// 0079188c  50                   push eax
// 0079188d  6a30                 push 0x30
// 0079188f  51                   push ecx
// 00791890  ff1590ee8900         call dword ptr [0x89ee90]
// 00791896  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0079189a  8bc1                 mov eax, ecx
// 0079189c  83e007               and eax, 7
// 0079189f  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 007918a5  f7d0                 not eax
// 007918a7  55                   push ebp
// 007918a8  23c1                 and eax, ecx
// 007918aa  50                   push eax
// 007918ab  55                   push ebp
// 007918ac  8bce                 mov ecx, esi
// 007918ae  e82577f8ff           call 0x718fd8
// 007918b3  8b542428             mov edx, dword ptr [esp + 0x28]
// 007918b7  8d9ed0000000         lea ebx, [esi + 0xd0]
// 007918bd  52                   push edx
// 007918be  8bcb                 mov ecx, ebx
// 007918c0  ff15acfc8900         call dword ptr [0x89fcac]
// 007918c6  f686c800000004       test byte ptr [esi + 0xc8], 4
// 007918cd  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 007918d3  6a64                 push 0x64
// 007918d5  8dbedc000000         lea edi, [esi + 0xdc]
// 007918db  8d4c2414             lea ecx, [esp + 0x14]
// 007918df  56                   push esi
// 007918e0  896c2418             mov dword ptr [esp + 0x18], ebp
// 007918e4  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007918e8  896c2420             mov dword ptr [esp + 0x20], ebp
// 007918ec  896c2424             mov dword ptr [esp + 0x24], ebp
// 007918f0  51                   push ecx
// 007918f1  7472                 je 0x791965
// 007918f3  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 007918f9  684b0f0050           push 0x50000f4b
// 007918fe  55                   push ebp
// 007918ff  8bcf                 mov ecx, edi
// 00791901  ffd2                 call edx
// 00791903  85c0                 test eax, eax
// 00791905  750d                 jne 0x791914
// 00791907  5f                   pop edi
// 00791908  5b                   pop ebx
// 00791909  5e                   pop esi
// 0079190a  83c8ff               or eax, 0xffffffff
// 0079190d  5d                   pop ebp
// 0079190e  83c410               add esp, 0x10
// 00791911  c21800               ret 0x18
// 00791914  68ff00ff00           push 0xff00ff
// 00791919  6a01                 push 1
// 0079191b  6a10                 push 0x10
// 0079191d  6856240000           push 0x2456
// 00791922  8d8ed4000000         lea ecx, [esi + 0xd4]
// 00791928  e827ac0b00           call 0x84c554
// 0079192d  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00791933  55                   push ebp
// 00791934  6a02                 push 2
// 00791936  50                   push eax
// 00791937  e8ba73f8ff           call 0x718cf6
// 0079193c  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 00791942  8b08                 mov ecx, dword ptr [eax]
// 00791944  e80710faff           call 0x732950
// 00791949  8b1f                 mov ebx, dword ptr [edi]
// 0079194b  6a01                 push 1
// 0079194d  55                   push ebp
// 0079194e  b910000000           mov ecx, 0x10
// 00791953  8d51ff               lea edx, [ecx - 1]
// 00791956  50                   push eax
// 00791957  52                   push edx
// 00791958  8b9358010000         mov edx, dword ptr [ebx + 0x158]
// 0079195e  51                   push ecx
// 0079195f  8bcf                 mov ecx, edi
// 00791961  ffd2                 call edx
// 00791963  eb35                 jmp 0x79199a
// 00791965  684b0c0000           push 0xc4b
// 0079196a  8bcb                 mov ecx, ebx
// 0079196c  89442448             mov dword ptr [esp + 0x48], eax
// 00791970  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00791976  8b542448             mov edx, dword ptr [esp + 0x48]
// 0079197a  50                   push eax
// 0079197b  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 00791981  8bcf                 mov ecx, edi
// 00791983  ffd0                 call eax
// 00791985  85c0                 test eax, eax
// 00791987  750a                 jne 0x791993
// 00791989  5f                   pop edi
// 0079198a  5b                   pop ebx
// 0079198b  5e                   pop esi
// 0079198c  5d                   pop ebp
// 0079198d  83c410               add esp, 0x10
// 00791990  c21800               ret 0x18
// 00791993  c6868100000001       mov byte ptr [esi + 0x81], 1
// 0079199a  8b17                 mov edx, dword ptr [edi]
// 0079199c  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 007919a2  55                   push ebp
// 007919a3  55                   push ebp
// 007919a4  8bcf                 mov ecx, edi
// 007919a6  89b688010000         mov dword ptr [esi + 0x188], esi
// 007919ac  ffd0                 call eax
// 007919ae  6a23                 push 0x23
// 007919b0  55                   push ebp
// 007919b1  55                   push ebp
// 007919b2  55                   push ebp
// 007919b3  55                   push ebp
// 007919b4  55                   push ebp
// 007919b5  8bce                 mov ecx, esi
// 007919b7  e84874f8ff           call 0x718e04
// 007919bc  5f                   pop edi
// 007919bd  5b                   pop ebx
// 007919be  5e                   pop esi
// 007919bf  b801000000           mov eax, 1
// 007919c4  5d                   pop ebp
// 007919c5  83c410               add esp, 0x10
// 007919c8  c21800               ret 0x18
// copied from an identical function in another client (function ?Create@CXTCaption@@UAEHPAVCWnd@@PBDKKABVCRect@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp