// roc 2009-12 0088d880  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 1320 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088d880
//
// 0088d880  6aff                 push -1
// 0088d882  68d10e9600           push 0x960ed1
// 0088d887  64a100000000         mov eax, dword ptr fs:[0]
// 0088d88d  50                   push eax
// 0088d88e  81ec98000000         sub esp, 0x98
// 0088d894  53                   push ebx
// 0088d895  55                   push ebp
// 0088d896  56                   push esi
// 0088d897  57                   push edi
// 0088d898  a10052b600           mov eax, dword ptr [0xb65200]
// 0088d89d  33c4                 xor eax, esp
// 0088d89f  50                   push eax
// 0088d8a0  8d8424ac000000       lea eax, [esp + 0xac]
// 0088d8a7  64a300000000         mov dword ptr fs:[0], eax
// 0088d8ad  8bd9                 mov ebx, ecx
// 0088d8af  895c2478             mov dword ptr [esp + 0x78], ebx
// 0088d8b3  8bbc24bc000000       mov edi, dword ptr [esp + 0xbc]
// 0088d8ba  33f6                 xor esi, esi
// 0088d8bc  3bfe                 cmp edi, esi
// 0088d8be  7539                 jne 0x88d8f9
// 0088d8c0  8d4b04               lea ecx, [ebx + 4]
// 0088d8c3  e85665f6ff           call 0x7f3e1e
// 0088d8c8  8b03                 mov eax, dword ptr [ebx]
// 0088d8ca  56                   push esi
// 0088d8cb  c7430c01000000       mov dword ptr [ebx + 0xc], 1
// 0088d8d2  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0088d8d5  57                   push edi
// 0088d8d6  51                   push ecx
// 0088d8d7  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0088d8dd  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 0088d8e4  64890d00000000       mov dword ptr fs:[0], ecx
// 0088d8eb  59                   pop ecx
// 0088d8ec  5f                   pop edi
// 0088d8ed  5e                   pop esi
// 0088d8ee  5d                   pop ebp
// 0088d8ef  5b                   pop ebx
// 0088d8f0  81c4a4000000         add esp, 0xa4
// 0088d8f6  c20800               ret 8
// 0088d8f9  8d6b04               lea ebp, [ebx + 4]
// 0088d8fc  3bee                 cmp ebp, esi
// 0088d8fe  74c8                 je 0x88d8c8
// 0088d900  397504               cmp dword ptr [ebp + 4], esi
// 0088d903  74c3                 je 0x88d8c8
// 0088d905  e826faffff           call 0x88d330
// 0088d90a  85c0                 test eax, eax
// 0088d90c  74ba                 je 0x88d8c8
// 0088d90e  8b03                 mov eax, dword ptr [ebx]
// 0088d910  50                   push eax
// 0088d911  8d4c2448             lea ecx, [esp + 0x48]
// 0088d915  e8bc6df6ff           call 0x7f46d6
// 0088d91a  8b0b                 mov ecx, dword ptr [ebx]
// 0088d91c  51                   push ecx
// 0088d91d  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0088d924  89b424b8000000       mov dword ptr [esp + 0xb8], esi
// 0088d92b  e8a0d9fbff           call 0x84b2d0
// 0088d930  57                   push edi
// 0088d931  8d542418             lea edx, [esp + 0x18]
// 0088d935  52                   push edx
// 0088d936  ff1564cc9800         call dword ptr [0x98cc64]
// 0088d93c  8d4c2434             lea ecx, [esp + 0x34]
// 0088d940  e8698b0900           call 0x9264ae
// 0088d945  8d442444             lea eax, [esp + 0x44]
// 0088d949  50                   push eax
// 0088d94a  8d4c2438             lea ecx, [esp + 0x38]
// 0088d94e  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 0088d956  e8c507f7ff           call 0x7fe120
// 0088d95b  89742428             mov dword ptr [esp + 0x28], esi
// 0088d95f  c744242418229a00     mov dword ptr [esp + 0x24], 0x9a2218
// 0088d967  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 0088d96e  2b8424a0000000       sub eax, dword ptr [esp + 0xa0]
// 0088d975  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0088d97c  2b8c249c000000       sub ecx, dword ptr [esp + 0x9c]
// 0088d983  50                   push eax
// 0088d984  51                   push ecx
// 0088d985  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0088d989  51                   push ecx
// 0088d98a  c68424c000000002     mov byte ptr [esp + 0xc0], 2
// 0088d992  ff1550b19800         call dword ptr [0x98b150]
// 0088d998  50                   push eax
// 0088d999  8d4c2428             lea ecx, [esp + 0x28]
// 0088d99d  e88864f6ff           call 0x7f3e2a
// 0088d9a2  8b542428             mov edx, dword ptr [esp + 0x28]
// 0088d9a6  8b442438             mov eax, dword ptr [esp + 0x38]
// 0088d9aa  8b3d4cb19800         mov edi, dword ptr [0x98b14c]
// 0088d9b0  52                   push edx
// 0088d9b1  50                   push eax
// 0088d9b2  ffd7                 call edi
// 0088d9b4  8944246c             mov dword ptr [esp + 0x6c], eax
// 0088d9b8  89742430             mov dword ptr [esp + 0x30], esi
// 0088d9bc  c744242cf82a9f00     mov dword ptr [esp + 0x2c], 0x9f2af8
// 0088d9c4  8d4c2414             lea ecx, [esp + 0x14]
// 0088d9c8  51                   push ecx
// 0088d9c9  c68424b800000003     mov byte ptr [esp + 0xb8], 3
// 0088d9d1  ff15c4b09800         call dword ptr [0x98b0c4]
// 0088d9d7  50                   push eax
// 0088d9d8  8d4c2430             lea ecx, [esp + 0x30]
// 0088d9dc  e84964f6ff           call 0x7f3e2a
// 0088d9e1  8d54242c             lea edx, [esp + 0x2c]
// 0088d9e5  52                   push edx
// 0088d9e6  8d4c2438             lea ecx, [esp + 0x38]
// 0088d9ea  e8758c0900           call 0x926664
// 0088d9ef  8b742414             mov esi, dword ptr [esp + 0x14]
// 0088d9f3  8b0b                 mov ecx, dword ptr [ebx]
// 0088d9f5  8b11                 mov edx, dword ptr [ecx]
// 0088d9f7  8b92b0010000         mov edx, dword ptr [edx + 0x1b0]
// 0088d9fd  83ec10               sub esp, 0x10
// 0088da00  8bc4                 mov eax, esp
// 0088da02  8930                 mov dword ptr [eax], esi
// 0088da04  8b742428             mov esi, dword ptr [esp + 0x28]
// 0088da08  897004               mov dword ptr [eax + 4], esi
// 0088da0b  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0088da0f  897008               mov dword ptr [eax + 8], esi
// 0088da12  8b742430             mov esi, dword ptr [esp + 0x30]
// 0088da16  89700c               mov dword ptr [eax + 0xc], esi
// 0088da19  8d442444             lea eax, [esp + 0x44]
// 0088da1d  50                   push eax
// 0088da1e  ffd2                 call edx
// 0088da20  6a00                 push 0
// 0088da22  8d4c2438             lea ecx, [esp + 0x38]
// 0088da26  e8398c0900           call 0x926664
// 0088da2b  8d4c245c             lea ecx, [esp + 0x5c]
// 0088da2f  e87a8a0900           call 0x9264ae
// 0088da34  8d442444             lea eax, [esp + 0x44]
// 0088da38  50                   push eax
// 0088da39  8d4c2460             lea ecx, [esp + 0x60]
// 0088da3d  c68424b800000004     mov byte ptr [esp + 0xb8], 4
// 0088da45  e8d606f7ff           call 0x7fe120
// 0088da4a  85ed                 test ebp, ebp
// 0088da4c  7403                 je 0x88da51
// 0088da4e  8b6d04               mov ebp, dword ptr [ebp + 4]
// 0088da51  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0088da55  55                   push ebp
// 0088da56  51                   push ecx
// 0088da57  ffd7                 call edi
// 0088da59  83bc24c000000000     cmp dword ptr [esp + 0xc0], 0
// 0088da61  89442474             mov dword ptr [esp + 0x74], eax
// 0088da65  756d                 jne 0x88dad4
// 0088da67  6a01                 push 1
// 0088da69  8d542418             lea edx, [esp + 0x18]
// 0088da6d  52                   push edx
// 0088da6e  8bcb                 mov ecx, ebx
// 0088da70  e80bfdffff           call 0x88d780
// 0088da75  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088da79  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088da7d  682000cc00           push 0xcc0020
// 0088da82  50                   push eax
// 0088da83  51                   push ecx
// 0088da84  8d542440             lea edx, [esp + 0x40]
// 0088da88  52                   push edx
// 0088da89  8b542430             mov edx, dword ptr [esp + 0x30]
// 0088da8d  2bd0                 sub edx, eax
// 0088da8f  52                   push edx
// 0088da90  8b542430             mov edx, dword ptr [esp + 0x30]
// 0088da94  2bd1                 sub edx, ecx
// 0088da96  52                   push edx
// 0088da97  50                   push eax
// 0088da98  51                   push ecx
// 0088da99  8d4c247c             lea ecx, [esp + 0x7c]
// 0088da9d  e8be06f7ff           call 0x7fe160
// 0088daa2  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088daa6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088daaa  682000cc00           push 0xcc0020
// 0088daaf  50                   push eax
// 0088dab0  51                   push ecx
// 0088dab1  8d542440             lea edx, [esp + 0x40]
// 0088dab5  52                   push edx
// 0088dab6  8b542430             mov edx, dword ptr [esp + 0x30]
// 0088daba  2bd0                 sub edx, eax
// 0088dabc  52                   push edx
// 0088dabd  8b542430             mov edx, dword ptr [esp + 0x30]
// 0088dac1  2bd1                 sub edx, ecx
// 0088dac3  52                   push edx
// 0088dac4  50                   push eax
// 0088dac5  51                   push ecx
// 0088dac6  8d4c2464             lea ecx, [esp + 0x64]
// 0088daca  e89106f7ff           call 0x7fe160
// 0088dacf  e94f020000           jmp 0x88dd23
// 0088dad4  6a38                 push 0x38
// 0088dad6  e8855df6ff           call 0x7f3860
// 0088dadb  83c404               add esp, 4
// 0088dade  85c0                 test eax, eax
// 0088dae0  740b                 je 0x88daed
// 0088dae2  8bc8                 mov ecx, eax
// 0088dae4  e8c7faffff           call 0x88d5b0
// 0088dae9  8bf0                 mov esi, eax
// 0088daeb  eb02                 jmp 0x88daef
// 0088daed  33f6                 xor esi, esi
// 0088daef  8b442414             mov eax, dword ptr [esp + 0x14]
// 0088daf3  894610               mov dword ptr [esi + 0x10], eax
// 0088daf6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088dafa  894e14               mov dword ptr [esi + 0x14], ecx
// 0088dafd  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088db01  895618               mov dword ptr [esi + 0x18], edx
// 0088db04  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088db08  89461c               mov dword ptr [esi + 0x1c], eax
// 0088db0b  c7462001000000       mov dword ptr [esi + 0x20], 1
// 0088db12  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088db16  2b442418             sub eax, dword ptr [esp + 0x18]
// 0088db1a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088db1e  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 0088db22  8d6e04               lea ebp, [esi + 4]
// 0088db25  55                   push ebp
// 0088db26  50                   push eax
// 0088db27  51                   push ecx
// 0088db28  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0088db2c  51                   push ecx
// 0088db2d  e80eb0f7ff           call 0x808b40
// 0088db32  8906                 mov dword ptr [esi], eax
// 0088db34  8b442430             mov eax, dword ptr [esp + 0x30]
// 0088db38  2b442428             sub eax, dword ptr [esp + 0x28]
// 0088db3c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088db40  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 0088db44  8b542458             mov edx, dword ptr [esp + 0x58]
// 0088db48  8d5e0c               lea ebx, [esi + 0xc]
// 0088db4b  53                   push ebx
// 0088db4c  50                   push eax
// 0088db4d  51                   push ecx
// 0088db4e  52                   push edx
// 0088db4f  e8ecaff7ff           call 0x808b40
// 0088db54  83c420               add esp, 0x20
// 0088db57  8d4c247c             lea ecx, [esp + 0x7c]
// 0088db5b  894608               mov dword ptr [esi + 8], eax
// 0088db5e  e84b890900           call 0x9264ae
// 0088db63  8d442444             lea eax, [esp + 0x44]
// 0088db67  50                   push eax
// 0088db68  8d8c2480000000       lea ecx, [esp + 0x80]
// 0088db6f  c68424b800000005     mov byte ptr [esp + 0xb8], 5
// 0088db77  e8a405f7ff           call 0x7fe120
// 0088db7c  8d8c248c000000       lea ecx, [esp + 0x8c]
// 0088db83  e826890900           call 0x9264ae
// 0088db88  8d4c2444             lea ecx, [esp + 0x44]
// 0088db8c  51                   push ecx
// 0088db8d  8d8c2490000000       lea ecx, [esp + 0x90]
// 0088db94  c68424b800000006     mov byte ptr [esp + 0xb8], 6
// 0088db9c  e87f05f7ff           call 0x7fe120
// 0088dba1  8b16                 mov edx, dword ptr [esi]
// 0088dba3  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0088dbaa  52                   push edx
// 0088dbab  50                   push eax
// 0088dbac  ffd7                 call edi
// 0088dbae  8b4e08               mov ecx, dword ptr [esi + 8]
// 0088dbb1  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 0088dbb8  51                   push ecx
// 0088dbb9  52                   push edx
// 0088dbba  89442460             mov dword ptr [esp + 0x60], eax
// 0088dbbe  ffd7                 call edi
// 0088dbc0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088dbc4  682000cc00           push 0xcc0020
// 0088dbc9  89442474             mov dword ptr [esp + 0x74], eax
// 0088dbcd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088dbd1  50                   push eax
// 0088dbd2  51                   push ecx
// 0088dbd3  8d542440             lea edx, [esp + 0x40]
// 0088dbd7  52                   push edx
// 0088dbd8  8b542430             mov edx, dword ptr [esp + 0x30]
// 0088dbdc  2bd0                 sub edx, eax
// 0088dbde  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0088dbe2  52                   push edx
// 0088dbe3  2bc1                 sub eax, ecx
// 0088dbe5  50                   push eax
// 0088dbe6  6a00                 push 0
// 0088dbe8  6a00                 push 0
// 0088dbea  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0088dbf1  e86a05f7ff           call 0x7fe160
// 0088dbf6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088dbfa  682000cc00           push 0xcc0020
// 0088dbff  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088dc03  50                   push eax
// 0088dc04  51                   push ecx
// 0088dc05  8d542468             lea edx, [esp + 0x68]
// 0088dc09  52                   push edx
// 0088dc0a  8b542430             mov edx, dword ptr [esp + 0x30]
// 0088dc0e  2bd0                 sub edx, eax
// 0088dc10  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0088dc14  52                   push edx
// 0088dc15  2bc1                 sub eax, ecx
// 0088dc17  50                   push eax
// 0088dc18  6a00                 push 0
// 0088dc1a  6a00                 push 0
// 0088dc1c  8d8c24ac000000       lea ecx, [esp + 0xac]
// 0088dc23  e83805f7ff           call 0x7fe160
// 0088dc28  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088dc2c  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088dc30  682000cc00           push 0xcc0020
// 0088dc35  6a00                 push 0
// 0088dc37  6a00                 push 0
// 0088dc39  8d8c2488000000       lea ecx, [esp + 0x88]
// 0088dc40  51                   push ecx
// 0088dc41  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0088dc45  2bd0                 sub edx, eax
// 0088dc47  52                   push edx
// 0088dc48  8b542430             mov edx, dword ptr [esp + 0x30]
// 0088dc4c  2bd1                 sub edx, ecx
// 0088dc4e  52                   push edx
// 0088dc4f  50                   push eax
// 0088dc50  51                   push ecx
// 0088dc51  8d4c247c             lea ecx, [esp + 0x7c]
// 0088dc55  e80605f7ff           call 0x7fe160
// 0088dc5a  8b442470             mov eax, dword ptr [esp + 0x70]
// 0088dc5e  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0088dc65  50                   push eax
// 0088dc66  51                   push ecx
// 0088dc67  ffd7                 call edi
// 0088dc69  8b542458             mov edx, dword ptr [esp + 0x58]
// 0088dc6d  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0088dc74  52                   push edx
// 0088dc75  50                   push eax
// 0088dc76  ffd7                 call edi
// 0088dc78  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088dc7c  2b442414             sub eax, dword ptr [esp + 0x14]
// 0088dc80  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088dc84  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 0088dc88  8b1b                 mov ebx, dword ptr [ebx]
// 0088dc8a  8b6d00               mov ebp, dword ptr [ebp]
// 0088dc8d  0fafc1               imul eax, ecx
// 0088dc90  03c0                 add eax, eax
// 0088dc92  03c0                 add eax, eax
// 0088dc94  83f804               cmp eax, 4
// 0088dc97  721c                 jb 0x88dcb5
// 0088dc99  8da42400000000       lea esp, [esp]
// 0088dca0  8b5500               mov edx, dword ptr [ebp]
// 0088dca3  3b13                 cmp edx, dword ptr [ebx]
// 0088dca5  7533                 jne 0x88dcda
// 0088dca7  83e804               sub eax, 4
// 0088dcaa  83c304               add ebx, 4
// 0088dcad  83c504               add ebp, 4
// 0088dcb0  83f804               cmp eax, 4
// 0088dcb3  73eb                 jae 0x88dca0
// 0088dcb5  85c0                 test eax, eax
// 0088dcb7  7435                 je 0x88dcee
// 0088dcb9  8a0b                 mov cl, byte ptr [ebx]
// 0088dcbb  3a4d00               cmp cl, byte ptr [ebp]
// 0088dcbe  751a                 jne 0x88dcda
// 0088dcc0  83f801               cmp eax, 1
// 0088dcc3  7629                 jbe 0x88dcee
// 0088dcc5  8a5301               mov dl, byte ptr [ebx + 1]
// 0088dcc8  3a5501               cmp dl, byte ptr [ebp + 1]
// 0088dccb  750d                 jne 0x88dcda
// 0088dccd  83f802               cmp eax, 2
// 0088dcd0  761c                 jbe 0x88dcee
// 0088dcd2  8a4302               mov al, byte ptr [ebx + 2]
// 0088dcd5  3a4502               cmp al, byte ptr [ebp + 2]
// 0088dcd8  7414                 je 0x88dcee
// 0088dcda  56                   push esi
// 0088dcdb  8d4c2448             lea ecx, [esp + 0x48]
// 0088dcdf  51                   push ecx
// 0088dce0  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0088dce7  e844fbffff           call 0x88d830
// 0088dcec  eb10                 jmp 0x88dcfe
// 0088dcee  8bce                 mov ecx, esi
// 0088dcf0  e8ebf8ffff           call 0x88d5e0
// 0088dcf5  56                   push esi
// 0088dcf6  e85f5bf6ff           call 0x7f385a
// 0088dcfb  83c404               add esp, 4
// 0088dcfe  8d8c248c000000       lea ecx, [esp + 0x8c]
// 0088dd05  c68424b400000005     mov byte ptr [esp + 0xb4], 5
// 0088dd0d  e896870900           call 0x9264a8
// 0088dd12  8d4c247c             lea ecx, [esp + 0x7c]
// 0088dd16  c68424b400000004     mov byte ptr [esp + 0xb4], 4
// 0088dd1e  e885870900           call 0x9264a8
// 0088dd23  8b542474             mov edx, dword ptr [esp + 0x74]
// 0088dd27  8b442460             mov eax, dword ptr [esp + 0x60]
// 0088dd2b  52                   push edx
// 0088dd2c  50                   push eax
// 0088dd2d  ffd7                 call edi
// 0088dd2f  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0088dd33  8b542438             mov edx, dword ptr [esp + 0x38]
// 0088dd37  51                   push ecx
// 0088dd38  52                   push edx
// 0088dd39  ffd7                 call edi
// 0088dd3b  8d4c245c             lea ecx, [esp + 0x5c]
// 0088dd3f  c68424b400000003     mov byte ptr [esp + 0xb4], 3
// 0088dd47  e85c870900           call 0x9264a8
// 0088dd4c  8d4c242c             lea ecx, [esp + 0x2c]
// 0088dd50  c68424b400000002     mov byte ptr [esp + 0xb4], 2
// 0088dd58  c744242cf82a9f00     mov dword ptr [esp + 0x2c], 0x9f2af8
// 0088dd60  e8cb14b8ff           call 0x40f230
// 0088dd65  8d4c2424             lea ecx, [esp + 0x24]
// 0088dd69  c68424b400000001     mov byte ptr [esp + 0xb4], 1
// 0088dd71  c744242418229a00     mov dword ptr [esp + 0x24], 0x9a2218
// 0088dd79  e8b214b8ff           call 0x40f230
// 0088dd7e  8d4c2434             lea ecx, [esp + 0x34]
// 0088dd82  c68424b400000000     mov byte ptr [esp + 0xb4], 0
// 0088dd8a  e819870900           call 0x9264a8
// 0088dd8f  8d4c2444             lea ecx, [esp + 0x44]
// 0088dd93  c78424b4000000ffffffff mov dword ptr [esp + 0xb4], 0xffffffff
// 0088dd9e  e82d69f6ff           call 0x7f46d0
// 0088dda3  e935fbffff           jmp 0x88d8dd
// copied from an identical function in another client (function ?RedrawRect@CXTPCommandBarAnimation@@QAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBarAnimation.cpp