// from server: 100% by auto
// roc 2007-08 0060fb80  unit: RBX::Ball  size: 378 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060fb80
//
// 0060fb80  51                   push ecx
// 0060fb81  53                   push ebx
// 0060fb82  55                   push ebp
// 0060fb83  56                   push esi
// 0060fb84  8b742414             mov esi, dword ptr [esp + 0x14]
// 0060fb88  57                   push edi
// 0060fb89  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0060fb8c  e8afffffff           call 0x60fb40
// 0060fb91  33ed                 xor ebp, ebp
// 0060fb93  396f24               cmp dword ptr [edi + 0x24], ebp
// 0060fb96  740c                 je 0x60fba4
// 0060fb98  8bc7                 mov eax, edi
// 0060fb9a  e821faffff           call 0x60f5c0
// 0060fb9f  396f24               cmp dword ptr [edi + 0x24], ebp
// 0060fba2  75f4                 jne 0x60fb98
// 0060fba4  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0060fba7  894724               mov dword ptr [edi + 0x24], eax
// 0060fbaa  896f2c               mov dword ptr [edi + 0x2c], ebp
// 0060fbad  f6460503             test byte ptr [esi + 5], 3
// 0060fbb1  740a                 je 0x60fbbd
// 0060fbb3  56                   push esi
// 0060fbb4  57                   push edi
// 0060fbb5  e856f4ffff           call 0x60f010
// 0060fbba  83c408               add esp, 8
// 0060fbbd  57                   push edi
// 0060fbbe  e8cdfeffff           call 0x60fa90
// 0060fbc3  83c404               add esp, 4
// 0060fbc6  396f24               cmp dword ptr [edi + 0x24], ebp
// 0060fbc9  7411                 je 0x60fbdc
// 0060fbcb  eb03                 jmp 0x60fbd0
// 0060fbcd  8d4900               lea ecx, [ecx]
// 0060fbd0  8bc7                 mov eax, edi
// 0060fbd2  e8e9f9ffff           call 0x60f5c0
// 0060fbd7  396f24               cmp dword ptr [edi + 0x24], ebp
// 0060fbda  75f4                 jne 0x60fbd0
// 0060fbdc  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0060fbdf  3bcd                 cmp ecx, ebp
// 0060fbe1  894f24               mov dword ptr [edi + 0x24], ecx
// 0060fbe4  896f28               mov dword ptr [edi + 0x28], ebp
// 0060fbe7  7413                 je 0x60fbfc
// 0060fbe9  8da42400000000       lea esp, [esp]
// 0060fbf0  8bc7                 mov eax, edi
// 0060fbf2  e8c9f9ffff           call 0x60f5c0
// 0060fbf7  396f24               cmp dword ptr [edi + 0x24], ebp
// 0060fbfa  75f4                 jne 0x60fbf0
// 0060fbfc  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0060fbff  896c2410             mov dword ptr [esp + 0x10], ebp
// 0060fc03  8b6b70               mov ebp, dword ptr [ebx + 0x70]
// 0060fc06  8b7500               mov esi, dword ptr [ebp]
// 0060fc09  85f6                 test esi, esi
// 0060fc0b  747a                 je 0x60fc87
// 0060fc0d  8d4900               lea ecx, [ecx]
// 0060fc10  8a4605               mov al, byte ptr [esi + 5]
// 0060fc13  a803                 test al, 3
// 0060fc15  7404                 je 0x60fc1b
// 0060fc17  a808                 test al, 8
// 0060fc19  7404                 je 0x60fc1f
// 0060fc1b  8bee                 mov ebp, esi
// 0060fc1d  eb61                 jmp 0x60fc80
// 0060fc1f  8b4608               mov eax, dword ptr [esi + 8]
// 0060fc22  85c0                 test eax, eax
// 0060fc24  7423                 je 0x60fc49
// 0060fc26  f6400604             test byte ptr [eax + 6], 4
// 0060fc2a  751d                 jne 0x60fc49
// 0060fc2c  8b542418             mov edx, dword ptr [esp + 0x18]
// 0060fc30  8b4a10               mov ecx, dword ptr [edx + 0x10]
// 0060fc33  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 0060fc39  52                   push edx
// 0060fc3a  6a02                 push 2
// 0060fc3c  50                   push eax
// 0060fc3d  e8fe030000           call 0x610040
// 0060fc42  83c40c               add esp, 0xc
// 0060fc45  85c0                 test eax, eax
// 0060fc47  7508                 jne 0x60fc51
// 0060fc49  804e0508             or byte ptr [esi + 5], 8
// 0060fc4d  8bee                 mov ebp, esi
// 0060fc4f  eb2f                 jmp 0x60fc80
// 0060fc51  8b4610               mov eax, dword ptr [esi + 0x10]
// 0060fc54  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0060fc58  804e0508             or byte ptr [esi + 5], 8
// 0060fc5c  8d540118             lea edx, [ecx + eax + 0x18]
// 0060fc60  8b06                 mov eax, dword ptr [esi]
// 0060fc62  894500               mov dword ptr [ebp], eax
// 0060fc65  8b4330               mov eax, dword ptr [ebx + 0x30]
// 0060fc68  85c0                 test eax, eax
// 0060fc6a  89542410             mov dword ptr [esp + 0x10], edx
// 0060fc6e  7504                 jne 0x60fc74
// 0060fc70  8936                 mov dword ptr [esi], esi
// 0060fc72  eb09                 jmp 0x60fc7d
// 0060fc74  8b08                 mov ecx, dword ptr [eax]
// 0060fc76  890e                 mov dword ptr [esi], ecx
// 0060fc78  8b5330               mov edx, dword ptr [ebx + 0x30]
// 0060fc7b  8932                 mov dword ptr [edx], esi
// 0060fc7d  897330               mov dword ptr [ebx + 0x30], esi
// 0060fc80  8b7500               mov esi, dword ptr [ebp]
// 0060fc83  85f6                 test esi, esi
// 0060fc85  7589                 jne 0x60fc10
// 0060fc87  8b7730               mov esi, dword ptr [edi + 0x30]
// 0060fc8a  85f6                 test esi, esi
// 0060fc8c  7423                 je 0x60fcb1
// 0060fc8e  8bff                 mov edi, edi
// 0060fc90  8b36                 mov esi, dword ptr [esi]
// 0060fc92  8a4605               mov al, byte ptr [esi + 5]
// 0060fc95  8a4f14               mov cl, byte ptr [edi + 0x14]
// 0060fc98  24f8                 and al, 0xf8
// 0060fc9a  80e103               and cl, 3
// 0060fc9d  0ac1                 or al, cl
// 0060fc9f  56                   push esi
// 0060fca0  57                   push edi
// 0060fca1  884605               mov byte ptr [esi + 5], al
// 0060fca4  e867f3ffff           call 0x60f010
// 0060fca9  83c408               add esp, 8
// 0060fcac  3b7730               cmp esi, dword ptr [edi + 0x30]
// 0060fcaf  75df                 jne 0x60fc90
// 0060fcb1  33f6                 xor esi, esi
// 0060fcb3  397724               cmp dword ptr [edi + 0x24], esi
// 0060fcb6  740f                 je 0x60fcc7
// 0060fcb8  8bc7                 mov eax, edi
// 0060fcba  e801f9ffff           call 0x60f5c0
// 0060fcbf  03f0                 add esi, eax
// 0060fcc1  837f2400             cmp dword ptr [edi + 0x24], 0
// 0060fcc5  75f1                 jne 0x60fcb8
// 0060fcc7  8b572c               mov edx, dword ptr [edi + 0x2c]
// 0060fcca  52                   push edx
// 0060fccb  e8f0f9ffff           call 0x60f6c0
// 0060fcd0  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0060fcd3  80771403             xor byte ptr [edi + 0x14], 3
// 0060fcd7  83c404               add esp, 4
// 0060fcda  2bce                 sub ecx, esi
// 0060fcdc  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0060fce0  8d471c               lea eax, [edi + 0x1c]
// 0060fce3  c7471800000000       mov dword ptr [edi + 0x18], 0
// 0060fcea  894720               mov dword ptr [edi + 0x20], eax
// 0060fced  c6471502             mov byte ptr [edi + 0x15], 2
// 0060fcf1  894f48               mov dword ptr [edi + 0x48], ecx
// 0060fcf4  5f                   pop edi
// 0060fcf5  5e                   pop esi
// 0060fcf6  5d                   pop ebp
// 0060fcf7  5b                   pop ebx
// 0060fcf8  59                   pop ecx
// 0060fcf9  c3                   ret 
// library lua-5.1.4/lgc.c (function _atomic)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
