// from server: 100% by auto
// roc 2010-06 0077abe0  unit: RBX::PartDropTool  size: 378 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077abe0
//
// 0077abe0  51                   push ecx
// 0077abe1  53                   push ebx
// 0077abe2  55                   push ebp
// 0077abe3  56                   push esi
// 0077abe4  8b742414             mov esi, dword ptr [esp + 0x14]
// 0077abe8  57                   push edi
// 0077abe9  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0077abec  e8afffffff           call 0x77aba0
// 0077abf1  33ed                 xor ebp, ebp
// 0077abf3  396f24               cmp dword ptr [edi + 0x24], ebp
// 0077abf6  740c                 je 0x77ac04
// 0077abf8  8bc7                 mov eax, edi
// 0077abfa  e831faffff           call 0x77a630
// 0077abff  396f24               cmp dword ptr [edi + 0x24], ebp
// 0077ac02  75f4                 jne 0x77abf8
// 0077ac04  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0077ac07  894724               mov dword ptr [edi + 0x24], eax
// 0077ac0a  896f2c               mov dword ptr [edi + 0x2c], ebp
// 0077ac0d  f6460503             test byte ptr [esi + 5], 3
// 0077ac11  740a                 je 0x77ac1d
// 0077ac13  56                   push esi
// 0077ac14  57                   push edi
// 0077ac15  e886f4ffff           call 0x77a0a0
// 0077ac1a  83c408               add esp, 8
// 0077ac1d  57                   push edi
// 0077ac1e  e8cdfeffff           call 0x77aaf0
// 0077ac23  83c404               add esp, 4
// 0077ac26  396f24               cmp dword ptr [edi + 0x24], ebp
// 0077ac29  7411                 je 0x77ac3c
// 0077ac2b  eb03                 jmp 0x77ac30
// 0077ac2d  8d4900               lea ecx, [ecx]
// 0077ac30  8bc7                 mov eax, edi
// 0077ac32  e8f9f9ffff           call 0x77a630
// 0077ac37  396f24               cmp dword ptr [edi + 0x24], ebp
// 0077ac3a  75f4                 jne 0x77ac30
// 0077ac3c  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0077ac3f  894f24               mov dword ptr [edi + 0x24], ecx
// 0077ac42  896f28               mov dword ptr [edi + 0x28], ebp
// 0077ac45  3bcd                 cmp ecx, ebp
// 0077ac47  7413                 je 0x77ac5c
// 0077ac49  8da42400000000       lea esp, [esp]
// 0077ac50  8bc7                 mov eax, edi
// 0077ac52  e8d9f9ffff           call 0x77a630
// 0077ac57  396f24               cmp dword ptr [edi + 0x24], ebp
// 0077ac5a  75f4                 jne 0x77ac50
// 0077ac5c  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0077ac5f  896c2410             mov dword ptr [esp + 0x10], ebp
// 0077ac63  8b6b70               mov ebp, dword ptr [ebx + 0x70]
// 0077ac66  8b7500               mov esi, dword ptr [ebp]
// 0077ac69  85f6                 test esi, esi
// 0077ac6b  747a                 je 0x77ace7
// 0077ac6d  8d4900               lea ecx, [ecx]
// 0077ac70  8a4605               mov al, byte ptr [esi + 5]
// 0077ac73  a803                 test al, 3
// 0077ac75  7404                 je 0x77ac7b
// 0077ac77  a808                 test al, 8
// 0077ac79  7404                 je 0x77ac7f
// 0077ac7b  8bee                 mov ebp, esi
// 0077ac7d  eb61                 jmp 0x77ace0
// 0077ac7f  8b4608               mov eax, dword ptr [esi + 8]
// 0077ac82  85c0                 test eax, eax
// 0077ac84  7423                 je 0x77aca9
// 0077ac86  f6400604             test byte ptr [eax + 6], 4
// 0077ac8a  751d                 jne 0x77aca9
// 0077ac8c  8b542418             mov edx, dword ptr [esp + 0x18]
// 0077ac90  8b4a10               mov ecx, dword ptr [edx + 0x10]
// 0077ac93  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 0077ac99  52                   push edx
// 0077ac9a  6a02                 push 2
// 0077ac9c  50                   push eax
// 0077ac9d  e8fe030000           call 0x77b0a0
// 0077aca2  83c40c               add esp, 0xc
// 0077aca5  85c0                 test eax, eax
// 0077aca7  7508                 jne 0x77acb1
// 0077aca9  804e0508             or byte ptr [esi + 5], 8
// 0077acad  8bee                 mov ebp, esi
// 0077acaf  eb2f                 jmp 0x77ace0
// 0077acb1  8b4610               mov eax, dword ptr [esi + 0x10]
// 0077acb4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0077acb8  804e0508             or byte ptr [esi + 5], 8
// 0077acbc  8d540118             lea edx, [ecx + eax + 0x18]
// 0077acc0  8b06                 mov eax, dword ptr [esi]
// 0077acc2  894500               mov dword ptr [ebp], eax
// 0077acc5  8b4330               mov eax, dword ptr [ebx + 0x30]
// 0077acc8  89542410             mov dword ptr [esp + 0x10], edx
// 0077accc  85c0                 test eax, eax
// 0077acce  7504                 jne 0x77acd4
// 0077acd0  8936                 mov dword ptr [esi], esi
// 0077acd2  eb09                 jmp 0x77acdd
// 0077acd4  8b08                 mov ecx, dword ptr [eax]
// 0077acd6  890e                 mov dword ptr [esi], ecx
// 0077acd8  8b5330               mov edx, dword ptr [ebx + 0x30]
// 0077acdb  8932                 mov dword ptr [edx], esi
// 0077acdd  897330               mov dword ptr [ebx + 0x30], esi
// 0077ace0  8b7500               mov esi, dword ptr [ebp]
// 0077ace3  85f6                 test esi, esi
// 0077ace5  7589                 jne 0x77ac70
// 0077ace7  8b7730               mov esi, dword ptr [edi + 0x30]
// 0077acea  85f6                 test esi, esi
// 0077acec  7423                 je 0x77ad11
// 0077acee  8bff                 mov edi, edi
// 0077acf0  8b36                 mov esi, dword ptr [esi]
// 0077acf2  8a4605               mov al, byte ptr [esi + 5]
// 0077acf5  8a4f14               mov cl, byte ptr [edi + 0x14]
// 0077acf8  24f8                 and al, 0xf8
// 0077acfa  80e103               and cl, 3
// 0077acfd  0ac1                 or al, cl
// 0077acff  56                   push esi
// 0077ad00  57                   push edi
// 0077ad01  884605               mov byte ptr [esi + 5], al
// 0077ad04  e897f3ffff           call 0x77a0a0
// 0077ad09  83c408               add esp, 8
// 0077ad0c  3b7730               cmp esi, dword ptr [edi + 0x30]
// 0077ad0f  75df                 jne 0x77acf0
// 0077ad11  33f6                 xor esi, esi
// 0077ad13  397724               cmp dword ptr [edi + 0x24], esi
// 0077ad16  740f                 je 0x77ad27
// 0077ad18  8bc7                 mov eax, edi
// 0077ad1a  e811f9ffff           call 0x77a630
// 0077ad1f  03f0                 add esi, eax
// 0077ad21  837f2400             cmp dword ptr [edi + 0x24], 0
// 0077ad25  75f1                 jne 0x77ad18
// 0077ad27  8b572c               mov edx, dword ptr [edi + 0x2c]
// 0077ad2a  52                   push edx
// 0077ad2b  e800faffff           call 0x77a730
// 0077ad30  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0077ad33  80771403             xor byte ptr [edi + 0x14], 3
// 0077ad37  83c404               add esp, 4
// 0077ad3a  2bce                 sub ecx, esi
// 0077ad3c  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0077ad40  8d471c               lea eax, [edi + 0x1c]
// 0077ad43  c7471800000000       mov dword ptr [edi + 0x18], 0
// 0077ad4a  894720               mov dword ptr [edi + 0x20], eax
// 0077ad4d  c6471502             mov byte ptr [edi + 0x15], 2
// 0077ad51  894f48               mov dword ptr [edi + 0x48], ecx
// 0077ad54  5f                   pop edi
// 0077ad55  5e                   pop esi
// 0077ad56  5d                   pop ebp
// 0077ad57  5b                   pop ebx
// 0077ad58  59                   pop ecx
// 0077ad59  c3                   ret 
// library lua-5.1.4/lgc.c (function _atomic)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
