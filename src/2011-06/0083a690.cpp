// roc 2011-06 0083a690  unit: CXTPReportControl  size: 1045 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083a690
//
// 0083a690  83ec14               sub esp, 0x14
// 0083a693  53                   push ebx
// 0083a694  55                   push ebp
// 0083a695  56                   push esi
// 0083a696  57                   push edi
// 0083a697  8bf1                 mov esi, ecx
// 0083a699  e890fffcff           call 0x80a62e
// 0083a69e  8b3d601aa400         mov edi, dword ptr [0xa41a60]
// 0083a6a4  6a10                 push 0x10
// 0083a6a6  ffd7                 call edi
// 0083a6a8  33db                 xor ebx, ebx
// 0083a6aa  6685c0               test ax, ax
// 0083a6ad  6a11                 push 0x11
// 0083a6af  0f9cc3               setl bl
// 0083a6b2  ffd7                 call edi
// 0083a6b4  33c9                 xor ecx, ecx
// 0083a6b6  6685c0               test ax, ax
// 0083a6b9  0f9cc1               setl cl
// 0083a6bc  8be9                 mov ebp, ecx
// 0083a6be  8bce                 mov ecx, esi
// 0083a6c0  e81b80ffff           call 0x8326e0
// 0083a6c5  8d542428             lea edx, [esp + 0x28]
// 0083a6c9  52                   push edx
// 0083a6ca  56                   push esi
// 0083a6cb  8bf8                 mov edi, eax
// 0083a6cd  e84e350200           call 0x85dc20
// 0083a6d2  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0083a6d8  83c408               add esp, 8
// 0083a6db  e8008a0000           call 0x8430e0
// 0083a6e0  85c0                 test eax, eax
// 0083a6e2  0f84f2020000         je 0x83a9da
// 0083a6e8  8b442428             mov eax, dword ptr [esp + 0x28]
// 0083a6ec  83c0f3               add eax, -0xd
// 0083a6ef  83f864               cmp eax, 0x64
// 0083a6f2  0f87e2020000         ja 0x83a9da
// 0083a6f8  0fb68040aa8300       movzx eax, byte ptr [eax + 0x83aa40]
// 0083a6ff  ff248504aa8300       jmp dword ptr [eax*4 + 0x83aa04]
// 0083a706  85ed                 test ebp, ebp
// 0083a708  740c                 je 0x83a716
// 0083a70a  8bce                 mov ecx, esi
// 0083a70c  e8bfceffff           call 0x8375d0
// 0083a711  e9c4020000           jmp 0x83a9da
// 0083a716  85ff                 test edi, edi
// 0083a718  0f84bc020000         je 0x83a9da
// 0083a71e  8b17                 mov edx, dword ptr [edi]
// 0083a720  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 0083a726  8bcf                 mov ecx, edi
// 0083a728  ffd0                 call eax
// 0083a72a  85c0                 test eax, eax
// 0083a72c  0f84a8020000         je 0x83a9da
// 0083a732  8b17                 mov edx, dword ptr [edi]
// 0083a734  8b4278               mov eax, dword ptr [edx + 0x78]
// 0083a737  8bcf                 mov ecx, edi
// 0083a739  ffd0                 call eax
// 0083a73b  85c0                 test eax, eax
// 0083a73d  0f8597020000         jne 0x83a9da
// 0083a743  8b17                 mov edx, dword ptr [edi]
// 0083a745  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0083a748  6a01                 push 1
// 0083a74a  8bcf                 mov ecx, edi
// 0083a74c  ffd0                 call eax
// 0083a74e  e987020000           jmp 0x83a9da
// 0083a753  85ed                 test ebp, ebp
// 0083a755  740c                 je 0x83a763
// 0083a757  8bce                 mov ecx, esi
// 0083a759  e812ceffff           call 0x837570
// 0083a75e  e977020000           jmp 0x83a9da
// 0083a763  85ff                 test edi, edi
// 0083a765  0f846f020000         je 0x83a9da
// 0083a76b  8b17                 mov edx, dword ptr [edi]
// 0083a76d  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 0083a773  8bcf                 mov ecx, edi
// 0083a775  ffd0                 call eax
// 0083a777  85c0                 test eax, eax
// 0083a779  0f845b020000         je 0x83a9da
// 0083a77f  8b17                 mov edx, dword ptr [edi]
// 0083a781  8b4278               mov eax, dword ptr [edx + 0x78]
// 0083a784  8bcf                 mov ecx, edi
// 0083a786  ffd0                 call eax
// 0083a788  85c0                 test eax, eax
// 0083a78a  0f844a020000         je 0x83a9da
// 0083a790  8b17                 mov edx, dword ptr [edi]
// 0083a792  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0083a795  6a00                 push 0
// 0083a797  8bcf                 mov ecx, edi
// 0083a799  ffd0                 call eax
// 0083a79b  e93a020000           jmp 0x83a9da
// 0083a7a0  85ff                 test edi, edi
// 0083a7a2  746b                 je 0x83a80f
// 0083a7a4  8b17                 mov edx, dword ptr [edi]
// 0083a7a6  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 0083a7ac  8bcf                 mov ecx, edi
// 0083a7ae  ffd0                 call eax
// 0083a7b0  85c0                 test eax, eax
// 0083a7b2  740d                 je 0x83a7c1
// 0083a7b4  8b17                 mov edx, dword ptr [edi]
// 0083a7b6  8b4278               mov eax, dword ptr [edx + 0x78]
// 0083a7b9  8bcf                 mov ecx, edi
// 0083a7bb  ffd0                 call eax
// 0083a7bd  85c0                 test eax, eax
// 0083a7bf  7482                 je 0x83a743
// 0083a7c1  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 0083a7c8  7445                 je 0x83a80f
// 0083a7ca  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 0083a7d0  85c9                 test ecx, ecx
// 0083a7d2  743b                 je 0x83a80f
// 0083a7d4  8b1e                 mov ebx, dword ptr [esi]
// 0083a7d6  6a01                 push 1
// 0083a7d8  e8f355ffff           call 0x82fdd0
// 0083a7dd  8b9360020000         mov edx, dword ptr [ebx + 0x260]
// 0083a7e3  50                   push eax
// 0083a7e4  57                   push edi
// 0083a7e5  8bce                 mov ecx, esi
// 0083a7e7  ffd2                 call edx
// 0083a7e9  85c0                 test eax, eax
// 0083a7eb  0f84e9010000         je 0x83a9da
// 0083a7f1  50                   push eax
// 0083a7f2  8bce                 mov ecx, esi
// 0083a7f4  e81794ffff           call 0x833c10
// 0083a7f9  6a00                 push 0
// 0083a7fb  8bce                 mov ecx, esi
// 0083a7fd  e8de7effff           call 0x8326e0
// 0083a802  50                   push eax
// 0083a803  8bce                 mov ecx, esi
// 0083a805  e896f3ffff           call 0x839ba0
// 0083a80a  e9cb010000           jmp 0x83a9da
// 0083a80f  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0083a815  55                   push ebp
// 0083a816  53                   push ebx
// 0083a817  e884c90700           call 0x8b71a0
// 0083a81c  e9b9010000           jmp 0x83a9da
// 0083a821  85ff                 test edi, edi
// 0083a823  0f84c3000000         je 0x83a8ec
// 0083a829  8b07                 mov eax, dword ptr [edi]
// 0083a82b  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 0083a831  8bcf                 mov ecx, edi
// 0083a833  ffd2                 call edx
// 0083a835  85c0                 test eax, eax
// 0083a837  741d                 je 0x83a856
// 0083a839  8b07                 mov eax, dword ptr [edi]
// 0083a83b  8b5078               mov edx, dword ptr [eax + 0x78]
// 0083a83e  8bcf                 mov ecx, edi
// 0083a840  ffd2                 call edx
// 0083a842  85c0                 test eax, eax
// 0083a844  7410                 je 0x83a856
// 0083a846  8b07                 mov eax, dword ptr [edi]
// 0083a848  8b507c               mov edx, dword ptr [eax + 0x7c]
// 0083a84b  6a00                 push 0
// 0083a84d  8bcf                 mov ecx, edi
// 0083a84f  ffd2                 call edx
// 0083a851  e984010000           jmp 0x83a9da
// 0083a856  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 0083a85d  7445                 je 0x83a8a4
// 0083a85f  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 0083a865  85c9                 test ecx, ecx
// 0083a867  743b                 je 0x83a8a4
// 0083a869  8b1e                 mov ebx, dword ptr [esi]
// 0083a86b  6aff                 push -1
// 0083a86d  e85e55ffff           call 0x82fdd0
// 0083a872  50                   push eax
// 0083a873  8b8360020000         mov eax, dword ptr [ebx + 0x260]
// 0083a879  57                   push edi
// 0083a87a  8bce                 mov ecx, esi
// 0083a87c  ffd0                 call eax
// 0083a87e  85c0                 test eax, eax
// 0083a880  0f8454010000         je 0x83a9da
// 0083a886  50                   push eax
// 0083a887  8bce                 mov ecx, esi
// 0083a889  e88293ffff           call 0x833c10
// 0083a88e  6a00                 push 0
// 0083a890  8bce                 mov ecx, esi
// 0083a892  e8497effff           call 0x8326e0
// 0083a897  50                   push eax
// 0083a898  8bce                 mov ecx, esi
// 0083a89a  e801f3ffff           call 0x839ba0
// 0083a89f  e936010000           jmp 0x83a9da
// 0083a8a4  8b17                 mov edx, dword ptr [edi]
// 0083a8a6  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 0083a8ac  8bcf                 mov ecx, edi
// 0083a8ae  ffd0                 call eax
// 0083a8b0  85c0                 test eax, eax
// 0083a8b2  7538                 jne 0x83a8ec
// 0083a8b4  8b17                 mov edx, dword ptr [edi]
// 0083a8b6  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 0083a8bc  8bcf                 mov ecx, edi
// 0083a8be  ffd0                 call eax
// 0083a8c0  85c0                 test eax, eax
// 0083a8c2  7428                 je 0x83a8ec
// 0083a8c4  85db                 test ebx, ebx
// 0083a8c6  7524                 jne 0x83a8ec
// 0083a8c8  8b17                 mov edx, dword ptr [edi]
// 0083a8ca  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 0083a8d0  53                   push ebx
// 0083a8d1  8bcf                 mov ecx, edi
// 0083a8d3  ffd0                 call eax
// 0083a8d5  50                   push eax
// 0083a8d6  8bce                 mov ecx, esi
// 0083a8d8  e8c3f2ffff           call 0x839ba0
// 0083a8dd  8b17                 mov edx, dword ptr [edi]
// 0083a8df  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0083a8e2  53                   push ebx
// 0083a8e3  8bcf                 mov ecx, edi
// 0083a8e5  ffd0                 call eax
// 0083a8e7  e9ee000000           jmp 0x83a9da
// 0083a8ec  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0083a8f2  55                   push ebp
// 0083a8f3  53                   push ebx
// 0083a8f4  e8a7c90700           call 0x8b72a0
// 0083a8f9  e9dc000000           jmp 0x83a9da
// 0083a8fe  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0083a904  6a00                 push 0
// 0083a906  53                   push ebx
// 0083a907  e894c50700           call 0x8b6ea0
// 0083a90c  e9c9000000           jmp 0x83a9da
// 0083a911  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0083a917  6a00                 push 0
// 0083a919  53                   push ebx
// 0083a91a  e8c1c50700           call 0x8b6ee0
// 0083a91f  e9b6000000           jmp 0x83a9da
// 0083a924  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0083a92a  6a00                 push 0
// 0083a92c  53                   push ebx
// 0083a92d  e87ec40700           call 0x8b6db0
// 0083a932  e9a3000000           jmp 0x83a9da
// 0083a937  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0083a93d  6a00                 push 0
// 0083a93f  53                   push ebx
// 0083a940  e8ebc40700           call 0x8b6e30
// 0083a945  e990000000           jmp 0x83a9da
// 0083a94a  85ff                 test edi, edi
// 0083a94c  0f8488000000         je 0x83a9da
// 0083a952  8b17                 mov edx, dword ptr [edi]
// 0083a954  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 0083a95a  8bcf                 mov ecx, edi
// 0083a95c  ffd0                 call eax
// 0083a95e  85c0                 test eax, eax
// 0083a960  7478                 je 0x83a9da
// 0083a962  8b1f                 mov ebx, dword ptr [edi]
// 0083a964  8b5378               mov edx, dword ptr [ebx + 0x78]
// 0083a967  8bcf                 mov ecx, edi
// 0083a969  ffd2                 call edx
// 0083a96b  f7d8                 neg eax
// 0083a96d  1bc0                 sbb eax, eax
// 0083a96f  40                   inc eax
// 0083a970  50                   push eax
// 0083a971  8b437c               mov eax, dword ptr [ebx + 0x7c]
// 0083a974  8bcf                 mov ecx, edi
// 0083a976  ffd0                 call eax
// 0083a978  eb60                 jmp 0x83a9da
// 0083a97a  83bec001000000       cmp dword ptr [esi + 0x1c0], 0
// 0083a981  7457                 je 0x83a9da
// 0083a983  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 0083a989  e8b22c0000           call 0x83d640
// 0083a98e  eb4a                 jmp 0x83a9da
// 0083a990  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0083a996  e805ca0700           call 0x8b73a0
// 0083a99b  eb3d                 jmp 0x83a9da
// 0083a99d  83be0002000000       cmp dword ptr [esi + 0x200], 0
// 0083a9a4  7434                 je 0x83a9da
// 0083a9a6  85ed                 test ebp, ebp
// 0083a9a8  7430                 je 0x83a9da
// 0083a9aa  85ff                 test edi, edi
// 0083a9ac  742c                 je 0x83a9da
// 0083a9ae  8b17                 mov edx, dword ptr [edi]
// 0083a9b0  8b4274               mov eax, dword ptr [edx + 0x74]
// 0083a9b3  8bcf                 mov ecx, edi
// 0083a9b5  ffd0                 call eax
// 0083a9b7  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 0083a9bd  57                   push edi
// 0083a9be  85c0                 test eax, eax
// 0083a9c0  7407                 je 0x83a9c9
// 0083a9c2  e829990000           call 0x8442f0
// 0083a9c7  eb05                 jmp 0x83a9ce
// 0083a9c9  e8f2980000           call 0x8442c0
// 0083a9ce  8b16                 mov edx, dword ptr [esi]
// 0083a9d0  8b82dc010000         mov eax, dword ptr [edx + 0x1dc]
// 0083a9d6  8bce                 mov ecx, esi
// 0083a9d8  ffd0                 call eax
// 0083a9da  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0083a9de  8b542430             mov edx, dword ptr [esp + 0x30]
// 0083a9e2  8d442410             lea eax, [esp + 0x10]
// 0083a9e6  50                   push eax
// 0083a9e7  894c2420             mov dword ptr [esp + 0x20], ecx
// 0083a9eb  6af1                 push -0xf
// 0083a9ed  8bce                 mov ecx, esi
// 0083a9ef  89542428             mov dword ptr [esp + 0x28], edx
// 0083a9f3  e868caffff           call 0x837460
// 0083a9f8  5f                   pop edi
// 0083a9f9  5e                   pop esi
// 0083a9fa  5d                   pop ebp
// 0083a9fb  5b                   pop ebx
// 0083a9fc  83c414               add esp, 0x14
// 0083a9ff  c20c00               ret 0xc
// 0083aa02  8bff                 mov edi, edi
// 0083aa04  4a                   dec edx
// 0083aa05  a983007aa9           test eax, 0xa97a0083
// 0083aa0a  83009d               add dword ptr [eax], -0x63
// 0083aa0d  a9830037a9           test eax, 0xa9370083
// 0083aa12  830024               add dword ptr [eax], 0x24
// 0083aa15  a9830011a9           test eax, 0xa9110083
// 0083aa1a  8300fe               add dword ptr [eax], -2
// 0083aa1d  a883                 test al, 0x83
// 0083aa1f  0021                 add byte ptr [ecx], ah
// 0083aa21  a883                 test al, 0x83
// 0083aa23  00ec                 add ah, ch
// 0083aa25  a883                 test al, 0x83
// 0083aa27  00a0a783000f         add byte ptr [eax + 0xf0083a7], ah
// 0083aa2d  a883                 test al, 0x83
// 0083aa2f  0006                 add byte ptr [esi], al
// 0083aa31  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 0083aa32  830053               add dword ptr [eax], 0x53
// 0083aa35  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 0083aa36  830090               add dword ptr [eax], -0x70
// 0083aa39  a98300daa9           test eax, 0xa9da0083
// 0083aa3e  830000               add dword ptr [eax], 0
// 0083aa41  0e                   push cs
// 0083aa42  0e                   push cs
// 0083aa43  0e                   push cs
// 0083aa44  0e                   push cs
// 0083aa45  0e                   push cs
// 0083aa46  0e                   push cs
// 0083aa47  0e                   push cs
// 0083aa48  0e                   push cs
// 0083aa49  0e                   push cs
// 0083aa4a  0e                   push cs
// 0083aa4b  0e                   push cs
// 0083aa4c  0e                   push cs
// 0083aa4d  0e                   push cs
// 0083aa4e  010e                 add dword ptr [esi], ecx
// 0083aa50  0e                   push cs
// 0083aa51  0e                   push cs
// 0083aa52  0e                   push cs
// 0083aa53  0203                 add al, byte ptr [ebx]
// 0083aa55  0405                 add al, 5
// 0083aa57  06                   push es
// 0083aa58  07                   pop es
// 0083aa59  0809                 or byte ptr [ecx], cl
// 0083aa5b  0a0e                 or cl, byte ptr [esi]
// 0083aa5d  0e                   push cs
// 0083aa5e  0e                   push cs
// 0083aa5f  0e                   push cs
// 0083aa60  0e                   push cs
// 0083aa61  0e                   push cs
// 0083aa62  0e                   push cs
// 0083aa63  0e                   push cs
// 0083aa64  0e                   push cs
// 0083aa65  0e                   push cs
// 0083aa66  0e                   push cs
// 0083aa67  0e                   push cs
// 0083aa68  0e                   push cs
// 0083aa69  0e                   push cs
// 0083aa6a  0e                   push cs
// 0083aa6b  0e                   push cs
// 0083aa6c  0e                   push cs
// 0083aa6d  0e                   push cs
// 0083aa6e  0e                   push cs
// 0083aa6f  0e                   push cs
// 0083aa70  0e                   push cs
// 0083aa71  0e                   push cs
// 0083aa72  0e                   push cs
// 0083aa73  0e                   push cs
// 0083aa74  0e                   push cs
// 0083aa75  0e                   push cs
// 0083aa76  0e                   push cs
// 0083aa77  0e                   push cs
// 0083aa78  0e                   push cs
// 0083aa79  0e                   push cs
// 0083aa7a  0e                   push cs
// 0083aa7b  0e                   push cs
// 0083aa7c  0e                   push cs
// 0083aa7d  0e                   push cs
// 0083aa7e  0e                   push cs
// 0083aa7f  0e                   push cs
// 0083aa80  0e                   push cs
// 0083aa81  0e                   push cs
// 0083aa82  0e                   push cs
// 0083aa83  0e                   push cs
// 0083aa84  0e                   push cs
// 0083aa85  0e                   push cs
// 0083aa86  0e                   push cs
// 0083aa87  0e                   push cs
// 0083aa88  0e                   push cs
// 0083aa89  0e                   push cs
// 0083aa8a  0e                   push cs
// 0083aa8b  0e                   push cs
// 0083aa8c  0e                   push cs
// 0083aa8d  0e                   push cs
// 0083aa8e  0e                   push cs
// 0083aa8f  0e                   push cs
// 0083aa90  0e                   push cs
// 0083aa91  0e                   push cs
// 0083aa92  0e                   push cs
// 0083aa93  0e                   push cs
// 0083aa94  0e                   push cs
// 0083aa95  0e                   push cs
// 0083aa96  0e                   push cs
// 0083aa97  0e                   push cs
// 0083aa98  0e                   push cs
// 0083aa99  0e                   push cs
// 0083aa9a  0e                   push cs
// 0083aa9b  0e                   push cs
// 0083aa9c  0e                   push cs
// 0083aa9d  0e                   push cs
// 0083aa9e  0b0e                 or ecx, dword ptr [esi]
// 0083aaa0  0c0e                 or al, 0xe
// 0083aaa2  0e                   push cs
// 0083aaa3  0e                   push cs
// copied from an identical function in another client (function ?OnKeyDown@CXTPReportControl@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp