// roc 2012-06 007aaca0  unit: RBX::VLighting::?$FactoryProduct  size: 855 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007aaca0
//
// 007aaca0  6aff                 push -1
// 007aaca2  68fc93ae00           push 0xae93fc
// 007aaca7  64a100000000         mov eax, dword ptr fs:[0]
// 007aacad  50                   push eax
// 007aacae  64892500000000       mov dword ptr fs:[0], esp
// 007aacb5  81ec8c000000         sub esp, 0x8c
// 007aacbb  55                   push ebp
// 007aacbc  56                   push esi
// 007aacbd  57                   push edi
// 007aacbe  6a01                 push 1
// 007aacc0  33ed                 xor ebp, ebp
// 007aacc2  6a02                 push 2
// 007aacc4  8d4c2420             lea ecx, [esp + 0x20]
// 007aacc8  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007aaccc  ff158026b200         call dword ptr [0xb22680]
// 007aacd2  8bb424ac000000       mov esi, dword ptr [esp + 0xac]
// 007aacd9  8bbc24b0000000       mov edi, dword ptr [esp + 0xb0]
// 007aace0  c78424a000000001000000 mov dword ptr [esp + 0xa0], 1
// 007aaceb  3bf5                 cmp esi, ebp
// 007aaced  750c                 jne 0x7aacfb
// 007aacef  81ff00000080         cmp edi, 0x80000000
// 007aacf5  0f8459020000         je 0x7aaf54
// 007aacfb  83feff               cmp esi, -1
// 007aacfe  750c                 jne 0x7aad0c
// 007aad00  81ffffffff7f         cmp edi, 0x7fffffff
// 007aad06  0f8448020000         je 0x7aaf54
// 007aad0c  83fefe               cmp esi, -2
// 007aad0f  750c                 jne 0x7aad1d
// 007aad11  81ffffffff7f         cmp edi, 0x7fffffff
// 007aad17  0f8444020000         je 0x7aaf61
// 007aad1d  8d4c240c             lea ecx, [esp + 0xc]
// 007aad21  51                   push ecx
// 007aad22  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 007aad29  896c2410             mov dword ptr [esp + 0x10], ebp
// 007aad2d  896c2414             mov dword ptr [esp + 0x14], ebp
// 007aad31  e84af9ffff           call 0x7aa680
// 007aad36  83f8ff               cmp eax, -1
// 007aad39  0f94c0               sete al
// 007aad3c  84c0                 test al, al
// 007aad3e  741d                 je 0x7aad5d
// 007aad40  8d542418             lea edx, [esp + 0x18]
// 007aad44  6a2d                 push 0x2d
// 007aad46  52                   push edx
// 007aad47  e854ccc8ff           call 0x4379a0
// 007aad4c  8bbc24b8000000       mov edi, dword ptr [esp + 0xb8]
// 007aad53  8bb424b4000000       mov esi, dword ptr [esp + 0xb4]
// 007aad5a  83c408               add esp, 8
// 007aad5d  55                   push ebp
// 007aad5e  6800a493d6           push 0xd693a400
// 007aad63  57                   push edi
// 007aad64  56                   push esi
// 007aad65  e8f6861d00           call 0x983460
// 007aad6a  3bc5                 cmp eax, ebp
// 007aad6c  7d02                 jge 0x7aad70
// 007aad6e  f7d8                 neg eax
// 007aad70  8b350826b200         mov esi, dword ptr [0xb22608]
// 007aad76  53                   push ebx
// 007aad77  8bf8                 mov edi, eax
// 007aad79  8d442410             lea eax, [esp + 0x10]
// 007aad7d  6a02                 push 2
// 007aad7f  50                   push eax
// 007aad80  ffd6                 call esi
// 007aad82  8b4804               mov ecx, dword ptr [eax + 4]
// 007aad85  8b542424             mov edx, dword ptr [esp + 0x24]
// 007aad89  8b00                 mov eax, dword ptr [eax]
// 007aad8b  51                   push ecx
// 007aad8c  8b4a04               mov ecx, dword ptr [edx + 4]
// 007aad8f  8d540c28             lea edx, [esp + ecx + 0x28]
// 007aad93  52                   push edx
// 007aad94  ffd0                 call eax
// 007aad96  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007aad9a  8b4104               mov eax, dword ptr [ecx + 4]
// 007aad9d  83c410               add esp, 0x10
// 007aada0  68048cb600           push 0xb68c04
// 007aada5  8d440420             lea eax, [esp + eax + 0x20]
// 007aada9  b330                 mov bl, 0x30
// 007aadab  57                   push edi
// 007aadac  8d4c2424             lea ecx, [esp + 0x24]
// 007aadb0  885830               mov byte ptr [eax + 0x30], bl
// 007aadb3  ff159425b200         call dword ptr [0xb22594]
// 007aadb9  50                   push eax
// 007aadba  e87124caff           call 0x44d230
// 007aadbf  8b9424bc000000       mov edx, dword ptr [esp + 0xbc]
// 007aadc6  8b8424b8000000       mov eax, dword ptr [esp + 0xb8]
// 007aadcd  83c408               add esp, 8
// 007aadd0  55                   push ebp
// 007aadd1  6800879303           push 0x3938700
// 007aadd6  52                   push edx
// 007aadd7  50                   push eax
// 007aadd8  e883861d00           call 0x983460
// 007aaddd  55                   push ebp
// 007aadde  6a3c                 push 0x3c
// 007aade0  52                   push edx
// 007aade1  50                   push eax
// 007aade2  e889881d00           call 0x983670
// 007aade7  3bc5                 cmp eax, ebp
// 007aade9  7d02                 jge 0x7aaded
// 007aadeb  f7d8                 neg eax
// 007aaded  8d4c2410             lea ecx, [esp + 0x10]
// 007aadf1  6a02                 push 2
// 007aadf3  51                   push ecx
// 007aadf4  8bf8                 mov edi, eax
// 007aadf6  ffd6                 call esi
// 007aadf8  8b5004               mov edx, dword ptr [eax + 4]
// 007aadfb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007aadff  52                   push edx
// 007aae00  8b5104               mov edx, dword ptr [ecx + 4]
// 007aae03  8d4c1428             lea ecx, [esp + edx + 0x28]
// 007aae07  8b10                 mov edx, dword ptr [eax]
// 007aae09  51                   push ecx
// 007aae0a  ffd2                 call edx
// 007aae0c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007aae10  8b4004               mov eax, dword ptr [eax + 4]
// 007aae13  83c410               add esp, 0x10
// 007aae16  68048cb600           push 0xb68c04
// 007aae1b  8d440420             lea eax, [esp + eax + 0x20]
// 007aae1f  57                   push edi
// 007aae20  8d4c2424             lea ecx, [esp + 0x24]
// 007aae24  885830               mov byte ptr [eax + 0x30], bl
// 007aae27  ff159425b200         call dword ptr [0xb22594]
// 007aae2d  50                   push eax
// 007aae2e  e8fd23caff           call 0x44d230
// 007aae33  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 007aae3a  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 007aae41  83c408               add esp, 8
// 007aae44  55                   push ebp
// 007aae45  6840420f00           push 0xf4240
// 007aae4a  51                   push ecx
// 007aae4b  52                   push edx
// 007aae4c  e80f861d00           call 0x983460
// 007aae51  55                   push ebp
// 007aae52  6a3c                 push 0x3c
// 007aae54  52                   push edx
// 007aae55  50                   push eax
// 007aae56  e815881d00           call 0x983670
// 007aae5b  3bc5                 cmp eax, ebp
// 007aae5d  7d02                 jge 0x7aae61
// 007aae5f  f7d8                 neg eax
// 007aae61  8bf8                 mov edi, eax
// 007aae63  8d442410             lea eax, [esp + 0x10]
// 007aae67  6a02                 push 2
// 007aae69  50                   push eax
// 007aae6a  ffd6                 call esi
// 007aae6c  8b4804               mov ecx, dword ptr [eax + 4]
// 007aae6f  8b542424             mov edx, dword ptr [esp + 0x24]
// 007aae73  8b00                 mov eax, dword ptr [eax]
// 007aae75  51                   push ecx
// 007aae76  8b4a04               mov ecx, dword ptr [edx + 4]
// 007aae79  8d540c28             lea edx, [esp + ecx + 0x28]
// 007aae7d  52                   push edx
// 007aae7e  ffd0                 call eax
// 007aae80  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007aae84  8b4104               mov eax, dword ptr [ecx + 4]
// 007aae87  83c410               add esp, 0x10
// 007aae8a  8d44041c             lea eax, [esp + eax + 0x1c]
// 007aae8e  57                   push edi
// 007aae8f  8d4c2420             lea ecx, [esp + 0x20]
// 007aae93  885830               mov byte ptr [eax + 0x30], bl
// 007aae96  ff159425b200         call dword ptr [0xb22594]
// 007aae9c  8b9424b4000000       mov edx, dword ptr [esp + 0xb4]
// 007aaea3  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 007aaeaa  55                   push ebp
// 007aaeab  6840420f00           push 0xf4240
// 007aaeb0  52                   push edx
// 007aaeb1  50                   push eax
// 007aaeb2  e8b9871d00           call 0x983670
// 007aaeb7  3bd5                 cmp edx, ebp
// 007aaeb9  7f0c                 jg 0x7aaec7
// 007aaebb  7c04                 jl 0x7aaec1
// 007aaebd  3bc5                 cmp eax, ebp
// 007aaebf  7306                 jae 0x7aaec7
// 007aaec1  f7d8                 neg eax
// 007aaec3  13d5                 adc edx, ebp
// 007aaec5  f7da                 neg edx
// 007aaec7  8bf8                 mov edi, eax
// 007aaec9  8bea                 mov ebp, edx
// 007aaecb  8bcf                 mov ecx, edi
// 007aaecd  0bcd                 or ecx, ebp
// 007aaecf  743c                 je 0x7aaf0d
// 007aaed1  8d542410             lea edx, [esp + 0x10]
// 007aaed5  6a06                 push 6
// 007aaed7  52                   push edx
// 007aaed8  ffd6                 call esi
// 007aaeda  83c408               add esp, 8
// 007aaedd  50                   push eax
// 007aaede  8d442420             lea eax, [esp + 0x20]
// 007aaee2  681ccdb500           push 0xb5cd1c
// 007aaee7  50                   push eax
// 007aaee8  e84323caff           call 0x44d230
// 007aaeed  83c408               add esp, 8
// 007aaef0  50                   push eax
// 007aaef1  e80a20caff           call 0x44cf00
// 007aaef6  8b08                 mov ecx, dword ptr [eax]
// 007aaef8  8b4904               mov ecx, dword ptr [ecx + 4]
// 007aaefb  83c408               add esp, 8
// 007aaefe  03c8                 add ecx, eax
// 007aaf00  55                   push ebp
// 007aaf01  885930               mov byte ptr [ecx + 0x30], bl
// 007aaf04  57                   push edi
// 007aaf05  8bc8                 mov ecx, eax
// 007aaf07  ff150c26b200         call dword ptr [0xb2260c]
// 007aaf0d  5b                   pop ebx
// 007aaf0e  8bb424a8000000       mov esi, dword ptr [esp + 0xa8]
// 007aaf15  56                   push esi
// 007aaf16  8d4c241c             lea ecx, [esp + 0x1c]
// 007aaf1a  ff157c26b200         call dword ptr [0xb2267c]
// 007aaf20  8d4c2418             lea ecx, [esp + 0x18]
// 007aaf24  c744241401000000     mov dword ptr [esp + 0x14], 1
// 007aaf2c  c68424a000000000     mov byte ptr [esp + 0xa0], 0
// 007aaf34  ff157826b200         call dword ptr [0xb22678]
// 007aaf3a  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 007aaf41  5f                   pop edi
// 007aaf42  8bc6                 mov eax, esi
// 007aaf44  5e                   pop esi
// 007aaf45  5d                   pop ebp
// 007aaf46  64890d00000000       mov dword ptr fs:[0], ecx
// 007aaf4d  81c498000000         add esp, 0x98
// 007aaf53  c3                   ret 
// 007aaf54  83fefe               cmp esi, -2
// 007aaf57  750c                 jne 0x7aaf65
// 007aaf59  81ffffffff7f         cmp edi, 0x7fffffff
// 007aaf5f  7504                 jne 0x7aaf65
// 007aaf61  33c0                 xor eax, eax
// 007aaf63  eb28                 jmp 0x7aaf8d
// 007aaf65  3bf5                 cmp esi, ebp
// 007aaf67  750f                 jne 0x7aaf78
// 007aaf69  81ff00000080         cmp edi, 0x80000000
// 007aaf6f  7507                 jne 0x7aaf78
// 007aaf71  b801000000           mov eax, 1
// 007aaf76  eb15                 jmp 0x7aaf8d
// 007aaf78  83feff               cmp esi, -1
// 007aaf7b  750b                 jne 0x7aaf88
// 007aaf7d  8d4603               lea eax, [esi + 3]
// 007aaf80  81ffffffff7f         cmp edi, 0x7fffffff
// 007aaf86  7405                 je 0x7aaf8d
// 007aaf88  b805000000           mov eax, 5
// 007aaf8d  2bc5                 sub eax, ebp
// 007aaf8f  744f                 je 0x7aafe0
// 007aaf91  83e801               sub eax, 1
// 007aaf94  7433                 je 0x7aafc9
// 007aaf96  83e801               sub eax, 1
// 007aaf99  7417                 je 0x7aafb2
// 007aaf9b  8d442418             lea eax, [esp + 0x18]
// 007aaf9f  68e83bb400           push 0xb43be8
// 007aafa4  50                   push eax
// 007aafa5  e88622caff           call 0x44d230
// 007aafaa  83c408               add esp, 8
// 007aafad  e95cffffff           jmp 0x7aaf0e
// 007aafb2  8d4c2418             lea ecx, [esp + 0x18]
// 007aafb6  68246bbb00           push 0xbb6b24
// 007aafbb  51                   push ecx
// 007aafbc  e86f22caff           call 0x44d230
// 007aafc1  83c408               add esp, 8
// 007aafc4  e945ffffff           jmp 0x7aaf0e
// 007aafc9  8d542418             lea edx, [esp + 0x18]
// 007aafcd  68186bbb00           push 0xbb6b18
// 007aafd2  52                   push edx
// 007aafd3  e85822caff           call 0x44d230
// 007aafd8  83c408               add esp, 8
// 007aafdb  e92effffff           jmp 0x7aaf0e
// 007aafe0  8d442418             lea eax, [esp + 0x18]
// 007aafe4  68086bbb00           push 0xbb6b08
// 007aafe9  50                   push eax
// 007aafea  e84122caff           call 0x44d230
// 007aafef  83c408               add esp, 8
// 007aaff2  e917ffffff           jmp 0x7aaf0e
// library rbxgs/v8datamodel\Lighting.cpp (function ??$to_simple_string_type@D@posix_time@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vtime_duration@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
