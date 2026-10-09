// roc 2009-12 007138e0  unit: RBX::VLighting::?$FactoryProduct  size: 855 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007138e0
//
// 007138e0  6aff                 push -1
// 007138e2  683c759500           push 0x95753c
// 007138e7  64a100000000         mov eax, dword ptr fs:[0]
// 007138ed  50                   push eax
// 007138ee  64892500000000       mov dword ptr fs:[0], esp
// 007138f5  81ec8c000000         sub esp, 0x8c
// 007138fb  55                   push ebp
// 007138fc  56                   push esi
// 007138fd  57                   push edi
// 007138fe  6a01                 push 1
// 00713900  33ed                 xor ebp, ebp
// 00713902  6a02                 push 2
// 00713904  8d4c2420             lea ecx, [esp + 0x20]
// 00713908  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0071390c  ff15d4b69800         call dword ptr [0x98b6d4]
// 00713912  8bb424ac000000       mov esi, dword ptr [esp + 0xac]
// 00713919  8bbc24b0000000       mov edi, dword ptr [esp + 0xb0]
// 00713920  c78424a000000001000000 mov dword ptr [esp + 0xa0], 1
// 0071392b  3bf5                 cmp esi, ebp
// 0071392d  750c                 jne 0x71393b
// 0071392f  81ff00000080         cmp edi, 0x80000000
// 00713935  0f8459020000         je 0x713b94
// 0071393b  83feff               cmp esi, -1
// 0071393e  750c                 jne 0x71394c
// 00713940  81ffffffff7f         cmp edi, 0x7fffffff
// 00713946  0f8448020000         je 0x713b94
// 0071394c  83fefe               cmp esi, -2
// 0071394f  750c                 jne 0x71395d
// 00713951  81ffffffff7f         cmp edi, 0x7fffffff
// 00713957  0f8444020000         je 0x713ba1
// 0071395d  8d4c240c             lea ecx, [esp + 0xc]
// 00713961  51                   push ecx
// 00713962  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 00713969  896c2410             mov dword ptr [esp + 0x10], ebp
// 0071396d  896c2414             mov dword ptr [esp + 0x14], ebp
// 00713971  e80af9ffff           call 0x713280
// 00713976  83f8ff               cmp eax, -1
// 00713979  0f94c0               sete al
// 0071397c  84c0                 test al, al
// 0071397e  741d                 je 0x71399d
// 00713980  8d542418             lea edx, [esp + 0x18]
// 00713984  6a2d                 push 0x2d
// 00713986  52                   push edx
// 00713987  e88491d3ff           call 0x44cb10
// 0071398c  8bbc24b8000000       mov edi, dword ptr [esp + 0xb8]
// 00713993  8bb424b4000000       mov esi, dword ptr [esp + 0xb4]
// 0071399a  83c408               add esp, 8
// 0071399d  55                   push ebp
// 0071399e  6800a493d6           push 0xd693a400
// 007139a3  57                   push edi
// 007139a4  56                   push esi
// 007139a5  e8f6110e00           call 0x7f4ba0
// 007139aa  3bc5                 cmp eax, ebp
// 007139ac  7d02                 jge 0x7139b0
// 007139ae  f7d8                 neg eax
// 007139b0  8b35a0b59800         mov esi, dword ptr [0x98b5a0]
// 007139b6  53                   push ebx
// 007139b7  8bf8                 mov edi, eax
// 007139b9  8d442410             lea eax, [esp + 0x10]
// 007139bd  6a02                 push 2
// 007139bf  50                   push eax
// 007139c0  ffd6                 call esi
// 007139c2  8b4804               mov ecx, dword ptr [eax + 4]
// 007139c5  8b542424             mov edx, dword ptr [esp + 0x24]
// 007139c9  8b00                 mov eax, dword ptr [eax]
// 007139cb  51                   push ecx
// 007139cc  8b4a04               mov ecx, dword ptr [edx + 4]
// 007139cf  8d540c28             lea edx, [esp + ecx + 0x28]
// 007139d3  52                   push edx
// 007139d4  ffd0                 call eax
// 007139d6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007139da  8b4104               mov eax, dword ptr [ecx + 4]
// 007139dd  83c410               add esp, 0x10
// 007139e0  6834409b00           push 0x9b4034
// 007139e5  8d440420             lea eax, [esp + eax + 0x20]
// 007139e9  b330                 mov bl, 0x30
// 007139eb  57                   push edi
// 007139ec  8d4c2424             lea ecx, [esp + 0x24]
// 007139f0  885830               mov byte ptr [eax + 0x30], bl
// 007139f3  ff1514b69800         call dword ptr [0x98b614]
// 007139f9  50                   push eax
// 007139fa  e8218fd3ff           call 0x44c920
// 007139ff  8b9424bc000000       mov edx, dword ptr [esp + 0xbc]
// 00713a06  8b8424b8000000       mov eax, dword ptr [esp + 0xb8]
// 00713a0d  83c408               add esp, 8
// 00713a10  55                   push ebp
// 00713a11  6800879303           push 0x3938700
// 00713a16  52                   push edx
// 00713a17  50                   push eax
// 00713a18  e883110e00           call 0x7f4ba0
// 00713a1d  55                   push ebp
// 00713a1e  6a3c                 push 0x3c
// 00713a20  52                   push edx
// 00713a21  50                   push eax
// 00713a22  e879180e00           call 0x7f52a0
// 00713a27  3bc5                 cmp eax, ebp
// 00713a29  7d02                 jge 0x713a2d
// 00713a2b  f7d8                 neg eax
// 00713a2d  8d4c2410             lea ecx, [esp + 0x10]
// 00713a31  6a02                 push 2
// 00713a33  51                   push ecx
// 00713a34  8bf8                 mov edi, eax
// 00713a36  ffd6                 call esi
// 00713a38  8b5004               mov edx, dword ptr [eax + 4]
// 00713a3b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00713a3f  52                   push edx
// 00713a40  8b5104               mov edx, dword ptr [ecx + 4]
// 00713a43  8d4c1428             lea ecx, [esp + edx + 0x28]
// 00713a47  8b10                 mov edx, dword ptr [eax]
// 00713a49  51                   push ecx
// 00713a4a  ffd2                 call edx
// 00713a4c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00713a50  8b4004               mov eax, dword ptr [eax + 4]
// 00713a53  83c410               add esp, 0x10
// 00713a56  6834409b00           push 0x9b4034
// 00713a5b  8d440420             lea eax, [esp + eax + 0x20]
// 00713a5f  57                   push edi
// 00713a60  8d4c2424             lea ecx, [esp + 0x24]
// 00713a64  885830               mov byte ptr [eax + 0x30], bl
// 00713a67  ff1514b69800         call dword ptr [0x98b614]
// 00713a6d  50                   push eax
// 00713a6e  e8ad8ed3ff           call 0x44c920
// 00713a73  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 00713a7a  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 00713a81  83c408               add esp, 8
// 00713a84  55                   push ebp
// 00713a85  6840420f00           push 0xf4240
// 00713a8a  51                   push ecx
// 00713a8b  52                   push edx
// 00713a8c  e80f110e00           call 0x7f4ba0
// 00713a91  55                   push ebp
// 00713a92  6a3c                 push 0x3c
// 00713a94  52                   push edx
// 00713a95  50                   push eax
// 00713a96  e805180e00           call 0x7f52a0
// 00713a9b  3bc5                 cmp eax, ebp
// 00713a9d  7d02                 jge 0x713aa1
// 00713a9f  f7d8                 neg eax
// 00713aa1  8bf8                 mov edi, eax
// 00713aa3  8d442410             lea eax, [esp + 0x10]
// 00713aa7  6a02                 push 2
// 00713aa9  50                   push eax
// 00713aaa  ffd6                 call esi
// 00713aac  8b4804               mov ecx, dword ptr [eax + 4]
// 00713aaf  8b542424             mov edx, dword ptr [esp + 0x24]
// 00713ab3  8b00                 mov eax, dword ptr [eax]
// 00713ab5  51                   push ecx
// 00713ab6  8b4a04               mov ecx, dword ptr [edx + 4]
// 00713ab9  8d540c28             lea edx, [esp + ecx + 0x28]
// 00713abd  52                   push edx
// 00713abe  ffd0                 call eax
// 00713ac0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00713ac4  8b4104               mov eax, dword ptr [ecx + 4]
// 00713ac7  83c410               add esp, 0x10
// 00713aca  8d44041c             lea eax, [esp + eax + 0x1c]
// 00713ace  57                   push edi
// 00713acf  8d4c2420             lea ecx, [esp + 0x20]
// 00713ad3  885830               mov byte ptr [eax + 0x30], bl
// 00713ad6  ff1514b69800         call dword ptr [0x98b614]
// 00713adc  8b9424b4000000       mov edx, dword ptr [esp + 0xb4]
// 00713ae3  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 00713aea  55                   push ebp
// 00713aeb  6840420f00           push 0xf4240
// 00713af0  52                   push edx
// 00713af1  50                   push eax
// 00713af2  e8a9170e00           call 0x7f52a0
// 00713af7  3bd5                 cmp edx, ebp
// 00713af9  7f0c                 jg 0x713b07
// 00713afb  7c04                 jl 0x713b01
// 00713afd  3bc5                 cmp eax, ebp
// 00713aff  7306                 jae 0x713b07
// 00713b01  f7d8                 neg eax
// 00713b03  13d5                 adc edx, ebp
// 00713b05  f7da                 neg edx
// 00713b07  8bf8                 mov edi, eax
// 00713b09  8bea                 mov ebp, edx
// 00713b0b  8bcf                 mov ecx, edi
// 00713b0d  0bcd                 or ecx, ebp
// 00713b0f  743c                 je 0x713b4d
// 00713b11  8d542410             lea edx, [esp + 0x10]
// 00713b15  6a06                 push 6
// 00713b17  52                   push edx
// 00713b18  ffd6                 call esi
// 00713b1a  83c408               add esp, 8
// 00713b1d  50                   push eax
// 00713b1e  8d442420             lea eax, [esp + 0x20]
// 00713b22  6884169b00           push 0x9b1684
// 00713b27  50                   push eax
// 00713b28  e8f38dd3ff           call 0x44c920
// 00713b2d  83c408               add esp, 8
// 00713b30  50                   push eax
// 00713b31  e87aabd6ff           call 0x47e6b0
// 00713b36  8b08                 mov ecx, dword ptr [eax]
// 00713b38  8b4904               mov ecx, dword ptr [ecx + 4]
// 00713b3b  83c408               add esp, 8
// 00713b3e  03c8                 add ecx, eax
// 00713b40  55                   push ebp
// 00713b41  885930               mov byte ptr [ecx + 0x30], bl
// 00713b44  57                   push edi
// 00713b45  8bc8                 mov ecx, eax
// 00713b47  ff15d0b49800         call dword ptr [0x98b4d0]
// 00713b4d  5b                   pop ebx
// 00713b4e  8bb424a8000000       mov esi, dword ptr [esp + 0xa8]
// 00713b55  56                   push esi
// 00713b56  8d4c241c             lea ecx, [esp + 0x1c]
// 00713b5a  ff15d8b69800         call dword ptr [0x98b6d8]
// 00713b60  8d4c2418             lea ecx, [esp + 0x18]
// 00713b64  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00713b6c  c68424a000000000     mov byte ptr [esp + 0xa0], 0
// 00713b74  ff15dcb69800         call dword ptr [0x98b6dc]
// 00713b7a  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00713b81  5f                   pop edi
// 00713b82  8bc6                 mov eax, esi
// 00713b84  5e                   pop esi
// 00713b85  5d                   pop ebp
// 00713b86  64890d00000000       mov dword ptr fs:[0], ecx
// 00713b8d  81c498000000         add esp, 0x98
// 00713b93  c3                   ret 
// 00713b94  83fefe               cmp esi, -2
// 00713b97  750c                 jne 0x713ba5
// 00713b99  81ffffffff7f         cmp edi, 0x7fffffff
// 00713b9f  7504                 jne 0x713ba5
// 00713ba1  33c0                 xor eax, eax
// 00713ba3  eb28                 jmp 0x713bcd
// 00713ba5  3bf5                 cmp esi, ebp
// 00713ba7  750f                 jne 0x713bb8
// 00713ba9  81ff00000080         cmp edi, 0x80000000
// 00713baf  7507                 jne 0x713bb8
// 00713bb1  b801000000           mov eax, 1
// 00713bb6  eb15                 jmp 0x713bcd
// 00713bb8  83feff               cmp esi, -1
// 00713bbb  750b                 jne 0x713bc8
// 00713bbd  8d4603               lea eax, [esi + 3]
// 00713bc0  81ffffffff7f         cmp edi, 0x7fffffff
// 00713bc6  7405                 je 0x713bcd
// 00713bc8  b805000000           mov eax, 5
// 00713bcd  2bc5                 sub eax, ebp
// 00713bcf  744f                 je 0x713c20
// 00713bd1  83e801               sub eax, 1
// 00713bd4  7433                 je 0x713c09
// 00713bd6  83e801               sub eax, 1
// 00713bd9  7417                 je 0x713bf2
// 00713bdb  8d442418             lea eax, [esp + 0x18]
// 00713bdf  6856fd9900           push 0x99fd56
// 00713be4  50                   push eax
// 00713be5  e8368dd3ff           call 0x44c920
// 00713bea  83c408               add esp, 8
// 00713bed  e95cffffff           jmp 0x713b4e
// 00713bf2  8d4c2418             lea ecx, [esp + 0x18]
// 00713bf6  6854e59d00           push 0x9de554
// 00713bfb  51                   push ecx
// 00713bfc  e81f8dd3ff           call 0x44c920
// 00713c01  83c408               add esp, 8
// 00713c04  e945ffffff           jmp 0x713b4e
// 00713c09  8d542418             lea edx, [esp + 0x18]
// 00713c0d  6848e59d00           push 0x9de548
// 00713c12  52                   push edx
// 00713c13  e8088dd3ff           call 0x44c920
// 00713c18  83c408               add esp, 8
// 00713c1b  e92effffff           jmp 0x713b4e
// 00713c20  8d442418             lea eax, [esp + 0x18]
// 00713c24  6838e59d00           push 0x9de538
// 00713c29  50                   push eax
// 00713c2a  e8f18cd3ff           call 0x44c920
// 00713c2f  83c408               add esp, 8
// 00713c32  e917ffffff           jmp 0x713b4e
// library rbxgs/v8datamodel\Lighting.cpp (function ??$to_simple_string_type@D@posix_time@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vtime_duration@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
