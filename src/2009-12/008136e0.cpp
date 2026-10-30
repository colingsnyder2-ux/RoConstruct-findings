// roc 2009-12 008136e0  unit: CXTPToolBar  size: 1172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008136e0
//
// 008136e0  6aff                 push -1
// 008136e2  6820a39500           push 0x95a320
// 008136e7  64a100000000         mov eax, dword ptr fs:[0]
// 008136ed  50                   push eax
// 008136ee  83ec20               sub esp, 0x20
// 008136f1  53                   push ebx
// 008136f2  55                   push ebp
// 008136f3  56                   push esi
// 008136f4  57                   push edi
// 008136f5  a10052b600           mov eax, dword ptr [0xb65200]
// 008136fa  33c4                 xor eax, esp
// 008136fc  50                   push eax
// 008136fd  8d442434             lea eax, [esp + 0x34]
// 00813701  64a300000000         mov dword ptr fs:[0], eax
// 00813707  8bd9                 mov ebx, ecx
// 00813709  e8c20dffff           call 0x8044d0
// 0081370e  33f6                 xor esi, esi
// 00813710  8944242c             mov dword ptr [esp + 0x2c], eax
// 00813714  3bc6                 cmp eax, esi
// 00813716  0f8442040000         je 0x813b5e
// 0081371c  8b83fc000000         mov eax, dword ptr [ebx + 0xfc]
// 00813722  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 00813725  3bce                 cmp ecx, esi
// 00813727  7408                 je 0x813731
// 00813729  56                   push esi
// 0081372a  e881460300           call 0x847db0
// 0081372f  eb29                 jmp 0x81375a
// 00813731  6a44                 push 0x44
// 00813733  e82801feff           call 0x7f3860
// 00813738  83c404               add esp, 4
// 0081373b  89442428             mov dword ptr [esp + 0x28], eax
// 0081373f  8974243c             mov dword ptr [esp + 0x3c], esi
// 00813743  3bc6                 cmp eax, esi
// 00813745  7409                 je 0x813750
// 00813747  8bc8                 mov ecx, eax
// 00813749  e822340300           call 0x846b70
// 0081374e  eb02                 jmp 0x813752
// 00813750  33c0                 xor eax, eax
// 00813752  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0081375a  33ed                 xor ebp, ebp
// 0081375c  8bcb                 mov ecx, ebx
// 0081375e  8944241c             mov dword ptr [esp + 0x1c], eax
// 00813762  896c2418             mov dword ptr [esp + 0x18], ebp
// 00813766  e8e51affff           call 0x805250
// 0081376b  85c0                 test eax, eax
// 0081376d  7e63                 jle 0x8137d2
// 0081376f  90                   nop 
// 00813770  56                   push esi
// 00813771  8bcb                 mov ecx, ebx
// 00813773  e8e81affff           call 0x805260
// 00813778  f680d000000010       test byte ptr [eax + 0xd0], 0x10
// 0081377f  7459                 je 0x8137da
// 00813781  8b8bfc000000         mov ecx, dword ptr [ebx + 0xfc]
// 00813787  8babcc000000         mov ebp, dword ptr [ebx + 0xcc]
// 0081378d  8bbbd0000000         mov edi, dword ptr [ebx + 0xd0]
// 00813793  56                   push esi
// 00813794  e8071d0300           call 0x8454a0
// 00813799  83ffff               cmp edi, -1
// 0081379c  7410                 je 0x8137ae
// 0081379e  33c9                 xor ecx, ecx
// 008137a0  3bf7                 cmp esi, edi
// 008137a2  0f9dc1               setge cl
// 008137a5  49                   dec ecx
// 008137a6  03cf                 add ecx, edi
// 008137a8  898bd0000000         mov dword ptr [ebx + 0xd0], ecx
// 008137ae  83fdff               cmp ebp, -1
// 008137b1  7410                 je 0x8137c3
// 008137b3  33d2                 xor edx, edx
// 008137b5  3bf5                 cmp esi, ebp
// 008137b7  0f9dc2               setge dl
// 008137ba  4a                   dec edx
// 008137bb  03d5                 add edx, ebp
// 008137bd  8993cc000000         mov dword ptr [ebx + 0xcc], edx
// 008137c3  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008137c7  8bcb                 mov ecx, ebx
// 008137c9  e8821affff           call 0x805250
// 008137ce  3bf0                 cmp esi, eax
// 008137d0  7c9e                 jl 0x813770
// 008137d2  33ff                 xor edi, edi
// 008137d4  897c2414             mov dword ptr [esp + 0x14], edi
// 008137d8  eb0e                 jmp 0x8137e8
// 008137da  46                   inc esi
// 008137db  ebea                 jmp 0x8137c7
// 008137dd  8d4900               lea ecx, [ecx]
// 008137e0  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008137e4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008137e8  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008137ec  3b6e2c               cmp ebp, dword ptr [esi + 0x2c]
// 008137ef  7c0f                 jl 0x813800
// 008137f1  8bcb                 mov ecx, ebx
// 008137f3  e8581affff           call 0x805250
// 008137f8  3bf8                 cmp edi, eax
// 008137fa  0f8dd2020000         jge 0x813ad2
// 00813800  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00813803  3be8                 cmp ebp, eax
// 00813805  7d13                 jge 0x81381a
// 00813807  85ed                 test ebp, ebp
// 00813809  7c0f                 jl 0x81381a
// 0081380b  3be8                 cmp ebp, eax
// 0081380d  7d0b                 jge 0x81381a
// 0081380f  8b4628               mov eax, dword ptr [esi + 0x28]
// 00813812  8d2ca8               lea ebp, [eax + ebp*4]
// 00813815  8b6d00               mov ebp, dword ptr [ebp]
// 00813818  eb02                 jmp 0x81381c
// 0081381a  33ed                 xor ebp, ebp
// 0081381c  8bcb                 mov ecx, ebx
// 0081381e  e82d1affff           call 0x805250
// 00813823  3bf8                 cmp edi, eax
// 00813825  7d1a                 jge 0x813841
// 00813827  8b83fc000000         mov eax, dword ptr [ebx + 0xfc]
// 0081382d  85ff                 test edi, edi
// 0081382f  7c10                 jl 0x813841
// 00813831  3b782c               cmp edi, dword ptr [eax + 0x2c]
// 00813834  7d0b                 jge 0x813841
// 00813836  8b4828               mov ecx, dword ptr [eax + 0x28]
// 00813839  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 0081383c  8d04b9               lea eax, [ecx + edi*4]
// 0081383f  eb02                 jmp 0x813843
// 00813841  33f6                 xor esi, esi
// 00813843  8b93fc000000         mov edx, dword ptr [ebx + 0xfc]
// 00813849  6a01                 push 1
// 0081384b  57                   push edi
// 0081384c  55                   push ebp
// 0081384d  52                   push edx
// 0081384e  8bcb                 mov ecx, ebx
// 00813850  e8ebfbffff           call 0x813440
// 00813855  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00813859  6a00                 push 0
// 0081385b  8bf8                 mov edi, eax
// 0081385d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00813861  50                   push eax
// 00813862  56                   push esi
// 00813863  51                   push ecx
// 00813864  8bcb                 mov ecx, ebx
// 00813866  e8d5fbffff           call 0x813440
// 0081386b  89442424             mov dword ptr [esp + 0x24], eax
// 0081386f  83ffff               cmp edi, -1
// 00813872  0f857e000000         jne 0x8138f6
// 00813878  85ed                 test ebp, ebp
// 0081387a  747a                 je 0x8138f6
// 0081387c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00813880  8b93cc000000         mov edx, dword ptr [ebx + 0xcc]
// 00813886  8b8bfc000000         mov ecx, dword ptr [ebx + 0xfc]
// 0081388c  8bbbd0000000         mov edi, dword ptr [ebx + 0xd0]
// 00813892  6a00                 push 0
// 00813894  50                   push eax
// 00813895  55                   push ebp
// 00813896  89542430             mov dword ptr [esp + 0x30], edx
// 0081389a  e8113a0300           call 0x8472b0
// 0081389f  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008138a3  8bf0                 mov esi, eax
// 008138a5  83ffff               cmp edi, -1
// 008138a8  740f                 je 0x8138b9
// 008138aa  33c9                 xor ecx, ecx
// 008138ac  3bef                 cmp ebp, edi
// 008138ae  0f9ec1               setle cl
// 008138b1  03cf                 add ecx, edi
// 008138b3  898bd0000000         mov dword ptr [ebx + 0xd0], ecx
// 008138b9  8b442424             mov eax, dword ptr [esp + 0x24]
// 008138bd  83f8ff               cmp eax, -1
// 008138c0  740f                 je 0x8138d1
// 008138c2  33d2                 xor edx, edx
// 008138c4  3be8                 cmp ebp, eax
// 008138c6  0f9ec2               setle dl
// 008138c9  03d0                 add edx, eax
// 008138cb  8993cc000000         mov dword ptr [ebx + 0xcc], edx
// 008138d1  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 008138d7  8b06                 mov eax, dword ptr [esi]
// 008138d9  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008138df  83c910               or ecx, 0x10
// 008138e2  51                   push ecx
// 008138e3  8bce                 mov ecx, esi
// 008138e5  896c2428             mov dword ptr [esp + 0x28], ebp
// 008138e9  ffd2                 call edx
// 008138eb  ff442418             inc dword ptr [esp + 0x18]
// 008138ef  45                   inc ebp
// 008138f0  896c2414             mov dword ptr [esp + 0x14], ebp
// 008138f4  eb1f                 jmp 0x813915
// 008138f6  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 008138fa  7506                 jne 0x813902
// 008138fc  ff442418             inc dword ptr [esp + 0x18]
// 00813900  eb0f                 jmp 0x813911
// 00813902  83f8ff               cmp eax, -1
// 00813905  740a                 je 0x813911
// 00813907  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0081390b  50                   push eax
// 0081390c  e88f1b0300           call 0x8454a0
// 00813911  ff442414             inc dword ptr [esp + 0x14]
// 00813915  85f6                 test esi, esi
// 00813917  0f84c3feffff         je 0x8137e0
// 0081391d  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 00813923  3dbd230000           cmp eax, 0x23bd
// 00813928  0f84b2feffff         je 0x8137e0
// 0081392e  3dbc230000           cmp eax, 0x23bc
// 00813933  0f84a7feffff         je 0x8137e0
// 00813939  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 0081393f  85c0                 test eax, eax
// 00813941  740a                 je 0x81394d
// 00813943  83783c00             cmp dword ptr [eax + 0x3c], 0
// 00813947  0f8493feffff         je 0x8137e0
// 0081394d  f686d0000000c1       test byte ptr [esi + 0xd0], 0xc1
// 00813954  0f8586feffff         jne 0x8137e0
// 0081395a  8b06                 mov eax, dword ptr [esi]
// 0081395c  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 00813962  8bce                 mov ecx, esi
// 00813964  ffd2                 call edx
// 00813966  85c0                 test eax, eax
// 00813968  0f8472feffff         je 0x8137e0
// 0081396e  687c010000           push 0x17c
// 00813973  e8e8fefdff           call 0x7f3860
// 00813978  83c404               add esp, 4
// 0081397b  89442430             mov dword ptr [esp + 0x30], eax
// 0081397f  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 00813987  85c0                 test eax, eax
// 00813989  7409                 je 0x813994
// 0081398b  8bc8                 mov ecx, eax
// 0081398d  e8fed7ffff           call 0x811190
// 00813992  eb02                 jmp 0x813996
// 00813994  33c0                 xor eax, eax
// 00813996  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0081399a  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 008139a0  6a00                 push 0
// 008139a2  83cdff               or ebp, 0xffffffff
// 008139a5  55                   push ebp
// 008139a6  6a00                 push 0
// 008139a8  6a00                 push 0
// 008139aa  50                   push eax
// 008139ab  896c2450             mov dword ptr [esp + 0x50], ebp
// 008139af  e83c460300           call 0x847ff0
// 008139b4  8b16                 mov edx, dword ptr [esi]
// 008139b6  8b5258               mov edx, dword ptr [edx + 0x58]
// 008139b9  8bf8                 mov edi, eax
// 008139bb  8d442428             lea eax, [esp + 0x28]
// 008139bf  50                   push eax
// 008139c0  8bce                 mov ecx, esi
// 008139c2  ffd2                 call edx
// 008139c4  8bc8                 mov ecx, eax
// 008139c6  c744243c02000000     mov dword ptr [esp + 0x3c], 2
// 008139ce  ff1580de9800         call dword ptr [0x98de80]
// 008139d4  50                   push eax
// 008139d5  8bcf                 mov ecx, edi
// 008139d7  e8542dfeff           call 0x7f6730
// 008139dc  8d4c2428             lea ecx, [esp + 0x28]
// 008139e0  896c243c             mov dword ptr [esp + 0x3c], ebp
// 008139e4  ff15c0de9800         call dword ptr [0x98dec0]
// 008139ea  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 008139f0  83f802               cmp eax, 2
// 008139f3  740f                 je 0x813a04
// 008139f5  83f803               cmp eax, 3
// 008139f8  740a                 je 0x813a04
// 008139fa  83f804               cmp eax, 4
// 008139fd  7405                 je 0x813a04
// 008139ff  83f801               cmp eax, 1
// 00813a02  751e                 jne 0x813a22
// 00813a04  8bce                 mov ecx, esi
// 00813a06  e85521feff           call 0x7f5b60
// 00813a0b  398788000000         cmp dword ptr [edi + 0x88], eax
// 00813a11  740f                 je 0x813a22
// 00813a13  6a01                 push 1
// 00813a15  8bcf                 mov ecx, edi
// 00813a17  898788000000         mov dword ptr [edi + 0x88], eax
// 00813a1d  e89e2cfeff           call 0x7f66c0
// 00813a22  8d86e0000000         lea eax, [esi + 0xe0]
// 00813a28  50                   push eax
// 00813a29  8d4c2424             lea ecx, [esp + 0x24]
// 00813a2d  ff1594de9800         call dword ptr [0x98de94]
// 00813a33  8d4c2420             lea ecx, [esp + 0x20]
// 00813a37  c744243c03000000     mov dword ptr [esp + 0x3c], 3
// 00813a3f  ff15bcdd9800         call dword ptr [0x98ddbc]
// 00813a45  84c0                 test al, al
// 00813a47  7421                 je 0x813a6a
// 00813a49  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00813a4d  e87e060000           call 0x8140d0
// 00813a52  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00813a58  8b10                 mov edx, dword ptr [eax]
// 00813a5a  8d6c2420             lea ebp, [esp + 0x20]
// 00813a5e  55                   push ebp
// 00813a5f  51                   push ecx
// 00813a60  8bc8                 mov ecx, eax
// 00813a62  8b4258               mov eax, dword ptr [edx + 0x58]
// 00813a65  ffd0                 call eax
// 00813a67  83cdff               or ebp, 0xffffffff
// 00813a6a  8d4c2420             lea ecx, [esp + 0x20]
// 00813a6e  ff1580de9800         call dword ptr [0x98de80]
// 00813a74  50                   push eax
// 00813a75  8d8fe0000000         lea ecx, [edi + 0xe0]
// 00813a7b  ff155cde9800         call dword ptr [0x98de5c]
// 00813a81  8b17                 mov edx, dword ptr [edi]
// 00813a83  8b5268               mov edx, dword ptr [edx + 0x68]
// 00813a86  33c0                 xor eax, eax
// 00813a88  396c2424             cmp dword ptr [esp + 0x24], ebp
// 00813a8c  8bcf                 mov ecx, edi
// 00813a8e  0f95c0               setne al
// 00813a91  50                   push eax
// 00813a92  ffd2                 call edx
// 00813a94  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 00813a9a  c1e804               shr eax, 4
// 00813a9d  f7d0                 not eax
// 00813a9f  83e001               and eax, 1
// 00813aa2  3987a0000000         cmp dword ptr [edi + 0xa0], eax
// 00813aa8  740f                 je 0x813ab9
// 00813aaa  6a01                 push 1
// 00813aac  8bcf                 mov ecx, edi
// 00813aae  8987a0000000         mov dword ptr [edi + 0xa0], eax
// 00813ab4  e8072cfeff           call 0x7f66c0
// 00813ab9  8d4c2420             lea ecx, [esp + 0x20]
// 00813abd  89b774010000         mov dword ptr [edi + 0x174], esi
// 00813ac3  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00813ac7  ff15c0de9800         call dword ptr [0x98dec0]
// 00813acd  e90efdffff           jmp 0x8137e0
// 00813ad2  8bce                 mov ecx, esi
// 00813ad4  e80303feff           call 0x7f3ddc
// 00813ad9  8b83fc000000         mov eax, dword ptr [ebx + 0xfc]
// 00813adf  83783c00             cmp dword ptr [eax + 0x3c], 0
// 00813ae3  7479                 je 0x813b5e
// 00813ae5  83bb8c01000000       cmp dword ptr [ebx + 0x18c], 0
// 00813aec  7570                 jne 0x813b5e
// 00813aee  83bb8801000000       cmp dword ptr [ebx + 0x188], 0
// 00813af5  7467                 je 0x813b5e
// 00813af7  687c010000           push 0x17c
// 00813afc  e85ffdfdff           call 0x7f3860
// 00813b01  83c404               add esp, 4
// 00813b04  89442430             mov dword ptr [esp + 0x30], eax
// 00813b08  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 00813b10  85c0                 test eax, eax
// 00813b12  7409                 je 0x813b1d
// 00813b14  8bc8                 mov ecx, eax
// 00813b16  e875d6ffff           call 0x811190
// 00813b1b  eb02                 jmp 0x813b1f
// 00813b1d  33c0                 xor eax, eax
// 00813b1f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00813b23  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 00813b29  6a00                 push 0
// 00813b2b  6aff                 push -1
// 00813b2d  6a00                 push 0
// 00813b2f  68a3230000           push 0x23a3
// 00813b34  50                   push eax
// 00813b35  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 00813b3d  e8ae440300           call 0x847ff0
// 00813b42  8bf0                 mov esi, eax
// 00813b44  6a08                 push 8
// 00813b46  8bce                 mov ecx, esi
// 00813b48  e81325feff           call 0x7f6060
// 00813b4d  8b16                 mov edx, dword ptr [esi]
// 00813b4f  8b4264               mov eax, dword ptr [edx + 0x64]
// 00813b52  6a01                 push 1
// 00813b54  8bce                 mov ecx, esi
// 00813b56  ffd0                 call eax
// 00813b58  899e78010000         mov dword ptr [esi + 0x178], ebx
// 00813b5e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00813b62  64890d00000000       mov dword ptr fs:[0], ecx
// 00813b69  59                   pop ecx
// 00813b6a  5f                   pop edi
// 00813b6b  5e                   pop esi
// 00813b6c  5d                   pop ebp
// 00813b6d  5b                   pop ebx
// 00813b6e  83c42c               add esp, 0x2c
// 00813b71  c20400               ret 4
// copied from an identical function in another client (function ?BuildCustomizePopup@CXTPToolBar@@AAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPToolBar.cpp