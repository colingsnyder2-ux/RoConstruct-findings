// roc 2008-06 005e06b0  unit: RBX::VLighting::?$FactoryProduct  size: 855 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e06b0
//
// 005e06b0  6aff                 push -1
// 005e06b2  68cc627d00           push 0x7d62cc
// 005e06b7  64a100000000         mov eax, dword ptr fs:[0]
// 005e06bd  50                   push eax
// 005e06be  64892500000000       mov dword ptr fs:[0], esp
// 005e06c5  81ec8c000000         sub esp, 0x8c
// 005e06cb  55                   push ebp
// 005e06cc  56                   push esi
// 005e06cd  57                   push edi
// 005e06ce  6a01                 push 1
// 005e06d0  33ed                 xor ebp, ebp
// 005e06d2  6a02                 push 2
// 005e06d4  8d4c2420             lea ecx, [esp + 0x20]
// 005e06d8  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005e06dc  ff1530248000         call dword ptr [0x802430]
// 005e06e2  8bb424ac000000       mov esi, dword ptr [esp + 0xac]
// 005e06e9  8bbc24b0000000       mov edi, dword ptr [esp + 0xb0]
// 005e06f0  c78424a000000001000000 mov dword ptr [esp + 0xa0], 1
// 005e06fb  3bf5                 cmp esi, ebp
// 005e06fd  750c                 jne 0x5e070b
// 005e06ff  81ff00000080         cmp edi, 0x80000000
// 005e0705  0f8459020000         je 0x5e0964
// 005e070b  83feff               cmp esi, -1
// 005e070e  750c                 jne 0x5e071c
// 005e0710  81ffffffff7f         cmp edi, 0x7fffffff
// 005e0716  0f8448020000         je 0x5e0964
// 005e071c  83fefe               cmp esi, -2
// 005e071f  750c                 jne 0x5e072d
// 005e0721  81ffffffff7f         cmp edi, 0x7fffffff
// 005e0727  0f8444020000         je 0x5e0971
// 005e072d  8d4c240c             lea ecx, [esp + 0xc]
// 005e0731  51                   push ecx
// 005e0732  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 005e0739  896c2410             mov dword ptr [esp + 0x10], ebp
// 005e073d  896c2414             mov dword ptr [esp + 0x14], ebp
// 005e0741  e89af1ffff           call 0x5df8e0
// 005e0746  83f8ff               cmp eax, -1
// 005e0749  0f94c0               sete al
// 005e074c  84c0                 test al, al
// 005e074e  741d                 je 0x5e076d
// 005e0750  8d542418             lea edx, [esp + 0x18]
// 005e0754  6a2d                 push 0x2d
// 005e0756  52                   push edx
// 005e0757  e8e49ee6ff           call 0x44a640
// 005e075c  8bbc24b8000000       mov edi, dword ptr [esp + 0xb8]
// 005e0763  8bb424b4000000       mov esi, dword ptr [esp + 0xb4]
// 005e076a  83c408               add esp, 8
// 005e076d  55                   push ebp
// 005e076e  6800a493d6           push 0xd693a400
// 005e0773  57                   push edi
// 005e0774  56                   push esi
// 005e0775  e8b6140c00           call 0x6a1c30
// 005e077a  3bc5                 cmp eax, ebp
// 005e077c  7d02                 jge 0x5e0780
// 005e077e  f7d8                 neg eax
// 005e0780  8b3538258000         mov esi, dword ptr [0x802538]
// 005e0786  53                   push ebx
// 005e0787  8bf8                 mov edi, eax
// 005e0789  8d442410             lea eax, [esp + 0x10]
// 005e078d  6a02                 push 2
// 005e078f  50                   push eax
// 005e0790  ffd6                 call esi
// 005e0792  8b4804               mov ecx, dword ptr [eax + 4]
// 005e0795  8b542424             mov edx, dword ptr [esp + 0x24]
// 005e0799  8b00                 mov eax, dword ptr [eax]
// 005e079b  51                   push ecx
// 005e079c  8b4a04               mov ecx, dword ptr [edx + 4]
// 005e079f  8d540c28             lea edx, [esp + ecx + 0x28]
// 005e07a3  52                   push edx
// 005e07a4  ffd0                 call eax
// 005e07a6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005e07aa  8b4104               mov eax, dword ptr [ecx + 4]
// 005e07ad  83c410               add esp, 0x10
// 005e07b0  6848138200           push 0x821348
// 005e07b5  8d440420             lea eax, [esp + eax + 0x20]
// 005e07b9  b330                 mov bl, 0x30
// 005e07bb  57                   push edi
// 005e07bc  8d4c2424             lea ecx, [esp + 0x24]
// 005e07c0  885830               mov byte ptr [eax + 0x30], bl
// 005e07c3  ff1534258000         call dword ptr [0x802534]
// 005e07c9  50                   push eax
// 005e07ca  e8819ce6ff           call 0x44a450
// 005e07cf  8b9424bc000000       mov edx, dword ptr [esp + 0xbc]
// 005e07d6  8b8424b8000000       mov eax, dword ptr [esp + 0xb8]
// 005e07dd  83c408               add esp, 8
// 005e07e0  55                   push ebp
// 005e07e1  6800879303           push 0x3938700
// 005e07e6  52                   push edx
// 005e07e7  50                   push eax
// 005e07e8  e843140c00           call 0x6a1c30
// 005e07ed  55                   push ebp
// 005e07ee  6a3c                 push 0x3c
// 005e07f0  52                   push edx
// 005e07f1  50                   push eax
// 005e07f2  e899160c00           call 0x6a1e90
// 005e07f7  3bc5                 cmp eax, ebp
// 005e07f9  7d02                 jge 0x5e07fd
// 005e07fb  f7d8                 neg eax
// 005e07fd  8d4c2410             lea ecx, [esp + 0x10]
// 005e0801  6a02                 push 2
// 005e0803  51                   push ecx
// 005e0804  8bf8                 mov edi, eax
// 005e0806  ffd6                 call esi
// 005e0808  8b5004               mov edx, dword ptr [eax + 4]
// 005e080b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e080f  52                   push edx
// 005e0810  8b5104               mov edx, dword ptr [ecx + 4]
// 005e0813  8d4c1428             lea ecx, [esp + edx + 0x28]
// 005e0817  8b10                 mov edx, dword ptr [eax]
// 005e0819  51                   push ecx
// 005e081a  ffd2                 call edx
// 005e081c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e0820  8b4004               mov eax, dword ptr [eax + 4]
// 005e0823  83c410               add esp, 0x10
// 005e0826  6848138200           push 0x821348
// 005e082b  8d440420             lea eax, [esp + eax + 0x20]
// 005e082f  57                   push edi
// 005e0830  8d4c2424             lea ecx, [esp + 0x24]
// 005e0834  885830               mov byte ptr [eax + 0x30], bl
// 005e0837  ff1534258000         call dword ptr [0x802534]
// 005e083d  50                   push eax
// 005e083e  e80d9ce6ff           call 0x44a450
// 005e0843  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 005e084a  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 005e0851  83c408               add esp, 8
// 005e0854  55                   push ebp
// 005e0855  6840420f00           push 0xf4240
// 005e085a  51                   push ecx
// 005e085b  52                   push edx
// 005e085c  e8cf130c00           call 0x6a1c30
// 005e0861  55                   push ebp
// 005e0862  6a3c                 push 0x3c
// 005e0864  52                   push edx
// 005e0865  50                   push eax
// 005e0866  e825160c00           call 0x6a1e90
// 005e086b  3bc5                 cmp eax, ebp
// 005e086d  7d02                 jge 0x5e0871
// 005e086f  f7d8                 neg eax
// 005e0871  8bf8                 mov edi, eax
// 005e0873  8d442410             lea eax, [esp + 0x10]
// 005e0877  6a02                 push 2
// 005e0879  50                   push eax
// 005e087a  ffd6                 call esi
// 005e087c  8b4804               mov ecx, dword ptr [eax + 4]
// 005e087f  8b542424             mov edx, dword ptr [esp + 0x24]
// 005e0883  8b00                 mov eax, dword ptr [eax]
// 005e0885  51                   push ecx
// 005e0886  8b4a04               mov ecx, dword ptr [edx + 4]
// 005e0889  8d540c28             lea edx, [esp + ecx + 0x28]
// 005e088d  52                   push edx
// 005e088e  ffd0                 call eax
// 005e0890  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005e0894  8b4104               mov eax, dword ptr [ecx + 4]
// 005e0897  83c410               add esp, 0x10
// 005e089a  8d44041c             lea eax, [esp + eax + 0x1c]
// 005e089e  57                   push edi
// 005e089f  8d4c2420             lea ecx, [esp + 0x20]
// 005e08a3  885830               mov byte ptr [eax + 0x30], bl
// 005e08a6  ff1534258000         call dword ptr [0x802534]
// 005e08ac  8b9424b4000000       mov edx, dword ptr [esp + 0xb4]
// 005e08b3  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 005e08ba  55                   push ebp
// 005e08bb  6840420f00           push 0xf4240
// 005e08c0  52                   push edx
// 005e08c1  50                   push eax
// 005e08c2  e8c9150c00           call 0x6a1e90
// 005e08c7  3bd5                 cmp edx, ebp
// 005e08c9  7f0c                 jg 0x5e08d7
// 005e08cb  7c04                 jl 0x5e08d1
// 005e08cd  3bc5                 cmp eax, ebp
// 005e08cf  7306                 jae 0x5e08d7
// 005e08d1  f7d8                 neg eax
// 005e08d3  13d5                 adc edx, ebp
// 005e08d5  f7da                 neg edx
// 005e08d7  8bf8                 mov edi, eax
// 005e08d9  8bea                 mov ebp, edx
// 005e08db  8bcf                 mov ecx, edi
// 005e08dd  0bcd                 or ecx, ebp
// 005e08df  743c                 je 0x5e091d
// 005e08e1  8d542410             lea edx, [esp + 0x10]
// 005e08e5  6a06                 push 6
// 005e08e7  52                   push edx
// 005e08e8  ffd6                 call esi
// 005e08ea  83c408               add esp, 8
// 005e08ed  50                   push eax
// 005e08ee  8d442420             lea eax, [esp + 0x20]
// 005e08f2  688cca8100           push 0x81ca8c
// 005e08f7  50                   push eax
// 005e08f8  e8539be6ff           call 0x44a450
// 005e08fd  83c408               add esp, 8
// 005e0900  50                   push eax
// 005e0901  e83aeeffff           call 0x5df740
// 005e0906  8b08                 mov ecx, dword ptr [eax]
// 005e0908  8b4904               mov ecx, dword ptr [ecx + 4]
// 005e090b  83c408               add esp, 8
// 005e090e  03c8                 add ecx, eax
// 005e0910  55                   push ebp
// 005e0911  885930               mov byte ptr [ecx + 0x30], bl
// 005e0914  57                   push edi
// 005e0915  8bc8                 mov ecx, eax
// 005e0917  ff1530258000         call dword ptr [0x802530]
// 005e091d  5b                   pop ebx
// 005e091e  8bb424a8000000       mov esi, dword ptr [esp + 0xa8]
// 005e0925  56                   push esi
// 005e0926  8d4c241c             lea ecx, [esp + 0x1c]
// 005e092a  ff1534248000         call dword ptr [0x802434]
// 005e0930  8d4c2418             lea ecx, [esp + 0x18]
// 005e0934  c744241401000000     mov dword ptr [esp + 0x14], 1
// 005e093c  c68424a000000000     mov byte ptr [esp + 0xa0], 0
// 005e0944  ff1538248000         call dword ptr [0x802438]
// 005e094a  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 005e0951  5f                   pop edi
// 005e0952  8bc6                 mov eax, esi
// 005e0954  5e                   pop esi
// 005e0955  5d                   pop ebp
// 005e0956  64890d00000000       mov dword ptr fs:[0], ecx
// 005e095d  81c498000000         add esp, 0x98
// 005e0963  c3                   ret 
// 005e0964  83fefe               cmp esi, -2
// 005e0967  750c                 jne 0x5e0975
// 005e0969  81ffffffff7f         cmp edi, 0x7fffffff
// 005e096f  7504                 jne 0x5e0975
// 005e0971  33c0                 xor eax, eax
// 005e0973  eb28                 jmp 0x5e099d
// 005e0975  3bf5                 cmp esi, ebp
// 005e0977  750f                 jne 0x5e0988
// 005e0979  81ff00000080         cmp edi, 0x80000000
// 005e097f  7507                 jne 0x5e0988
// 005e0981  b801000000           mov eax, 1
// 005e0986  eb15                 jmp 0x5e099d
// 005e0988  83feff               cmp esi, -1
// 005e098b  750b                 jne 0x5e0998
// 005e098d  8d4603               lea eax, [esi + 3]
// 005e0990  81ffffffff7f         cmp edi, 0x7fffffff
// 005e0996  7405                 je 0x5e099d
// 005e0998  b805000000           mov eax, 5
// 005e099d  2bc5                 sub eax, ebp
// 005e099f  744f                 je 0x5e09f0
// 005e09a1  83e801               sub eax, 1
// 005e09a4  7433                 je 0x5e09d9
// 005e09a6  83e801               sub eax, 1
// 005e09a9  7417                 je 0x5e09c2
// 005e09ab  8d442418             lea eax, [esp + 0x18]
// 005e09af  6816b78000           push 0x80b716
// 005e09b4  50                   push eax
// 005e09b5  e8969ae6ff           call 0x44a450
// 005e09ba  83c408               add esp, 8
// 005e09bd  e95cffffff           jmp 0x5e091e
// 005e09c2  8d4c2418             lea ecx, [esp + 0x18]
// 005e09c6  6884dc8300           push 0x83dc84
// 005e09cb  51                   push ecx
// 005e09cc  e87f9ae6ff           call 0x44a450
// 005e09d1  83c408               add esp, 8
// 005e09d4  e945ffffff           jmp 0x5e091e
// 005e09d9  8d542418             lea edx, [esp + 0x18]
// 005e09dd  6878dc8300           push 0x83dc78
// 005e09e2  52                   push edx
// 005e09e3  e8689ae6ff           call 0x44a450
// 005e09e8  83c408               add esp, 8
// 005e09eb  e92effffff           jmp 0x5e091e
// 005e09f0  8d442418             lea eax, [esp + 0x18]
// 005e09f4  6868dc8300           push 0x83dc68
// 005e09f9  50                   push eax
// 005e09fa  e8519ae6ff           call 0x44a450
// 005e09ff  83c408               add esp, 8
// 005e0a02  e917ffffff           jmp 0x5e091e
// library rbxgs/v8datamodel\Lighting.cpp (function ??$to_simple_string_type@D@posix_time@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vtime_duration@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
