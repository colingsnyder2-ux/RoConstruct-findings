// roc 2010-06 00835810  unit: CXTPControlGalleryOffice2007Theme  size: 3974 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00835810
//
// 00835810  81ecec000000         sub esp, 0xec
// 00835816  53                   push ebx
// 00835817  55                   push ebp
// 00835818  56                   push esi
// 00835819  8bb42400010000       mov esi, dword ptr [esp + 0x100]
// 00835820  57                   push edi
// 00835821  8bf9                 mov edi, ecx
// 00835823  8bce                 mov ecx, esi
// 00835825  897c241c             mov dword ptr [esp + 0x1c], edi
// 00835829  e8f25d0600           call 0x89b620
// 0083582e  83f805               cmp eax, 5
// 00835831  7422                 je 0x835855
// 00835833  83f806               cmp eax, 6
// 00835836  741d                 je 0x835855
// 00835838  8b842400010000       mov eax, dword ptr [esp + 0x100]
// 0083583f  56                   push esi
// 00835840  50                   push eax
// 00835841  8bcf                 mov ecx, edi
// 00835843  e8f80affff           call 0x826340
// 00835848  5f                   pop edi
// 00835849  5e                   pop esi
// 0083584a  5d                   pop ebp
// 0083584b  5b                   pop ebx
// 0083584c  81c4ec000000         add esp, 0xec
// 00835852  c20800               ret 8
// 00835855  33c9                 xor ecx, ecx
// 00835857  83f805               cmp eax, 5
// 0083585a  8b4660               mov eax, dword ptr [esi + 0x60]
// 0083585d  0f94c1               sete cl
// 00835860  33db                 xor ebx, ebx
// 00835862  8be9                 mov ebp, ecx
// 00835864  896c2410             mov dword ptr [esp + 0x10], ebp
// 00835868  3bc3                 cmp eax, ebx
// 0083586a  7411                 je 0x83587d
// 0083586c  8b5658               mov edx, dword ptr [esi + 0x58]
// 0083586f  89542420             mov dword ptr [esp + 0x20], edx
// 00835873  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0083587b  eb0f                 jmp 0x83588c
// 0083587d  8b4658               mov eax, dword ptr [esi + 0x58]
// 00835880  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00835888  89442434             mov dword ptr [esp + 0x34], eax
// 0083588c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0083588f  2b4e1c               sub ecx, dword ptr [esi + 0x1c]
// 00835892  85c9                 test ecx, ecx
// 00835894  0f8eef0e0000         jle 0x836789
// 0083589a  8b5608               mov edx, dword ptr [esi + 8]
// 0083589d  2b560c               sub edx, dword ptr [esi + 0xc]
// 008358a0  2b5604               sub edx, dword ptr [esi + 4]
// 008358a3  42                   inc edx
// 008358a4  85d2                 test edx, edx
// 008358a6  7e14                 jle 0x8358bc
// 008358a8  8b06                 mov eax, dword ptr [esi]
// 008358aa  8b5004               mov edx, dword ptr [eax + 4]
// 008358ad  8bce                 mov ecx, esi
// 008358af  ffd2                 call edx
// 008358b1  85c0                 test eax, eax
// 008358b3  7407                 je 0x8358bc
// 008358b5  bf01000000           mov edi, 1
// 008358ba  eb02                 jmp 0x8358be
// 008358bc  33ff                 xor edi, edi
// 008358be  8b5634               mov edx, dword ptr [esi + 0x34]
// 008358c1  8b4638               mov eax, dword ptr [esi + 0x38]
// 008358c4  8bca                 mov ecx, edx
// 008358c6  2bc8                 sub ecx, eax
// 008358c8  2b4628               sub eax, dword ptr [esi + 0x28]
// 008358cb  897c2414             mov dword ptr [esp + 0x14], edi
// 008358cf  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 008358d6  898424c4000000       mov dword ptr [esp + 0xc4], eax
// 008358dd  3bfb                 cmp edi, ebx
// 008358df  7405                 je 0x8358e6
// 008358e1  3b562c               cmp edx, dword ptr [esi + 0x2c]
// 008358e4  7e0e                 jle 0x8358f4
// 008358e6  899c249c000000       mov dword ptr [esp + 0x9c], ebx
// 008358ed  899c24c4000000       mov dword ptr [esp + 0xc4], ebx
// 008358f4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008358f8  8b782c               mov edi, dword ptr [eax + 0x2c]
// 008358fb  68946aa600           push 0xa66a94
// 00835900  8bcf                 mov ecx, edi
// 00835902  897c243c             mov dword ptr [esp + 0x3c], edi
// 00835906  e8f5c8ffff           call 0x832200
// 0083590b  898424bc000000       mov dword ptr [esp + 0xbc], eax
// 00835912  3bc3                 cmp eax, ebx
// 00835914  0f846f0e0000         je 0x836789
// 0083591a  395e5c               cmp dword ptr [esi + 0x5c], ebx
// 0083591d  0f842c070000         je 0x83604f
// 00835923  b8706aa600           mov eax, 0xa66a70
// 00835928  3beb                 cmp ebp, ebx
// 0083592a  7505                 jne 0x835931
// 0083592c  b84c6aa600           mov eax, 0xa66a4c
// 00835931  50                   push eax
// 00835932  8bcf                 mov ecx, edi
// 00835934  e8c7c8ffff           call 0x832200
// 00835939  89442418             mov dword ptr [esp + 0x18], eax
// 0083593d  3bc3                 cmp eax, ebx
// 0083593f  0f84440e0000         je 0x836789
// 00835945  8b2d48bc9e00         mov ebp, dword ptr [0x9ebc48]
// 0083594b  8d5e48               lea ebx, [esi + 0x48]
// 0083594e  53                   push ebx
// 0083594f  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 00835956  51                   push ecx
// 00835957  ffd5                 call ebp
// 00835959  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083595d  6a02                 push 2
// 0083595f  6a00                 push 0
// 00835961  8d9424d4000000       lea edx, [esp + 0xd4]
// 00835968  bf01000000           mov edi, 1
// 0083596d  52                   push edx
// 0083596e  897c2438             mov dword ptr [esp + 0x38], edi
// 00835972  e8b9f10500           call 0x894b30
// 00835977  83ec10               sub esp, 0x10
// 0083597a  8bcc                 mov ecx, esp
// 0083597c  8939                 mov dword ptr [ecx], edi
// 0083597e  33d2                 xor edx, edx
// 00835980  895104               mov dword ptr [ecx + 4], edx
// 00835983  8bd7                 mov edx, edi
// 00835985  8bbc2410010000       mov edi, dword ptr [esp + 0x110]
// 0083598c  895108               mov dword ptr [ecx + 8], edx
// 0083598f  33d2                 xor edx, edx
// 00835991  89510c               mov dword ptr [ecx + 0xc], edx
// 00835994  8b10                 mov edx, dword ptr [eax]
// 00835996  83ec10               sub esp, 0x10
// 00835999  8bcc                 mov ecx, esp
// 0083599b  8911                 mov dword ptr [ecx], edx
// 0083599d  8b5004               mov edx, dword ptr [eax + 4]
// 008359a0  895104               mov dword ptr [ecx + 4], edx
// 008359a3  8b5008               mov edx, dword ptr [eax + 8]
// 008359a6  8b400c               mov eax, dword ptr [eax + 0xc]
// 008359a9  895108               mov dword ptr [ecx + 8], edx
// 008359ac  89410c               mov dword ptr [ecx + 0xc], eax
// 008359af  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 008359b6  51                   push ecx
// 008359b7  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008359bb  57                   push edi
// 008359bc  e83fea0500           call 0x894400
// 008359c1  53                   push ebx
// 008359c2  8d942490000000       lea edx, [esp + 0x90]
// 008359c9  52                   push edx
// 008359ca  ffd5                 call ebp
// 008359cc  6a00                 push 0
// 008359ce  6aff                 push -1
// 008359d0  8d842494000000       lea eax, [esp + 0x94]
// 008359d7  50                   push eax
// 008359d8  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 008359de  837c241000           cmp dword ptr [esp + 0x10], 0
// 008359e3  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008359ea  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 008359f1  8b5628               mov edx, dword ptr [esi + 0x28]
// 008359f4  894c2450             mov dword ptr [esp + 0x50], ecx
// 008359f8  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008359ff  8944244c             mov dword ptr [esp + 0x4c], eax
// 00835a03  8944245c             mov dword ptr [esp + 0x5c], eax
// 00835a07  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00835a0a  894c2454             mov dword ptr [esp + 0x54], ecx
// 00835a0e  894c2464             mov dword ptr [esp + 0x64], ecx
// 00835a12  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00835a19  89442460             mov dword ptr [esp + 0x60], eax
// 00835a1d  89542458             mov dword ptr [esp + 0x58], edx
// 00835a21  894c2468             mov dword ptr [esp + 0x68], ecx
// 00835a25  b8246aa600           mov eax, 0xa66a24
// 00835a2a  7505                 jne 0x835a31
// 00835a2c  b8fc69a600           mov eax, 0xa669fc
// 00835a31  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00835a35  50                   push eax
// 00835a36  e8c5c7ffff           call 0x832200
// 00835a3b  33db                 xor ebx, ebx
// 00835a3d  8944241c             mov dword ptr [esp + 0x1c], eax
// 00835a41  3bc3                 cmp eax, ebx
// 00835a43  0f84400d0000         je 0x836789
// 00835a49  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00835a4d  7509                 jne 0x835a58
// 00835a4f  895c2410             mov dword ptr [esp + 0x10], ebx
// 00835a53  e997000000           jmp 0x835aef
// 00835a58  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00835a5c  83f93c               cmp ecx, 0x3c
// 00835a5f  750a                 jne 0x835a6b
// 00835a61  c744241003000000     mov dword ptr [esp + 0x10], 3
// 00835a69  eb29                 jmp 0x835a94
// 00835a6b  8b442434             mov eax, dword ptr [esp + 0x34]
// 00835a6f  83f83c               cmp eax, 0x3c
// 00835a72  750a                 jne 0x835a7e
// 00835a74  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00835a7c  eb16                 jmp 0x835a94
// 00835a7e  3bc3                 cmp eax, ebx
// 00835a80  7f0a                 jg 0x835a8c
// 00835a82  3bcb                 cmp ecx, ebx
// 00835a84  7f06                 jg 0x835a8c
// 00835a86  895c2410             mov dword ptr [esp + 0x10], ebx
// 00835a8a  eb63                 jmp 0x835aef
// 00835a8c  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00835a94  8b542410             mov edx, dword ptr [esp + 0x10]
// 00835a98  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00835a9c  6a04                 push 4
// 00835a9e  52                   push edx
// 00835a9f  8d8424d4000000       lea eax, [esp + 0xd4]
// 00835aa6  be03000000           mov esi, 3
// 00835aab  50                   push eax
// 00835aac  8bee                 mov ebp, esi
// 00835aae  e87df00500           call 0x894b30
// 00835ab3  83ec10               sub esp, 0x10
// 00835ab6  8bcc                 mov ecx, esp
// 00835ab8  8931                 mov dword ptr [ecx], esi
// 00835aba  896904               mov dword ptr [ecx + 4], ebp
// 00835abd  8bd6                 mov edx, esi
// 00835abf  895108               mov dword ptr [ecx + 8], edx
// 00835ac2  89510c               mov dword ptr [ecx + 0xc], edx
// 00835ac5  8b10                 mov edx, dword ptr [eax]
// 00835ac7  83ec10               sub esp, 0x10
// 00835aca  8bcc                 mov ecx, esp
// 00835acc  8911                 mov dword ptr [ecx], edx
// 00835ace  8b5004               mov edx, dword ptr [eax + 4]
// 00835ad1  895104               mov dword ptr [ecx + 4], edx
// 00835ad4  8b5008               mov edx, dword ptr [eax + 8]
// 00835ad7  8b400c               mov eax, dword ptr [eax + 0xc]
// 00835ada  895108               mov dword ptr [ecx + 8], edx
// 00835add  89410c               mov dword ptr [ecx + 0xc], eax
// 00835ae0  8d4c246c             lea ecx, [esp + 0x6c]
// 00835ae4  51                   push ecx
// 00835ae5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00835ae9  57                   push edi
// 00835aea  e811e90500           call 0x894400
// 00835aef  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00835af3  8b442454             mov eax, dword ptr [esp + 0x54]
// 00835af7  8d4410f7             lea eax, [eax + edx - 9]
// 00835afb  99                   cdq 
// 00835afc  2bc2                 sub eax, edx
// 00835afe  8b542450             mov edx, dword ptr [esp + 0x50]
// 00835b02  8bc8                 mov ecx, eax
// 00835b04  8b442458             mov eax, dword ptr [esp + 0x58]
// 00835b08  8d4410f7             lea eax, [eax + edx - 9]
// 00835b0c  be09000000           mov esi, 9
// 00835b11  99                   cdq 
// 00835b12  8bee                 mov ebp, esi
// 00835b14  55                   push ebp
// 00835b15  2bc2                 sub eax, edx
// 00835b17  56                   push esi
// 00835b18  d1f8                 sar eax, 1
// 00835b1a  d1f9                 sar ecx, 1
// 00835b1c  50                   push eax
// 00835b1d  51                   push ecx
// 00835b1e  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 00835b25  e856dbc1ff           call 0x453680
// 00835b2a  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00835b2e  7505                 jne 0x835b35
// 00835b30  8d46fb               lea eax, [esi - 5]
// 00835b33  eb0a                 jmp 0x835b3f
// 00835b35  33c0                 xor eax, eax
// 00835b37  395c2410             cmp dword ptr [esp + 0x10], ebx
// 00835b3b  0f95c0               setne al
// 00835b3e  40                   inc eax
// 00835b3f  50                   push eax
// 00835b40  33c9                 xor ecx, ecx
// 00835b42  83ec10               sub esp, 0x10
// 00835b45  8bc4                 mov eax, esp
// 00835b47  8908                 mov dword ptr [eax], ecx
// 00835b49  894804               mov dword ptr [eax + 4], ecx
// 00835b4c  8bce                 mov ecx, esi
// 00835b4e  894808               mov dword ptr [eax + 8], ecx
// 00835b51  89480c               mov dword ptr [eax + 0xc], ecx
// 00835b54  8d8c24e0000000       lea ecx, [esp + 0xe0]
// 00835b5b  51                   push ecx
// 00835b5c  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00835b60  895c2440             mov dword ptr [esp + 0x40], ebx
// 00835b64  895c2444             mov dword ptr [esp + 0x44], ebx
// 00835b68  895c2448             mov dword ptr [esp + 0x48], ebx
// 00835b6c  e85ffcffff           call 0x8357d0
// 00835b71  83c418               add esp, 0x18
// 00835b74  68ff00ff00           push 0xff00ff
// 00835b79  8d542428             lea edx, [esp + 0x28]
// 00835b7d  52                   push edx
// 00835b7e  8b10                 mov edx, dword ptr [eax]
// 00835b80  83ec10               sub esp, 0x10
// 00835b83  8bcc                 mov ecx, esp
// 00835b85  8911                 mov dword ptr [ecx], edx
// 00835b87  8b5004               mov edx, dword ptr [eax + 4]
// 00835b8a  895104               mov dword ptr [ecx + 4], edx
// 00835b8d  8b5008               mov edx, dword ptr [eax + 8]
// 00835b90  8b400c               mov eax, dword ptr [eax + 0xc]
// 00835b93  895108               mov dword ptr [ecx + 8], edx
// 00835b96  89410c               mov dword ptr [ecx + 0xc], eax
// 00835b99  8d8c2404010000       lea ecx, [esp + 0x104]
// 00835ba0  51                   push ecx
// 00835ba1  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 00835ba8  57                   push edi
// 00835ba9  e8c2f40500           call 0x895070
// 00835bae  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00835bb2  7509                 jne 0x835bbd
// 00835bb4  895c2410             mov dword ptr [esp + 0x10], ebx
// 00835bb8  e99f000000           jmp 0x835c5c
// 00835bbd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00835bc1  83f93d               cmp ecx, 0x3d
// 00835bc4  750a                 jne 0x835bd0
// 00835bc6  c744241003000000     mov dword ptr [esp + 0x10], 3
// 00835bce  eb29                 jmp 0x835bf9
// 00835bd0  8b442434             mov eax, dword ptr [esp + 0x34]
// 00835bd4  83f83d               cmp eax, 0x3d
// 00835bd7  750a                 jne 0x835be3
// 00835bd9  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00835be1  eb16                 jmp 0x835bf9
// 00835be3  3bc3                 cmp eax, ebx
// 00835be5  7f0a                 jg 0x835bf1
// 00835be7  3bcb                 cmp ecx, ebx
// 00835be9  7f06                 jg 0x835bf1
// 00835beb  895c2410             mov dword ptr [esp + 0x10], ebx
// 00835bef  eb6b                 jmp 0x835c5c
// 00835bf1  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00835bf9  8b542410             mov edx, dword ptr [esp + 0x10]
// 00835bfd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00835c01  6a04                 push 4
// 00835c03  bb03000000           mov ebx, 3
// 00835c08  52                   push edx
// 00835c09  8d8424d4000000       lea eax, [esp + 0xd4]
// 00835c10  50                   push eax
// 00835c11  8bf3                 mov esi, ebx
// 00835c13  8beb                 mov ebp, ebx
// 00835c15  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00835c19  e812ef0500           call 0x894b30
// 00835c1e  83ec10               sub esp, 0x10
// 00835c21  8bcc                 mov ecx, esp
// 00835c23  8931                 mov dword ptr [ecx], esi
// 00835c25  896904               mov dword ptr [ecx + 4], ebp
// 00835c28  895908               mov dword ptr [ecx + 8], ebx
// 00835c2b  83ec10               sub esp, 0x10
// 00835c2e  8bd3                 mov edx, ebx
// 00835c30  89510c               mov dword ptr [ecx + 0xc], edx
// 00835c33  8b10                 mov edx, dword ptr [eax]
// 00835c35  8bcc                 mov ecx, esp
// 00835c37  8911                 mov dword ptr [ecx], edx
// 00835c39  8b5004               mov edx, dword ptr [eax + 4]
// 00835c3c  895104               mov dword ptr [ecx + 4], edx
// 00835c3f  8b5008               mov edx, dword ptr [eax + 8]
// 00835c42  8b400c               mov eax, dword ptr [eax + 0xc]
// 00835c45  895108               mov dword ptr [ecx + 8], edx
// 00835c48  89410c               mov dword ptr [ecx + 0xc], eax
// 00835c4b  8d4c247c             lea ecx, [esp + 0x7c]
// 00835c4f  51                   push ecx
// 00835c50  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00835c54  57                   push edi
// 00835c55  e8a6e70500           call 0x894400
// 00835c5a  33db                 xor ebx, ebx
// 00835c5c  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00835c60  8b442464             mov eax, dword ptr [esp + 0x64]
// 00835c64  8d4410f7             lea eax, [eax + edx - 9]
// 00835c68  99                   cdq 
// 00835c69  2bc2                 sub eax, edx
// 00835c6b  8b542460             mov edx, dword ptr [esp + 0x60]
// 00835c6f  8bc8                 mov ecx, eax
// 00835c71  8b442468             mov eax, dword ptr [esp + 0x68]
// 00835c75  8d4410f7             lea eax, [eax + edx - 9]
// 00835c79  be09000000           mov esi, 9
// 00835c7e  99                   cdq 
// 00835c7f  8bee                 mov ebp, esi
// 00835c81  55                   push ebp
// 00835c82  2bc2                 sub eax, edx
// 00835c84  56                   push esi
// 00835c85  d1f8                 sar eax, 1
// 00835c87  d1f9                 sar ecx, 1
// 00835c89  50                   push eax
// 00835c8a  51                   push ecx
// 00835c8b  8d8c24ec000000       lea ecx, [esp + 0xec]
// 00835c92  e8e9d9c1ff           call 0x453680
// 00835c97  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00835c9b  7505                 jne 0x835ca2
// 00835c9d  8d46ff               lea eax, [esi - 1]
// 00835ca0  eb0c                 jmp 0x835cae
// 00835ca2  33c0                 xor eax, eax
// 00835ca4  395c2410             cmp dword ptr [esp + 0x10], ebx
// 00835ca8  0f95c0               setne al
// 00835cab  83c005               add eax, 5
// 00835cae  50                   push eax
// 00835caf  33c9                 xor ecx, ecx
// 00835cb1  83ec10               sub esp, 0x10
// 00835cb4  8bc4                 mov eax, esp
// 00835cb6  8908                 mov dword ptr [eax], ecx
// 00835cb8  894804               mov dword ptr [eax + 4], ecx
// 00835cbb  8bce                 mov ecx, esi
// 00835cbd  894808               mov dword ptr [eax + 8], ecx
// 00835cc0  89480c               mov dword ptr [eax + 0xc], ecx
// 00835cc3  8d8c24e0000000       lea ecx, [esp + 0xe0]
// 00835cca  51                   push ecx
// 00835ccb  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00835ccf  895c2440             mov dword ptr [esp + 0x40], ebx
// 00835cd3  895c2444             mov dword ptr [esp + 0x44], ebx
// 00835cd7  895c2448             mov dword ptr [esp + 0x48], ebx
// 00835cdb  e8f0faffff           call 0x8357d0
// 00835ce0  83c418               add esp, 0x18
// 00835ce3  68ff00ff00           push 0xff00ff
// 00835ce8  8d542428             lea edx, [esp + 0x28]
// 00835cec  52                   push edx
// 00835ced  8b10                 mov edx, dword ptr [eax]
// 00835cef  83ec10               sub esp, 0x10
// 00835cf2  8bcc                 mov ecx, esp
// 00835cf4  8911                 mov dword ptr [ecx], edx
// 00835cf6  8b5004               mov edx, dword ptr [eax + 4]
// 00835cf9  895104               mov dword ptr [ecx + 4], edx
// 00835cfc  8b5008               mov edx, dword ptr [eax + 8]
// 00835cff  8b400c               mov eax, dword ptr [eax + 0xc]
// 00835d02  895108               mov dword ptr [ecx + 8], edx
// 00835d05  89410c               mov dword ptr [ecx + 0xc], eax
// 00835d08  8d8c24f4000000       lea ecx, [esp + 0xf4]
// 00835d0f  51                   push ecx
// 00835d10  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 00835d17  57                   push edi
// 00835d18  e853f30500           call 0x895070
// 00835d1d  8b442458             mov eax, dword ptr [esp + 0x58]
// 00835d21  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 00835d28  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00835d2f  8b3544bc9e00         mov esi, dword ptr [0x9ebc44]
// 00835d35  89442440             mov dword ptr [esp + 0x40], eax
// 00835d39  8954243c             mov dword ptr [esp + 0x3c], edx
// 00835d3d  8b542460             mov edx, dword ptr [esp + 0x60]
// 00835d41  8d44243c             lea eax, [esp + 0x3c]
// 00835d45  50                   push eax
// 00835d46  894c2448             mov dword ptr [esp + 0x48], ecx
// 00835d4a  8954244c             mov dword ptr [esp + 0x4c], edx
// 00835d4e  ffd6                 call esi
// 00835d50  85c0                 test eax, eax
// 00835d52  0f85310a0000         jne 0x836789
// 00835d58  8b542440             mov edx, dword ptr [esp + 0x40]
// 00835d5c  8bac24c4000000       mov ebp, dword ptr [esp + 0xc4]
// 00835d63  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00835d67  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00835d6b  899424b0000000       mov dword ptr [esp + 0xb0], edx
// 00835d72  03d5                 add edx, ebp
// 00835d74  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00835d78  896c246c             mov dword ptr [esp + 0x6c], ebp
// 00835d7c  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00835d80  896c2474             mov dword ptr [esp + 0x74], ebp
// 00835d84  8bac249c000000       mov ebp, dword ptr [esp + 0x9c]
// 00835d8b  899424b8000000       mov dword ptr [esp + 0xb8], edx
// 00835d92  89542470             mov dword ptr [esp + 0x70], edx
// 00835d96  03d5                 add edx, ebp
// 00835d98  41                   inc ecx
// 00835d99  89542478             mov dword ptr [esp + 0x78], edx
// 00835d9d  89542428             mov dword ptr [esp + 0x28], edx
// 00835da1  48                   dec eax
// 00835da2  898c24b4000000       mov dword ptr [esp + 0xb4], ecx
// 00835da9  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00835dad  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00835db1  8d9424ac000000       lea edx, [esp + 0xac]
// 00835db8  52                   push edx
// 00835db9  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 00835dc0  89442428             mov dword ptr [esp + 0x28], eax
// 00835dc4  894c2434             mov dword ptr [esp + 0x34], ecx
// 00835dc8  ffd6                 call esi
// 00835dca  85c0                 test eax, eax
// 00835dcc  7576                 jne 0x835e44
// 00835dce  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00835dd2  7470                 je 0x835e44
// 00835dd4  837c24203e           cmp dword ptr [esp + 0x20], 0x3e
// 00835dd9  7569                 jne 0x835e44
// 00835ddb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00835ddf  6a02                 push 2
// 00835de1  be01000000           mov esi, 1
// 00835de6  56                   push esi
// 00835de7  8d8424d4000000       lea eax, [esp + 0xd4]
// 00835dee  33db                 xor ebx, ebx
// 00835df0  50                   push eax
// 00835df1  8bee                 mov ebp, esi
// 00835df3  899c24b4000000       mov dword ptr [esp + 0xb4], ebx
// 00835dfa  e831ed0500           call 0x894b30
// 00835dff  83ec10               sub esp, 0x10
// 00835e02  8bcc                 mov ecx, esp
// 00835e04  8931                 mov dword ptr [ecx], esi
// 00835e06  895904               mov dword ptr [ecx + 4], ebx
// 00835e09  896908               mov dword ptr [ecx + 8], ebp
// 00835e0c  83ec10               sub esp, 0x10
// 00835e0f  8bd3                 mov edx, ebx
// 00835e11  89510c               mov dword ptr [ecx + 0xc], edx
// 00835e14  8b10                 mov edx, dword ptr [eax]
// 00835e16  8bcc                 mov ecx, esp
// 00835e18  8911                 mov dword ptr [ecx], edx
// 00835e1a  8b5004               mov edx, dword ptr [eax + 4]
// 00835e1d  895104               mov dword ptr [ecx + 4], edx
// 00835e20  8b5008               mov edx, dword ptr [eax + 8]
// 00835e23  8b400c               mov eax, dword ptr [eax + 0xc]
// 00835e26  895108               mov dword ptr [ecx + 8], edx
// 00835e29  89410c               mov dword ptr [ecx + 0xc], eax
// 00835e2c  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 00835e33  51                   push ecx
// 00835e34  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00835e38  57                   push edi
// 00835e39  e8c2e50500           call 0x894400
// 00835e3e  8b3544bc9e00         mov esi, dword ptr [0x9ebc44]
// 00835e44  8d54246c             lea edx, [esp + 0x6c]
// 00835e48  52                   push edx
// 00835e49  ffd6                 call esi
// 00835e4b  85c0                 test eax, eax
// 00835e4d  0f857a010000         jne 0x835fcd
// 00835e53  39442414             cmp dword ptr [esp + 0x14], eax
// 00835e57  7504                 jne 0x835e5d
// 00835e59  33ed                 xor ebp, ebp
// 00835e5b  eb2e                 jmp 0x835e8b
// 00835e5d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00835e61  83f940               cmp ecx, 0x40
// 00835e64  7505                 jne 0x835e6b
// 00835e66  8d69c3               lea ebp, [ecx - 0x3d]
// 00835e69  eb1f                 jmp 0x835e8a
// 00835e6b  8b442434             mov eax, dword ptr [esp + 0x34]
// 00835e6f  83f840               cmp eax, 0x40
// 00835e72  7505                 jne 0x835e79
// 00835e74  8d68c2               lea ebp, [eax - 0x3e]
// 00835e77  eb11                 jmp 0x835e8a
// 00835e79  85c0                 test eax, eax
// 00835e7b  7f08                 jg 0x835e85
// 00835e7d  85c9                 test ecx, ecx
// 00835e7f  7f04                 jg 0x835e85
// 00835e81  33ed                 xor ebp, ebp
// 00835e83  eb06                 jmp 0x835e8b
// 00835e85  bd01000000           mov ebp, 1
// 00835e8a  4d                   dec ebp
// 00835e8b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00835e8f  68d869a600           push 0xa669d8
// 00835e94  e867c3ffff           call 0x832200
// 00835e99  8bf0                 mov esi, eax
// 00835e9b  85f6                 test esi, esi
// 00835e9d  0f84e6080000         je 0x836789
// 00835ea3  6a03                 push 3
// 00835ea5  55                   push ebp
// 00835ea6  8d8424d4000000       lea eax, [esp + 0xd4]
// 00835ead  bb05000000           mov ebx, 5
// 00835eb2  50                   push eax
// 00835eb3  8bce                 mov ecx, esi
// 00835eb5  899c24b4000000       mov dword ptr [esp + 0xb4], ebx
// 00835ebc  e86fec0500           call 0x894b30
// 00835ec1  83ec10               sub esp, 0x10
// 00835ec4  8bcc                 mov ecx, esp
// 00835ec6  8919                 mov dword ptr [ecx], ebx
// 00835ec8  8bd3                 mov edx, ebx
// 00835eca  895104               mov dword ptr [ecx + 4], edx
// 00835ecd  895108               mov dword ptr [ecx + 8], edx
// 00835ed0  89510c               mov dword ptr [ecx + 0xc], edx
// 00835ed3  8b10                 mov edx, dword ptr [eax]
// 00835ed5  83ec10               sub esp, 0x10
// 00835ed8  8bcc                 mov ecx, esp
// 00835eda  8911                 mov dword ptr [ecx], edx
// 00835edc  8b5004               mov edx, dword ptr [eax + 4]
// 00835edf  895104               mov dword ptr [ecx + 4], edx
// 00835ee2  8b5008               mov edx, dword ptr [eax + 8]
// 00835ee5  8b400c               mov eax, dword ptr [eax + 0xc]
// 00835ee8  895108               mov dword ptr [ecx + 8], edx
// 00835eeb  89410c               mov dword ptr [ecx + 0xc], eax
// 00835eee  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00835ef5  51                   push ecx
// 00835ef6  57                   push edi
// 00835ef7  8bce                 mov ecx, esi
// 00835ef9  e802e50500           call 0x894400
// 00835efe  8b542478             mov edx, dword ptr [esp + 0x78]
// 00835f02  2b542470             sub edx, dword ptr [esp + 0x70]
// 00835f06  83fa0a               cmp edx, 0xa
// 00835f09  0f8ebe000000         jle 0x835fcd
// 00835f0f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00835f13  68ac69a600           push 0xa669ac
// 00835f18  e8e3c2ffff           call 0x832200
// 00835f1d  8bd8                 mov ebx, eax
// 00835f1f  8d8424c4000000       lea eax, [esp + 0xc4]
// 00835f26  50                   push eax
// 00835f27  8d4c2470             lea ecx, [esp + 0x70]
// 00835f2b  c78424a400000008000000 mov dword ptr [esp + 0xa4], 8
// 00835f36  e8a569beff           call 0x41c8e0
// 00835f3b  8b7004               mov esi, dword ptr [eax + 4]
// 00835f3e  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 00835f45  51                   push ecx
// 00835f46  8d4c2470             lea ecx, [esp + 0x70]
// 00835f4a  83ee04               sub esi, 4
// 00835f4d  e88e69beff           call 0x41c8e0
// 00835f52  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00835f59  8b00                 mov eax, dword ptr [eax]
// 00835f5b  52                   push edx
// 00835f5c  b908000000           mov ecx, 8
// 00835f61  51                   push ecx
// 00835f62  83e803               sub eax, 3
// 00835f65  56                   push esi
// 00835f66  50                   push eax
// 00835f67  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00835f6e  e80dd7c1ff           call 0x453680
// 00835f73  6a03                 push 3
// 00835f75  55                   push ebp
// 00835f76  8d8424d4000000       lea eax, [esp + 0xd4]
// 00835f7d  33f6                 xor esi, esi
// 00835f7f  50                   push eax
// 00835f80  8bcb                 mov ecx, ebx
// 00835f82  89b424b4000000       mov dword ptr [esp + 0xb4], esi
// 00835f89  e8a2eb0500           call 0x894b30
// 00835f8e  83ec10               sub esp, 0x10
// 00835f91  8bcc                 mov ecx, esp
// 00835f93  8931                 mov dword ptr [ecx], esi
// 00835f95  33d2                 xor edx, edx
// 00835f97  895104               mov dword ptr [ecx + 4], edx
// 00835f9a  895108               mov dword ptr [ecx + 8], edx
// 00835f9d  83ec10               sub esp, 0x10
// 00835fa0  8bd6                 mov edx, esi
// 00835fa2  89510c               mov dword ptr [ecx + 0xc], edx
// 00835fa5  8b10                 mov edx, dword ptr [eax]
// 00835fa7  8bcc                 mov ecx, esp
// 00835fa9  8911                 mov dword ptr [ecx], edx
// 00835fab  8b5004               mov edx, dword ptr [eax + 4]
// 00835fae  895104               mov dword ptr [ecx + 4], edx
// 00835fb1  8b5008               mov edx, dword ptr [eax + 8]
// 00835fb4  8b400c               mov eax, dword ptr [eax + 0xc]
// 00835fb7  895108               mov dword ptr [ecx + 8], edx
// 00835fba  89410c               mov dword ptr [ecx + 0xc], eax
// 00835fbd  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00835fc4  51                   push ecx
// 00835fc5  57                   push edi
// 00835fc6  8bcb                 mov ecx, ebx
// 00835fc8  e833e40500           call 0x894400
// 00835fcd  8d542424             lea edx, [esp + 0x24]
// 00835fd1  52                   push edx
// 00835fd2  ff1544bc9e00         call dword ptr [0x9ebc44]
// 00835fd8  85c0                 test eax, eax
// 00835fda  0f85a9070000         jne 0x836789
// 00835fe0  33db                 xor ebx, ebx
// 00835fe2  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00835fe6  0f849d070000         je 0x836789
// 00835fec  837c24203f           cmp dword ptr [esp + 0x20], 0x3f
// 00835ff1  0f8592070000         jne 0x836789
// 00835ff7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00835ffb  6a02                 push 2
// 00835ffd  be01000000           mov esi, 1
// 00836002  56                   push esi
// 00836003  8d8424d4000000       lea eax, [esp + 0xd4]
// 0083600a  50                   push eax
// 0083600b  8bee                 mov ebp, esi
// 0083600d  899c2494000000       mov dword ptr [esp + 0x94], ebx
// 00836014  e817eb0500           call 0x894b30
// 00836019  83ec10               sub esp, 0x10
// 0083601c  8bcc                 mov ecx, esp
// 0083601e  8931                 mov dword ptr [ecx], esi
// 00836020  895904               mov dword ptr [ecx + 4], ebx
// 00836023  896908               mov dword ptr [ecx + 8], ebp
// 00836026  8bd3                 mov edx, ebx
// 00836028  89510c               mov dword ptr [ecx + 0xc], edx
// 0083602b  8b10                 mov edx, dword ptr [eax]
// 0083602d  83ec10               sub esp, 0x10
// 00836030  8bcc                 mov ecx, esp
// 00836032  8911                 mov dword ptr [ecx], edx
// 00836034  8b5004               mov edx, dword ptr [eax + 4]
// 00836037  895104               mov dword ptr [ecx + 4], edx
// 0083603a  8b5008               mov edx, dword ptr [eax + 8]
// 0083603d  8b400c               mov eax, dword ptr [eax + 0xc]
// 00836040  895108               mov dword ptr [ecx + 8], edx
// 00836043  89410c               mov dword ptr [ecx + 0xc], eax
// 00836046  8d4c2444             lea ecx, [esp + 0x44]
// 0083604a  e92f070000           jmp 0x83677e
// 0083604f  b88869a600           mov eax, 0xa66988
// 00836054  3beb                 cmp ebp, ebx
// 00836056  7505                 jne 0x83605d
// 00836058  b86469a600           mov eax, 0xa66964
// 0083605d  50                   push eax
// 0083605e  8bcf                 mov ecx, edi
// 00836060  e89bc1ffff           call 0x832200
// 00836065  89442418             mov dword ptr [esp + 0x18], eax
// 00836069  3bc3                 cmp eax, ebx
// 0083606b  751f                 jne 0x83608c
// 0083606d  8b942400010000       mov edx, dword ptr [esp + 0x100]
// 00836074  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00836078  56                   push esi
// 00836079  52                   push edx
// 0083607a  e8c102ffff           call 0x826340
// 0083607f  5f                   pop edi
// 00836080  5e                   pop esi
// 00836081  5d                   pop ebp
// 00836082  5b                   pop ebx
// 00836083  81c4ec000000         add esp, 0xec
// 00836089  c20800               ret 8
// 0083608c  8b2d48bc9e00         mov ebp, dword ptr [0x9ebc48]
// 00836092  8d5e48               lea ebx, [esi + 0x48]
// 00836095  53                   push ebx
// 00836096  8d8424e0000000       lea eax, [esp + 0xe0]
// 0083609d  50                   push eax
// 0083609e  ffd5                 call ebp
// 008360a0  6a02                 push 2
// 008360a2  33ff                 xor edi, edi
// 008360a4  57                   push edi
// 008360a5  8d4c242c             lea ecx, [esp + 0x2c]
// 008360a9  51                   push ecx
// 008360aa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008360ae  c784249400000001000000 mov dword ptr [esp + 0x94], 1
// 008360b9  e872ea0500           call 0x894b30
// 008360be  83ec10               sub esp, 0x10
// 008360c1  8bcc                 mov ecx, esp
// 008360c3  8939                 mov dword ptr [ecx], edi
// 008360c5  8bbc2410010000       mov edi, dword ptr [esp + 0x110]
// 008360cc  ba01000000           mov edx, 1
// 008360d1  895104               mov dword ptr [ecx + 4], edx
// 008360d4  33d2                 xor edx, edx
// 008360d6  895108               mov dword ptr [ecx + 8], edx
// 008360d9  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 008360e0  89510c               mov dword ptr [ecx + 0xc], edx
// 008360e3  8b10                 mov edx, dword ptr [eax]
// 008360e5  83ec10               sub esp, 0x10
// 008360e8  8bcc                 mov ecx, esp
// 008360ea  8911                 mov dword ptr [ecx], edx
// 008360ec  8b5004               mov edx, dword ptr [eax + 4]
// 008360ef  895104               mov dword ptr [ecx + 4], edx
// 008360f2  8b5008               mov edx, dword ptr [eax + 8]
// 008360f5  8b400c               mov eax, dword ptr [eax + 0xc]
// 008360f8  895108               mov dword ptr [ecx + 8], edx
// 008360fb  89410c               mov dword ptr [ecx + 0xc], eax
// 008360fe  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 00836105  51                   push ecx
// 00836106  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0083610a  57                   push edi
// 0083610b  e8f0e20500           call 0x894400
// 00836110  53                   push ebx
// 00836111  8d942490000000       lea edx, [esp + 0x90]
// 00836118  52                   push edx
// 00836119  ffd5                 call ebp
// 0083611b  6aff                 push -1
// 0083611d  6a00                 push 0
// 0083611f  8d842494000000       lea eax, [esp + 0x94]
// 00836126  50                   push eax
// 00836127  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 0083612d  837c241000           cmp dword ptr [esp + 0x10], 0
// 00836132  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 00836139  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00836140  8b5628               mov edx, dword ptr [esi + 0x28]
// 00836143  89442470             mov dword ptr [esp + 0x70], eax
// 00836147  89442460             mov dword ptr [esp + 0x60], eax
// 0083614b  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 00836152  894c246c             mov dword ptr [esp + 0x6c], ecx
// 00836156  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0083615d  89542474             mov dword ptr [esp + 0x74], edx
// 00836161  8b562c               mov edx, dword ptr [esi + 0x2c]
// 00836164  89442464             mov dword ptr [esp + 0x64], eax
// 00836168  894c2478             mov dword ptr [esp + 0x78], ecx
// 0083616c  8954245c             mov dword ptr [esp + 0x5c], edx
// 00836170  894c2468             mov dword ptr [esp + 0x68], ecx
// 00836174  b83869a600           mov eax, 0xa66938
// 00836179  7505                 jne 0x836180
// 0083617b  b80c69a600           mov eax, 0xa6690c
// 00836180  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00836184  50                   push eax
// 00836185  e876c0ffff           call 0x832200
// 0083618a  33f6                 xor esi, esi
// 0083618c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00836190  3bc6                 cmp eax, esi
// 00836192  0f84f1050000         je 0x836789
// 00836198  39742414             cmp dword ptr [esp + 0x14], esi
// 0083619c  7509                 jne 0x8361a7
// 0083619e  89742410             mov dword ptr [esp + 0x10], esi
// 008361a2  e99a000000           jmp 0x836241
// 008361a7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008361ab  83f93c               cmp ecx, 0x3c
// 008361ae  750a                 jne 0x8361ba
// 008361b0  c744241003000000     mov dword ptr [esp + 0x10], 3
// 008361b8  eb29                 jmp 0x8361e3
// 008361ba  8b442434             mov eax, dword ptr [esp + 0x34]
// 008361be  83f83c               cmp eax, 0x3c
// 008361c1  750a                 jne 0x8361cd
// 008361c3  c744241002000000     mov dword ptr [esp + 0x10], 2
// 008361cb  eb16                 jmp 0x8361e3
// 008361cd  3bc6                 cmp eax, esi
// 008361cf  7f0a                 jg 0x8361db
// 008361d1  3bce                 cmp ecx, esi
// 008361d3  7f06                 jg 0x8361db
// 008361d5  89742410             mov dword ptr [esp + 0x10], esi
// 008361d9  eb66                 jmp 0x836241
// 008361db  c744241001000000     mov dword ptr [esp + 0x10], 1
// 008361e3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008361e7  6a04                 push 4
// 008361e9  51                   push ecx
// 008361ea  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008361ee  8d942484000000       lea edx, [esp + 0x84]
// 008361f5  bb03000000           mov ebx, 3
// 008361fa  52                   push edx
// 008361fb  8beb                 mov ebp, ebx
// 008361fd  e82ee90500           call 0x894b30
// 00836202  83ec10               sub esp, 0x10
// 00836205  8bcc                 mov ecx, esp
// 00836207  8919                 mov dword ptr [ecx], ebx
// 00836209  896904               mov dword ptr [ecx + 4], ebp
// 0083620c  8bd3                 mov edx, ebx
// 0083620e  895108               mov dword ptr [ecx + 8], edx
// 00836211  89510c               mov dword ptr [ecx + 0xc], edx
// 00836214  8b10                 mov edx, dword ptr [eax]
// 00836216  83ec10               sub esp, 0x10
// 00836219  8bcc                 mov ecx, esp
// 0083621b  8911                 mov dword ptr [ecx], edx
// 0083621d  8b5004               mov edx, dword ptr [eax + 4]
// 00836220  895104               mov dword ptr [ecx + 4], edx
// 00836223  8b5008               mov edx, dword ptr [eax + 8]
// 00836226  8b400c               mov eax, dword ptr [eax + 0xc]
// 00836229  895108               mov dword ptr [ecx + 8], edx
// 0083622c  89410c               mov dword ptr [ecx + 0xc], eax
// 0083622f  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00836236  51                   push ecx
// 00836237  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0083623b  57                   push edi
// 0083623c  e8bfe10500           call 0x894400
// 00836241  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00836245  8b442474             mov eax, dword ptr [esp + 0x74]
// 00836249  8d4410f7             lea eax, [eax + edx - 9]
// 0083624d  99                   cdq 
// 0083624e  2bc2                 sub eax, edx
// 00836250  8b542470             mov edx, dword ptr [esp + 0x70]
// 00836254  8bc8                 mov ecx, eax
// 00836256  8b442478             mov eax, dword ptr [esp + 0x78]
// 0083625a  8d4410f7             lea eax, [eax + edx - 9]
// 0083625e  bb09000000           mov ebx, 9
// 00836263  99                   cdq 
// 00836264  8beb                 mov ebp, ebx
// 00836266  55                   push ebp
// 00836267  2bc2                 sub eax, edx
// 00836269  53                   push ebx
// 0083626a  d1f8                 sar eax, 1
// 0083626c  d1f9                 sar ecx, 1
// 0083626e  50                   push eax
// 0083626f  51                   push ecx
// 00836270  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 00836277  e804d4c1ff           call 0x453680
// 0083627c  39742414             cmp dword ptr [esp + 0x14], esi
// 00836280  7505                 jne 0x836287
// 00836282  8d4303               lea eax, [ebx + 3]
// 00836285  eb0c                 jmp 0x836293
// 00836287  33c0                 xor eax, eax
// 00836289  39742410             cmp dword ptr [esp + 0x10], esi
// 0083628d  0f95c0               setne al
// 00836290  83c009               add eax, 9
// 00836293  50                   push eax
// 00836294  33c9                 xor ecx, ecx
// 00836296  83ec10               sub esp, 0x10
// 00836299  8bc4                 mov eax, esp
// 0083629b  8908                 mov dword ptr [eax], ecx
// 0083629d  894804               mov dword ptr [eax + 4], ecx
// 008362a0  8bcb                 mov ecx, ebx
// 008362a2  894808               mov dword ptr [eax + 8], ecx
// 008362a5  89480c               mov dword ptr [eax + 0xc], ecx
// 008362a8  8d8c2490000000       lea ecx, [esp + 0x90]
// 008362af  51                   push ecx
// 008362b0  8974243c             mov dword ptr [esp + 0x3c], esi
// 008362b4  89742440             mov dword ptr [esp + 0x40], esi
// 008362b8  89742444             mov dword ptr [esp + 0x44], esi
// 008362bc  89742448             mov dword ptr [esp + 0x48], esi
// 008362c0  e80bf5ffff           call 0x8357d0
// 008362c5  83c418               add esp, 0x18
// 008362c8  68ff00ff00           push 0xff00ff
// 008362cd  8d542428             lea edx, [esp + 0x28]
// 008362d1  52                   push edx
// 008362d2  8b10                 mov edx, dword ptr [eax]
// 008362d4  83ec10               sub esp, 0x10
// 008362d7  8bcc                 mov ecx, esp
// 008362d9  8911                 mov dword ptr [ecx], edx
// 008362db  8b5004               mov edx, dword ptr [eax + 4]
// 008362de  895104               mov dword ptr [ecx + 4], edx
// 008362e1  8b5008               mov edx, dword ptr [eax + 8]
// 008362e4  8b400c               mov eax, dword ptr [eax + 0xc]
// 008362e7  895108               mov dword ptr [ecx + 8], edx
// 008362ea  89410c               mov dword ptr [ecx + 0xc], eax
// 008362ed  8d8c2404010000       lea ecx, [esp + 0x104]
// 008362f4  51                   push ecx
// 008362f5  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 008362fc  57                   push edi
// 008362fd  e86eed0500           call 0x895070
// 00836302  39742414             cmp dword ptr [esp + 0x14], esi
// 00836306  7509                 jne 0x836311
// 00836308  89742410             mov dword ptr [esp + 0x10], esi
// 0083630c  e9a2000000           jmp 0x8363b3
// 00836311  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00836315  83f93d               cmp ecx, 0x3d
// 00836318  750a                 jne 0x836324
// 0083631a  c744241003000000     mov dword ptr [esp + 0x10], 3
// 00836322  eb29                 jmp 0x83634d
// 00836324  8b442434             mov eax, dword ptr [esp + 0x34]
// 00836328  83f83d               cmp eax, 0x3d
// 0083632b  750a                 jne 0x836337
// 0083632d  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00836335  eb16                 jmp 0x83634d
// 00836337  3bc6                 cmp eax, esi
// 00836339  7f0a                 jg 0x836345
// 0083633b  3bce                 cmp ecx, esi
// 0083633d  7f06                 jg 0x836345
// 0083633f  89742410             mov dword ptr [esp + 0x10], esi
// 00836343  eb6e                 jmp 0x8363b3
// 00836345  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0083634d  8b542410             mov edx, dword ptr [esp + 0x10]
// 00836351  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00836355  6a04                 push 4
// 00836357  bd03000000           mov ebp, 3
// 0083635c  52                   push edx
// 0083635d  8d8424e4000000       lea eax, [esp + 0xe4]
// 00836364  50                   push eax
// 00836365  8bdd                 mov ebx, ebp
// 00836367  8bf5                 mov esi, ebp
// 00836369  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 00836370  e8bbe70500           call 0x894b30
// 00836375  83ec10               sub esp, 0x10
// 00836378  8bcc                 mov ecx, esp
// 0083637a  8919                 mov dword ptr [ecx], ebx
// 0083637c  897104               mov dword ptr [ecx + 4], esi
// 0083637f  896908               mov dword ptr [ecx + 8], ebp
// 00836382  83ec10               sub esp, 0x10
// 00836385  8bd5                 mov edx, ebp
// 00836387  89510c               mov dword ptr [ecx + 0xc], edx
// 0083638a  8b10                 mov edx, dword ptr [eax]
// 0083638c  8bcc                 mov ecx, esp
// 0083638e  8911                 mov dword ptr [ecx], edx
// 00836390  8b5004               mov edx, dword ptr [eax + 4]
// 00836393  895104               mov dword ptr [ecx + 4], edx
// 00836396  8b5008               mov edx, dword ptr [eax + 8]
// 00836399  8b400c               mov eax, dword ptr [eax + 0xc]
// 0083639c  895108               mov dword ptr [ecx + 8], edx
// 0083639f  89410c               mov dword ptr [ecx + 0xc], eax
// 008363a2  8d4c247c             lea ecx, [esp + 0x7c]
// 008363a6  51                   push ecx
// 008363a7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008363ab  57                   push edi
// 008363ac  e84fe00500           call 0x894400
// 008363b1  33f6                 xor esi, esi
// 008363b3  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008363b7  8b442464             mov eax, dword ptr [esp + 0x64]
// 008363bb  8d4410f7             lea eax, [eax + edx - 9]
// 008363bf  99                   cdq 
// 008363c0  2bc2                 sub eax, edx
// 008363c2  8b542460             mov edx, dword ptr [esp + 0x60]
// 008363c6  8bc8                 mov ecx, eax
// 008363c8  8b442468             mov eax, dword ptr [esp + 0x68]
// 008363cc  8d4410f7             lea eax, [eax + edx - 9]
// 008363d0  bb09000000           mov ebx, 9
// 008363d5  99                   cdq 
// 008363d6  8beb                 mov ebp, ebx
// 008363d8  55                   push ebp
// 008363d9  2bc2                 sub eax, edx
// 008363db  53                   push ebx
// 008363dc  d1f8                 sar eax, 1
// 008363de  d1f9                 sar ecx, 1
// 008363e0  50                   push eax
// 008363e1  51                   push ecx
// 008363e2  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 008363e9  e892d2c1ff           call 0x453680
// 008363ee  39742414             cmp dword ptr [esp + 0x14], esi
// 008363f2  7505                 jne 0x8363f9
// 008363f4  8d4307               lea eax, [ebx + 7]
// 008363f7  eb0c                 jmp 0x836405
// 008363f9  33c0                 xor eax, eax
// 008363fb  39742410             cmp dword ptr [esp + 0x10], esi
// 008363ff  0f95c0               setne al
// 00836402  83c00d               add eax, 0xd
// 00836405  50                   push eax
// 00836406  33c9                 xor ecx, ecx
// 00836408  83ec10               sub esp, 0x10
// 0083640b  8bc4                 mov eax, esp
// 0083640d  8908                 mov dword ptr [eax], ecx
// 0083640f  894804               mov dword ptr [eax + 4], ecx
// 00836412  8bcb                 mov ecx, ebx
// 00836414  894808               mov dword ptr [eax + 8], ecx
// 00836417  89480c               mov dword ptr [eax + 0xc], ecx
// 0083641a  8d8c2490000000       lea ecx, [esp + 0x90]
// 00836421  51                   push ecx
// 00836422  8974243c             mov dword ptr [esp + 0x3c], esi
// 00836426  89742440             mov dword ptr [esp + 0x40], esi
// 0083642a  89742444             mov dword ptr [esp + 0x44], esi
// 0083642e  89742448             mov dword ptr [esp + 0x48], esi
// 00836432  e899f3ffff           call 0x8357d0
// 00836437  83c418               add esp, 0x18
// 0083643a  68ff00ff00           push 0xff00ff
// 0083643f  8d542428             lea edx, [esp + 0x28]
// 00836443  52                   push edx
// 00836444  8b10                 mov edx, dword ptr [eax]
// 00836446  83ec10               sub esp, 0x10
// 00836449  8bcc                 mov ecx, esp
// 0083644b  8911                 mov dword ptr [ecx], edx
// 0083644d  8b5004               mov edx, dword ptr [eax + 4]
// 00836450  895104               mov dword ptr [ecx + 4], edx
// 00836453  8b5008               mov edx, dword ptr [eax + 8]
// 00836456  8b400c               mov eax, dword ptr [eax + 0xc]
// 00836459  895108               mov dword ptr [ecx + 8], edx
// 0083645c  89410c               mov dword ptr [ecx + 0xc], eax
// 0083645f  8d8c24e4000000       lea ecx, [esp + 0xe4]
// 00836466  51                   push ecx
// 00836467  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 0083646e  57                   push edi
// 0083646f  e8fceb0500           call 0x895070
// 00836474  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 0083647b  8b542474             mov edx, dword ptr [esp + 0x74]
// 0083647f  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00836483  8b1d44bc9e00         mov ebx, dword ptr [0x9ebc44]
// 00836489  89442450             mov dword ptr [esp + 0x50], eax
// 0083648d  8954244c             mov dword ptr [esp + 0x4c], edx
// 00836491  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 00836498  8d44244c             lea eax, [esp + 0x4c]
// 0083649c  50                   push eax
// 0083649d  894c2458             mov dword ptr [esp + 0x58], ecx
// 008364a1  8954245c             mov dword ptr [esp + 0x5c], edx
// 008364a5  ffd3                 call ebx
// 008364a7  85c0                 test eax, eax
// 008364a9  0f85da020000         jne 0x836789
// 008364af  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008364b3  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 008364b7  8b9424c4000000       mov edx, dword ptr [esp + 0xc4]
// 008364be  894c2424             mov dword ptr [esp + 0x24], ecx
// 008364c2  03ca                 add ecx, edx
// 008364c4  8b542458             mov edx, dword ptr [esp + 0x58]
// 008364c8  8d45ff               lea eax, [ebp - 1]
// 008364cb  896c2440             mov dword ptr [esp + 0x40], ebp
// 008364cf  8bac249c000000       mov ebp, dword ptr [esp + 0x9c]
// 008364d6  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008364da  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008364de  03cd                 add ecx, ebp
// 008364e0  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 008364e4  894c2444             mov dword ptr [esp + 0x44], ecx
// 008364e8  898c24ac000000       mov dword ptr [esp + 0xac], ecx
// 008364ef  89442428             mov dword ptr [esp + 0x28], eax
// 008364f3  42                   inc edx
// 008364f4  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 008364fb  8b442454             mov eax, dword ptr [esp + 0x54]
// 008364ff  8d4c2424             lea ecx, [esp + 0x24]
// 00836503  51                   push ecx
// 00836504  89542434             mov dword ptr [esp + 0x34], edx
// 00836508  896c244c             mov dword ptr [esp + 0x4c], ebp
// 0083650c  898424b8000000       mov dword ptr [esp + 0xb8], eax
// 00836513  899424bc000000       mov dword ptr [esp + 0xbc], edx
// 0083651a  ffd3                 call ebx
// 0083651c  85c0                 test eax, eax
// 0083651e  756a                 jne 0x83658a
// 00836520  39742414             cmp dword ptr [esp + 0x14], esi
// 00836524  7464                 je 0x83658a
// 00836526  837c24203e           cmp dword ptr [esp + 0x20], 0x3e
// 0083652b  755d                 jne 0x83658a
// 0083652d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00836531  6a02                 push 2
// 00836533  8d5801               lea ebx, [eax + 1]
// 00836536  53                   push ebx
// 00836537  8d942484000000       lea edx, [esp + 0x84]
// 0083653e  52                   push edx
// 0083653f  33f6                 xor esi, esi
// 00836541  33ed                 xor ebp, ebp
// 00836543  e8e8e50500           call 0x894b30
// 00836548  83ec10               sub esp, 0x10
// 0083654b  8bcc                 mov ecx, esp
// 0083654d  8931                 mov dword ptr [ecx], esi
// 0083654f  895904               mov dword ptr [ecx + 4], ebx
// 00836552  896908               mov dword ptr [ecx + 8], ebp
// 00836555  83ec10               sub esp, 0x10
// 00836558  8bd3                 mov edx, ebx
// 0083655a  89510c               mov dword ptr [ecx + 0xc], edx
// 0083655d  8b10                 mov edx, dword ptr [eax]
// 0083655f  8bcc                 mov ecx, esp
// 00836561  8911                 mov dword ptr [ecx], edx
// 00836563  8b5004               mov edx, dword ptr [eax + 4]
// 00836566  895104               mov dword ptr [ecx + 4], edx
// 00836569  8b5008               mov edx, dword ptr [eax + 8]
// 0083656c  8b400c               mov eax, dword ptr [eax + 0xc]
// 0083656f  895108               mov dword ptr [ecx + 8], edx
// 00836572  89410c               mov dword ptr [ecx + 0xc], eax
// 00836575  8d4c2444             lea ecx, [esp + 0x44]
// 00836579  51                   push ecx
// 0083657a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0083657e  57                   push edi
// 0083657f  e87cde0500           call 0x894400
// 00836584  8b1d44bc9e00         mov ebx, dword ptr [0x9ebc44]
// 0083658a  8d54243c             lea edx, [esp + 0x3c]
// 0083658e  52                   push edx
// 0083658f  ffd3                 call ebx
// 00836591  85c0                 test eax, eax
// 00836593  0f8577010000         jne 0x836710
// 00836599  39442414             cmp dword ptr [esp + 0x14], eax
// 0083659d  7504                 jne 0x8365a3
// 0083659f  33ed                 xor ebp, ebp
// 008365a1  eb2e                 jmp 0x8365d1
// 008365a3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008365a7  83f940               cmp ecx, 0x40
// 008365aa  7505                 jne 0x8365b1
// 008365ac  8d69c3               lea ebp, [ecx - 0x3d]
// 008365af  eb1f                 jmp 0x8365d0
// 008365b1  8b442434             mov eax, dword ptr [esp + 0x34]
// 008365b5  83f840               cmp eax, 0x40
// 008365b8  7505                 jne 0x8365bf
// 008365ba  8d68c2               lea ebp, [eax - 0x3e]
// 008365bd  eb11                 jmp 0x8365d0
// 008365bf  85c0                 test eax, eax
// 008365c1  7f08                 jg 0x8365cb
// 008365c3  85c9                 test ecx, ecx
// 008365c5  7f04                 jg 0x8365cb
// 008365c7  33ed                 xor ebp, ebp
// 008365c9  eb06                 jmp 0x8365d1
// 008365cb  bd01000000           mov ebp, 1
// 008365d0  4d                   dec ebp
// 008365d1  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008365d5  68e868a600           push 0xa668e8
// 008365da  e821bcffff           call 0x832200
// 008365df  8bf0                 mov esi, eax
// 008365e1  85f6                 test esi, esi
// 008365e3  0f84a0010000         je 0x836789
// 008365e9  6a03                 push 3
// 008365eb  55                   push ebp
// 008365ec  8d8424e4000000       lea eax, [esp + 0xe4]
// 008365f3  bb05000000           mov ebx, 5
// 008365f8  50                   push eax
// 008365f9  8bce                 mov ecx, esi
// 008365fb  899c2494000000       mov dword ptr [esp + 0x94], ebx
// 00836602  e829e50500           call 0x894b30
// 00836607  83ec10               sub esp, 0x10
// 0083660a  8bcc                 mov ecx, esp
// 0083660c  8919                 mov dword ptr [ecx], ebx
// 0083660e  8bd3                 mov edx, ebx
// 00836610  895104               mov dword ptr [ecx + 4], edx
// 00836613  895108               mov dword ptr [ecx + 8], edx
// 00836616  89510c               mov dword ptr [ecx + 0xc], edx
// 00836619  8b10                 mov edx, dword ptr [eax]
// 0083661b  83ec10               sub esp, 0x10
// 0083661e  8bcc                 mov ecx, esp
// 00836620  8911                 mov dword ptr [ecx], edx
// 00836622  8b5004               mov edx, dword ptr [eax + 4]
// 00836625  895104               mov dword ptr [ecx + 4], edx
// 00836628  8b5008               mov edx, dword ptr [eax + 8]
// 0083662b  8b400c               mov eax, dword ptr [eax + 0xc]
// 0083662e  895108               mov dword ptr [ecx + 8], edx
// 00836631  89410c               mov dword ptr [ecx + 0xc], eax
// 00836634  8d4c245c             lea ecx, [esp + 0x5c]
// 00836638  51                   push ecx
// 00836639  57                   push edi
// 0083663a  8bce                 mov ecx, esi
// 0083663c  e8bfdd0500           call 0x894400
// 00836641  8b542444             mov edx, dword ptr [esp + 0x44]
// 00836645  2b54243c             sub edx, dword ptr [esp + 0x3c]
// 00836649  83fa0a               cmp edx, 0xa
// 0083664c  0f8ebe000000         jle 0x836710
// 00836652  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00836656  68bc68a600           push 0xa668bc
// 0083665b  e8a0bbffff           call 0x832200
// 00836660  8bd8                 mov ebx, eax
// 00836662  8d8424c4000000       lea eax, [esp + 0xc4]
// 00836669  50                   push eax
// 0083666a  8d4c2440             lea ecx, [esp + 0x40]
// 0083666e  c78424a400000008000000 mov dword ptr [esp + 0xa4], 8
// 00836679  e86262beff           call 0x41c8e0
// 0083667e  8b7004               mov esi, dword ptr [eax + 4]
// 00836681  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 00836688  51                   push ecx
// 00836689  8d4c2440             lea ecx, [esp + 0x40]
// 0083668d  83ee04               sub esi, 4
// 00836690  e84b62beff           call 0x41c8e0
// 00836695  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 0083669c  8b00                 mov eax, dword ptr [eax]
// 0083669e  52                   push edx
// 0083669f  b908000000           mov ecx, 8
// 008366a4  51                   push ecx
// 008366a5  83e803               sub eax, 3
// 008366a8  56                   push esi
// 008366a9  50                   push eax
// 008366aa  8d8c24ec000000       lea ecx, [esp + 0xec]
// 008366b1  e8cacfc1ff           call 0x453680
// 008366b6  6a03                 push 3
// 008366b8  55                   push ebp
// 008366b9  8d8424a4000000       lea eax, [esp + 0xa4]
// 008366c0  33f6                 xor esi, esi
// 008366c2  50                   push eax
// 008366c3  8bcb                 mov ecx, ebx
// 008366c5  89b42494000000       mov dword ptr [esp + 0x94], esi
// 008366cc  e85fe40500           call 0x894b30
// 008366d1  83ec10               sub esp, 0x10
// 008366d4  8bcc                 mov ecx, esp
// 008366d6  8931                 mov dword ptr [ecx], esi
// 008366d8  33d2                 xor edx, edx
// 008366da  895104               mov dword ptr [ecx + 4], edx
// 008366dd  895108               mov dword ptr [ecx + 8], edx
// 008366e0  83ec10               sub esp, 0x10
// 008366e3  8bd6                 mov edx, esi
// 008366e5  89510c               mov dword ptr [ecx + 0xc], edx
// 008366e8  8b10                 mov edx, dword ptr [eax]
// 008366ea  8bcc                 mov ecx, esp
// 008366ec  8911                 mov dword ptr [ecx], edx
// 008366ee  8b5004               mov edx, dword ptr [eax + 4]
// 008366f1  895104               mov dword ptr [ecx + 4], edx
// 008366f4  8b5008               mov edx, dword ptr [eax + 8]
// 008366f7  8b400c               mov eax, dword ptr [eax + 0xc]
// 008366fa  895108               mov dword ptr [ecx + 8], edx
// 008366fd  89410c               mov dword ptr [ecx + 0xc], eax
// 00836700  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 00836707  51                   push ecx
// 00836708  57                   push edi
// 00836709  8bcb                 mov ecx, ebx
// 0083670b  e8f0dc0500           call 0x894400
// 00836710  8d9424ac000000       lea edx, [esp + 0xac]
// 00836717  52                   push edx
// 00836718  ff1544bc9e00         call dword ptr [0x9ebc44]
// 0083671e  85c0                 test eax, eax
// 00836720  7567                 jne 0x836789
// 00836722  39442414             cmp dword ptr [esp + 0x14], eax
// 00836726  7461                 je 0x836789
// 00836728  837c24203f           cmp dword ptr [esp + 0x20], 0x3f
// 0083672d  755a                 jne 0x836789
// 0083672f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00836733  8d5801               lea ebx, [eax + 1]
// 00836736  6a02                 push 2
// 00836738  53                   push ebx
// 00836739  8d842484000000       lea eax, [esp + 0x84]
// 00836740  50                   push eax
// 00836741  33f6                 xor esi, esi
// 00836743  33ed                 xor ebp, ebp
// 00836745  e8e6e30500           call 0x894b30
// 0083674a  83ec10               sub esp, 0x10
// 0083674d  8bcc                 mov ecx, esp
// 0083674f  8931                 mov dword ptr [ecx], esi
// 00836751  895904               mov dword ptr [ecx + 4], ebx
// 00836754  896908               mov dword ptr [ecx + 8], ebp
// 00836757  8bd3                 mov edx, ebx
// 00836759  89510c               mov dword ptr [ecx + 0xc], edx
// 0083675c  8b10                 mov edx, dword ptr [eax]
// 0083675e  83ec10               sub esp, 0x10
// 00836761  8bcc                 mov ecx, esp
// 00836763  8911                 mov dword ptr [ecx], edx
// 00836765  8b5004               mov edx, dword ptr [eax + 4]
// 00836768  895104               mov dword ptr [ecx + 4], edx
// 0083676b  8b5008               mov edx, dword ptr [eax + 8]
// 0083676e  8b400c               mov eax, dword ptr [eax + 0xc]
// 00836771  895108               mov dword ptr [ecx + 8], edx
// 00836774  89410c               mov dword ptr [ecx + 0xc], eax
// 00836777  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 0083677e  51                   push ecx
// 0083677f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00836783  57                   push edi
// 00836784  e877dc0500           call 0x894400
// 00836789  5f                   pop edi
// 0083678a  5e                   pop esi
// 0083678b  5d                   pop ebp
// 0083678c  5b                   pop ebx
// 0083678d  81c4ec000000         add esp, 0xec
// 00836793  c20800               ret 8
// copied from an identical function in another client (function ?DrawScrollBar@CXTPControlGalleryOffice2007Theme@@UAEXPAVCDC@@PAVCXTPScrollBase@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp