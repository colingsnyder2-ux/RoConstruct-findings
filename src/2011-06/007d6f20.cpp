// from server: 100% by auto
// roc 2011-06 007d6f20  unit: RBX::EquationDisplay  size: 378 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d6f20
//
// 007d6f20  51                   push ecx
// 007d6f21  53                   push ebx
// 007d6f22  55                   push ebp
// 007d6f23  56                   push esi
// 007d6f24  8b742414             mov esi, dword ptr [esp + 0x14]
// 007d6f28  57                   push edi
// 007d6f29  8b7e10               mov edi, dword ptr [esi + 0x10]
// 007d6f2c  e8afffffff           call 0x7d6ee0
// 007d6f31  33ed                 xor ebp, ebp
// 007d6f33  396f24               cmp dword ptr [edi + 0x24], ebp
// 007d6f36  740c                 je 0x7d6f44
// 007d6f38  8bc7                 mov eax, edi
// 007d6f3a  e821faffff           call 0x7d6960
// 007d6f3f  396f24               cmp dword ptr [edi + 0x24], ebp
// 007d6f42  75f4                 jne 0x7d6f38
// 007d6f44  8b472c               mov eax, dword ptr [edi + 0x2c]
// 007d6f47  894724               mov dword ptr [edi + 0x24], eax
// 007d6f4a  896f2c               mov dword ptr [edi + 0x2c], ebp
// 007d6f4d  f6460503             test byte ptr [esi + 5], 3
// 007d6f51  740a                 je 0x7d6f5d
// 007d6f53  56                   push esi
// 007d6f54  57                   push edi
// 007d6f55  e876f4ffff           call 0x7d63d0
// 007d6f5a  83c408               add esp, 8
// 007d6f5d  57                   push edi
// 007d6f5e  e8cdfeffff           call 0x7d6e30
// 007d6f63  83c404               add esp, 4
// 007d6f66  396f24               cmp dword ptr [edi + 0x24], ebp
// 007d6f69  7411                 je 0x7d6f7c
// 007d6f6b  eb03                 jmp 0x7d6f70
// 007d6f6d  8d4900               lea ecx, [ecx]
// 007d6f70  8bc7                 mov eax, edi
// 007d6f72  e8e9f9ffff           call 0x7d6960
// 007d6f77  396f24               cmp dword ptr [edi + 0x24], ebp
// 007d6f7a  75f4                 jne 0x7d6f70
// 007d6f7c  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 007d6f7f  894f24               mov dword ptr [edi + 0x24], ecx
// 007d6f82  896f28               mov dword ptr [edi + 0x28], ebp
// 007d6f85  3bcd                 cmp ecx, ebp
// 007d6f87  7413                 je 0x7d6f9c
// 007d6f89  8da42400000000       lea esp, [esp]
// 007d6f90  8bc7                 mov eax, edi
// 007d6f92  e8c9f9ffff           call 0x7d6960
// 007d6f97  396f24               cmp dword ptr [edi + 0x24], ebp
// 007d6f9a  75f4                 jne 0x7d6f90
// 007d6f9c  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 007d6f9f  896c2410             mov dword ptr [esp + 0x10], ebp
// 007d6fa3  8b6b70               mov ebp, dword ptr [ebx + 0x70]
// 007d6fa6  8b7500               mov esi, dword ptr [ebp]
// 007d6fa9  85f6                 test esi, esi
// 007d6fab  747a                 je 0x7d7027
// 007d6fad  8d4900               lea ecx, [ecx]
// 007d6fb0  8a4605               mov al, byte ptr [esi + 5]
// 007d6fb3  a803                 test al, 3
// 007d6fb5  7404                 je 0x7d6fbb
// 007d6fb7  a808                 test al, 8
// 007d6fb9  7404                 je 0x7d6fbf
// 007d6fbb  8bee                 mov ebp, esi
// 007d6fbd  eb61                 jmp 0x7d7020
// 007d6fbf  8b4608               mov eax, dword ptr [esi + 8]
// 007d6fc2  85c0                 test eax, eax
// 007d6fc4  7423                 je 0x7d6fe9
// 007d6fc6  f6400604             test byte ptr [eax + 6], 4
// 007d6fca  751d                 jne 0x7d6fe9
// 007d6fcc  8b542418             mov edx, dword ptr [esp + 0x18]
// 007d6fd0  8b4a10               mov ecx, dword ptr [edx + 0x10]
// 007d6fd3  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 007d6fd9  52                   push edx
// 007d6fda  6a02                 push 2
// 007d6fdc  50                   push eax
// 007d6fdd  e8fe030000           call 0x7d73e0
// 007d6fe2  83c40c               add esp, 0xc
// 007d6fe5  85c0                 test eax, eax
// 007d6fe7  7508                 jne 0x7d6ff1
// 007d6fe9  804e0508             or byte ptr [esi + 5], 8
// 007d6fed  8bee                 mov ebp, esi
// 007d6fef  eb2f                 jmp 0x7d7020
// 007d6ff1  8b4610               mov eax, dword ptr [esi + 0x10]
// 007d6ff4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007d6ff8  804e0508             or byte ptr [esi + 5], 8
// 007d6ffc  8d540118             lea edx, [ecx + eax + 0x18]
// 007d7000  8b06                 mov eax, dword ptr [esi]
// 007d7002  894500               mov dword ptr [ebp], eax
// 007d7005  8b4330               mov eax, dword ptr [ebx + 0x30]
// 007d7008  89542410             mov dword ptr [esp + 0x10], edx
// 007d700c  85c0                 test eax, eax
// 007d700e  7504                 jne 0x7d7014
// 007d7010  8936                 mov dword ptr [esi], esi
// 007d7012  eb09                 jmp 0x7d701d
// 007d7014  8b08                 mov ecx, dword ptr [eax]
// 007d7016  890e                 mov dword ptr [esi], ecx
// 007d7018  8b5330               mov edx, dword ptr [ebx + 0x30]
// 007d701b  8932                 mov dword ptr [edx], esi
// 007d701d  897330               mov dword ptr [ebx + 0x30], esi
// 007d7020  8b7500               mov esi, dword ptr [ebp]
// 007d7023  85f6                 test esi, esi
// 007d7025  7589                 jne 0x7d6fb0
// 007d7027  8b7730               mov esi, dword ptr [edi + 0x30]
// 007d702a  85f6                 test esi, esi
// 007d702c  7423                 je 0x7d7051
// 007d702e  8bff                 mov edi, edi
// 007d7030  8b36                 mov esi, dword ptr [esi]
// 007d7032  8a4605               mov al, byte ptr [esi + 5]
// 007d7035  8a4f14               mov cl, byte ptr [edi + 0x14]
// 007d7038  24f8                 and al, 0xf8
// 007d703a  80e103               and cl, 3
// 007d703d  0ac1                 or al, cl
// 007d703f  56                   push esi
// 007d7040  57                   push edi
// 007d7041  884605               mov byte ptr [esi + 5], al
// 007d7044  e887f3ffff           call 0x7d63d0
// 007d7049  83c408               add esp, 8
// 007d704c  3b7730               cmp esi, dword ptr [edi + 0x30]
// 007d704f  75df                 jne 0x7d7030
// 007d7051  33f6                 xor esi, esi
// 007d7053  397724               cmp dword ptr [edi + 0x24], esi
// 007d7056  740f                 je 0x7d7067
// 007d7058  8bc7                 mov eax, edi
// 007d705a  e801f9ffff           call 0x7d6960
// 007d705f  03f0                 add esi, eax
// 007d7061  837f2400             cmp dword ptr [edi + 0x24], 0
// 007d7065  75f1                 jne 0x7d7058
// 007d7067  8b572c               mov edx, dword ptr [edi + 0x2c]
// 007d706a  52                   push edx
// 007d706b  e8f0f9ffff           call 0x7d6a60
// 007d7070  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 007d7073  80771403             xor byte ptr [edi + 0x14], 3
// 007d7077  83c404               add esp, 4
// 007d707a  2bce                 sub ecx, esi
// 007d707c  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 007d7080  8d471c               lea eax, [edi + 0x1c]
// 007d7083  c7471800000000       mov dword ptr [edi + 0x18], 0
// 007d708a  894720               mov dword ptr [edi + 0x20], eax
// 007d708d  c6471502             mov byte ptr [edi + 0x15], 2
// 007d7091  894f48               mov dword ptr [edi + 0x48], ecx
// 007d7094  5f                   pop edi
// 007d7095  5e                   pop esi
// 007d7096  5d                   pop ebp
// 007d7097  5b                   pop ebx
// 007d7098  59                   pop ecx
// 007d7099  c3                   ret 
// library lua-5.1.4/lgc.c (function _atomic)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
