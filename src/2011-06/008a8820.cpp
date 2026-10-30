// roc 2011-06 008a8820  unit: CXTPRibbonBar  size: 1372 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a8820
//
// 008a8820  6aff                 push -1
// 008a8822  68d5a9a000           push 0xa0a9d5
// 008a8827  64a100000000         mov eax, dword ptr fs:[0]
// 008a882d  50                   push eax
// 008a882e  83ec2c               sub esp, 0x2c
// 008a8831  53                   push ebx
// 008a8832  55                   push ebp
// 008a8833  56                   push esi
// 008a8834  57                   push edi
// 008a8835  a12058c900           mov eax, dword ptr [0xc95820]
// 008a883a  33c4                 xor eax, esp
// 008a883c  50                   push eax
// 008a883d  8d442440             lea eax, [esp + 0x40]
// 008a8841  64a300000000         mov dword ptr fs:[0], eax
// 008a8847  8be9                 mov ebp, ecx
// 008a8849  83bd4c02000000       cmp dword ptr [ebp + 0x24c], 0
// 008a8850  752f                 jne 0x8a8881
// 008a8852  e83922f7ff           call 0x81aa90
// 008a8857  8b10                 mov edx, dword ptr [eax]
// 008a8859  8bc8                 mov ecx, eax
// 008a885b  8b426c               mov eax, dword ptr [edx + 0x6c]
// 008a885e  ffd0                 call eax
// 008a8860  8bcd                 mov ecx, ebp
// 008a8862  8bf0                 mov esi, eax
// 008a8864  e8074ef7ff           call 0x81d670
// 008a8869  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008a886c  56                   push esi
// 008a886d  55                   push ebp
// 008a886e  685c280000           push 0x285c
// 008a8873  51                   push ecx
// 008a8874  ff15c019a400         call dword ptr [0xa419c0]
// 008a887a  8bc6                 mov eax, esi
// 008a887c  e9ba040000           jmp 0x8a8d3b
// 008a8881  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 008a8885  85db                 test ebx, ebx
// 008a8887  0f84a2000000         je 0x8a892f
// 008a888d  83bbfc0000000a       cmp dword ptr [ebx + 0xfc], 0xa
// 008a8894  753b                 jne 0x8a88d1
// 008a8896  8b13                 mov edx, dword ptr [ebx]
// 008a8898  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 008a889e  8bcb                 mov ecx, ebx
// 008a88a0  ffd0                 call eax
// 008a88a2  85c0                 test eax, eax
// 008a88a4  752b                 jne 0x8a88d1
// 008a88a6  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 008a88ac  50                   push eax
// 008a88ad  e81eaafaff           call 0x8532d0
// 008a88b2  50                   push eax
// 008a88b3  e8841bf6ff           call 0x80a43c
// 008a88b8  83c408               add esp, 8
// 008a88bb  85c0                 test eax, eax
// 008a88bd  7412                 je 0x8a88d1
// 008a88bf  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 008a88c5  8b8880010000         mov ecx, dword ptr [eax + 0x180]
// 008a88cb  894c2450             mov dword ptr [esp + 0x50], ecx
// 008a88cf  8bd9                 mov ebx, ecx
// 008a88d1  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 008a88d7  33d2                 xor edx, edx
// 008a88d9  3d83250000           cmp eax, 0x2583
// 008a88de  0f94c2               sete dl
// 008a88e1  bfb04da600           mov edi, 0xa64db0
// 008a88e6  33c0                 xor eax, eax
// 008a88e8  897c2438             mov dword ptr [esp + 0x38], edi
// 008a88ec  8944243c             mov dword ptr [esp + 0x3c], eax
// 008a88f0  8bf2                 mov esi, edx
// 008a88f2  89442448             mov dword ptr [esp + 0x48], eax
// 008a88f6  e84576fdff           call 0x87ff40
// 008a88fb  8b10                 mov edx, dword ptr [eax]
// 008a88fd  8b520c               mov edx, dword ptr [edx + 0xc]
// 008a8900  8bce                 mov ecx, esi
// 008a8902  f7d9                 neg ecx
// 008a8904  1bc9                 sbb ecx, ecx
// 008a8906  81c182250000         add ecx, 0x2582
// 008a890c  51                   push ecx
// 008a890d  8d4c243c             lea ecx, [esp + 0x3c]
// 008a8911  51                   push ecx
// 008a8912  8bc8                 mov ecx, eax
// 008a8914  ffd2                 call edx
// 008a8916  85c0                 test eax, eax
// 008a8918  751c                 jne 0x8a8936
// 008a891a  8d4c2438             lea ecx, [esp + 0x38]
// 008a891e  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 008a8926  897c2438             mov dword ptr [esp + 0x38], edi
// 008a892a  e8a120f6ff           call 0x80a9d0
// 008a892f  33c0                 xor eax, eax
// 008a8931  e905040000           jmp 0x8a8d3b
// 008a8936  8bcd                 mov ecx, ebp
// 008a8938  e85321f7ff           call 0x81aa90
// 008a893d  50                   push eax
// 008a893e  e89da9faff           call 0x8532e0
// 008a8943  8bf8                 mov edi, eax
// 008a8945  8b4520               mov eax, dword ptr [ebp + 0x20]
// 008a8948  83c404               add esp, 4
// 008a894b  894738               mov dword ptr [edi + 0x38], eax
// 008a894e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008a8952  6a00                 push 0
// 008a8954  51                   push ecx
// 008a8955  897c2430             mov dword ptr [esp + 0x30], edi
// 008a8959  ff15841ca400         call dword ptr [0xa41c84]
// 008a895f  50                   push eax
// 008a8960  e8831df6ff           call 0x80a6e8
// 008a8965  8b17                 mov edx, dword ptr [edi]
// 008a8967  6a01                 push 1
// 008a8969  50                   push eax
// 008a896a  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 008a8970  8bcf                 mov ecx, edi
// 008a8972  ffd0                 call eax
// 008a8974  6874010000           push 0x174
// 008a8979  e8e016f6ff           call 0x80a05e
// 008a897e  83c404               add esp, 4
// 008a8981  89442430             mov dword ptr [esp + 0x30], eax
// 008a8985  c644244801           mov byte ptr [esp + 0x48], 1
// 008a898a  85c0                 test eax, eax
// 008a898c  7409                 je 0x8a8997
// 008a898e  8bc8                 mov ecx, eax
// 008a8990  e86b18fbff           call 0x85a200
// 008a8995  eb02                 jmp 0x8a8999
// 008a8997  33c0                 xor eax, eax
// 008a8999  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 008a899f  f7de                 neg esi
// 008a89a1  1bf6                 sbb esi, esi
// 008a89a3  83e6fe               and esi, 0xfffffffe
// 008a89a6  83c602               add esi, 2
// 008a89a9  56                   push esi
// 008a89aa  50                   push eax
// 008a89ab  c644245000           mov byte ptr [esp + 0x50], 0
// 008a89b0  e83b03fbff           call 0x858cf0
// 008a89b5  8b10                 mov edx, dword ptr [eax]
// 008a89b7  8bc8                 mov ecx, eax
// 008a89b9  8b4264               mov eax, dword ptr [edx + 0x64]
// 008a89bc  6a01                 push 1
// 008a89be  ffd0                 call eax
// 008a89c0  53                   push ebx
// 008a89c1  8bcd                 mov ecx, ebp
// 008a89c3  e848eaffff           call 0x8a7410
// 008a89c8  8b5500               mov edx, dword ptr [ebp]
// 008a89cb  89442420             mov dword ptr [esp + 0x20], eax
// 008a89cf  8b8234020000         mov eax, dword ptr [edx + 0x234]
// 008a89d5  53                   push ebx
// 008a89d6  8bcd                 mov ecx, ebp
// 008a89d8  ffd0                 call eax
// 008a89da  8bcb                 mov ecx, ebx
// 008a89dc  8944242c             mov dword ptr [esp + 0x2c], eax
// 008a89e0  e8bb06fdff           call 0x8790a0
// 008a89e5  a810                 test al, 0x10
// 008a89e7  7511                 jne 0x8a89fa
// 008a89e9  83bbac00000000       cmp dword ptr [ebx + 0xac], 0
// 008a89f0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008a89f8  7408                 je 0x8a8a02
// 008a89fa  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008a8a02  33f6                 xor esi, esi
// 008a8a04  8bcf                 mov ecx, edi
// 008a8a06  89742414             mov dword ptr [esp + 0x14], esi
// 008a8a0a  e8012ef7ff           call 0x81b810
// 008a8a0f  85c0                 test eax, eax
// 008a8a11  0f8ef1020000         jle 0x8a8d08
// 008a8a17  56                   push esi
// 008a8a18  8bcf                 mov ecx, edi
// 008a8a1a  e8012ef7ff           call 0x81b820
// 008a8a1f  8bd8                 mov ebx, eax
// 008a8a21  81bb8400000090250000 cmp dword ptr [ebx + 0x84], 0x2590
// 008a8a2b  750c                 jne 0x8a8a39
// 008a8a2d  6887250000           push 0x2587
// 008a8a32  8bcb                 mov ecx, ebx
// 008a8a34  e8e73bf6ff           call 0x80c620
// 008a8a39  81bb8400000091250000 cmp dword ptr [ebx + 0x84], 0x2591
// 008a8a43  750c                 jne 0x8a8a51
// 008a8a45  6888250000           push 0x2588
// 008a8a4a  8bcb                 mov ecx, ebx
// 008a8a4c  e8cf3bf6ff           call 0x80c620
// 008a8a51  81bb8400000092250000 cmp dword ptr [ebx + 0x84], 0x2592
// 008a8a5b  750c                 jne 0x8a8a69
// 008a8a5d  688a250000           push 0x258a
// 008a8a62  8bcb                 mov ecx, ebx
// 008a8a64  e8b73bf6ff           call 0x80c620
// 008a8a69  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 008a8a6f  057bdaffff           add eax, 0xffffda7b
// 008a8a74  83f809               cmp eax, 9
// 008a8a77  0f8777020000         ja 0x8a8cf4
// 008a8a7d  ff2485548d8a00       jmp dword ptr [eax*4 + 0x8a8d54]
// 008a8a84  837c242000           cmp dword ptr [esp + 0x20], 0
// 008a8a89  7429                 je 0x8a8ab4
// 008a8a8b  837c241800           cmp dword ptr [esp + 0x18], 0
// 008a8a90  7522                 jne 0x8a8ab4
// 008a8a92  83bd5402000000       cmp dword ptr [ebp + 0x254], 0
// 008a8a99  7419                 je 0x8a8ab4
// 008a8a9b  b801000000           mov eax, 1
// 008a8aa0  50                   push eax
// 008a8aa1  8bcb                 mov ecx, ebx
// 008a8aa3  e8a840f6ff           call 0x80cb50
// 008a8aa8  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008a8aac  894b7c               mov dword ptr [ebx + 0x7c], ecx
// 008a8aaf  e937020000           jmp 0x8a8ceb
// 008a8ab4  33c0                 xor eax, eax
// 008a8ab6  50                   push eax
// 008a8ab7  8bcb                 mov ecx, ebx
// 008a8ab9  e89240f6ff           call 0x80cb50
// 008a8abe  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008a8ac2  894b7c               mov dword ptr [ebx + 0x7c], ecx
// 008a8ac5  e921020000           jmp 0x8a8ceb
// 008a8aca  837c242000           cmp dword ptr [esp + 0x20], 0
// 008a8acf  7517                 jne 0x8a8ae8
// 008a8ad1  837c241800           cmp dword ptr [esp + 0x18], 0
// 008a8ad6  7510                 jne 0x8a8ae8
// 008a8ad8  83bd5402000000       cmp dword ptr [ebp + 0x254], 0
// 008a8adf  7407                 je 0x8a8ae8
// 008a8ae1  b801000000           mov eax, 1
// 008a8ae6  eb02                 jmp 0x8a8aea
// 008a8ae8  33c0                 xor eax, eax
// 008a8aea  50                   push eax
// 008a8aeb  8bcb                 mov ecx, ebx
// 008a8aed  e85e40f6ff           call 0x80cb50
// 008a8af2  8b13                 mov edx, dword ptr [ebx]
// 008a8af4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008a8af8  8b5268               mov edx, dword ptr [edx + 0x68]
// 008a8afb  50                   push eax
// 008a8afc  8bcb                 mov ecx, ebx
// 008a8afe  ffd2                 call edx
// 008a8b00  8b442450             mov eax, dword ptr [esp + 0x50]
// 008a8b04  89437c               mov dword ptr [ebx + 0x7c], eax
// 008a8b07  e9df010000           jmp 0x8a8ceb
// 008a8b0c  83bd5402000000       cmp dword ptr [ebp + 0x254], 0
// 008a8b13  0f85d2010000         jne 0x8a8ceb
// 008a8b19  68c9230000           push 0x23c9
// 008a8b1e  8bcb                 mov ecx, ebx
// 008a8b20  e87b5df6ff           call 0x80e8a0
// 008a8b25  e9c1010000           jmp 0x8a8ceb
// 008a8b2a  83bd4c02000000       cmp dword ptr [ebp + 0x24c], 0
// 008a8b31  741b                 je 0x8a8b4e
// 008a8b33  83bd4802000000       cmp dword ptr [ebp + 0x248], 0
// 008a8b3a  7512                 jne 0x8a8b4e
// 008a8b3c  b801000000           mov eax, 1
// 008a8b41  50                   push eax
// 008a8b42  8bcb                 mov ecx, ebx
// 008a8b44  e80740f6ff           call 0x80cb50
// 008a8b49  e99d010000           jmp 0x8a8ceb
// 008a8b4e  33c0                 xor eax, eax
// 008a8b50  50                   push eax
// 008a8b51  8bcb                 mov ecx, ebx
// 008a8b53  e8f83ff6ff           call 0x80cb50
// 008a8b58  e98e010000           jmp 0x8a8ceb
// 008a8b5d  83bd4c02000000       cmp dword ptr [ebp + 0x24c], 0
// 008a8b64  74e8                 je 0x8a8b4e
// 008a8b66  83bd4802000000       cmp dword ptr [ebp + 0x248], 0
// 008a8b6d  74df                 je 0x8a8b4e
// 008a8b6f  b801000000           mov eax, 1
// 008a8b74  50                   push eax
// 008a8b75  8bcb                 mov ecx, ebx
// 008a8b77  e8d43ff6ff           call 0x80cb50
// 008a8b7c  e96a010000           jmp 0x8a8ceb
// 008a8b81  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 008a8b87  6a08                 push 8
// 008a8b89  56                   push esi
// 008a8b8a  e83114fbff           call 0x859fc0
// 008a8b8f  8bd8                 mov ebx, eax
// 008a8b91  6a01                 push 1
// 008a8b93  8bcb                 mov ecx, ebx
// 008a8b95  e8c63cf6ff           call 0x80c860
// 008a8b9a  83bd5402000000       cmp dword ptr [ebp + 0x254], 0
// 008a8ba1  74ab                 je 0x8a8b4e
// 008a8ba3  8b8564020000         mov eax, dword ptr [ebp + 0x264]
// 008a8ba9  83783c00             cmp dword ptr [eax + 0x3c], 0
// 008a8bad  749f                 je 0x8a8b4e
// 008a8baf  b801000000           mov eax, 1
// 008a8bb4  50                   push eax
// 008a8bb5  8bcb                 mov ecx, ebx
// 008a8bb7  e8943ff6ff           call 0x80cb50
// 008a8bbc  e92a010000           jmp 0x8a8ceb
// 008a8bc1  8b8d60020000         mov ecx, dword ptr [ebp + 0x260]
// 008a8bc7  51                   push ecx
// 008a8bc8  8bcb                 mov ecx, ebx
// 008a8bca  e8813ff6ff           call 0x80cb50
// 008a8bcf  8b958c020000         mov edx, dword ptr [ebp + 0x28c]
// 008a8bd5  52                   push edx
// 008a8bd6  8bcb                 mov ecx, ebx
// 008a8bd8  e8131bf7ff           call 0x81a6f0
// 008a8bdd  e909010000           jmp 0x8a8ceb
// 008a8be2  8b03                 mov eax, dword ptr [ebx]
// 008a8be4  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008a8bea  6a01                 push 1
// 008a8bec  8bcb                 mov ecx, ebx
// 008a8bee  ffd2                 call edx
// 008a8bf0  8b8564020000         mov eax, dword ptr [ebp + 0x264]
// 008a8bf6  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 008a8bf9  894c2424             mov dword ptr [esp + 0x24], ecx
// 008a8bfd  85c9                 test ecx, ecx
// 008a8bff  0f84ef000000         je 0x8a8cf4
// 008a8c05  83bd5402000000       cmp dword ptr [ebp + 0x254], 0
// 008a8c0c  0f84e2000000         je 0x8a8cf4
// 008a8c12  83792c00             cmp dword ptr [ecx + 0x2c], 0
// 008a8c16  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008a8c1e  0f8ec7000000         jle 0x8a8ceb
// 008a8c24  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008a8c28  50                   push eax
// 008a8c29  e8a285b8ff           call 0x4311d0
// 008a8c2e  6880010000           push 0x180
// 008a8c33  8bf0                 mov esi, eax
// 008a8c35  e82414f6ff           call 0x80a05e
// 008a8c3a  83c404               add esp, 4
// 008a8c3d  89442434             mov dword ptr [esp + 0x34], eax
// 008a8c41  c644244802           mov byte ptr [esp + 0x48], 2
// 008a8c46  85c0                 test eax, eax
// 008a8c48  7413                 je 0x8a8c5d
// 008a8c4a  8b8d64020000         mov ecx, dword ptr [ebp + 0x264]
// 008a8c50  56                   push esi
// 008a8c51  51                   push ecx
// 008a8c52  8bc8                 mov ecx, eax
// 008a8c54  e807d0ffff           call 0x8a5c60
// 008a8c59  8bf8                 mov edi, eax
// 008a8c5b  eb02                 jmp 0x8a8c5f
// 008a8c5d  33ff                 xor edi, edi
// 008a8c5f  8b542414             mov edx, dword ptr [esp + 0x14]
// 008a8c63  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008a8c67  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 008a8c6d  6a01                 push 1
// 008a8c6f  52                   push edx
// 008a8c70  6a00                 push 0
// 008a8c72  6a00                 push 0
// 008a8c74  57                   push edi
// 008a8c75  c644245c00           mov byte ptr [esp + 0x5c], 0
// 008a8c7a  e8210efbff           call 0x859aa0
// 008a8c7f  8b06                 mov eax, dword ptr [esi]
// 008a8c81  8b5058               mov edx, dword ptr [eax + 0x58]
// 008a8c84  8d4c2430             lea ecx, [esp + 0x30]
// 008a8c88  51                   push ecx
// 008a8c89  8bce                 mov ecx, esi
// 008a8c8b  ffd2                 call edx
// 008a8c8d  8bc8                 mov ecx, eax
// 008a8c8f  c644244803           mov byte ptr [esp + 0x48], 3
// 008a8c94  ff15c82da400         call dword ptr [0xa42dc8]
// 008a8c9a  50                   push eax
// 008a8c9b  8bcf                 mov ecx, edi
// 008a8c9d  e85e41f6ff           call 0x80ce00
// 008a8ca2  8d4c2430             lea ecx, [esp + 0x30]
// 008a8ca6  c644244800           mov byte ptr [esp + 0x48], 0
// 008a8cab  ff15082ea400         call dword ptr [0xa42e08]
// 008a8cb1  8b8d64020000         mov ecx, dword ptr [ebp + 0x264]
// 008a8cb7  56                   push esi
// 008a8cb8  e893440500           call 0x8fd150
// 008a8cbd  85c0                 test eax, eax
// 008a8cbf  7408                 je 0x8a8cc9
// 008a8cc1  50                   push eax
// 008a8cc2  8bcf                 mov ecx, edi
// 008a8cc4  e8d7cfffff           call 0x8a5ca0
// 008a8cc9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008a8ccd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008a8cd1  ff442414             inc dword ptr [esp + 0x14]
// 008a8cd5  40                   inc eax
// 008a8cd6  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 008a8cd9  8944241c             mov dword ptr [esp + 0x1c], eax
// 008a8cdd  0f8c41ffffff         jl 0x8a8c24
// 008a8ce3  8b742414             mov esi, dword ptr [esp + 0x14]
// 008a8ce7  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008a8ceb  6a08                 push 8
// 008a8ced  8bcb                 mov ecx, ebx
// 008a8cef  e88c3bf6ff           call 0x80c880
// 008a8cf4  46                   inc esi
// 008a8cf5  8bcf                 mov ecx, edi
// 008a8cf7  89742414             mov dword ptr [esp + 0x14], esi
// 008a8cfb  e8102bf7ff           call 0x81b810
// 008a8d00  3bf0                 cmp esi, eax
// 008a8d02  0f8c0ffdffff         jl 0x8a8a17
// 008a8d08  8bcd                 mov ecx, ebp
// 008a8d0a  e86149f7ff           call 0x81d670
// 008a8d0f  8b5020               mov edx, dword ptr [eax + 0x20]
// 008a8d12  57                   push edi
// 008a8d13  55                   push ebp
// 008a8d14  685c280000           push 0x285c
// 008a8d19  52                   push edx
// 008a8d1a  ff15c019a400         call dword ptr [0xa419c0]
// 008a8d20  8d4c2438             lea ecx, [esp + 0x38]
// 008a8d24  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 008a8d2c  c7442438b04da600     mov dword ptr [esp + 0x38], 0xa64db0
// 008a8d34  e8971cf6ff           call 0x80a9d0
// 008a8d39  8bc7                 mov eax, edi
// 008a8d3b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008a8d3f  64890d00000000       mov dword ptr fs:[0], ecx
// 008a8d46  59                   pop ecx
// 008a8d47  5f                   pop edi
// 008a8d48  5e                   pop esi
// 008a8d49  5d                   pop ebp
// 008a8d4a  5b                   pop ebx
// 008a8d4b  83c438               add esp, 0x38
// 008a8d4e  c20400               ret 4
// 008a8d51  8d4900               lea ecx, [ecx]
// 008a8d54  848a8a00ca8a         test byte ptr [edx - 0x7535ff76], cl
// 008a8d5a  8a00                 mov al, byte ptr [eax]
// 008a8d5c  0c8b                 or al, 0x8b
// 008a8d5e  8a00                 mov al, byte ptr [eax]
// 008a8d60  2a8b8a00f48c         sub cl, byte ptr [ebx - 0x730bff76]
// 008a8d66  8a00                 mov al, byte ptr [eax]
// 008a8d68  5d                   pop ebp
// 008a8d69  8b8a00f48c8a         mov ecx, dword ptr [edx - 0x75730c00]
// 008a8d6f  00c1                 add cl, al
// 008a8d71  8b8a00e28b8a         mov ecx, dword ptr [edx - 0x75741e00]
// copied from an identical function in another client (function ?CreateContextMenu@CXTPRibbonBar@@MAEPAVCXTPPopupBar@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonBar.cpp