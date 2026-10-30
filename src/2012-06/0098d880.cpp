// roc 2012-06 0098d880  unit: CXTPPaintManager  size: 802 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098d880
//
// 0098d880  6aff                 push -1
// 0098d882  6881c2ad00           push 0xadc281
// 0098d887  64a100000000         mov eax, dword ptr fs:[0]
// 0098d88d  50                   push eax
// 0098d88e  83ec34               sub esp, 0x34
// 0098d891  53                   push ebx
// 0098d892  55                   push ebp
// 0098d893  56                   push esi
// 0098d894  57                   push edi
// 0098d895  a1d027e000           mov eax, dword ptr [0xe027d0]
// 0098d89a  33c4                 xor eax, esp
// 0098d89c  50                   push eax
// 0098d89d  8d442448             lea eax, [esp + 0x48]
// 0098d8a1  64a300000000         mov dword ptr fs:[0], eax
// 0098d8a7  8bf9                 mov edi, ecx
// 0098d8a9  897c241c             mov dword ptr [esp + 0x1c], edi
// 0098d8ad  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0098d8b1  8bce                 mov ecx, esi
// 0098d8b3  e8a8dd0900           call 0xa2b660
// 0098d8b8  8be8                 mov ebp, eax
// 0098d8ba  c1ed1a               shr ebp, 0x1a
// 0098d8bd  f7d5                 not ebp
// 0098d8bf  83e501               and ebp, 1
// 0098d8c2  896c2414             mov dword ptr [esp + 0x14], ebp
// 0098d8c6  7518                 jne 0x98d8e0
// 0098d8c8  8bce                 mov ecx, esi
// 0098d8ca  e8e186daff           call 0x735fb0
// 0098d8cf  83b8b800000000       cmp dword ptr [eax + 0xb8], 0
// 0098d8d6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0098d8de  7408                 je 0x98d8e8
// 0098d8e0  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0098d8e8  8bce                 mov ecx, esi
// 0098d8ea  e881c60500           call 0x9e9f70
// 0098d8ef  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 0098d8f3  83f8ff               cmp eax, -1
// 0098d8f6  7451                 je 0x98d949
// 0098d8f8  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0098d8fc  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0098d900  8b542464             mov edx, dword ptr [esp + 0x64]
// 0098d904  89442428             mov dword ptr [esp + 0x28], eax
// 0098d908  8b442468             mov eax, dword ptr [esp + 0x68]
// 0098d90c  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0098d910  8bce                 mov ecx, esi
// 0098d912  89542430             mov dword ptr [esp + 0x30], edx
// 0098d916  89442434             mov dword ptr [esp + 0x34], eax
// 0098d91a  e841dd0900           call 0xa2b660
// 0098d91f  a900010000           test eax, 0x100
// 0098d924  750f                 jne 0x98d935
// 0098d926  6aff                 push -1
// 0098d928  6aff                 push -1
// 0098d92a  8d4c2430             lea ecx, [esp + 0x30]
// 0098d92e  51                   push ecx
// 0098d92f  ff154c3bb200         call dword ptr [0xb23b4c]
// 0098d935  8bce                 mov ecx, esi
// 0098d937  e834c60500           call 0x9e9f70
// 0098d93c  50                   push eax
// 0098d93d  8d54242c             lea edx, [esp + 0x2c]
// 0098d941  52                   push edx
// 0098d942  8bcb                 mov ecx, ebx
// 0098d944  e86355ffff           call 0x982eac
// 0098d949  837e7800             cmp dword ptr [esi + 0x78], 0
// 0098d94d  742e                 je 0x98d97d
// 0098d94f  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0098d953  8b17                 mov edx, dword ptr [edi]
// 0098d955  8b9298000000         mov edx, dword ptr [edx + 0x98]
// 0098d95b  56                   push esi
// 0098d95c  83ec10               sub esp, 0x10
// 0098d95f  8bc4                 mov eax, esp
// 0098d961  8908                 mov dword ptr [eax], ecx
// 0098d963  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0098d967  894804               mov dword ptr [eax + 4], ecx
// 0098d96a  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0098d96e  894808               mov dword ptr [eax + 8], ecx
// 0098d971  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0098d975  89480c               mov dword ptr [eax + 0xc], ecx
// 0098d978  53                   push ebx
// 0098d979  8bcf                 mov ecx, edi
// 0098d97b  ffd2                 call edx
// 0098d97d  8b06                 mov eax, dword ptr [esi]
// 0098d97f  8b5058               mov edx, dword ptr [eax + 0x58]
// 0098d982  8bce                 mov ecx, esi
// 0098d984  ffd2                 call edx
// 0098d986  50                   push eax
// 0098d987  53                   push ebx
// 0098d988  8d4c2440             lea ecx, [esp + 0x40]
// 0098d98c  e89f7b0400           call 0x9d5530
// 0098d991  8d442428             lea eax, [esp + 0x28]
// 0098d995  50                   push eax
// 0098d996  8bce                 mov ecx, esi
// 0098d998  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0098d9a0  e88b940500           call 0x9e6e30
// 0098d9a5  8b08                 mov ecx, dword ptr [eax]
// 0098d9a7  014c245c             add dword ptr [esp + 0x5c], ecx
// 0098d9ab  8b5004               mov edx, dword ptr [eax + 4]
// 0098d9ae  01542460             add dword ptr [esp + 0x60], edx
// 0098d9b2  8b4808               mov ecx, dword ptr [eax + 8]
// 0098d9b5  294c2464             sub dword ptr [esp + 0x64], ecx
// 0098d9b9  8b500c               mov edx, dword ptr [eax + 0xc]
// 0098d9bc  29542468             sub dword ptr [esp + 0x68], edx
// 0098d9c0  8d44246c             lea eax, [esp + 0x6c]
// 0098d9c4  50                   push eax
// 0098d9c5  8bce                 mov ecx, esi
// 0098d9c7  e884940500           call 0x9e6e50
// 0098d9cc  8b16                 mov edx, dword ptr [esi]
// 0098d9ce  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0098d9d1  8bce                 mov ecx, esi
// 0098d9d3  c644245001           mov byte ptr [esp + 0x50], 1
// 0098d9d8  ffd0                 call eax
// 0098d9da  8bce                 mov ecx, esi
// 0098d9dc  8bf8                 mov edi, eax
// 0098d9de  e88d86daff           call 0x736070
// 0098d9e3  85c0                 test eax, eax
// 0098d9e5  0f848c000000         je 0x98da77
// 0098d9eb  8d4c2420             lea ecx, [esp + 0x20]
// 0098d9ef  51                   push ecx
// 0098d9f0  8d4c2470             lea ecx, [esp + 0x70]
// 0098d9f4  ff155846b200         call dword ptr [0xb24658]
// 0098d9fa  50                   push eax
// 0098d9fb  8d4c2474             lea ecx, [esp + 0x74]
// 0098d9ff  ff159847b200         call dword ptr [0xb24798]
// 0098da05  8b5308               mov edx, dword ptr [ebx + 8]
// 0098da08  50                   push eax
// 0098da09  52                   push edx
// 0098da0a  ff154021b200         call dword ptr [0xb22140]
// 0098da10  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0098da14  85ff                 test edi, edi
// 0098da16  7416                 je 0x98da2e
// 0098da18  8bcf                 mov ecx, edi
// 0098da1a  e841dc0900           call 0xa2b660
// 0098da1f  33c9                 xor ecx, ecx
// 0098da21  85ed                 test ebp, ebp
// 0098da23  0f9ec1               setle cl
// 0098da26  49                   dec ecx
// 0098da27  83e102               and ecx, 2
// 0098da2a  03c1                 add eax, ecx
// 0098da2c  eb02                 jmp 0x98da30
// 0098da2e  33c0                 xor eax, eax
// 0098da30  8b542464             mov edx, dword ptr [esp + 0x64]
// 0098da34  2b54245c             sub edx, dword ptr [esp + 0x5c]
// 0098da38  03e8                 add ebp, eax
// 0098da3a  3bd5                 cmp edx, ebp
// 0098da3c  7e35                 jle 0x98da73
// 0098da3e  8bce                 mov ecx, esi
// 0098da40  e82b86daff           call 0x736070
// 0098da45  83f802               cmp eax, 2
// 0098da48  750a                 jne 0x98da54
// 0098da4a  8b442464             mov eax, dword ptr [esp + 0x64]
// 0098da4e  2bc5                 sub eax, ebp
// 0098da50  8944245c             mov dword ptr [esp + 0x5c], eax
// 0098da54  8bce                 mov ecx, esi
// 0098da56  e81586daff           call 0x736070
// 0098da5b  83f801               cmp eax, 1
// 0098da5e  7513                 jne 0x98da73
// 0098da60  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0098da64  2bc5                 sub eax, ebp
// 0098da66  03442464             add eax, dword ptr [esp + 0x64]
// 0098da6a  99                   cdq 
// 0098da6b  2bc2                 sub eax, edx
// 0098da6d  d1f8                 sar eax, 1
// 0098da6f  8944245c             mov dword ptr [esp + 0x5c], eax
// 0098da73  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0098da77  85ff                 test edi, edi
// 0098da79  0f8482000000         je 0x98db01
// 0098da7f  8bcf                 mov ecx, edi
// 0098da81  e8dadb0900           call 0xa2b660
// 0098da86  0344245c             add eax, dword ptr [esp + 0x5c]
// 0098da8a  39442464             cmp dword ptr [esp + 0x64], eax
// 0098da8e  7c59                 jl 0x98dae9
// 0098da90  8bcf                 mov ecx, edi
// 0098da92  85ed                 test ebp, ebp
// 0098da94  7407                 je 0x98da9d
// 0098da96  e8959f0000           call 0x997a30
// 0098da9b  eb07                 jmp 0x98daa4
// 0098da9d  6a01                 push 1
// 0098da9f  e8bc0b0100           call 0x99e660
// 0098daa4  83ec08               sub esp, 8
// 0098daa7  8be8                 mov ebp, eax
// 0098daa9  8bc4                 mov eax, esp
// 0098daab  8bcf                 mov ecx, edi
// 0098daad  89642460             mov dword ptr [esp + 0x60], esp
// 0098dab1  c70000000000         mov dword ptr [eax], 0
// 0098dab7  c7400400000000       mov dword ptr [eax + 4], 0
// 0098dabe  e85d9f0000           call 0x997a20
// 0098dac3  8b542470             mov edx, dword ptr [esp + 0x70]
// 0098dac7  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0098dacb  03ca                 add ecx, edx
// 0098dacd  2bc8                 sub ecx, eax
// 0098dacf  8bc1                 mov eax, ecx
// 0098dad1  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0098dad5  99                   cdq 
// 0098dad6  2bc2                 sub eax, edx
// 0098dad8  55                   push ebp
// 0098dad9  d1f8                 sar eax, 1
// 0098dadb  50                   push eax
// 0098dadc  51                   push ecx
// 0098dadd  53                   push ebx
// 0098dade  8bcf                 mov ecx, edi
// 0098dae0  e8bb150100           call 0x99f0a0
// 0098dae5  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0098dae9  8bcf                 mov ecx, edi
// 0098daeb  e870db0900           call 0xa2b660
// 0098daf0  6a00                 push 0
// 0098daf2  83c002               add eax, 2
// 0098daf5  50                   push eax
// 0098daf6  8d542464             lea edx, [esp + 0x64]
// 0098dafa  52                   push edx
// 0098dafb  ff15f43ab200         call dword ptr [0xb23af4]
// 0098db01  837c241800           cmp dword ptr [esp + 0x18], 0
// 0098db06  7469                 je 0x98db71
// 0098db08  6a01                 push 1
// 0098db0a  8bcb                 mov ecx, ebx
// 0098db0c  e897ba1000           call 0xa995a8
// 0098db11  85ed                 test ebp, ebp
// 0098db13  750d                 jne 0x98db22
// 0098db15  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0098db19  6a11                 push 0x11
// 0098db1b  e8709dffff           call 0x987890
// 0098db20  eb1c                 jmp 0x98db3e
// 0098db22  8bce                 mov ecx, esi
// 0098db24  e887670200           call 0x9b42b0
// 0098db29  83f8ff               cmp eax, -1
// 0098db2c  7409                 je 0x98db37
// 0098db2e  8bce                 mov ecx, esi
// 0098db30  e87b670200           call 0x9b42b0
// 0098db35  eb07                 jmp 0x98db3e
// 0098db37  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0098db3b  8b4024               mov eax, dword ptr [eax + 0x24]
// 0098db3e  8b13                 mov edx, dword ptr [ebx]
// 0098db40  50                   push eax
// 0098db41  8b4238               mov eax, dword ptr [edx + 0x38]
// 0098db44  8bcb                 mov ecx, ebx
// 0098db46  ffd0                 call eax
// 0098db48  8b33                 mov esi, dword ptr [ebx]
// 0098db4a  6864080000           push 0x864
// 0098db4f  8d4c2460             lea ecx, [esp + 0x60]
// 0098db53  51                   push ecx
// 0098db54  8d4c2474             lea ecx, [esp + 0x74]
// 0098db58  ff155846b200         call dword ptr [0xb24658]
// 0098db5e  50                   push eax
// 0098db5f  8d4c2478             lea ecx, [esp + 0x78]
// 0098db63  ff159847b200         call dword ptr [0xb24798]
// 0098db69  8b5670               mov edx, dword ptr [esi + 0x70]
// 0098db6c  50                   push eax
// 0098db6d  8bcb                 mov ecx, ebx
// 0098db6f  ffd2                 call edx
// 0098db71  8d4c246c             lea ecx, [esp + 0x6c]
// 0098db75  ff15d047b200         call dword ptr [0xb247d0]
// 0098db7b  8d4c2438             lea ecx, [esp + 0x38]
// 0098db7f  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0098db87  e8247a0400           call 0x9d55b0
// 0098db8c  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0098db90  64890d00000000       mov dword ptr fs:[0], ecx
// 0098db97  59                   pop ecx
// 0098db98  5f                   pop edi
// 0098db99  5e                   pop esi
// 0098db9a  5d                   pop ebp
// 0098db9b  5b                   pop ebx
// 0098db9c  83c440               add esp, 0x40
// 0098db9f  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawStatusBarPaneEntry@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp