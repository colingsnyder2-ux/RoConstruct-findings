// from server: 100% by auto
// roc 2009-06 006e9940  unit: RBX::PartDropTool  size: 378 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e9940
//
// 006e9940  51                   push ecx
// 006e9941  53                   push ebx
// 006e9942  55                   push ebp
// 006e9943  56                   push esi
// 006e9944  8b742414             mov esi, dword ptr [esp + 0x14]
// 006e9948  57                   push edi
// 006e9949  8b7e10               mov edi, dword ptr [esi + 0x10]
// 006e994c  e8afffffff           call 0x6e9900
// 006e9951  33ed                 xor ebp, ebp
// 006e9953  396f24               cmp dword ptr [edi + 0x24], ebp
// 006e9956  740c                 je 0x6e9964
// 006e9958  8bc7                 mov eax, edi
// 006e995a  e831faffff           call 0x6e9390
// 006e995f  396f24               cmp dword ptr [edi + 0x24], ebp
// 006e9962  75f4                 jne 0x6e9958
// 006e9964  8b472c               mov eax, dword ptr [edi + 0x2c]
// 006e9967  894724               mov dword ptr [edi + 0x24], eax
// 006e996a  896f2c               mov dword ptr [edi + 0x2c], ebp
// 006e996d  f6460503             test byte ptr [esi + 5], 3
// 006e9971  740a                 je 0x6e997d
// 006e9973  56                   push esi
// 006e9974  57                   push edi
// 006e9975  e886f4ffff           call 0x6e8e00
// 006e997a  83c408               add esp, 8
// 006e997d  57                   push edi
// 006e997e  e8cdfeffff           call 0x6e9850
// 006e9983  83c404               add esp, 4
// 006e9986  396f24               cmp dword ptr [edi + 0x24], ebp
// 006e9989  7411                 je 0x6e999c
// 006e998b  eb03                 jmp 0x6e9990
// 006e998d  8d4900               lea ecx, [ecx]
// 006e9990  8bc7                 mov eax, edi
// 006e9992  e8f9f9ffff           call 0x6e9390
// 006e9997  396f24               cmp dword ptr [edi + 0x24], ebp
// 006e999a  75f4                 jne 0x6e9990
// 006e999c  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 006e999f  894f24               mov dword ptr [edi + 0x24], ecx
// 006e99a2  896f28               mov dword ptr [edi + 0x28], ebp
// 006e99a5  3bcd                 cmp ecx, ebp
// 006e99a7  7413                 je 0x6e99bc
// 006e99a9  8da42400000000       lea esp, [esp]
// 006e99b0  8bc7                 mov eax, edi
// 006e99b2  e8d9f9ffff           call 0x6e9390
// 006e99b7  396f24               cmp dword ptr [edi + 0x24], ebp
// 006e99ba  75f4                 jne 0x6e99b0
// 006e99bc  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 006e99bf  896c2410             mov dword ptr [esp + 0x10], ebp
// 006e99c3  8b6b70               mov ebp, dword ptr [ebx + 0x70]
// 006e99c6  8b7500               mov esi, dword ptr [ebp]
// 006e99c9  85f6                 test esi, esi
// 006e99cb  747a                 je 0x6e9a47
// 006e99cd  8d4900               lea ecx, [ecx]
// 006e99d0  8a4605               mov al, byte ptr [esi + 5]
// 006e99d3  a803                 test al, 3
// 006e99d5  7404                 je 0x6e99db
// 006e99d7  a808                 test al, 8
// 006e99d9  7404                 je 0x6e99df
// 006e99db  8bee                 mov ebp, esi
// 006e99dd  eb61                 jmp 0x6e9a40
// 006e99df  8b4608               mov eax, dword ptr [esi + 8]
// 006e99e2  85c0                 test eax, eax
// 006e99e4  7423                 je 0x6e9a09
// 006e99e6  f6400604             test byte ptr [eax + 6], 4
// 006e99ea  751d                 jne 0x6e9a09
// 006e99ec  8b542418             mov edx, dword ptr [esp + 0x18]
// 006e99f0  8b4a10               mov ecx, dword ptr [edx + 0x10]
// 006e99f3  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 006e99f9  52                   push edx
// 006e99fa  6a02                 push 2
// 006e99fc  50                   push eax
// 006e99fd  e8fe030000           call 0x6e9e00
// 006e9a02  83c40c               add esp, 0xc
// 006e9a05  85c0                 test eax, eax
// 006e9a07  7508                 jne 0x6e9a11
// 006e9a09  804e0508             or byte ptr [esi + 5], 8
// 006e9a0d  8bee                 mov ebp, esi
// 006e9a0f  eb2f                 jmp 0x6e9a40
// 006e9a11  8b4610               mov eax, dword ptr [esi + 0x10]
// 006e9a14  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e9a18  804e0508             or byte ptr [esi + 5], 8
// 006e9a1c  8d540118             lea edx, [ecx + eax + 0x18]
// 006e9a20  8b06                 mov eax, dword ptr [esi]
// 006e9a22  894500               mov dword ptr [ebp], eax
// 006e9a25  8b4330               mov eax, dword ptr [ebx + 0x30]
// 006e9a28  89542410             mov dword ptr [esp + 0x10], edx
// 006e9a2c  85c0                 test eax, eax
// 006e9a2e  7504                 jne 0x6e9a34
// 006e9a30  8936                 mov dword ptr [esi], esi
// 006e9a32  eb09                 jmp 0x6e9a3d
// 006e9a34  8b08                 mov ecx, dword ptr [eax]
// 006e9a36  890e                 mov dword ptr [esi], ecx
// 006e9a38  8b5330               mov edx, dword ptr [ebx + 0x30]
// 006e9a3b  8932                 mov dword ptr [edx], esi
// 006e9a3d  897330               mov dword ptr [ebx + 0x30], esi
// 006e9a40  8b7500               mov esi, dword ptr [ebp]
// 006e9a43  85f6                 test esi, esi
// 006e9a45  7589                 jne 0x6e99d0
// 006e9a47  8b7730               mov esi, dword ptr [edi + 0x30]
// 006e9a4a  85f6                 test esi, esi
// 006e9a4c  7423                 je 0x6e9a71
// 006e9a4e  8bff                 mov edi, edi
// 006e9a50  8b36                 mov esi, dword ptr [esi]
// 006e9a52  8a4605               mov al, byte ptr [esi + 5]
// 006e9a55  8a4f14               mov cl, byte ptr [edi + 0x14]
// 006e9a58  24f8                 and al, 0xf8
// 006e9a5a  80e103               and cl, 3
// 006e9a5d  0ac1                 or al, cl
// 006e9a5f  56                   push esi
// 006e9a60  57                   push edi
// 006e9a61  884605               mov byte ptr [esi + 5], al
// 006e9a64  e897f3ffff           call 0x6e8e00
// 006e9a69  83c408               add esp, 8
// 006e9a6c  3b7730               cmp esi, dword ptr [edi + 0x30]
// 006e9a6f  75df                 jne 0x6e9a50
// 006e9a71  33f6                 xor esi, esi
// 006e9a73  397724               cmp dword ptr [edi + 0x24], esi
// 006e9a76  740f                 je 0x6e9a87
// 006e9a78  8bc7                 mov eax, edi
// 006e9a7a  e811f9ffff           call 0x6e9390
// 006e9a7f  03f0                 add esi, eax
// 006e9a81  837f2400             cmp dword ptr [edi + 0x24], 0
// 006e9a85  75f1                 jne 0x6e9a78
// 006e9a87  8b572c               mov edx, dword ptr [edi + 0x2c]
// 006e9a8a  52                   push edx
// 006e9a8b  e800faffff           call 0x6e9490
// 006e9a90  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 006e9a93  80771403             xor byte ptr [edi + 0x14], 3
// 006e9a97  83c404               add esp, 4
// 006e9a9a  2bce                 sub ecx, esi
// 006e9a9c  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 006e9aa0  8d471c               lea eax, [edi + 0x1c]
// 006e9aa3  c7471800000000       mov dword ptr [edi + 0x18], 0
// 006e9aaa  894720               mov dword ptr [edi + 0x20], eax
// 006e9aad  c6471502             mov byte ptr [edi + 0x15], 2
// 006e9ab1  894f48               mov dword ptr [edi + 0x48], ecx
// 006e9ab4  5f                   pop edi
// 006e9ab5  5e                   pop esi
// 006e9ab6  5d                   pop ebp
// 006e9ab7  5b                   pop ebx
// 006e9ab8  59                   pop ecx
// 006e9ab9  c3                   ret 
// library lua-5.1.4/lgc.c (function _atomic)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
