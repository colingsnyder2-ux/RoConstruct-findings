// roc 2009-06 00679300  unit: RBX::VLighting::?$FactoryProduct  size: 855 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00679300
//
// 00679300  6aff                 push -1
// 00679302  68cc688500           push 0x8568cc
// 00679307  64a100000000         mov eax, dword ptr fs:[0]
// 0067930d  50                   push eax
// 0067930e  64892500000000       mov dword ptr fs:[0], esp
// 00679315  81ec8c000000         sub esp, 0x8c
// 0067931b  55                   push ebp
// 0067931c  56                   push esi
// 0067931d  57                   push edi
// 0067931e  6a01                 push 1
// 00679320  33ed                 xor ebp, ebp
// 00679322  6a02                 push 2
// 00679324  8d4c2420             lea ecx, [esp + 0x20]
// 00679328  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0067932c  ff1590e48900         call dword ptr [0x89e490]
// 00679332  8bb424ac000000       mov esi, dword ptr [esp + 0xac]
// 00679339  8bbc24b0000000       mov edi, dword ptr [esp + 0xb0]
// 00679340  c78424a000000001000000 mov dword ptr [esp + 0xa0], 1
// 0067934b  3bf5                 cmp esi, ebp
// 0067934d  750c                 jne 0x67935b
// 0067934f  81ff00000080         cmp edi, 0x80000000
// 00679355  0f8459020000         je 0x6795b4
// 0067935b  83feff               cmp esi, -1
// 0067935e  750c                 jne 0x67936c
// 00679360  81ffffffff7f         cmp edi, 0x7fffffff
// 00679366  0f8448020000         je 0x6795b4
// 0067936c  83fefe               cmp esi, -2
// 0067936f  750c                 jne 0x67937d
// 00679371  81ffffffff7f         cmp edi, 0x7fffffff
// 00679377  0f8444020000         je 0x6795c1
// 0067937d  8d4c240c             lea ecx, [esp + 0xc]
// 00679381  51                   push ecx
// 00679382  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 00679389  896c2410             mov dword ptr [esp + 0x10], ebp
// 0067938d  896c2414             mov dword ptr [esp + 0x14], ebp
// 00679391  e82af9ffff           call 0x678cc0
// 00679396  83f8ff               cmp eax, -1
// 00679399  0f94c0               sete al
// 0067939c  84c0                 test al, al
// 0067939e  741d                 je 0x6793bd
// 006793a0  8d542418             lea edx, [esp + 0x18]
// 006793a4  6a2d                 push 0x2d
// 006793a6  52                   push edx
// 006793a7  e854d5dcff           call 0x446900
// 006793ac  8bbc24b8000000       mov edi, dword ptr [esp + 0xb8]
// 006793b3  8bb424b4000000       mov esi, dword ptr [esp + 0xb4]
// 006793ba  83c408               add esp, 8
// 006793bd  55                   push ebp
// 006793be  6800a493d6           push 0xd693a400
// 006793c3  57                   push edi
// 006793c4  56                   push esi
// 006793c5  e8a6090a00           call 0x719d70
// 006793ca  3bc5                 cmp eax, ebp
// 006793cc  7d02                 jge 0x6793d0
// 006793ce  f7d8                 neg eax
// 006793d0  8b3518e58900         mov esi, dword ptr [0x89e518]
// 006793d6  53                   push ebx
// 006793d7  8bf8                 mov edi, eax
// 006793d9  8d442410             lea eax, [esp + 0x10]
// 006793dd  6a02                 push 2
// 006793df  50                   push eax
// 006793e0  ffd6                 call esi
// 006793e2  8b4804               mov ecx, dword ptr [eax + 4]
// 006793e5  8b542424             mov edx, dword ptr [esp + 0x24]
// 006793e9  8b00                 mov eax, dword ptr [eax]
// 006793eb  51                   push ecx
// 006793ec  8b4a04               mov ecx, dword ptr [edx + 4]
// 006793ef  8d540c28             lea edx, [esp + ecx + 0x28]
// 006793f3  52                   push edx
// 006793f4  ffd0                 call eax
// 006793f6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006793fa  8b4104               mov eax, dword ptr [ecx + 4]
// 006793fd  83c410               add esp, 0x10
// 00679400  686cf48b00           push 0x8bf46c
// 00679405  8d440420             lea eax, [esp + eax + 0x20]
// 00679409  b330                 mov bl, 0x30
// 0067940b  57                   push edi
// 0067940c  8d4c2424             lea ecx, [esp + 0x24]
// 00679410  885830               mov byte ptr [eax + 0x30], bl
// 00679413  ff15d4e38900         call dword ptr [0x89e3d4]
// 00679419  50                   push eax
// 0067941a  e8f1d2dcff           call 0x446710
// 0067941f  8b9424bc000000       mov edx, dword ptr [esp + 0xbc]
// 00679426  8b8424b8000000       mov eax, dword ptr [esp + 0xb8]
// 0067942d  83c408               add esp, 8
// 00679430  55                   push ebp
// 00679431  6800879303           push 0x3938700
// 00679436  52                   push edx
// 00679437  50                   push eax
// 00679438  e833090a00           call 0x719d70
// 0067943d  55                   push ebp
// 0067943e  6a3c                 push 0x3c
// 00679440  52                   push edx
// 00679441  50                   push eax
// 00679442  e869100a00           call 0x71a4b0
// 00679447  3bc5                 cmp eax, ebp
// 00679449  7d02                 jge 0x67944d
// 0067944b  f7d8                 neg eax
// 0067944d  8d4c2410             lea ecx, [esp + 0x10]
// 00679451  6a02                 push 2
// 00679453  51                   push ecx
// 00679454  8bf8                 mov edi, eax
// 00679456  ffd6                 call esi
// 00679458  8b5004               mov edx, dword ptr [eax + 4]
// 0067945b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0067945f  52                   push edx
// 00679460  8b5104               mov edx, dword ptr [ecx + 4]
// 00679463  8d4c1428             lea ecx, [esp + edx + 0x28]
// 00679467  8b10                 mov edx, dword ptr [eax]
// 00679469  51                   push ecx
// 0067946a  ffd2                 call edx
// 0067946c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00679470  8b4004               mov eax, dword ptr [eax + 4]
// 00679473  83c410               add esp, 0x10
// 00679476  686cf48b00           push 0x8bf46c
// 0067947b  8d440420             lea eax, [esp + eax + 0x20]
// 0067947f  57                   push edi
// 00679480  8d4c2424             lea ecx, [esp + 0x24]
// 00679484  885830               mov byte ptr [eax + 0x30], bl
// 00679487  ff15d4e38900         call dword ptr [0x89e3d4]
// 0067948d  50                   push eax
// 0067948e  e87dd2dcff           call 0x446710
// 00679493  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 0067949a  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 006794a1  83c408               add esp, 8
// 006794a4  55                   push ebp
// 006794a5  6840420f00           push 0xf4240
// 006794aa  51                   push ecx
// 006794ab  52                   push edx
// 006794ac  e8bf080a00           call 0x719d70
// 006794b1  55                   push ebp
// 006794b2  6a3c                 push 0x3c
// 006794b4  52                   push edx
// 006794b5  50                   push eax
// 006794b6  e8f50f0a00           call 0x71a4b0
// 006794bb  3bc5                 cmp eax, ebp
// 006794bd  7d02                 jge 0x6794c1
// 006794bf  f7d8                 neg eax
// 006794c1  8bf8                 mov edi, eax
// 006794c3  8d442410             lea eax, [esp + 0x10]
// 006794c7  6a02                 push 2
// 006794c9  50                   push eax
// 006794ca  ffd6                 call esi
// 006794cc  8b4804               mov ecx, dword ptr [eax + 4]
// 006794cf  8b542424             mov edx, dword ptr [esp + 0x24]
// 006794d3  8b00                 mov eax, dword ptr [eax]
// 006794d5  51                   push ecx
// 006794d6  8b4a04               mov ecx, dword ptr [edx + 4]
// 006794d9  8d540c28             lea edx, [esp + ecx + 0x28]
// 006794dd  52                   push edx
// 006794de  ffd0                 call eax
// 006794e0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006794e4  8b4104               mov eax, dword ptr [ecx + 4]
// 006794e7  83c410               add esp, 0x10
// 006794ea  8d44041c             lea eax, [esp + eax + 0x1c]
// 006794ee  57                   push edi
// 006794ef  8d4c2420             lea ecx, [esp + 0x20]
// 006794f3  885830               mov byte ptr [eax + 0x30], bl
// 006794f6  ff15d4e38900         call dword ptr [0x89e3d4]
// 006794fc  8b9424b4000000       mov edx, dword ptr [esp + 0xb4]
// 00679503  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 0067950a  55                   push ebp
// 0067950b  6840420f00           push 0xf4240
// 00679510  52                   push edx
// 00679511  50                   push eax
// 00679512  e8990f0a00           call 0x71a4b0
// 00679517  3bd5                 cmp edx, ebp
// 00679519  7f0c                 jg 0x679527
// 0067951b  7c04                 jl 0x679521
// 0067951d  3bc5                 cmp eax, ebp
// 0067951f  7306                 jae 0x679527
// 00679521  f7d8                 neg eax
// 00679523  13d5                 adc edx, ebp
// 00679525  f7da                 neg edx
// 00679527  8bf8                 mov edi, eax
// 00679529  8bea                 mov ebp, edx
// 0067952b  8bcf                 mov ecx, edi
// 0067952d  0bcd                 or ecx, ebp
// 0067952f  743c                 je 0x67956d
// 00679531  8d542410             lea edx, [esp + 0x10]
// 00679535  6a06                 push 6
// 00679537  52                   push edx
// 00679538  ffd6                 call esi
// 0067953a  83c408               add esp, 8
// 0067953d  50                   push eax
// 0067953e  8d442420             lea eax, [esp + 0x20]
// 00679542  68a4d08b00           push 0x8bd0a4
// 00679547  50                   push eax
// 00679548  e8c3d1dcff           call 0x446710
// 0067954d  83c408               add esp, 8
// 00679550  50                   push eax
// 00679551  e83a7ae0ff           call 0x480f90
// 00679556  8b08                 mov ecx, dword ptr [eax]
// 00679558  8b4904               mov ecx, dword ptr [ecx + 4]
// 0067955b  83c408               add esp, 8
// 0067955e  03c8                 add ecx, eax
// 00679560  55                   push ebp
// 00679561  885930               mov byte ptr [ecx + 0x30], bl
// 00679564  57                   push edi
// 00679565  8bc8                 mov ecx, eax
// 00679567  ff15e4e58900         call dword ptr [0x89e5e4]
// 0067956d  5b                   pop ebx
// 0067956e  8bb424a8000000       mov esi, dword ptr [esp + 0xa8]
// 00679575  56                   push esi
// 00679576  8d4c241c             lea ecx, [esp + 0x1c]
// 0067957a  ff1594e48900         call dword ptr [0x89e494]
// 00679580  8d4c2418             lea ecx, [esp + 0x18]
// 00679584  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0067958c  c68424a000000000     mov byte ptr [esp + 0xa0], 0
// 00679594  ff1598e48900         call dword ptr [0x89e498]
// 0067959a  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 006795a1  5f                   pop edi
// 006795a2  8bc6                 mov eax, esi
// 006795a4  5e                   pop esi
// 006795a5  5d                   pop ebp
// 006795a6  64890d00000000       mov dword ptr fs:[0], ecx
// 006795ad  81c498000000         add esp, 0x98
// 006795b3  c3                   ret 
// 006795b4  83fefe               cmp esi, -2
// 006795b7  750c                 jne 0x6795c5
// 006795b9  81ffffffff7f         cmp edi, 0x7fffffff
// 006795bf  7504                 jne 0x6795c5
// 006795c1  33c0                 xor eax, eax
// 006795c3  eb28                 jmp 0x6795ed
// 006795c5  3bf5                 cmp esi, ebp
// 006795c7  750f                 jne 0x6795d8
// 006795c9  81ff00000080         cmp edi, 0x80000000
// 006795cf  7507                 jne 0x6795d8
// 006795d1  b801000000           mov eax, 1
// 006795d6  eb15                 jmp 0x6795ed
// 006795d8  83feff               cmp esi, -1
// 006795db  750b                 jne 0x6795e8
// 006795dd  8d4603               lea eax, [esi + 3]
// 006795e0  81ffffffff7f         cmp edi, 0x7fffffff
// 006795e6  7405                 je 0x6795ed
// 006795e8  b805000000           mov eax, 5
// 006795ed  2bc5                 sub eax, ebp
// 006795ef  744f                 je 0x679640
// 006795f1  83e801               sub eax, 1
// 006795f4  7433                 je 0x679629
// 006795f6  83e801               sub eax, 1
// 006795f9  7417                 je 0x679612
// 006795fb  8d442418             lea eax, [esp + 0x18]
// 006795ff  6816d28a00           push 0x8ad216
// 00679604  50                   push eax
// 00679605  e806d1dcff           call 0x446710
// 0067960a  83c408               add esp, 8
// 0067960d  e95cffffff           jmp 0x67956e
// 00679612  8d4c2418             lea ecx, [esp + 0x18]
// 00679616  68f4488e00           push 0x8e48f4
// 0067961b  51                   push ecx
// 0067961c  e8efd0dcff           call 0x446710
// 00679621  83c408               add esp, 8
// 00679624  e945ffffff           jmp 0x67956e
// 00679629  8d542418             lea edx, [esp + 0x18]
// 0067962d  68e8488e00           push 0x8e48e8
// 00679632  52                   push edx
// 00679633  e8d8d0dcff           call 0x446710
// 00679638  83c408               add esp, 8
// 0067963b  e92effffff           jmp 0x67956e
// 00679640  8d442418             lea eax, [esp + 0x18]
// 00679644  68d8488e00           push 0x8e48d8
// 00679649  50                   push eax
// 0067964a  e8c1d0dcff           call 0x446710
// 0067964f  83c408               add esp, 8
// 00679652  e917ffffff           jmp 0x67956e
// library rbxgs/v8datamodel\Lighting.cpp (function ??$to_simple_string_type@D@posix_time@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vtime_duration@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
