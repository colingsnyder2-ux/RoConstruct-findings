// roc 2012-06 009bf940  unit: CRobloxTreeCtrl  size: 697 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bf940
//
// 009bf940  6aff                 push -1
// 009bf942  6814f2ad00           push 0xadf214
// 009bf947  64a100000000         mov eax, dword ptr fs:[0]
// 009bf94d  50                   push eax
// 009bf94e  83ec10               sub esp, 0x10
// 009bf951  53                   push ebx
// 009bf952  55                   push ebp
// 009bf953  56                   push esi
// 009bf954  57                   push edi
// 009bf955  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009bf95a  33c4                 xor eax, esp
// 009bf95c  50                   push eax
// 009bf95d  8d442424             lea eax, [esp + 0x24]
// 009bf961  64a300000000         mov dword ptr fs:[0], eax
// 009bf967  8bd9                 mov ebx, ecx
// 009bf969  8b742440             mov esi, dword ptr [esp + 0x40]
// 009bf96d  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 009bf970  56                   push esi
// 009bf971  e8ba9e0d00           call 0xa99830
// 009bf976  85c0                 test eax, eax
// 009bf978  7460                 je 0x9bf9da
// 009bf97a  8b442434             mov eax, dword ptr [esp + 0x34]
// 009bf97e  50                   push eax
// 009bf97f  8d4c2418             lea ecx, [esp + 0x18]
// 009bf983  ff15c847b200         call dword ptr [0xb247c8]
// 009bf989  8d4c2414             lea ecx, [esp + 0x14]
// 009bf98d  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 009bf995  ff155846b200         call dword ptr [0xb24658]
// 009bf99b  89442418             mov dword ptr [esp + 0x18], eax
// 009bf99f  85c0                 test eax, eax
// 009bf9a1  742d                 je 0x9bf9d0
// 009bf9a3  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 009bf9a7  85ff                 test edi, edi
// 009bf9a9  750a                 jne 0x9bf9b5
// 009bf9ab  8d4c2414             lea ecx, [esp + 0x14]
// 009bf9af  ff158849b200         call dword ptr [0xb24988]
// 009bf9b5  8b4334               mov eax, dword ptr [ebx + 0x34]
// 009bf9b8  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009bf9bb  56                   push esi
// 009bf9bc  6a04                 push 4
// 009bf9be  680a110000           push 0x110a
// 009bf9c3  51                   push ecx
// 009bf9c4  ff15043cb200         call dword ptr [0xb23c04]
// 009bf9ca  8be8                 mov ebp, eax
// 009bf9cc  85ed                 test ebp, ebp
// 009bf9ce  7526                 jne 0x9bf9f6
// 009bf9d0  8d4c2414             lea ecx, [esp + 0x14]
// 009bf9d4  ff15d047b200         call dword ptr [0xb247d0]
// 009bf9da  33c0                 xor eax, eax
// 009bf9dc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009bf9e0  64890d00000000       mov dword ptr fs:[0], ecx
// 009bf9e7  59                   pop ecx
// 009bf9e8  5f                   pop edi
// 009bf9e9  5e                   pop esi
// 009bf9ea  5d                   pop ebp
// 009bf9eb  5b                   pop ebx
// 009bf9ec  83c41c               add esp, 0x1c
// 009bf9ef  c21000               ret 0x10
// 009bf9f2  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 009bf9f6  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 009bf9f9  55                   push ebp
// 009bf9fa  e8319e0d00           call 0xa99830
// 009bf9ff  85c0                 test eax, eax
// 009bfa01  741f                 je 0x9bfa22
// 009bfa03  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 009bfa07  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 009bfa0b  8b13                 mov edx, dword ptr [ebx]
// 009bfa0d  8b5218               mov edx, dword ptr [edx + 0x18]
// 009bfa10  55                   push ebp
// 009bfa11  50                   push eax
// 009bfa12  57                   push edi
// 009bfa13  51                   push ecx
// 009bfa14  8bcb                 mov ecx, ebx
// 009bfa16  ffd2                 call edx
// 009bfa18  8bf0                 mov esi, eax
// 009bfa1a  85f6                 test esi, esi
// 009bfa1c  0f85ab010000         jne 0x9bfbcd
// 009bfa22  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 009bfa25  55                   push ebp
// 009bfa26  8d442444             lea eax, [esp + 0x44]
// 009bfa2a  50                   push eax
// 009bfa2b  e8069e0d00           call 0xa99836
// 009bfa30  c644242c01           mov byte ptr [esp + 0x2c], 1
// 009bfa35  85ff                 test edi, edi
// 009bfa37  750a                 jne 0x9bfa43
// 009bfa39  8d4c2440             lea ecx, [esp + 0x40]
// 009bfa3d  ff158849b200         call dword ptr [0xb24988]
// 009bfa43  6a00                 push 0
// 009bfa45  8d4c2418             lea ecx, [esp + 0x18]
// 009bfa49  ff159847b200         call dword ptr [0xb24798]
// 009bfa4f  50                   push eax
// 009bfa50  8d4c2448             lea ecx, [esp + 0x48]
// 009bfa54  ff154c49b200         call dword ptr [0xb2494c]
// 009bfa5a  8bf8                 mov edi, eax
// 009bfa5c  83ffff               cmp edi, -1
// 009bfa5f  0f8435010000         je 0x9bfb9a
// 009bfa65  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 009bfa6a  0f841c010000         je 0x9bfb8c
// 009bfa70  85ff                 test edi, edi
// 009bfa72  7467                 je 0x9bfadb
// 009bfa74  8d77ff               lea esi, [edi - 1]
// 009bfa77  56                   push esi
// 009bfa78  8d4c2444             lea ecx, [esp + 0x44]
// 009bfa7c  ff15e844b200         call dword ptr [0xb244e8]
// 009bfa82  0fbec8               movsx ecx, al
// 009bfa85  51                   push ecx
// 009bfa86  ff15682ab200         call dword ptr [0xb22a68]
// 009bfa8c  83c404               add esp, 4
// 009bfa8f  85c0                 test eax, eax
// 009bfa91  750f                 jne 0x9bfaa2
// 009bfa93  56                   push esi
// 009bfa94  8d4c2444             lea ecx, [esp + 0x44]
// 009bfa98  ff15e844b200         call dword ptr [0xb244e8]
// 009bfa9e  3c5f                 cmp al, 0x5f
// 009bfaa0  7539                 jne 0x9bfadb
// 009bfaa2  8d4c2440             lea ecx, [esp + 0x40]
// 009bfaa6  ff155846b200         call dword ptr [0xb24658]
// 009bfaac  2bc7                 sub eax, edi
// 009bfaae  2b442418             sub eax, dword ptr [esp + 0x18]
// 009bfab2  8d54241c             lea edx, [esp + 0x1c]
// 009bfab6  50                   push eax
// 009bfab7  52                   push edx
// 009bfab8  8d4c2448             lea ecx, [esp + 0x48]
// 009bfabc  ff15ec49b200         call dword ptr [0xb249ec]
// 009bfac2  50                   push eax
// 009bfac3  8d4c2444             lea ecx, [esp + 0x44]
// 009bfac7  c644243002           mov byte ptr [esp + 0x30], 2
// 009bfacc  ff152045b200         call dword ptr [0xb24520]
// 009bfad2  8d4c241c             lea ecx, [esp + 0x1c]
// 009bfad6  e982000000           jmp 0x9bfb5d
// 009bfadb  8b442418             mov eax, dword ptr [esp + 0x18]
// 009bfadf  8d4c2440             lea ecx, [esp + 0x40]
// 009bfae3  8d3407               lea esi, [edi + eax]
// 009bfae6  ff155846b200         call dword ptr [0xb24658]
// 009bfaec  3bc6                 cmp eax, esi
// 009bfaee  0f8e98000000         jle 0x9bfb8c
// 009bfaf4  56                   push esi
// 009bfaf5  8d4c2444             lea ecx, [esp + 0x44]
// 009bfaf9  ff15e844b200         call dword ptr [0xb244e8]
// 009bfaff  0fbec8               movsx ecx, al
// 009bfb02  51                   push ecx
// 009bfb03  ff15682ab200         call dword ptr [0xb22a68]
// 009bfb09  83c404               add esp, 4
// 009bfb0c  85c0                 test eax, eax
// 009bfb0e  750f                 jne 0x9bfb1f
// 009bfb10  56                   push esi
// 009bfb11  8d4c2444             lea ecx, [esp + 0x44]
// 009bfb15  ff15e844b200         call dword ptr [0xb244e8]
// 009bfb1b  3c5f                 cmp al, 0x5f
// 009bfb1d  756d                 jne 0x9bfb8c
// 009bfb1f  8d4c2440             lea ecx, [esp + 0x40]
// 009bfb23  ff155846b200         call dword ptr [0xb24658]
// 009bfb29  8bf0                 mov esi, eax
// 009bfb2b  8d4c2414             lea ecx, [esp + 0x14]
// 009bfb2f  2bf7                 sub esi, edi
// 009bfb31  ff155846b200         call dword ptr [0xb24658]
// 009bfb37  2bf0                 sub esi, eax
// 009bfb39  56                   push esi
// 009bfb3a  8d542424             lea edx, [esp + 0x24]
// 009bfb3e  52                   push edx
// 009bfb3f  8d4c2448             lea ecx, [esp + 0x48]
// 009bfb43  ff15ec49b200         call dword ptr [0xb249ec]
// 009bfb49  50                   push eax
// 009bfb4a  8d4c2444             lea ecx, [esp + 0x44]
// 009bfb4e  c644243003           mov byte ptr [esp + 0x30], 3
// 009bfb53  ff152045b200         call dword ptr [0xb24520]
// 009bfb59  8d4c2420             lea ecx, [esp + 0x20]
// 009bfb5d  c644242c01           mov byte ptr [esp + 0x2c], 1
// 009bfb62  ff15d047b200         call dword ptr [0xb247d0]
// 009bfb68  6a00                 push 0
// 009bfb6a  8d4c2418             lea ecx, [esp + 0x18]
// 009bfb6e  ff159847b200         call dword ptr [0xb24798]
// 009bfb74  50                   push eax
// 009bfb75  8d4c2448             lea ecx, [esp + 0x48]
// 009bfb79  ff154c49b200         call dword ptr [0xb2494c]
// 009bfb7f  8bf8                 mov edi, eax
// 009bfb81  83ffff               cmp edi, -1
// 009bfb84  0f85dbfeffff         jne 0x9bfa65
// 009bfb8a  eb0e                 jmp 0x9bfb9a
// 009bfb8c  8b03                 mov eax, dword ptr [ebx]
// 009bfb8e  8b5068               mov edx, dword ptr [eax + 0x68]
// 009bfb91  55                   push ebp
// 009bfb92  8bcb                 mov ecx, ebx
// 009bfb94  ffd2                 call edx
// 009bfb96  85c0                 test eax, eax
// 009bfb98  7544                 jne 0x9bfbde
// 009bfb9a  8b4334               mov eax, dword ptr [ebx + 0x34]
// 009bfb9d  8b4020               mov eax, dword ptr [eax + 0x20]
// 009bfba0  55                   push ebp
// 009bfba1  6a01                 push 1
// 009bfba3  680a110000           push 0x110a
// 009bfba8  50                   push eax
// 009bfba9  ff15043cb200         call dword ptr [0xb23c04]
// 009bfbaf  8d4c2440             lea ecx, [esp + 0x40]
// 009bfbb3  8be8                 mov ebp, eax
// 009bfbb5  c644242c00           mov byte ptr [esp + 0x2c], 0
// 009bfbba  ff15d047b200         call dword ptr [0xb247d0]
// 009bfbc0  85ed                 test ebp, ebp
// 009bfbc2  0f852afeffff         jne 0x9bf9f2
// 009bfbc8  e903feffff           jmp 0x9bf9d0
// 009bfbcd  8d4c2414             lea ecx, [esp + 0x14]
// 009bfbd1  ff15d047b200         call dword ptr [0xb247d0]
// 009bfbd7  8bc6                 mov eax, esi
// 009bfbd9  e9fefdffff           jmp 0x9bf9dc
// 009bfbde  8d4c2440             lea ecx, [esp + 0x40]
// 009bfbe2  ff15d047b200         call dword ptr [0xb247d0]
// 009bfbe8  8d4c2414             lea ecx, [esp + 0x14]
// 009bfbec  ff15d047b200         call dword ptr [0xb247d0]
// 009bfbf2  8bc5                 mov eax, ebp
// 009bfbf4  e9e3fdffff           jmp 0x9bf9dc
// copied from an identical function in another client (function ?FindItemInBranch@CXTTreeBase@@UAEPAU_TREEITEM@@PBDHHPAU2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp