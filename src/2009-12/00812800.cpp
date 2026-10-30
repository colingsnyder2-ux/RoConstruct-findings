// roc 2009-12 00812800  unit: CXTPToolBar  size: 858 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00812800
//
// 00812800  6aff                 push -1
// 00812802  6894a29500           push 0x95a294
// 00812807  64a100000000         mov eax, dword ptr fs:[0]
// 0081280d  50                   push eax
// 0081280e  83ec50               sub esp, 0x50
// 00812811  53                   push ebx
// 00812812  55                   push ebp
// 00812813  56                   push esi
// 00812814  57                   push edi
// 00812815  a10052b600           mov eax, dword ptr [0xb65200]
// 0081281a  33c4                 xor eax, esp
// 0081281c  50                   push eax
// 0081281d  8d442464             lea eax, [esp + 0x64]
// 00812821  64a300000000         mov dword ptr fs:[0], eax
// 00812827  8bf1                 mov esi, ecx
// 00812829  56                   push esi
// 0081282a  8d4c2454             lea ecx, [esp + 0x54]
// 0081282e  e8a31efeff           call 0x7f46d6
// 00812833  33ed                 xor ebp, ebp
// 00812835  8bce                 mov ecx, esi
// 00812837  896c246c             mov dword ptr [esp + 0x6c], ebp
// 0081283b  e8501dffff           call 0x804590
// 00812840  8b10                 mov edx, dword ptr [eax]
// 00812842  55                   push ebp
// 00812843  8bc8                 mov ecx, eax
// 00812845  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 0081284b  56                   push esi
// 0081284c  ffd0                 call eax
// 0081284e  50                   push eax
// 0081284f  8d4c2454             lea ecx, [esp + 0x54]
// 00812853  51                   push ecx
// 00812854  8d4c2448             lea ecx, [esp + 0x48]
// 00812858  e8038e0300           call 0x84b660
// 0081285d  8bce                 mov ecx, esi
// 0081285f  c644246c01           mov byte ptr [esp + 0x6c], 1
// 00812864  e8271dffff           call 0x804590
// 00812869  8b10                 mov edx, dword ptr [eax]
// 0081286b  8b9288000000         mov edx, dword ptr [edx + 0x88]
// 00812871  55                   push ebp
// 00812872  56                   push esi
// 00812873  8d4c2458             lea ecx, [esp + 0x58]
// 00812877  51                   push ecx
// 00812878  8d4c2424             lea ecx, [esp + 0x24]
// 0081287c  51                   push ecx
// 0081287d  8bc8                 mov ecx, eax
// 0081287f  ffd2                 call edx
// 00812881  8b7804               mov edi, dword ptr [eax + 4]
// 00812884  8b06                 mov eax, dword ptr [esi]
// 00812886  8b90b8010000         mov edx, dword ptr [eax + 0x1b8]
// 0081288c  8d4c2420             lea ecx, [esp + 0x20]
// 00812890  51                   push ecx
// 00812891  8bce                 mov ecx, esi
// 00812893  897c2418             mov dword ptr [esp + 0x18], edi
// 00812897  ffd2                 call edx
// 00812899  8b442424             mov eax, dword ptr [esp + 0x24]
// 0081289d  8d4c3801             lea ecx, [eax + edi + 1]
// 008128a1  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 008128a7  33ff                 xor edi, edi
// 008128a9  894c2424             mov dword ptr [esp + 0x24], ecx
// 008128ad  8d5d02               lea ebx, [ebp + 2]
// 008128b0  85c0                 test eax, eax
// 008128b2  0f8487000000         je 0x81293f
// 008128b8  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008128be  68bd230000           push 0x23bd
// 008128c3  e8384a0300           call 0x847300
// 008128c8  8be8                 mov ebp, eax
// 008128ca  85ed                 test ebp, ebp
// 008128cc  7562                 jne 0x812930
// 008128ce  6874010000           push 0x174
// 008128d3  e8880ffeff           call 0x7f3860
// 008128d8  8be8                 mov ebp, eax
// 008128da  83c404               add esp, 4
// 008128dd  896c2418             mov dword ptr [esp + 0x18], ebp
// 008128e1  885c246c             mov byte ptr [esp + 0x6c], bl
// 008128e5  85ed                 test ebp, ebp
// 008128e7  7421                 je 0x81290a
// 008128e9  8bcd                 mov ecx, ebp
// 008128eb  e870d80700           call 0x890160
// 008128f0  c745004c339f00       mov dword ptr [ebp], 0x9f334c
// 008128f7  c74520ec329f00       mov dword ptr [ebp + 0x20], 0x9f32ec
// 008128fe  c785d40000001a000000 mov dword ptr [ebp + 0xd4], 0x1a
// 00812908  eb02                 jmp 0x81290c
// 0081290a  33ed                 xor ebp, ebp
// 0081290c  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00812912  6a01                 push 1
// 00812914  6aff                 push -1
// 00812916  6856fd9900           push 0x99fd56
// 0081291b  68bd230000           push 0x23bd
// 00812920  55                   push ebp
// 00812921  c684248000000001     mov byte ptr [esp + 0x80], 1
// 00812929  e8c2560300           call 0x847ff0
// 0081292e  8be8                 mov ebp, eax
// 00812930  8b5500               mov edx, dword ptr [ebp]
// 00812933  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 00812939  6a01                 push 1
// 0081293b  8bcd                 mov ecx, ebp
// 0081293d  ffd0                 call eax
// 0081293f  83be9c01000000       cmp dword ptr [esi + 0x19c], 0
// 00812946  7476                 je 0x8129be
// 00812948  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 0081294f  746d                 je 0x8129be
// 00812951  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00812957  68bc230000           push 0x23bc
// 0081295c  e89f490300           call 0x847300
// 00812961  8bf8                 mov edi, eax
// 00812963  85ff                 test edi, edi
// 00812965  7549                 jne 0x8129b0
// 00812967  6888010000           push 0x188
// 0081296c  e8ef0efeff           call 0x7f3860
// 00812971  83c404               add esp, 4
// 00812974  89442418             mov dword ptr [esp + 0x18], eax
// 00812978  c644246c03           mov byte ptr [esp + 0x6c], 3
// 0081297d  85c0                 test eax, eax
// 0081297f  7409                 je 0x81298a
// 00812981  8bc8                 mov ecx, eax
// 00812983  e818e9ffff           call 0x8112a0
// 00812988  eb02                 jmp 0x81298c
// 0081298a  33c0                 xor eax, eax
// 0081298c  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00812992  6a01                 push 1
// 00812994  6aff                 push -1
// 00812996  6856fd9900           push 0x99fd56
// 0081299b  68bc230000           push 0x23bc
// 008129a0  50                   push eax
// 008129a1  c684248000000001     mov byte ptr [esp + 0x80], 1
// 008129a9  e842560300           call 0x847ff0
// 008129ae  8bf8                 mov edi, eax
// 008129b0  8b17                 mov edx, dword ptr [edi]
// 008129b2  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 008129b8  6a01                 push 1
// 008129ba  8bcf                 mov ecx, edi
// 008129bc  ffd0                 call eax
// 008129be  399ef8000000         cmp dword ptr [esi + 0xf8], ebx
// 008129c4  752a                 jne 0x8129f0
// 008129c6  8b16                 mov edx, dword ptr [esi]
// 008129c8  8b82e4010000         mov eax, dword ptr [edx + 0x1e4]
// 008129ce  8bce                 mov ecx, esi
// 008129d0  ffd0                 call eax
// 008129d2  8d4c2420             lea ecx, [esp + 0x20]
// 008129d6  51                   push ecx
// 008129d7  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008129dd  6a00                 push 0
// 008129df  8d542458             lea edx, [esp + 0x58]
// 008129e3  52                   push edx
// 008129e4  8d442424             lea eax, [esp + 0x24]
// 008129e8  50                   push eax
// 008129e9  e8923c0300           call 0x846680
// 008129ee  eb26                 jmp 0x812a16
// 008129f0  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 008129f4  8b442478             mov eax, dword ptr [esp + 0x78]
// 008129f8  6a00                 push 0
// 008129fa  8d4c2424             lea ecx, [esp + 0x24]
// 008129fe  51                   push ecx
// 008129ff  52                   push edx
// 00812a00  50                   push eax
// 00812a01  8d4c2460             lea ecx, [esp + 0x60]
// 00812a05  51                   push ecx
// 00812a06  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00812a0c  8d54242c             lea edx, [esp + 0x2c]
// 00812a10  52                   push edx
// 00812a11  e8aa4f0300           call 0x8479c0
// 00812a16  8b10                 mov edx, dword ptr [eax]
// 00812a18  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00812a1c  8b4004               mov eax, dword ptr [eax + 4]
// 00812a1f  8bda                 mov ebx, edx
// 00812a21  83eb03               sub ebx, 3
// 00812a24  894104               mov dword ptr [ecx + 4], eax
// 00812a27  8911                 mov dword ptr [ecx], edx
// 00812a29  85ed                 test ebp, ebp
// 00812a2b  7454                 je 0x812a81
// 00812a2d  8b5500               mov edx, dword ptr [ebp]
// 00812a30  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 00812a36  6a00                 push 0
// 00812a38  8bcd                 mov ecx, ebp
// 00812a3a  ffd0                 call eax
// 00812a3c  8b5500               mov edx, dword ptr [ebp]
// 00812a3f  8bcb                 mov ecx, ebx
// 00812a41  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 00812a45  83ec10               sub esp, 0x10
// 00812a48  8bc4                 mov eax, esp
// 00812a4a  8908                 mov dword ptr [eax], ecx
// 00812a4c  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 00812a53  b903000000           mov ecx, 3
// 00812a58  894804               mov dword ptr [eax + 4], ecx
// 00812a5b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00812a5f  83c103               add ecx, 3
// 00812a62  895808               mov dword ptr [eax + 8], ebx
// 00812a65  89480c               mov dword ptr [eax + 0xc], ecx
// 00812a68  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00812a6b  8bcd                 mov ecx, ebp
// 00812a6d  ffd0                 call eax
// 00812a6f  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 00812a73  85ff                 test edi, edi
// 00812a75  740a                 je 0x812a81
// 00812a77  c7879400000001000000 mov dword ptr [edi + 0x94], 1
// 00812a81  8bce                 mov ecx, esi
// 00812a83  c744247801000000     mov dword ptr [esp + 0x78], 1
// 00812a8b  e8401affff           call 0x8044d0
// 00812a90  85c0                 test eax, eax
// 00812a92  740a                 je 0x812a9e
// 00812a94  8b4074               mov eax, dword ptr [eax + 0x74]
// 00812a97  8b4838               mov ecx, dword ptr [eax + 0x38]
// 00812a9a  894c2478             mov dword ptr [esp + 0x78], ecx
// 00812a9e  85ff                 test edi, edi
// 00812aa0  7455                 je 0x812af7
// 00812aa2  8beb                 mov ebp, ebx
// 00812aa4  2b6c2414             sub ebp, dword ptr [esp + 0x14]
// 00812aa8  85ed                 test ebp, ebp
// 00812aaa  7e4b                 jle 0x812af7
// 00812aac  837c247800           cmp dword ptr [esp + 0x78], 0
// 00812ab1  7444                 je 0x812af7
// 00812ab3  8b17                 mov edx, dword ptr [edi]
// 00812ab5  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 00812abb  6a00                 push 0
// 00812abd  8bcf                 mov ecx, edi
// 00812abf  c7879400000001000000 mov dword ptr [edi + 0x94], 1
// 00812ac9  ffd0                 call eax
// 00812acb  8b542414             mov edx, dword ptr [esp + 0x14]
// 00812acf  b903000000           mov ecx, 3
// 00812ad4  03d1                 add edx, ecx
// 00812ad6  83ec10               sub esp, 0x10
// 00812ad9  8bc4                 mov eax, esp
// 00812adb  8928                 mov dword ptr [eax], ebp
// 00812add  894804               mov dword ptr [eax + 4], ecx
// 00812ae0  8954244c             mov dword ptr [esp + 0x4c], edx
// 00812ae4  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00812ae8  8b17                 mov edx, dword ptr [edi]
// 00812aea  8b527c               mov edx, dword ptr [edx + 0x7c]
// 00812aed  895808               mov dword ptr [eax + 8], ebx
// 00812af0  89480c               mov dword ptr [eax + 0xc], ecx
// 00812af3  8bcf                 mov ecx, edi
// 00812af5  ffd2                 call edx
// 00812af7  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 00812afd  a801                 test al, 1
// 00812aff  7420                 je 0x812b21
// 00812b01  f644247c40           test byte ptr [esp + 0x7c], 0x40
// 00812b06  7419                 je 0x812b21
// 00812b08  83e0fe               and eax, 0xfffffffe
// 00812b0b  8986e8000000         mov dword ptr [esi + 0xe8], eax
// 00812b11  8b06                 mov eax, dword ptr [esi]
// 00812b13  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 00812b19  6a01                 push 1
// 00812b1b  6a00                 push 0
// 00812b1d  8bce                 mov ecx, esi
// 00812b1f  ffd2                 call edx
// 00812b21  8d4c2440             lea ecx, [esp + 0x40]
// 00812b25  c644246c00           mov byte ptr [esp + 0x6c], 0
// 00812b2a  e8b18b0300           call 0x84b6e0
// 00812b2f  8d4c2450             lea ecx, [esp + 0x50]
// 00812b33  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 00812b3b  e8901bfeff           call 0x7f46d0
// 00812b40  8b442474             mov eax, dword ptr [esp + 0x74]
// 00812b44  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00812b48  64890d00000000       mov dword ptr fs:[0], ecx
// 00812b4f  59                   pop ecx
// 00812b50  5f                   pop edi
// 00812b51  5e                   pop esi
// 00812b52  5d                   pop ebp
// 00812b53  5b                   pop ebx
// 00812b54  83c45c               add esp, 0x5c
// 00812b57  c20c00               ret 0xc
// copied from an identical function in another client (function ?CalcDynamicLayout@CXTPToolBar@@UAE?AVCSize@@HK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp