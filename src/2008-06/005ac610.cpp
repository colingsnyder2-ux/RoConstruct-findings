// roc 2008-06 005ac610  unit: RBX::VScriptContext::?$FactoryProduct  size: 703 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ac610
//
// 005ac610  6aff                 push -1
// 005ac612  68e7317d00           push 0x7d31e7
// 005ac617  64a100000000         mov eax, dword ptr fs:[0]
// 005ac61d  50                   push eax
// 005ac61e  64892500000000       mov dword ptr fs:[0], esp
// 005ac625  81ecc8000000         sub esp, 0xc8
// 005ac62b  55                   push ebp
// 005ac62c  56                   push esi
// 005ac62d  8d442414             lea eax, [esp + 0x14]
// 005ac631  57                   push edi
// 005ac632  50                   push eax
// 005ac633  e8e8cffbff           call 0x569620
// 005ac638  8bac24e8000000       mov ebp, dword ptr [esp + 0xe8]
// 005ac63f  8b30                 mov esi, dword ptr [eax]
// 005ac641  6a00                 push 0
// 005ac643  83cfff               or edi, 0xffffffff
// 005ac646  57                   push edi
// 005ac647  55                   push ebp
// 005ac648  c78424ec00000000000000 mov dword ptr [esp + 0xec], 0
// 005ac653  e8b8590600           call 0x612010
// 005ac658  50                   push eax
// 005ac659  68ac038100           push 0x8103ac
// 005ac65e  6a03                 push 3
// 005ac660  56                   push esi
// 005ac661  e83acdfbff           call 0x5693a0
// 005ac666  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005ac66a  83c420               add esp, 0x20
// 005ac66d  89bc24dc000000       mov dword ptr [esp + 0xdc], edi
// 005ac674  85c0                 test eax, eax
// 005ac676  742a                 je 0x5ac6a2
// 005ac678  8bf0                 mov esi, eax
// 005ac67a  83c004               add eax, 4
// 005ac67d  8bcf                 mov ecx, edi
// 005ac67f  f00fc108             lock xadd dword ptr [eax], ecx
// 005ac683  751d                 jne 0x5ac6a2
// 005ac685  8b16                 mov edx, dword ptr [esi]
// 005ac687  8b4204               mov eax, dword ptr [edx + 4]
// 005ac68a  8bce                 mov ecx, esi
// 005ac68c  ffd0                 call eax
// 005ac68e  8d4e08               lea ecx, [esi + 8]
// 005ac691  8bd7                 mov edx, edi
// 005ac693  f00fc111             lock xadd dword ptr [ecx], edx
// 005ac697  7509                 jne 0x5ac6a2
// 005ac699  8b06                 mov eax, dword ptr [esi]
// 005ac69b  8b5008               mov edx, dword ptr [eax + 8]
// 005ac69e  8bce                 mov ecx, esi
// 005ac6a0  ffd2                 call edx
// 005ac6a2  e839b5e5ff           call 0x407be0
// 005ac6a7  80b83001000000       cmp byte ptr [eax + 0x130], 0
// 005ac6ae  0f849b010000         je 0x5ac84f
// 005ac6b4  8d442430             lea eax, [esp + 0x30]
// 005ac6b8  50                   push eax
// 005ac6b9  6a00                 push 0
// 005ac6bb  55                   push ebp
// 005ac6bc  e81f660700           call 0x622ce0
// 005ac6c1  83c40c               add esp, 0xc
// 005ac6c4  85c0                 test eax, eax
// 005ac6c6  0f846b010000         je 0x5ac837
// 005ac6cc  33f6                 xor esi, esi
// 005ac6ce  53                   push ebx
// 005ac6cf  c644241300           mov byte ptr [esp + 0x13], 0
// 005ac6d4  8d5e01               lea ebx, [esi + 1]
// 005ac6d7  8d4c2434             lea ecx, [esp + 0x34]
// 005ac6db  51                   push ecx
// 005ac6dc  56                   push esi
// 005ac6dd  55                   push ebp
// 005ac6de  e8fd650700           call 0x622ce0
// 005ac6e3  03f3                 add esi, ebx
// 005ac6e5  83c40c               add esp, 0xc
// 005ac6e8  8974241c             mov dword ptr [esp + 0x1c], esi
// 005ac6ec  85c0                 test eax, eax
// 005ac6ee  0f8400010000         je 0x5ac7f4
// 005ac6f4  8d542434             lea edx, [esp + 0x34]
// 005ac6f8  52                   push edx
// 005ac6f9  68a4458300           push 0x8345a4
// 005ac6fe  55                   push ebp
// 005ac6ff  e84c720700           call 0x623950
// 005ac704  83c40c               add esp, 0xc
// 005ac707  85c0                 test eax, eax
// 005ac709  0f84d8000000         je 0x5ac7e7
// 005ac70f  837c244800           cmp dword ptr [esp + 0x48], 0
// 005ac714  0f8ccd000000         jl 0x5ac7e7
// 005ac71a  8b442444             mov eax, dword ptr [esp + 0x44]
// 005ac71e  6a40                 push 0x40
// 005ac720  50                   push eax
// 005ac721  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 005ac728  51                   push ecx
// 005ac729  885c241f             mov byte ptr [esp + 0x1f], bl
// 005ac72d  e8ae630700           call 0x622ae0
// 005ac732  83c40c               add esp, 0xc
// 005ac735  837c243800           cmp dword ptr [esp + 0x38], 0
// 005ac73a  743f                 je 0x5ac77b
// 005ac73c  8d54242c             lea edx, [esp + 0x2c]
// 005ac740  52                   push edx
// 005ac741  e8dacefbff           call 0x569620
// 005ac746  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005ac74a  8b542440             mov edx, dword ptr [esp + 0x40]
// 005ac74e  8b00                 mov eax, dword ptr [eax]
// 005ac750  51                   push ecx
// 005ac751  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 005ac755  52                   push edx
// 005ac756  51                   push ecx
// 005ac757  8d9424a8000000       lea edx, [esp + 0xa8]
// 005ac75e  52                   push edx
// 005ac75f  6890458300           push 0x834590
// 005ac764  53                   push ebx
// 005ac765  50                   push eax
// 005ac766  899c2400010000       mov dword ptr [esp + 0x100], ebx
// 005ac76d  e82eccfbff           call 0x5693a0
// 005ac772  8b442450             mov eax, dword ptr [esp + 0x50]
// 005ac776  83c420               add esp, 0x20
// 005ac779  eb37                 jmp 0x5ac7b2
// 005ac77b  8d442414             lea eax, [esp + 0x14]
// 005ac77f  50                   push eax
// 005ac780  e89bcefbff           call 0x569620
// 005ac785  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005ac789  8b00                 mov eax, dword ptr [eax]
// 005ac78b  51                   push ecx
// 005ac78c  8d9424a0000000       lea edx, [esp + 0xa0]
// 005ac793  52                   push edx
// 005ac794  6884458300           push 0x834584
// 005ac799  53                   push ebx
// 005ac79a  50                   push eax
// 005ac79b  c78424f800000002000000 mov dword ptr [esp + 0xf8], 2
// 005ac7a6  e8f5cbfbff           call 0x5693a0
// 005ac7ab  8b442430             mov eax, dword ptr [esp + 0x30]
// 005ac7af  83c418               add esp, 0x18
// 005ac7b2  89bc24e0000000       mov dword ptr [esp + 0xe0], edi
// 005ac7b9  85c0                 test eax, eax
// 005ac7bb  742a                 je 0x5ac7e7
// 005ac7bd  8bf0                 mov esi, eax
// 005ac7bf  8bcf                 mov ecx, edi
// 005ac7c1  83c004               add eax, 4
// 005ac7c4  f00fc108             lock xadd dword ptr [eax], ecx
// 005ac7c8  751d                 jne 0x5ac7e7
// 005ac7ca  8b16                 mov edx, dword ptr [esi]
// 005ac7cc  8b4204               mov eax, dword ptr [edx + 4]
// 005ac7cf  8bce                 mov ecx, esi
// 005ac7d1  ffd0                 call eax
// 005ac7d3  8bd7                 mov edx, edi
// 005ac7d5  8d4e08               lea ecx, [esi + 8]
// 005ac7d8  f00fc111             lock xadd dword ptr [ecx], edx
// 005ac7dc  7509                 jne 0x5ac7e7
// 005ac7de  8b06                 mov eax, dword ptr [esi]
// 005ac7e0  8b5008               mov edx, dword ptr [eax + 8]
// 005ac7e3  8bce                 mov ecx, esi
// 005ac7e5  ffd2                 call edx
// 005ac7e7  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005ac7eb  83fe0c               cmp esi, 0xc
// 005ac7ee  0f8ce3feffff         jl 0x5ac6d7
// 005ac7f4  807c241300           cmp byte ptr [esp + 0x13], 0
// 005ac7f9  743b                 je 0x5ac836
// 005ac7fb  83fe0c               cmp esi, 0xc
// 005ac7fe  7d36                 jge 0x5ac836
// 005ac800  8d442414             lea eax, [esp + 0x14]
// 005ac804  50                   push eax
// 005ac805  e816cefbff           call 0x569620
// 005ac80a  8b00                 mov eax, dword ptr [eax]
// 005ac80c  6874458300           push 0x834574
// 005ac811  53                   push ebx
// 005ac812  50                   push eax
// 005ac813  c78424f000000003000000 mov dword ptr [esp + 0xf0], 3
// 005ac81e  e87dcbfbff           call 0x5693a0
// 005ac823  83c410               add esp, 0x10
// 005ac826  8d4c2414             lea ecx, [esp + 0x14]
// 005ac82a  89bc24e0000000       mov dword ptr [esp + 0xe0], edi
// 005ac831  e82a3e0500           call 0x600660
// 005ac836  5b                   pop ebx
// 005ac837  5f                   pop edi
// 005ac838  5e                   pop esi
// 005ac839  5d                   pop ebp
// 005ac83a  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 005ac841  64890d00000000       mov dword ptr fs:[0], ecx
// 005ac848  81c4d4000000         add esp, 0xd4
// 005ac84e  c3                   ret 
// 005ac84f  8d4c2420             lea ecx, [esp + 0x20]
// 005ac853  51                   push ecx
// 005ac854  e8c7cdfbff           call 0x569620
// 005ac859  8b30                 mov esi, dword ptr [eax]
// 005ac85b  6a00                 push 0
// 005ac85d  57                   push edi
// 005ac85e  55                   push ebp
// 005ac85f  c78424ec00000004000000 mov dword ptr [esp + 0xec], 4
// 005ac86a  e8a1570600           call 0x612010
// 005ac86f  50                   push eax
// 005ac870  68ac038100           push 0x8103ac
// 005ac875  6a03                 push 3
// 005ac877  56                   push esi
// 005ac878  e823cbfbff           call 0x5693a0
// 005ac87d  8b442444             mov eax, dword ptr [esp + 0x44]
// 005ac881  83c420               add esp, 0x20
// 005ac884  89bc24dc000000       mov dword ptr [esp + 0xdc], edi
// 005ac88b  85c0                 test eax, eax
// 005ac88d  74a8                 je 0x5ac837
// 005ac88f  8bf0                 mov esi, eax
// 005ac891  83c004               add eax, 4
// 005ac894  8bd7                 mov edx, edi
// 005ac896  f00fc110             lock xadd dword ptr [eax], edx
// 005ac89a  759b                 jne 0x5ac837
// 005ac89c  8b06                 mov eax, dword ptr [esi]
// 005ac89e  8b5004               mov edx, dword ptr [eax + 4]
// 005ac8a1  8bce                 mov ecx, esi
// 005ac8a3  ffd2                 call edx
// 005ac8a5  8d4608               lea eax, [esi + 8]
// 005ac8a8  f00fc138             lock xadd dword ptr [eax], edi
// 005ac8ac  7589                 jne 0x5ac837
// 005ac8ae  8b16                 mov edx, dword ptr [esi]
// 005ac8b0  8b4208               mov eax, dword ptr [edx + 8]
// 005ac8b3  8bce                 mov ecx, esi
// 005ac8b5  ffd0                 call eax
// 005ac8b7  8b8c24d4000000       mov ecx, dword ptr [esp + 0xd4]
// 005ac8be  5f                   pop edi
// 005ac8bf  5e                   pop esi
// 005ac8c0  5d                   pop ebp
// 005ac8c1  64890d00000000       mov dword ptr fs:[0], ecx
// 005ac8c8  81c4d4000000         add esp, 0xd4
// 005ac8ce  c3                   ret 
// library rbxgs/roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp (function ?reportError@ScriptContext@RBX@@CAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp
