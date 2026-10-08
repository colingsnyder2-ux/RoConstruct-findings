// from server: 100% by auto
// roc 2012-06 00933030  unit: RBX::BallCellContact  size: 378 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00933030
//
// 00933030  51                   push ecx
// 00933031  53                   push ebx
// 00933032  55                   push ebp
// 00933033  56                   push esi
// 00933034  8b742414             mov esi, dword ptr [esp + 0x14]
// 00933038  57                   push edi
// 00933039  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0093303c  e8afffffff           call 0x932ff0
// 00933041  33ed                 xor ebp, ebp
// 00933043  396f24               cmp dword ptr [edi + 0x24], ebp
// 00933046  740c                 je 0x933054
// 00933048  8bc7                 mov eax, edi
// 0093304a  e811faffff           call 0x932a60
// 0093304f  396f24               cmp dword ptr [edi + 0x24], ebp
// 00933052  75f4                 jne 0x933048
// 00933054  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00933057  894724               mov dword ptr [edi + 0x24], eax
// 0093305a  896f2c               mov dword ptr [edi + 0x2c], ebp
// 0093305d  f6460503             test byte ptr [esi + 5], 3
// 00933061  740a                 je 0x93306d
// 00933063  56                   push esi
// 00933064  57                   push edi
// 00933065  e866f4ffff           call 0x9324d0
// 0093306a  83c408               add esp, 8
// 0093306d  57                   push edi
// 0093306e  e8cdfeffff           call 0x932f40
// 00933073  83c404               add esp, 4
// 00933076  396f24               cmp dword ptr [edi + 0x24], ebp
// 00933079  7411                 je 0x93308c
// 0093307b  eb03                 jmp 0x933080
// 0093307d  8d4900               lea ecx, [ecx]
// 00933080  8bc7                 mov eax, edi
// 00933082  e8d9f9ffff           call 0x932a60
// 00933087  396f24               cmp dword ptr [edi + 0x24], ebp
// 0093308a  75f4                 jne 0x933080
// 0093308c  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0093308f  894f24               mov dword ptr [edi + 0x24], ecx
// 00933092  896f28               mov dword ptr [edi + 0x28], ebp
// 00933095  3bcd                 cmp ecx, ebp
// 00933097  7413                 je 0x9330ac
// 00933099  8da42400000000       lea esp, [esp]
// 009330a0  8bc7                 mov eax, edi
// 009330a2  e8b9f9ffff           call 0x932a60
// 009330a7  396f24               cmp dword ptr [edi + 0x24], ebp
// 009330aa  75f4                 jne 0x9330a0
// 009330ac  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 009330af  896c2410             mov dword ptr [esp + 0x10], ebp
// 009330b3  8b6b70               mov ebp, dword ptr [ebx + 0x70]
// 009330b6  8b7500               mov esi, dword ptr [ebp]
// 009330b9  85f6                 test esi, esi
// 009330bb  747a                 je 0x933137
// 009330bd  8d4900               lea ecx, [ecx]
// 009330c0  8a4605               mov al, byte ptr [esi + 5]
// 009330c3  a803                 test al, 3
// 009330c5  7404                 je 0x9330cb
// 009330c7  a808                 test al, 8
// 009330c9  7404                 je 0x9330cf
// 009330cb  8bee                 mov ebp, esi
// 009330cd  eb61                 jmp 0x933130
// 009330cf  8b4608               mov eax, dword ptr [esi + 8]
// 009330d2  85c0                 test eax, eax
// 009330d4  7423                 je 0x9330f9
// 009330d6  f6400604             test byte ptr [eax + 6], 4
// 009330da  751d                 jne 0x9330f9
// 009330dc  8b542418             mov edx, dword ptr [esp + 0x18]
// 009330e0  8b4a10               mov ecx, dword ptr [edx + 0x10]
// 009330e3  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 009330e9  52                   push edx
// 009330ea  6a02                 push 2
// 009330ec  50                   push eax
// 009330ed  e8fe030000           call 0x9334f0
// 009330f2  83c40c               add esp, 0xc
// 009330f5  85c0                 test eax, eax
// 009330f7  7508                 jne 0x933101
// 009330f9  804e0508             or byte ptr [esi + 5], 8
// 009330fd  8bee                 mov ebp, esi
// 009330ff  eb2f                 jmp 0x933130
// 00933101  8b4610               mov eax, dword ptr [esi + 0x10]
// 00933104  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00933108  804e0508             or byte ptr [esi + 5], 8
// 0093310c  8d540118             lea edx, [ecx + eax + 0x18]
// 00933110  8b06                 mov eax, dword ptr [esi]
// 00933112  894500               mov dword ptr [ebp], eax
// 00933115  8b4330               mov eax, dword ptr [ebx + 0x30]
// 00933118  89542410             mov dword ptr [esp + 0x10], edx
// 0093311c  85c0                 test eax, eax
// 0093311e  7504                 jne 0x933124
// 00933120  8936                 mov dword ptr [esi], esi
// 00933122  eb09                 jmp 0x93312d
// 00933124  8b08                 mov ecx, dword ptr [eax]
// 00933126  890e                 mov dword ptr [esi], ecx
// 00933128  8b5330               mov edx, dword ptr [ebx + 0x30]
// 0093312b  8932                 mov dword ptr [edx], esi
// 0093312d  897330               mov dword ptr [ebx + 0x30], esi
// 00933130  8b7500               mov esi, dword ptr [ebp]
// 00933133  85f6                 test esi, esi
// 00933135  7589                 jne 0x9330c0
// 00933137  8b7730               mov esi, dword ptr [edi + 0x30]
// 0093313a  85f6                 test esi, esi
// 0093313c  7423                 je 0x933161
// 0093313e  8bff                 mov edi, edi
// 00933140  8b36                 mov esi, dword ptr [esi]
// 00933142  8a4605               mov al, byte ptr [esi + 5]
// 00933145  8a4f14               mov cl, byte ptr [edi + 0x14]
// 00933148  24f8                 and al, 0xf8
// 0093314a  80e103               and cl, 3
// 0093314d  0ac1                 or al, cl
// 0093314f  56                   push esi
// 00933150  57                   push edi
// 00933151  884605               mov byte ptr [esi + 5], al
// 00933154  e877f3ffff           call 0x9324d0
// 00933159  83c408               add esp, 8
// 0093315c  3b7730               cmp esi, dword ptr [edi + 0x30]
// 0093315f  75df                 jne 0x933140
// 00933161  33f6                 xor esi, esi
// 00933163  397724               cmp dword ptr [edi + 0x24], esi
// 00933166  740f                 je 0x933177
// 00933168  8bc7                 mov eax, edi
// 0093316a  e8f1f8ffff           call 0x932a60
// 0093316f  03f0                 add esi, eax
// 00933171  837f2400             cmp dword ptr [edi + 0x24], 0
// 00933175  75f1                 jne 0x933168
// 00933177  8b572c               mov edx, dword ptr [edi + 0x2c]
// 0093317a  52                   push edx
// 0093317b  e8e0f9ffff           call 0x932b60
// 00933180  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00933183  80771403             xor byte ptr [edi + 0x14], 3
// 00933187  83c404               add esp, 4
// 0093318a  2bce                 sub ecx, esi
// 0093318c  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00933190  8d471c               lea eax, [edi + 0x1c]
// 00933193  c7471800000000       mov dword ptr [edi + 0x18], 0
// 0093319a  894720               mov dword ptr [edi + 0x20], eax
// 0093319d  c6471502             mov byte ptr [edi + 0x15], 2
// 009331a1  894f48               mov dword ptr [edi + 0x48], ecx
// 009331a4  5f                   pop edi
// 009331a5  5e                   pop esi
// 009331a6  5d                   pop ebp
// 009331a7  5b                   pop ebx
// 009331a8  59                   pop ecx
// 009331a9  c3                   ret 
// library lua-5.1.4/lgc.c (function _atomic)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
