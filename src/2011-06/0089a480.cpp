// roc 2011-06 0089a480  unit: XTPPaintThemes::CXTPOfficeTheme  size: 1589 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089a480
//
// 0089a480  6aff                 push -1
// 0089a482  68019ba000           push 0xa09b01
// 0089a487  64a100000000         mov eax, dword ptr fs:[0]
// 0089a48d  50                   push eax
// 0089a48e  83ec54               sub esp, 0x54
// 0089a491  53                   push ebx
// 0089a492  55                   push ebp
// 0089a493  56                   push esi
// 0089a494  57                   push edi
// 0089a495  a12058c900           mov eax, dword ptr [0xc95820]
// 0089a49a  33c4                 xor eax, esp
// 0089a49c  50                   push eax
// 0089a49d  8d442468             lea eax, [esp + 0x68]
// 0089a4a1  64a300000000         mov dword ptr fs:[0], eax
// 0089a4a7  8be9                 mov ebp, ecx
// 0089a4a9  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 0089a4b0  85c0                 test eax, eax
// 0089a4b2  7414                 je 0x89a4c8
// 0089a4b4  8b4074               mov eax, dword ptr [eax + 0x74]
// 0089a4b7  83787400             cmp dword ptr [eax + 0x74], 0
// 0089a4bb  7506                 jne 0x89a4c3
// 0089a4bd  83787800             cmp dword ptr [eax + 0x78], 0
// 0089a4c1  7405                 je 0x89a4c8
// 0089a4c3  83c074               add eax, 0x74
// 0089a4c6  eb0c                 jmp 0x89a4d4
// 0089a4c8  6a00                 push 0
// 0089a4ca  8d44241c             lea eax, [esp + 0x1c]
// 0089a4ce  50                   push eax
// 0089a4cf  e8ec5af7ff           call 0x80ffc0
// 0089a4d4  8b10                 mov edx, dword ptr [eax]
// 0089a4d6  8b4004               mov eax, dword ptr [eax + 4]
// 0089a4d9  8d4806               lea ecx, [eax + 6]
// 0089a4dc  8b8510010000         mov eax, dword ptr [ebp + 0x110]
// 0089a4e2  3bc8                 cmp ecx, eax
// 0089a4e4  89542428             mov dword ptr [esp + 0x28], edx
// 0089a4e8  894c2418             mov dword ptr [esp + 0x18], ecx
// 0089a4ec  7f04                 jg 0x89a4f2
// 0089a4ee  89442418             mov dword ptr [esp + 0x18], eax
// 0089a4f2  8d4a04               lea ecx, [edx + 4]
// 0089a4f5  83c004               add eax, 4
// 0089a4f8  3bc8                 cmp ecx, eax
// 0089a4fa  894c2414             mov dword ptr [esp + 0x14], ecx
// 0089a4fe  7f04                 jg 0x89a504
// 0089a500  89442414             mov dword ptr [esp + 0x14], eax
// 0089a504  83bc249800000000     cmp dword ptr [esp + 0x98], 0
// 0089a50c  0f847c050000         je 0x89aa8e
// 0089a512  6a29                 push 0x29
// 0089a514  8bcd                 mov ecx, ebp
// 0089a516  e89550f7ff           call 0x80f5b0
// 0089a51b  8b74247c             mov esi, dword ptr [esp + 0x7c]
// 0089a51f  50                   push eax
// 0089a520  8d8c2488000000       lea ecx, [esp + 0x88]
// 0089a527  51                   push ecx
// 0089a528  8bce                 mov ecx, esi
// 0089a52a  e8f108f7ff           call 0x80ae20
// 0089a52f  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0089a536  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0089a53d  8b5500               mov edx, dword ptr [ebp]
// 0089a540  8b92d8000000         mov edx, dword ptr [edx + 0xd8]
// 0089a546  6a00                 push 0
// 0089a548  2bc8                 sub ecx, eax
// 0089a54a  51                   push ecx
// 0089a54b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0089a54f  41                   inc ecx
// 0089a550  51                   push ecx
// 0089a551  50                   push eax
// 0089a552  6a00                 push 0
// 0089a554  56                   push esi
// 0089a555  8bcd                 mov ecx, ebp
// 0089a557  ffd2                 call edx
// 0089a559  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 0089a560  85db                 test ebx, ebx
// 0089a562  750e                 jne 0x89a572
// 0089a564  8b442478             mov eax, dword ptr [esp + 0x78]
// 0089a568  8918                 mov dword ptr [eax], ebx
// 0089a56a  895804               mov dword ptr [eax + 4], ebx
// 0089a56d  e92d050000           jmp 0x89aa9f
// 0089a572  8b83fc000000         mov eax, dword ptr [ebx + 0xfc]
// 0089a578  8bcb                 mov ecx, ebx
// 0089a57a  8944247c             mov dword ptr [esp + 0x7c], eax
// 0089a57e  e83d1ff7ff           call 0x80c4c0
// 0089a583  8bbc2494000000       mov edi, dword ptr [esp + 0x94]
// 0089a58a  89442420             mov dword ptr [esp + 0x20], eax
// 0089a58e  85ff                 test edi, edi
// 0089a590  744b                 je 0x89a5dd
// 0089a592  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0089a599  6a05                 push 5
// 0089a59b  8b5500               mov edx, dword ptr [ebp]
// 0089a59e  6a02                 push 2
// 0089a5a0  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0089a5a6  6a00                 push 0
// 0089a5a8  6a00                 push 0
// 0089a5aa  6a01                 push 1
// 0089a5ac  6a00                 push 0
// 0089a5ae  57                   push edi
// 0089a5af  83ec10               sub esp, 0x10
// 0089a5b2  8bc4                 mov eax, esp
// 0089a5b4  8908                 mov dword ptr [eax], ecx
// 0089a5b6  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 0089a5bd  894804               mov dword ptr [eax + 4], ecx
// 0089a5c0  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 0089a5c7  894808               mov dword ptr [eax + 8], ecx
// 0089a5ca  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 0089a5d1  89480c               mov dword ptr [eax + 0xc], ecx
// 0089a5d4  56                   push esi
// 0089a5d5  8bcd                 mov ecx, ebp
// 0089a5d7  ffd2                 call edx
// 0089a5d9  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089a5dd  85c0                 test eax, eax
// 0089a5df  7536                 jne 0x89a617
// 0089a5e1  837c247c02           cmp dword ptr [esp + 0x7c], 2
// 0089a5e6  7439                 je 0x89a621
// 0089a5e8  ba01000000           mov edx, 1
// 0089a5ed  8b8390000000         mov eax, dword ptr [ebx + 0x90]
// 0089a5f3  85c0                 test eax, eax
// 0089a5f5  753c                 jne 0x89a633
// 0089a5f7  8b8388000000         mov eax, dword ptr [ebx + 0x88]
// 0089a5fd  85c0                 test eax, eax
// 0089a5ff  7f32                 jg 0x89a633
// 0089a601  8b8b5c010000         mov ecx, dword ptr [ebx + 0x15c]
// 0089a607  85c9                 test ecx, ecx
// 0089a609  741a                 je 0x89a625
// 0089a60b  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0089a60e  85c0                 test eax, eax
// 0089a610  7f21                 jg 0x89a633
// 0089a612  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0089a615  eb14                 jmp 0x89a62b
// 0089a617  83f802               cmp eax, 2
// 0089a61a  74cc                 je 0x89a5e8
// 0089a61c  83f803               cmp eax, 3
// 0089a61f  74c7                 je 0x89a5e8
// 0089a621  33d2                 xor edx, edx
// 0089a623  ebc8                 jmp 0x89a5ed
// 0089a625  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 0089a62b  85c0                 test eax, eax
// 0089a62d  0f84c5000000         je 0x89a6f8
// 0089a633  85d2                 test edx, edx
// 0089a635  0f84bd000000         je 0x89a6f8
// 0089a63b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0089a63f  8b03                 mov eax, dword ptr [ebx]
// 0089a641  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0089a647  51                   push ecx
// 0089a648  8bcb                 mov ecx, ebx
// 0089a64a  ffd2                 call edx
// 0089a64c  89842494000000       mov dword ptr [esp + 0x94], eax
// 0089a653  85c0                 test eax, eax
// 0089a655  0f849d000000         je 0x89a6f8
// 0089a65b  8bc8                 mov ecx, eax
// 0089a65d  e86e9b0000           call 0x8a41d0
// 0089a662  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0089a669  8bd8                 mov ebx, eax
// 0089a66b  0faf5c2428           imul ebx, dword ptr [esp + 0x28]
// 0089a670  e81bedfcff           call 0x869390
// 0089a675  8bc8                 mov ecx, eax
// 0089a677  8bc3                 mov eax, ebx
// 0089a679  99                   cdq 
// 0089a67a  f7f9                 idiv ecx
// 0089a67c  6a00                 push 0
// 0089a67e  6a00                 push 0
// 0089a680  6a00                 push 0
// 0089a682  6a01                 push 1
// 0089a684  6a00                 push 0
// 0089a686  57                   push edi
// 0089a687  8bd8                 mov ebx, eax
// 0089a689  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 0089a690  2b8424a0000000       sub eax, dword ptr [esp + 0xa0]
// 0089a697  895c2444             mov dword ptr [esp + 0x44], ebx
// 0089a69b  99                   cdq 
// 0089a69c  2bc2                 sub eax, edx
// 0089a69e  8bc8                 mov ecx, eax
// 0089a6a0  8bc3                 mov eax, ebx
// 0089a6a2  99                   cdq 
// 0089a6a3  2bc2                 sub eax, edx
// 0089a6a5  d1f8                 sar eax, 1
// 0089a6a7  d1f9                 sar ecx, 1
// 0089a6a9  2bc8                 sub ecx, eax
// 0089a6ab  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0089a6af  038c24a0000000       add ecx, dword ptr [esp + 0xa0]
// 0089a6b6  99                   cdq 
// 0089a6b7  2bc2                 sub eax, edx
// 0089a6b9  8bd8                 mov ebx, eax
// 0089a6bb  8b442440             mov eax, dword ptr [esp + 0x40]
// 0089a6bf  99                   cdq 
// 0089a6c0  2bc2                 sub eax, edx
// 0089a6c2  8b5500               mov edx, dword ptr [ebp]
// 0089a6c5  8b92c0000000         mov edx, dword ptr [edx + 0xc0]
// 0089a6cb  d1f8                 sar eax, 1
// 0089a6cd  d1fb                 sar ebx, 1
// 0089a6cf  2bd8                 sub ebx, eax
// 0089a6d1  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 0089a6d8  039c249c000000       add ebx, dword ptr [esp + 0x9c]
// 0089a6df  50                   push eax
// 0089a6e0  8b442448             mov eax, dword ptr [esp + 0x48]
// 0089a6e4  50                   push eax
// 0089a6e5  8b442448             mov eax, dword ptr [esp + 0x48]
// 0089a6e9  50                   push eax
// 0089a6ea  51                   push ecx
// 0089a6eb  53                   push ebx
// 0089a6ec  56                   push esi
// 0089a6ed  8bcd                 mov ecx, ebp
// 0089a6ef  ffd2                 call edx
// 0089a6f1  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 0089a6f8  8bcd                 mov ecx, ebp
// 0089a6fa  85ff                 test edi, edi
// 0089a6fc  7404                 je 0x89a702
// 0089a6fe  6a2d                 push 0x2d
// 0089a700  eb02                 jmp 0x89a704
// 0089a702  6a2c                 push 0x2c
// 0089a704  e8a74ef7ff           call 0x80f5b0
// 0089a709  8b16                 mov edx, dword ptr [esi]
// 0089a70b  89842480000000       mov dword ptr [esp + 0x80], eax
// 0089a712  50                   push eax
// 0089a713  8b4238               mov eax, dword ptr [edx + 0x38]
// 0089a716  8bce                 mov ecx, esi
// 0089a718  ffd0                 call eax
// 0089a71a  6a01                 push 1
// 0089a71c  8bce                 mov ecx, esi
// 0089a71e  e8cb1e1300           call 0x9cc5ee
// 0089a723  8b13                 mov edx, dword ptr [ebx]
// 0089a725  8b5258               mov edx, dword ptr [edx + 0x58]
// 0089a728  8d842498000000       lea eax, [esp + 0x98]
// 0089a72f  50                   push eax
// 0089a730  8bcb                 mov ecx, ebx
// 0089a732  ffd2                 call edx
// 0089a734  8d842498000000       lea eax, [esp + 0x98]
// 0089a73b  33db                 xor ebx, ebx
// 0089a73d  50                   push eax
// 0089a73e  895c2474             mov dword ptr [esp + 0x74], ebx
// 0089a742  e8f950f7ff           call 0x80f840
// 0089a747  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0089a74e  83c404               add esp, 4
// 0089a751  3bcb                 cmp ecx, ebx
// 0089a753  741e                 je 0x89a773
// 0089a755  e896f7f8ff           call 0x829ef0
// 0089a75a  85c0                 test eax, eax
// 0089a75c  7415                 je 0x89a773
// 0089a75e  8b5500               mov edx, dword ptr [ebp]
// 0089a761  8b9200010000         mov edx, dword ptr [edx + 0x100]
// 0089a767  8d842498000000       lea eax, [esp + 0x98]
// 0089a76e  50                   push eax
// 0089a76f  8bcd                 mov ecx, ebp
// 0089a771  ffd2                 call edx
// 0089a773  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0089a77a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089a77e  8d540108             lea edx, [ecx + eax + 8]
// 0089a782  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0089a789  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0089a790  89542438             mov dword ptr [esp + 0x38], edx
// 0089a794  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 0089a79b  89542444             mov dword ptr [esp + 0x44], edx
// 0089a79f  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0089a7a3  8944243c             mov dword ptr [esp + 0x3c], eax
// 0089a7a7  894c2440             mov dword ptr [esp + 0x40], ecx
// 0089a7ab  83fa02               cmp edx, 2
// 0089a7ae  740e                 je 0x89a7be
// 0089a7b0  83fa03               cmp edx, 3
// 0089a7b3  7409                 je 0x89a7be
// 0089a7b5  83fa04               cmp edx, 4
// 0089a7b8  0f85a3000000         jne 0x89a861
// 0089a7be  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 0089a7c5  03c2                 add eax, edx
// 0089a7c7  99                   cdq 
// 0089a7c8  2bc2                 sub eax, edx
// 0089a7ca  d1f8                 sar eax, 1
// 0089a7cc  8d58fb               lea ebx, [eax - 5]
// 0089a7cf  8d5005               lea edx, [eax + 5]
// 0089a7d2  899c2494000000       mov dword ptr [esp + 0x94], ebx
// 0089a7d9  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 0089a7e0  53                   push ebx
// 0089a7e1  899424a0000000       mov dword ptr [esp + 0xa0], edx
// 0089a7e8  8b9c24a0000000       mov ebx, dword ptr [esp + 0xa0]
// 0089a7ef  53                   push ebx
// 0089a7f0  8b9c249c000000       mov ebx, dword ptr [esp + 0x9c]
// 0089a7f7  83c1f9               add ecx, -7
// 0089a7fa  8d51fb               lea edx, [ecx - 5]
// 0089a7fd  52                   push edx
// 0089a7fe  53                   push ebx
// 0089a7ff  52                   push edx
// 0089a800  50                   push eax
// 0089a801  51                   push ecx
// 0089a802  56                   push esi
// 0089a803  e8a85df7ff           call 0x8105b0
// 0089a808  836c246007           sub dword ptr [esp + 0x60], 7
// 0089a80d  83c420               add esp, 0x20
// 0089a810  837c247c04           cmp dword ptr [esp + 0x7c], 4
// 0089a815  7544                 jne 0x89a85b
// 0089a817  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0089a81e  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0089a825  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0089a82c  83c0ec               add eax, -0x14
// 0089a82f  f7df                 neg edi
// 0089a831  1bff                 sbb edi, edi
// 0089a833  83e710               and edi, 0x10
// 0089a836  83c710               add edi, 0x10
// 0089a839  57                   push edi
// 0089a83a  49                   dec ecx
// 0089a83b  51                   push ecx
// 0089a83c  50                   push eax
// 0089a83d  42                   inc edx
// 0089a83e  52                   push edx
// 0089a83f  50                   push eax
// 0089a840  56                   push esi
// 0089a841  8bcd                 mov ecx, ebp
// 0089a843  e87862f7ff           call 0x810ac0
// 0089a848  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0089a84f  83c0ec               add eax, -0x14
// 0089a852  89442440             mov dword ptr [esp + 0x40], eax
// 0089a856  e9d3010000           jmp 0x89aa2e
// 0089a85b  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0089a85f  33db                 xor ebx, ebx
// 0089a861  83fa05               cmp edx, 5
// 0089a864  7409                 je 0x89a86f
// 0089a866  83fa06               cmp edx, 6
// 0089a869  0f85bf010000         jne 0x89aa2e
// 0089a86f  6820040000           push 0x420
// 0089a874  8d4c244c             lea ecx, [esp + 0x4c]
// 0089a878  51                   push ecx
// 0089a879  895c2450             mov dword ptr [esp + 0x50], ebx
// 0089a87d  895c2454             mov dword ptr [esp + 0x54], ebx
// 0089a881  895c2458             mov dword ptr [esp + 0x58], ebx
// 0089a885  895c245c             mov dword ptr [esp + 0x5c], ebx
// 0089a889  8b1e                 mov ebx, dword ptr [esi]
// 0089a88b  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0089a892  ff15a826a400         call dword ptr [0xa426a8]
// 0089a898  50                   push eax
// 0089a899  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 0089a8a0  ff15c82da400         call dword ptr [0xa42dc8]
// 0089a8a6  8b5370               mov edx, dword ptr [ebx + 0x70]
// 0089a8a9  50                   push eax
// 0089a8aa  8bce                 mov ecx, esi
// 0089a8ac  ffd2                 call edx
// 0089a8ae  8b4e08               mov ecx, dword ptr [esi + 8]
// 0089a8b1  8d442420             lea eax, [esp + 0x20]
// 0089a8b5  50                   push eax
// 0089a8b6  6a01                 push 1
// 0089a8b8  686056a600           push 0xa65660
// 0089a8bd  51                   push ecx
// 0089a8be  ff153801a400         call dword ptr [0xa40138]
// 0089a8c4  8b542450             mov edx, dword ptr [esp + 0x50]
// 0089a8c8  2b542448             sub edx, dword ptr [esp + 0x48]
// 0089a8cc  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0089a8d3  03542414             add edx, dword ptr [esp + 0x14]
// 0089a8d7  8b442424             mov eax, dword ptr [esp + 0x24]
// 0089a8db  83c002               add eax, 2
// 0089a8de  8d540a0d             lea edx, [edx + ecx + 0xd]
// 0089a8e2  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0089a8e9  8bd9                 mov ebx, ecx
// 0089a8eb  2bd8                 sub ebx, eax
// 0089a8ed  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0089a8f4  8944242c             mov dword ptr [esp + 0x2c], eax
// 0089a8f8  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 0089a8ff  89442434             mov dword ptr [esp + 0x34], eax
// 0089a903  8bc7                 mov eax, edi
// 0089a905  f7d8                 neg eax
// 0089a907  1bc0                 sbb eax, eax
// 0089a909  83e011               and eax, 0x11
// 0089a90c  6a05                 push 5
// 0089a90e  83c00f               add eax, 0xf
// 0089a911  50                   push eax
// 0089a912  83ec10               sub esp, 0x10
// 0089a915  8bc4                 mov eax, esp
// 0089a917  8910                 mov dword ptr [eax], edx
// 0089a919  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 0089a920  895004               mov dword ptr [eax + 4], edx
// 0089a923  894808               mov dword ptr [eax + 8], ecx
// 0089a926  894c2448             mov dword ptr [esp + 0x48], ecx
// 0089a92a  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 0089a931  89480c               mov dword ptr [eax + 0xc], ecx
// 0089a934  56                   push esi
// 0089a935  8bcd                 mov ecx, ebp
// 0089a937  e8445df7ff           call 0x810680
// 0089a93c  837c247c05           cmp dword ptr [esp + 0x7c], 5
// 0089a941  0f85e7000000         jne 0x89aa2e
// 0089a947  85ff                 test edi, edi
// 0089a949  7551                 jne 0x89a99c
// 0089a94b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0089a94f  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 0089a953  6a0f                 push 0xf
// 0089a955  89842484000000       mov dword ptr [esp + 0x84], eax
// 0089a95c  8b442434             mov eax, dword ptr [esp + 0x34]
// 0089a960  2bc3                 sub eax, ebx
// 0089a962  8bcd                 mov ecx, ebp
// 0089a964  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 0089a96b  e8404cf7ff           call 0x80f5b0
// 0089a970  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 0089a977  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0089a97b  50                   push eax
// 0089a97c  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0089a983  83c2fc               add edx, -4
// 0089a986  52                   push edx
// 0089a987  83c0fc               add eax, -4
// 0089a98a  50                   push eax
// 0089a98b  83c102               add ecx, 2
// 0089a98e  51                   push ecx
// 0089a98f  8d5302               lea edx, [ebx + 2]
// 0089a992  52                   push edx
// 0089a993  8bce                 mov ecx, esi
// 0089a995  e83c1c1300           call 0x9cc5d6
// 0089a99a  eb37                 jmp 0x89a9d3
// 0089a99c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0089a9a0  8b5500               mov edx, dword ptr [ebp]
// 0089a9a3  6a05                 push 5
// 0089a9a5  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0089a9ab  6a02                 push 2
// 0089a9ad  6a00                 push 0
// 0089a9af  6a00                 push 0
// 0089a9b1  6a01                 push 1
// 0089a9b3  6a00                 push 0
// 0089a9b5  57                   push edi
// 0089a9b6  83ec10               sub esp, 0x10
// 0089a9b9  8bc4                 mov eax, esp
// 0089a9bb  8918                 mov dword ptr [eax], ebx
// 0089a9bd  894804               mov dword ptr [eax + 4], ecx
// 0089a9c0  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0089a9c4  894808               mov dword ptr [eax + 8], ecx
// 0089a9c7  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0089a9cb  89480c               mov dword ptr [eax + 0xc], ecx
// 0089a9ce  56                   push esi
// 0089a9cf  8bcd                 mov ecx, ebp
// 0089a9d1  ffd2                 call edx
// 0089a9d3  b801000000           mov eax, 1
// 0089a9d8  0144242c             add dword ptr [esp + 0x2c], eax
// 0089a9dc  29442430             sub dword ptr [esp + 0x30], eax
// 0089a9e0  29442434             sub dword ptr [esp + 0x34], eax
// 0089a9e4  03d8                 add ebx, eax
// 0089a9e6  8b4500               mov eax, dword ptr [ebp]
// 0089a9e9  f7df                 neg edi
// 0089a9eb  1bff                 sbb edi, edi
// 0089a9ed  83c72e               add edi, 0x2e
// 0089a9f0  57                   push edi
// 0089a9f1  8bcd                 mov ecx, ebp
// 0089a9f3  89842484000000       mov dword ptr [esp + 0x84], eax
// 0089a9fa  e8b14bf7ff           call 0x80f5b0
// 0089a9ff  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0089aa03  8b542430             mov edx, dword ptr [esp + 0x30]
// 0089aa07  50                   push eax
// 0089aa08  83ec10               sub esp, 0x10
// 0089aa0b  8bc4                 mov eax, esp
// 0089aa0d  8918                 mov dword ptr [eax], ebx
// 0089aa0f  894804               mov dword ptr [eax + 4], ecx
// 0089aa12  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0089aa16  895008               mov dword ptr [eax + 8], edx
// 0089aa19  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 0089aa20  89480c               mov dword ptr [eax + 0xc], ecx
// 0089aa23  8b82f0000000         mov eax, dword ptr [edx + 0xf0]
// 0089aa29  56                   push esi
// 0089aa2a  8bcd                 mov ecx, ebp
// 0089aa2c  ffd0                 call eax
// 0089aa2e  81c5f0000000         add ebp, 0xf0
// 0089aa34  55                   push ebp
// 0089aa35  56                   push esi
// 0089aa36  8d4c2460             lea ecx, [esp + 0x60]
// 0089aa3a  e8e126fcff           call 0x85d120
// 0089aa3f  8b3e                 mov edi, dword ptr [esi]
// 0089aa41  6824880000           push 0x8824
// 0089aa46  8d4c243c             lea ecx, [esp + 0x3c]
// 0089aa4a  51                   push ecx
// 0089aa4b  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0089aa52  c644247801           mov byte ptr [esp + 0x78], 1
// 0089aa57  ff15a826a400         call dword ptr [0xa426a8]
// 0089aa5d  50                   push eax
// 0089aa5e  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 0089aa65  ff15c82da400         call dword ptr [0xa42dc8]
// 0089aa6b  8b5770               mov edx, dword ptr [edi + 0x70]
// 0089aa6e  50                   push eax
// 0089aa6f  8bce                 mov ecx, esi
// 0089aa71  ffd2                 call edx
// 0089aa73  8d4c2458             lea ecx, [esp + 0x58]
// 0089aa77  c644247000           mov byte ptr [esp + 0x70], 0
// 0089aa7c  e81f27fcff           call 0x85d1a0
// 0089aa81  8d8c2498000000       lea ecx, [esp + 0x98]
// 0089aa88  ff15082ea400         call dword ptr [0xa42e08]
// 0089aa8e  8b442478             mov eax, dword ptr [esp + 0x78]
// 0089aa92  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089aa96  8b542418             mov edx, dword ptr [esp + 0x18]
// 0089aa9a  8908                 mov dword ptr [eax], ecx
// 0089aa9c  895004               mov dword ptr [eax + 4], edx
// 0089aa9f  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0089aaa3  64890d00000000       mov dword ptr fs:[0], ecx
// 0089aaaa  59                   pop ecx
// 0089aaab  5f                   pop edi
// 0089aaac  5e                   pop esi
// 0089aaad  5d                   pop ebp
// 0089aaae  5b                   pop ebx
// 0089aaaf  83c460               add esp, 0x60
// 0089aab2  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawListBoxControl@CXTPOfficeTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHPAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPOfficeTheme.cpp