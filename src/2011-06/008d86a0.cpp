// roc 2011-06 008d86a0  unit: CXTPTabPaintManager  size: 1724 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d86a0
//
// 008d86a0  83ec28               sub esp, 0x28
// 008d86a3  53                   push ebx
// 008d86a4  55                   push ebp
// 008d86a5  56                   push esi
// 008d86a6  8b742438             mov esi, dword ptr [esp + 0x38]
// 008d86aa  8b06                 mov eax, dword ptr [esi]
// 008d86ac  8b5040               mov edx, dword ptr [eax + 0x40]
// 008d86af  8be9                 mov ebp, ecx
// 008d86b1  57                   push edi
// 008d86b2  8bce                 mov ecx, esi
// 008d86b4  896c2414             mov dword ptr [esp + 0x14], ebp
// 008d86b8  ffd2                 call edx
// 008d86ba  85c0                 test eax, eax
// 008d86bc  7437                 je 0x8d86f5
// 008d86be  8b06                 mov eax, dword ptr [esi]
// 008d86c0  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d86c3  bf02000000           mov edi, 2
// 008d86c8  8bce                 mov ecx, esi
// 008d86ca  8d5fff               lea ebx, [edi - 1]
// 008d86cd  8bef                 mov ebp, edi
// 008d86cf  ffd2                 call edx
// 008d86d1  50                   push eax
// 008d86d2  83ec10               sub esp, 0x10
// 008d86d5  8bc4                 mov eax, esp
// 008d86d7  8938                 mov dword ptr [eax], edi
// 008d86d9  895804               mov dword ptr [eax + 4], ebx
// 008d86dc  896808               mov dword ptr [eax + 8], ebp
// 008d86df  8bcf                 mov ecx, edi
// 008d86e1  89480c               mov dword ptr [eax + 0xc], ecx
// 008d86e4  8d442458             lea eax, [esp + 0x58]
// 008d86e8  50                   push eax
// 008d86e9  e8c2110000           call 0x8d98b0
// 008d86ee  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008d86f2  83c418               add esp, 0x18
// 008d86f5  8b16                 mov edx, dword ptr [esi]
// 008d86f7  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d86fa  8bce                 mov ecx, esi
// 008d86fc  ffd0                 call eax
// 008d86fe  8b4d50               mov ecx, dword ptr [ebp + 0x50]
// 008d8701  8b5554               mov edx, dword ptr [ebp + 0x54]
// 008d8704  50                   push eax
// 008d8705  83ec10               sub esp, 0x10
// 008d8708  8bc4                 mov eax, esp
// 008d870a  8908                 mov dword ptr [eax], ecx
// 008d870c  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 008d870f  895004               mov dword ptr [eax + 4], edx
// 008d8712  8b555c               mov edx, dword ptr [ebp + 0x5c]
// 008d8715  894808               mov dword ptr [eax + 8], ecx
// 008d8718  89500c               mov dword ptr [eax + 0xc], edx
// 008d871b  8d442458             lea eax, [esp + 0x58]
// 008d871f  50                   push eax
// 008d8720  e88b110000           call 0x8d98b0
// 008d8725  83c418               add esp, 0x18
// 008d8728  8bce                 mov ecx, esi
// 008d872a  e821adffff           call 0x8d3450
// 008d872f  83f804               cmp eax, 4
// 008d8732  7537                 jne 0x8d876b
// 008d8734  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d8738  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d873c  83ec10               sub esp, 0x10
// 008d873f  8bc4                 mov eax, esp
// 008d8741  8908                 mov dword ptr [eax], ecx
// 008d8743  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008d8747  895004               mov dword ptr [eax + 4], edx
// 008d874a  8b542460             mov edx, dword ptr [esp + 0x60]
// 008d874e  894808               mov dword ptr [eax + 8], ecx
// 008d8751  89500c               mov dword ptr [eax + 0xc], edx
// 008d8754  8b442450             mov eax, dword ptr [esp + 0x50]
// 008d8758  50                   push eax
// 008d8759  56                   push esi
// 008d875a  8bcd                 mov ecx, ebp
// 008d875c  e8fff5ffff           call 0x8d7d60
// 008d8761  5f                   pop edi
// 008d8762  5e                   pop esi
// 008d8763  5d                   pop ebp
// 008d8764  5b                   pop ebx
// 008d8765  83c428               add esp, 0x28
// 008d8768  c21800               ret 0x18
// 008d876b  33db                 xor ebx, ebx
// 008d876d  395e5c               cmp dword ptr [esi + 0x5c], ebx
// 008d8770  7e55                 jle 0x8d87c7
// 008d8772  85db                 test ebx, ebx
// 008d8774  7c0d                 jl 0x8d8783
// 008d8776  3b5e5c               cmp ebx, dword ptr [esi + 0x5c]
// 008d8779  7d08                 jge 0x8d8783
// 008d877b  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008d877e  8b3c99               mov edi, dword ptr [ecx + ebx*4]
// 008d8781  eb02                 jmp 0x8d8785
// 008d8783  33ff                 xor edi, edi
// 008d8785  8bcf                 mov ecx, edi
// 008d8787  e89491b7ff           call 0x451920
// 008d878c  85c0                 test eax, eax
// 008d878e  7415                 je 0x8d87a5
// 008d8790  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 008d8796  8b11                 mov edx, dword ptr [ecx]
// 008d8798  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d879c  8b5218               mov edx, dword ptr [edx + 0x18]
// 008d879f  57                   push edi
// 008d87a0  50                   push eax
// 008d87a1  ffd2                 call edx
// 008d87a3  eb02                 jmp 0x8d87a7
// 008d87a5  33c0                 xor eax, eax
// 008d87a7  8bcf                 mov ecx, edi
// 008d87a9  894724               mov dword ptr [edi + 0x24], eax
// 008d87ac  894720               mov dword ptr [edi + 0x20], eax
// 008d87af  e86c91b7ff           call 0x451920
// 008d87b4  85c0                 test eax, eax
// 008d87b6  7409                 je 0x8d87c1
// 008d87b8  8b85b4000000         mov eax, dword ptr [ebp + 0xb4]
// 008d87be  014720               add dword ptr [edi + 0x20], eax
// 008d87c1  43                   inc ebx
// 008d87c2  3b5e5c               cmp ebx, dword ptr [esi + 0x5c]
// 008d87c5  7cab                 jl 0x8d8772
// 008d87c7  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008d87cb  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 008d87d1  8b11                 mov edx, dword ptr [ecx]
// 008d87d3  8b5208               mov edx, dword ptr [edx + 8]
// 008d87d6  56                   push esi
// 008d87d7  83ec10               sub esp, 0x10
// 008d87da  8bc4                 mov eax, esp
// 008d87dc  8938                 mov dword ptr [eax], edi
// 008d87de  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 008d87e2  897804               mov dword ptr [eax + 4], edi
// 008d87e5  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 008d87e9  897808               mov dword ptr [eax + 8], edi
// 008d87ec  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 008d87f0  89780c               mov dword ptr [eax + 0xc], edi
// 008d87f3  8d44243c             lea eax, [esp + 0x3c]
// 008d87f7  50                   push eax
// 008d87f8  ffd2                 call edx
// 008d87fa  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008d87fe  8b08                 mov ecx, dword ptr [eax]
// 008d8800  894e24               mov dword ptr [esi + 0x24], ecx
// 008d8803  8b5004               mov edx, dword ptr [eax + 4]
// 008d8806  895628               mov dword ptr [esi + 0x28], edx
// 008d8809  8b4808               mov ecx, dword ptr [eax + 8]
// 008d880c  894e2c               mov dword ptr [esi + 0x2c], ecx
// 008d880f  8b500c               mov edx, dword ptr [eax + 0xc]
// 008d8812  895630               mov dword ptr [esi + 0x30], edx
// 008d8815  7537                 jne 0x8d884e
// 008d8817  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d881b  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d881f  83ec10               sub esp, 0x10
// 008d8822  8bc4                 mov eax, esp
// 008d8824  8908                 mov dword ptr [eax], ecx
// 008d8826  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008d882a  895004               mov dword ptr [eax + 4], edx
// 008d882d  8b542460             mov edx, dword ptr [esp + 0x60]
// 008d8831  894808               mov dword ptr [eax + 8], ecx
// 008d8834  89500c               mov dword ptr [eax + 0xc], edx
// 008d8837  56                   push esi
// 008d8838  8d44243c             lea eax, [esp + 0x3c]
// 008d883c  50                   push eax
// 008d883d  8bcd                 mov ecx, ebp
// 008d883f  e89cf1ffff           call 0x8d79e0
// 008d8844  5f                   pop edi
// 008d8845  5e                   pop esi
// 008d8846  5d                   pop ebp
// 008d8847  5b                   pop ebx
// 008d8848  83c428               add esp, 0x28
// 008d884b  c21800               ret 0x18
// 008d884e  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 008d8854  8b11                 mov edx, dword ptr [ecx]
// 008d8856  8b5210               mov edx, dword ptr [edx + 0x10]
// 008d8859  8d442418             lea eax, [esp + 0x18]
// 008d885d  50                   push eax
// 008d885e  ffd2                 call edx
// 008d8860  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 008d8866  8b01                 mov eax, dword ptr [ecx]
// 008d8868  8b501c               mov edx, dword ptr [eax + 0x1c]
// 008d886b  56                   push esi
// 008d886c  ffd2                 call edx
// 008d886e  8bd8                 mov ebx, eax
// 008d8870  8b06                 mov eax, dword ptr [esi]
// 008d8872  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d8875  8bce                 mov ecx, esi
// 008d8877  895c2414             mov dword ptr [esp + 0x14], ebx
// 008d887b  ffd2                 call edx
// 008d887d  83f802               cmp eax, 2
// 008d8880  7411                 je 0x8d8893
// 008d8882  8b06                 mov eax, dword ptr [esi]
// 008d8884  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d8887  8bce                 mov ecx, esi
// 008d8889  ffd2                 call edx
// 008d888b  85c0                 test eax, eax
// 008d888d  0f8568020000         jne 0x8d8afb
// 008d8893  8b442448             mov eax, dword ptr [esp + 0x48]
// 008d8897  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d889b  8b16                 mov edx, dword ptr [esi]
// 008d889d  8d3c01               lea edi, [ecx + eax]
// 008d88a0  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d88a3  8bce                 mov ecx, esi
// 008d88a5  897c243c             mov dword ptr [esp + 0x3c], edi
// 008d88a9  ffd0                 call eax
// 008d88ab  83f802               cmp eax, 2
// 008d88ae  750e                 jne 0x8d88be
// 008d88b0  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 008d88b4  2b7c241c             sub edi, dword ptr [esp + 0x1c]
// 008d88b8  2bfb                 sub edi, ebx
// 008d88ba  897c243c             mov dword ptr [esp + 0x3c], edi
// 008d88be  03fb                 add edi, ebx
// 008d88c0  8bce                 mov ecx, esi
// 008d88c2  897c2410             mov dword ptr [esp + 0x10], edi
// 008d88c6  e885abffff           call 0x8d3450
// 008d88cb  83f801               cmp eax, 1
// 008d88ce  7551                 jne 0x8d8921
// 008d88d0  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008d88d4  2b442444             sub eax, dword ptr [esp + 0x44]
// 008d88d8  8b7e70               mov edi, dword ptr [esi + 0x70]
// 008d88db  2b442418             sub eax, dword ptr [esp + 0x18]
// 008d88df  2b442420             sub eax, dword ptr [esp + 0x20]
// 008d88e3  83ef01               sub edi, 1
// 008d88e6  89442440             mov dword ptr [esp + 0x40], eax
// 008d88ea  782c                 js 0x8d8918
// 008d88ec  8d642400             lea esp, [esp]
// 008d88f0  85ff                 test edi, edi
// 008d88f2  7c0d                 jl 0x8d8901
// 008d88f4  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 008d88f7  7d08                 jge 0x8d8901
// 008d88f9  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008d88fc  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 008d88ff  eb02                 jmp 0x8d8903
// 008d8901  33c9                 xor ecx, ecx
// 008d8903  8b11                 mov edx, dword ptr [ecx]
// 008d8905  8b5204               mov edx, dword ptr [edx + 4]
// 008d8908  8d442440             lea eax, [esp + 0x40]
// 008d890c  50                   push eax
// 008d890d  ffd2                 call edx
// 008d890f  83ef01               sub edi, 1
// 008d8912  79dc                 jns 0x8d88f0
// 008d8914  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d8918  50                   push eax
// 008d8919  56                   push esi
// 008d891a  8bcd                 mov ecx, ebp
// 008d891c  e8aff9ffff           call 0x8d82d0
// 008d8921  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d8925  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d8929  83ec10               sub esp, 0x10
// 008d892c  8bc4                 mov eax, esp
// 008d892e  8908                 mov dword ptr [eax], ecx
// 008d8930  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008d8934  895004               mov dword ptr [eax + 4], edx
// 008d8937  8b542460             mov edx, dword ptr [esp + 0x60]
// 008d893b  894808               mov dword ptr [eax + 8], ecx
// 008d893e  89500c               mov dword ptr [eax + 0xc], edx
// 008d8941  56                   push esi
// 008d8942  8d44243c             lea eax, [esp + 0x3c]
// 008d8946  50                   push eax
// 008d8947  8bcd                 mov ecx, ebp
// 008d8949  e892f0ffff           call 0x8d79e0
// 008d894e  837e1400             cmp dword ptr [esi + 0x14], 0
// 008d8952  8b08                 mov ecx, dword ptr [eax]
// 008d8954  894e24               mov dword ptr [esi + 0x24], ecx
// 008d8957  8b5004               mov edx, dword ptr [eax + 4]
// 008d895a  895628               mov dword ptr [esi + 0x28], edx
// 008d895d  8b4808               mov ecx, dword ptr [eax + 8]
// 008d8960  894e2c               mov dword ptr [esi + 0x2c], ecx
// 008d8963  8b500c               mov edx, dword ptr [eax + 0xc]
// 008d8966  895630               mov dword ptr [esi + 0x30], edx
// 008d8969  7d71                 jge 0x8d89dc
// 008d896b  8bce                 mov ecx, esi
// 008d896d  e86ebbffff           call 0x8d44e0
// 008d8972  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 008d8975  2b4e24               sub ecx, dword ptr [esi + 0x24]
// 008d8978  8b5614               mov edx, dword ptr [esi + 0x14]
// 008d897b  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 008d897f  03d0                 add edx, eax
// 008d8981  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 008d8985  3bd1                 cmp edx, ecx
// 008d8987  7d53                 jge 0x8d89dc
// 008d8989  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d898d  2bc8                 sub ecx, eax
// 008d898f  33c0                 xor eax, eax
// 008d8991  85c9                 test ecx, ecx
// 008d8993  0f9fc0               setg al
// 008d8996  83ec10               sub esp, 0x10
// 008d8999  48                   dec eax
// 008d899a  23c1                 and eax, ecx
// 008d899c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008d89a0  894614               mov dword ptr [esi + 0x14], eax
// 008d89a3  8bc4                 mov eax, esp
// 008d89a5  8908                 mov dword ptr [eax], ecx
// 008d89a7  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008d89ab  895004               mov dword ptr [eax + 4], edx
// 008d89ae  8b542460             mov edx, dword ptr [esp + 0x60]
// 008d89b2  894808               mov dword ptr [eax + 8], ecx
// 008d89b5  89500c               mov dword ptr [eax + 0xc], edx
// 008d89b8  56                   push esi
// 008d89b9  8d44243c             lea eax, [esp + 0x3c]
// 008d89bd  50                   push eax
// 008d89be  8bcd                 mov ecx, ebp
// 008d89c0  e81bf0ffff           call 0x8d79e0
// 008d89c5  8b08                 mov ecx, dword ptr [eax]
// 008d89c7  894e24               mov dword ptr [esi + 0x24], ecx
// 008d89ca  8b5004               mov edx, dword ptr [eax + 4]
// 008d89cd  895628               mov dword ptr [esi + 0x28], edx
// 008d89d0  8b4808               mov ecx, dword ptr [eax + 8]
// 008d89d3  894e2c               mov dword ptr [esi + 0x2c], ecx
// 008d89d6  8b500c               mov edx, dword ptr [eax + 0xc]
// 008d89d9  895630               mov dword ptr [esi + 0x30], edx
// 008d89dc  8b7e24               mov edi, dword ptr [esi + 0x24]
// 008d89df  037e14               add edi, dword ptr [esi + 0x14]
// 008d89e2  8bce                 mov ecx, esi
// 008d89e4  037c2418             add edi, dword ptr [esp + 0x18]
// 008d89e8  e863aaffff           call 0x8d3450
// 008d89ed  83f805               cmp eax, 5
// 008d89f0  0f85b0000000         jne 0x8d8aa6
// 008d89f6  8b06                 mov eax, dword ptr [esi]
// 008d89f8  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d89fb  8bce                 mov ecx, esi
// 008d89fd  ffd2                 call edx
// 008d89ff  85c0                 test eax, eax
// 008d8a01  750d                 jne 0x8d8a10
// 008d8a03  8b4630               mov eax, dword ptr [esi + 0x30]
// 008d8a06  2b442424             sub eax, dword ptr [esp + 0x24]
// 008d8a0a  89442410             mov dword ptr [esp + 0x10], eax
// 008d8a0e  eb0b                 jmp 0x8d8a1b
// 008d8a10  8b4628               mov eax, dword ptr [esi + 0x28]
// 008d8a13  03442424             add eax, dword ptr [esp + 0x24]
// 008d8a17  8944243c             mov dword ptr [esp + 0x3c], eax
// 008d8a1b  33ed                 xor ebp, ebp
// 008d8a1d  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 008d8a20  0f8e2c030000         jle 0x8d8d52
// 008d8a26  8d041f               lea eax, [edi + ebx]
// 008d8a29  89442440             mov dword ptr [esp + 0x40], eax
// 008d8a2d  8d4900               lea ecx, [ecx]
// 008d8a30  85ed                 test ebp, ebp
// 008d8a32  7c0d                 jl 0x8d8a41
// 008d8a34  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 008d8a37  7d08                 jge 0x8d8a41
// 008d8a39  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008d8a3c  8b1ca9               mov ebx, dword ptr [ecx + ebp*4]
// 008d8a3f  eb02                 jmp 0x8d8a43
// 008d8a41  33db                 xor ebx, ebx
// 008d8a43  8b16                 mov edx, dword ptr [esi]
// 008d8a45  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d8a48  8bce                 mov ecx, esi
// 008d8a4a  ffd0                 call eax
// 008d8a4c  83ec10               sub esp, 0x10
// 008d8a4f  85c0                 test eax, eax
// 008d8a51  8bc4                 mov eax, esp
// 008d8a53  8938                 mov dword ptr [eax], edi
// 008d8a55  7518                 jne 0x8d8a6f
// 008d8a57  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d8a5b  8bca                 mov ecx, edx
// 008d8a5d  2b4b20               sub ecx, dword ptr [ebx + 0x20]
// 008d8a60  894804               mov dword ptr [eax + 4], ecx
// 008d8a63  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008d8a67  894808               mov dword ptr [eax + 8], ecx
// 008d8a6a  89500c               mov dword ptr [eax + 0xc], edx
// 008d8a6d  eb16                 jmp 0x8d8a85
// 008d8a6f  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008d8a73  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008d8a76  895004               mov dword ptr [eax + 4], edx
// 008d8a79  03ca                 add ecx, edx
// 008d8a7b  8b542450             mov edx, dword ptr [esp + 0x50]
// 008d8a7f  895008               mov dword ptr [eax + 8], edx
// 008d8a82  89480c               mov dword ptr [eax + 0xc], ecx
// 008d8a85  8bcb                 mov ecx, ebx
// 008d8a87  e864aeffff           call 0x8d38f0
// 008d8a8c  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d8a90  01442440             add dword ptr [esp + 0x40], eax
// 008d8a94  45                   inc ebp
// 008d8a95  03f8                 add edi, eax
// 008d8a97  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 008d8a9a  7c94                 jl 0x8d8a30
// 008d8a9c  5f                   pop edi
// 008d8a9d  5e                   pop esi
// 008d8a9e  5d                   pop ebp
// 008d8a9f  5b                   pop ebx
// 008d8aa0  83c428               add esp, 0x28
// 008d8aa3  c21800               ret 0x18
// 008d8aa6  33ed                 xor ebp, ebp
// 008d8aa8  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 008d8aab  0f8ea1020000         jle 0x8d8d52
// 008d8ab1  85ed                 test ebp, ebp
// 008d8ab3  7c0d                 jl 0x8d8ac2
// 008d8ab5  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 008d8ab8  7d08                 jge 0x8d8ac2
// 008d8aba  8b4658               mov eax, dword ptr [esi + 0x58]
// 008d8abd  8b1ca8               mov ebx, dword ptr [eax + ebp*4]
// 008d8ac0  eb02                 jmp 0x8d8ac4
// 008d8ac2  33db                 xor ebx, ebx
// 008d8ac4  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008d8ac7  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008d8acb  83ec10               sub esp, 0x10
// 008d8ace  8bc4                 mov eax, esp
// 008d8ad0  03cf                 add ecx, edi
// 008d8ad2  8938                 mov dword ptr [eax], edi
// 008d8ad4  895004               mov dword ptr [eax + 4], edx
// 008d8ad7  894808               mov dword ptr [eax + 8], ecx
// 008d8ada  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d8ade  89480c               mov dword ptr [eax + 0xc], ecx
// 008d8ae1  8bcb                 mov ecx, ebx
// 008d8ae3  e808aeffff           call 0x8d38f0
// 008d8ae8  037b20               add edi, dword ptr [ebx + 0x20]
// 008d8aeb  45                   inc ebp
// 008d8aec  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 008d8aef  7cc0                 jl 0x8d8ab1
// 008d8af1  5f                   pop edi
// 008d8af2  5e                   pop esi
// 008d8af3  5d                   pop ebp
// 008d8af4  5b                   pop ebx
// 008d8af5  83c428               add esp, 0x28
// 008d8af8  c21800               ret 0x18
// 008d8afb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d8aff  8b442444             mov eax, dword ptr [esp + 0x44]
// 008d8b03  8d3c10               lea edi, [eax + edx]
// 008d8b06  8b16                 mov edx, dword ptr [esi]
// 008d8b08  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d8b0b  8bce                 mov ecx, esi
// 008d8b0d  897c243c             mov dword ptr [esp + 0x3c], edi
// 008d8b11  ffd0                 call eax
// 008d8b13  83f803               cmp eax, 3
// 008d8b16  750e                 jne 0x8d8b26
// 008d8b18  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 008d8b1c  2b7c241c             sub edi, dword ptr [esp + 0x1c]
// 008d8b20  2bfb                 sub edi, ebx
// 008d8b22  897c243c             mov dword ptr [esp + 0x3c], edi
// 008d8b26  03fb                 add edi, ebx
// 008d8b28  8bce                 mov ecx, esi
// 008d8b2a  897c2410             mov dword ptr [esp + 0x10], edi
// 008d8b2e  e81da9ffff           call 0x8d3450
// 008d8b33  83f801               cmp eax, 1
// 008d8b36  754d                 jne 0x8d8b85
// 008d8b38  8b442450             mov eax, dword ptr [esp + 0x50]
// 008d8b3c  2b442418             sub eax, dword ptr [esp + 0x18]
// 008d8b40  8b7e70               mov edi, dword ptr [esi + 0x70]
// 008d8b43  2b442420             sub eax, dword ptr [esp + 0x20]
// 008d8b47  2b442448             sub eax, dword ptr [esp + 0x48]
// 008d8b4b  83ef01               sub edi, 1
// 008d8b4e  89442440             mov dword ptr [esp + 0x40], eax
// 008d8b52  7828                 js 0x8d8b7c
// 008d8b54  85ff                 test edi, edi
// 008d8b56  7c0d                 jl 0x8d8b65
// 008d8b58  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 008d8b5b  7d08                 jge 0x8d8b65
// 008d8b5d  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008d8b60  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 008d8b63  eb02                 jmp 0x8d8b67
// 008d8b65  33c9                 xor ecx, ecx
// 008d8b67  8b11                 mov edx, dword ptr [ecx]
// 008d8b69  8b5204               mov edx, dword ptr [edx + 4]
// 008d8b6c  8d442440             lea eax, [esp + 0x40]
// 008d8b70  50                   push eax
// 008d8b71  ffd2                 call edx
// 008d8b73  83ef01               sub edi, 1
// 008d8b76  79dc                 jns 0x8d8b54
// 008d8b78  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d8b7c  50                   push eax
// 008d8b7d  56                   push esi
// 008d8b7e  8bcd                 mov ecx, ebp
// 008d8b80  e84bf7ffff           call 0x8d82d0
// 008d8b85  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d8b89  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d8b8d  83ec10               sub esp, 0x10
// 008d8b90  8bc4                 mov eax, esp
// 008d8b92  8908                 mov dword ptr [eax], ecx
// 008d8b94  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008d8b98  895004               mov dword ptr [eax + 4], edx
// 008d8b9b  8b542460             mov edx, dword ptr [esp + 0x60]
// 008d8b9f  894808               mov dword ptr [eax + 8], ecx
// 008d8ba2  89500c               mov dword ptr [eax + 0xc], edx
// 008d8ba5  56                   push esi
// 008d8ba6  8d44243c             lea eax, [esp + 0x3c]
// 008d8baa  50                   push eax
// 008d8bab  8bcd                 mov ecx, ebp
// 008d8bad  e82eeeffff           call 0x8d79e0
// 008d8bb2  837e1400             cmp dword ptr [esi + 0x14], 0
// 008d8bb6  8b08                 mov ecx, dword ptr [eax]
// 008d8bb8  894e24               mov dword ptr [esi + 0x24], ecx
// 008d8bbb  8b5004               mov edx, dword ptr [eax + 4]
// 008d8bbe  895628               mov dword ptr [esi + 0x28], edx
// 008d8bc1  8b4808               mov ecx, dword ptr [eax + 8]
// 008d8bc4  894e2c               mov dword ptr [esi + 0x2c], ecx
// 008d8bc7  8b500c               mov edx, dword ptr [eax + 0xc]
// 008d8bca  895630               mov dword ptr [esi + 0x30], edx
// 008d8bcd  7d71                 jge 0x8d8c40
// 008d8bcf  8bce                 mov ecx, esi
// 008d8bd1  e80ab9ffff           call 0x8d44e0
// 008d8bd6  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 008d8bd9  2b4e28               sub ecx, dword ptr [esi + 0x28]
// 008d8bdc  8b5614               mov edx, dword ptr [esi + 0x14]
// 008d8bdf  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 008d8be3  03d0                 add edx, eax
// 008d8be5  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 008d8be9  3bd1                 cmp edx, ecx
// 008d8beb  7d53                 jge 0x8d8c40
// 008d8bed  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d8bf1  2bc8                 sub ecx, eax
// 008d8bf3  33c0                 xor eax, eax
// 008d8bf5  85c9                 test ecx, ecx
// 008d8bf7  0f9fc0               setg al
// 008d8bfa  83ec10               sub esp, 0x10
// 008d8bfd  48                   dec eax
// 008d8bfe  23c1                 and eax, ecx
// 008d8c00  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008d8c04  894614               mov dword ptr [esi + 0x14], eax
// 008d8c07  8bc4                 mov eax, esp
// 008d8c09  8908                 mov dword ptr [eax], ecx
// 008d8c0b  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008d8c0f  895004               mov dword ptr [eax + 4], edx
// 008d8c12  8b542460             mov edx, dword ptr [esp + 0x60]
// 008d8c16  894808               mov dword ptr [eax + 8], ecx
// 008d8c19  89500c               mov dword ptr [eax + 0xc], edx
// 008d8c1c  56                   push esi
// 008d8c1d  8d44243c             lea eax, [esp + 0x3c]
// 008d8c21  50                   push eax
// 008d8c22  8bcd                 mov ecx, ebp
// 008d8c24  e8b7edffff           call 0x8d79e0
// 008d8c29  8b08                 mov ecx, dword ptr [eax]
// 008d8c2b  894e24               mov dword ptr [esi + 0x24], ecx
// 008d8c2e  8b5004               mov edx, dword ptr [eax + 4]
// 008d8c31  895628               mov dword ptr [esi + 0x28], edx
// 008d8c34  8b4808               mov ecx, dword ptr [eax + 8]
// 008d8c37  894e2c               mov dword ptr [esi + 0x2c], ecx
// 008d8c3a  8b500c               mov edx, dword ptr [eax + 0xc]
// 008d8c3d  895630               mov dword ptr [esi + 0x30], edx
// 008d8c40  8b7e28               mov edi, dword ptr [esi + 0x28]
// 008d8c43  037e14               add edi, dword ptr [esi + 0x14]
// 008d8c46  8bce                 mov ecx, esi
// 008d8c48  037c2418             add edi, dword ptr [esp + 0x18]
// 008d8c4c  e8ffa7ffff           call 0x8d3450
// 008d8c51  83f805               cmp eax, 5
// 008d8c54  0f85b1000000         jne 0x8d8d0b
// 008d8c5a  8b06                 mov eax, dword ptr [esi]
// 008d8c5c  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d8c5f  8bce                 mov ecx, esi
// 008d8c61  ffd2                 call edx
// 008d8c63  83f801               cmp eax, 1
// 008d8c66  750d                 jne 0x8d8c75
// 008d8c68  8b462c               mov eax, dword ptr [esi + 0x2c]
// 008d8c6b  2b442424             sub eax, dword ptr [esp + 0x24]
// 008d8c6f  89442410             mov dword ptr [esp + 0x10], eax
// 008d8c73  eb0b                 jmp 0x8d8c80
// 008d8c75  8b4624               mov eax, dword ptr [esi + 0x24]
// 008d8c78  03442424             add eax, dword ptr [esp + 0x24]
// 008d8c7c  8944243c             mov dword ptr [esp + 0x3c], eax
// 008d8c80  33ed                 xor ebp, ebp
// 008d8c82  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 008d8c85  0f8ec7000000         jle 0x8d8d52
// 008d8c8b  8d041f               lea eax, [edi + ebx]
// 008d8c8e  89442440             mov dword ptr [esp + 0x40], eax
// 008d8c92  85ed                 test ebp, ebp
// 008d8c94  7c0d                 jl 0x8d8ca3
// 008d8c96  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 008d8c99  7d08                 jge 0x8d8ca3
// 008d8c9b  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008d8c9e  8b1ca9               mov ebx, dword ptr [ecx + ebp*4]
// 008d8ca1  eb02                 jmp 0x8d8ca5
// 008d8ca3  33db                 xor ebx, ebx
// 008d8ca5  8b16                 mov edx, dword ptr [esi]
// 008d8ca7  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d8caa  8bce                 mov ecx, esi
// 008d8cac  ffd0                 call eax
// 008d8cae  83ec10               sub esp, 0x10
// 008d8cb1  83f801               cmp eax, 1
// 008d8cb4  8bc4                 mov eax, esp
// 008d8cb6  751a                 jne 0x8d8cd2
// 008d8cb8  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d8cbc  8bca                 mov ecx, edx
// 008d8cbe  2b4b20               sub ecx, dword ptr [ebx + 0x20]
// 008d8cc1  8908                 mov dword ptr [eax], ecx
// 008d8cc3  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008d8cc7  897804               mov dword ptr [eax + 4], edi
// 008d8cca  895008               mov dword ptr [eax + 8], edx
// 008d8ccd  89480c               mov dword ptr [eax + 0xc], ecx
// 008d8cd0  eb18                 jmp 0x8d8cea
// 008d8cd2  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008d8cd6  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008d8cd9  8910                 mov dword ptr [eax], edx
// 008d8cdb  03ca                 add ecx, edx
// 008d8cdd  8b542450             mov edx, dword ptr [esp + 0x50]
// 008d8ce1  897804               mov dword ptr [eax + 4], edi
// 008d8ce4  894808               mov dword ptr [eax + 8], ecx
// 008d8ce7  89500c               mov dword ptr [eax + 0xc], edx
// 008d8cea  8bcb                 mov ecx, ebx
// 008d8cec  e8ffabffff           call 0x8d38f0
// 008d8cf1  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d8cf5  01442440             add dword ptr [esp + 0x40], eax
// 008d8cf9  45                   inc ebp
// 008d8cfa  03f8                 add edi, eax
// 008d8cfc  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 008d8cff  7c91                 jl 0x8d8c92
// 008d8d01  5f                   pop edi
// 008d8d02  5e                   pop esi
// 008d8d03  5d                   pop ebp
// 008d8d04  5b                   pop ebx
// 008d8d05  83c428               add esp, 0x28
// 008d8d08  c21800               ret 0x18
// 008d8d0b  33ed                 xor ebp, ebp
// 008d8d0d  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 008d8d10  7e40                 jle 0x8d8d52
// 008d8d12  85ed                 test ebp, ebp
// 008d8d14  7c0d                 jl 0x8d8d23
// 008d8d16  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 008d8d19  7d08                 jge 0x8d8d23
// 008d8d1b  8b4658               mov eax, dword ptr [esi + 0x58]
// 008d8d1e  8b1ca8               mov ebx, dword ptr [eax + ebp*4]
// 008d8d21  eb02                 jmp 0x8d8d25
// 008d8d23  33db                 xor ebx, ebx
// 008d8d25  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008d8d29  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008d8d2c  83ec10               sub esp, 0x10
// 008d8d2f  8bc4                 mov eax, esp
// 008d8d31  8910                 mov dword ptr [eax], edx
// 008d8d33  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d8d37  03cf                 add ecx, edi
// 008d8d39  897804               mov dword ptr [eax + 4], edi
// 008d8d3c  895008               mov dword ptr [eax + 8], edx
// 008d8d3f  89480c               mov dword ptr [eax + 0xc], ecx
// 008d8d42  8bcb                 mov ecx, ebx
// 008d8d44  e8a7abffff           call 0x8d38f0
// 008d8d49  037b20               add edi, dword ptr [ebx + 0x20]
// 008d8d4c  45                   inc ebp
// 008d8d4d  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 008d8d50  7cc0                 jl 0x8d8d12
// 008d8d52  5f                   pop edi
// 008d8d53  5e                   pop esi
// 008d8d54  5d                   pop ebp
// 008d8d55  5b                   pop ebx
// 008d8d56  83c428               add esp, 0x28
// 008d8d59  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?RepositionTabControlEx@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
