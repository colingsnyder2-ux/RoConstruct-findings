// roc 2008-06 005af940  unit: RBX::ScriptContext  size: 1049 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005af940
//
// 005af940  6aff                 push -1
// 005af942  68ef357d00           push 0x7d35ef
// 005af947  64a100000000         mov eax, dword ptr fs:[0]
// 005af94d  50                   push eax
// 005af94e  64892500000000       mov dword ptr fs:[0], esp
// 005af955  83ec78               sub esp, 0x78
// 005af958  53                   push ebx
// 005af959  55                   push ebp
// 005af95a  56                   push esi
// 005af95b  57                   push edi
// 005af95c  8bf1                 mov esi, ecx
// 005af95e  c784249000000001000000 mov dword ptr [esp + 0x90], 1
// 005af969  e832f6ffff           call 0x5aefa0
// 005af96e  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 005af975  83fb03               cmp ebx, 3
// 005af978  0f85c4000000         jne 0x5afa42
// 005af97e  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 005af985  0f85a4000000         jne 0x5afa2f
// 005af98b  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 005af991  50                   push eax
// 005af992  e8c9350600           call 0x612f60
// 005af997  83c404               add esp, 4
// 005af99a  50                   push eax
// 005af99b  8d4c2444             lea ecx, [esp + 0x44]
// 005af99f  e89c44feff           call 0x593e40
// 005af9a4  8d4c2440             lea ecx, [esp + 0x40]
// 005af9a8  51                   push ecx
// 005af9a9  8d8e3c010000         lea ecx, [esi + 0x13c]
// 005af9af  c684249400000002     mov byte ptr [esp + 0x94], 2
// 005af9b7  e84447feff           call 0x594100
// 005af9bc  8d4c2440             lea ecx, [esp + 0x40]
// 005af9c0  c684249000000001     mov byte ptr [esp + 0x90], 1
// 005af9c8  e8b349feff           call 0x594380
// 005af9cd  8b8654010000         mov eax, dword ptr [esi + 0x154]
// 005af9d3  85c0                 test eax, eax
// 005af9d5  7533                 jne 0x5afa0a
// 005af9d7  6850498300           push 0x834950
// 005af9dc  8d4c2444             lea ecx, [esp + 0x44]
// 005af9e0  ff1558248000         call dword ptr [0x802458]
// 005af9e6  8d542440             lea edx, [esp + 0x40]
// 005af9ea  52                   push edx
// 005af9eb  8d4c2464             lea ecx, [esp + 0x64]
// 005af9ef  889c2494000000       mov byte ptr [esp + 0x94], bl
// 005af9f6  e855a3e5ff           call 0x409d50
// 005af9fb  68c81b8d00           push 0x8d1bc8
// 005afa00  8d442464             lea eax, [esp + 0x64]
// 005afa04  50                   push eax
// 005afa05  e8821b0f00           call 0x6a158c
// 005afa0a  50                   push eax
// 005afa0b  e8508cffff           call 0x5a8660
// 005afa10  8b8654010000         mov eax, dword ptr [esi + 0x154]
// 005afa16  6a03                 push 3
// 005afa18  50                   push eax
// 005afa19  e8d2f0ffff           call 0x5aeaf0
// 005afa1e  8b8e38010000         mov ecx, dword ptr [esi + 0x138]
// 005afa24  6afe                 push -2
// 005afa26  51                   push ecx
// 005afa27  e8f4210600           call 0x611c20
// 005afa2c  83c414               add esp, 0x14
// 005afa2f  8bae54010000         mov ebp, dword ptr [esi + 0x154]
// 005afa35  55                   push ebp
// 005afa36  e825350600           call 0x612f60
// 005afa3b  83c404               add esp, 4
// 005afa3e  8bf8                 mov edi, eax
// 005afa40  eb1e                 jmp 0x5afa60
// 005afa42  8bae38010000         mov ebp, dword ptr [esi + 0x138]
// 005afa48  55                   push ebp
// 005afa49  e812350600           call 0x612f60
// 005afa4e  8bf8                 mov edi, eax
// 005afa50  57                   push edi
// 005afa51  e80a8cffff           call 0x5a8660
// 005afa56  53                   push ebx
// 005afa57  57                   push edi
// 005afa58  e893f0ffff           call 0x5aeaf0
// 005afa5d  83c410               add esp, 0x10
// 005afa60  85ff                 test edi, edi
// 005afa62  0f8594000000         jne 0x5afafc
// 005afa68  8d542414             lea edx, [esp + 0x14]
// 005afa6c  52                   push edx
// 005afa6d  e8ae9bfbff           call 0x569620
// 005afa72  8b00                 mov eax, dword ptr [eax]
// 005afa74  6818498300           push 0x834918
// 005afa79  6a03                 push 3
// 005afa7b  50                   push eax
// 005afa7c  c68424a000000004     mov byte ptr [esp + 0xa0], 4
// 005afa84  e81799fbff           call 0x5693a0
// 005afa89  8b442428             mov eax, dword ptr [esp + 0x28]
// 005afa8d  83c410               add esp, 0x10
// 005afa90  c684249000000001     mov byte ptr [esp + 0x90], 1
// 005afa98  85c0                 test eax, eax
// 005afa9a  742c                 je 0x5afac8
// 005afa9c  8bf0                 mov esi, eax
// 005afa9e  83c004               add eax, 4
// 005afaa1  83c9ff               or ecx, 0xffffffff
// 005afaa4  f00fc108             lock xadd dword ptr [eax], ecx
// 005afaa8  751e                 jne 0x5afac8
// 005afaaa  8b16                 mov edx, dword ptr [esi]
// 005afaac  8b4204               mov eax, dword ptr [edx + 4]
// 005afaaf  8bce                 mov ecx, esi
// 005afab1  ffd0                 call eax
// 005afab3  8d4e08               lea ecx, [esi + 8]
// 005afab6  83caff               or edx, 0xffffffff
// 005afab9  f00fc111             lock xadd dword ptr [ecx], edx
// 005afabd  7509                 jne 0x5afac8
// 005afabf  8b06                 mov eax, dword ptr [esi]
// 005afac1  8b5008               mov edx, dword ptr [eax + 8]
// 005afac4  8bce                 mov ecx, esi
// 005afac6  ffd2                 call edx
// 005afac8  68f8488300           push 0x8348f8
// 005afacd  8d4c2444             lea ecx, [esp + 0x44]
// 005afad1  ff1558248000         call dword ptr [0x802458]
// 005afad7  8d442440             lea eax, [esp + 0x40]
// 005afadb  50                   push eax
// 005afadc  8d4c2464             lea ecx, [esp + 0x64]
// 005afae0  c684249400000005     mov byte ptr [esp + 0x94], 5
// 005afae8  e863a2e5ff           call 0x409d50
// 005afaed  68c81b8d00           push 0x8d1bc8
// 005afaf2  8d4c2464             lea ecx, [esp + 0x64]
// 005afaf6  51                   push ecx
// 005afaf7  e8901a0f00           call 0x6a158c
// 005afafc  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 005afb04  896c2420             mov dword ptr [esp + 0x20], ebp
// 005afb08  68e0e48100           push 0x81e4e0
// 005afb0d  8d4c2428             lea ecx, [esp + 0x28]
// 005afb11  c684249400000006     mov byte ptr [esp + 0x94], 6
// 005afb19  ff1558248000         call dword ptr [0x802458]
// 005afb1f  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 005afb26  c684249000000007     mov byte ptr [esp + 0x90], 7
// 005afb2e  8d4c2424             lea ecx, [esp + 0x24]
// 005afb32  85c0                 test eax, eax
// 005afb34  7403                 je 0x5afb39
// 005afb36  50                   push eax
// 005afb37  eb05                 jmp 0x5afb3e
// 005afb39  68906d8100           push 0x816d90
// 005afb3e  ff1548248000         call dword ptr [0x802448]
// 005afb44  8b9c249c000000       mov ebx, dword ptr [esp + 0x9c]
// 005afb4b  8bc3                 mov eax, ebx
// 005afb4d  8d5001               lea edx, [eax + 1]
// 005afb50  8a08                 mov cl, byte ptr [eax]
// 005afb52  40                   inc eax
// 005afb53  84c9                 test cl, cl
// 005afb55  75f9                 jne 0x5afb50
// 005afb57  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005afb5b  2bc2                 sub eax, edx
// 005afb5d  837c243c10           cmp dword ptr [esp + 0x3c], 0x10
// 005afb62  7304                 jae 0x5afb68
// 005afb64  8d4c2428             lea ecx, [esp + 0x28]
// 005afb68  51                   push ecx
// 005afb69  50                   push eax
// 005afb6a  53                   push ebx
// 005afb6b  57                   push edi
// 005afb6c  e82f190600           call 0x6114a0
// 005afb71  83c410               add esp, 0x10
// 005afb74  85c0                 test eax, eax
// 005afb76  0f84b1000000         je 0x5afc2d
// 005afb7c  6aff                 push -1
// 005afb7e  57                   push edi
// 005afb7f  e80ccc0600           call 0x61c790
// 005afb84  83c408               add esp, 8
// 005afb87  50                   push eax
// 005afb88  8d4c2444             lea ecx, [esp + 0x44]
// 005afb8c  ff1558248000         call dword ptr [0x802458]
// 005afb92  6afe                 push -2
// 005afb94  b308                 mov bl, 8
// 005afb96  57                   push edi
// 005afb97  889c2498000000       mov byte ptr [esp + 0x98], bl
// 005afb9e  e87d200600           call 0x611c20
// 005afba3  8d54241c             lea edx, [esp + 0x1c]
// 005afba7  52                   push edx
// 005afba8  e8739afbff           call 0x569620
// 005afbad  83c40c               add esp, 0xc
// 005afbb0  837c245810           cmp dword ptr [esp + 0x58], 0x10
// 005afbb5  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005afbb9  c684249000000009     mov byte ptr [esp + 0x90], 9
// 005afbc1  7304                 jae 0x5afbc7
// 005afbc3  8d4c2444             lea ecx, [esp + 0x44]
// 005afbc7  8b00                 mov eax, dword ptr [eax]
// 005afbc9  51                   push ecx
// 005afbca  6a03                 push 3
// 005afbcc  50                   push eax
// 005afbcd  e8ce97fbff           call 0x5693a0
// 005afbd2  8b442424             mov eax, dword ptr [esp + 0x24]
// 005afbd6  83c40c               add esp, 0xc
// 005afbd9  889c2490000000       mov byte ptr [esp + 0x90], bl
// 005afbe0  85c0                 test eax, eax
// 005afbe2  742c                 je 0x5afc10
// 005afbe4  8bf0                 mov esi, eax
// 005afbe6  83c004               add eax, 4
// 005afbe9  83c9ff               or ecx, 0xffffffff
// 005afbec  f00fc108             lock xadd dword ptr [eax], ecx
// 005afbf0  751e                 jne 0x5afc10
// 005afbf2  8b16                 mov edx, dword ptr [esi]
// 005afbf4  8b4204               mov eax, dword ptr [edx + 4]
// 005afbf7  8bce                 mov ecx, esi
// 005afbf9  ffd0                 call eax
// 005afbfb  8d4e08               lea ecx, [esi + 8]
// 005afbfe  83caff               or edx, 0xffffffff
// 005afc01  f00fc111             lock xadd dword ptr [ecx], edx
// 005afc05  7509                 jne 0x5afc10
// 005afc07  8b06                 mov eax, dword ptr [esi]
// 005afc09  8b5008               mov edx, dword ptr [eax + 8]
// 005afc0c  8bce                 mov ecx, esi
// 005afc0e  ffd2                 call edx
// 005afc10  8d442440             lea eax, [esp + 0x40]
// 005afc14  50                   push eax
// 005afc15  8d4c2464             lea ecx, [esp + 0x64]
// 005afc19  e832a1e5ff           call 0x409d50
// 005afc1e  68c81b8d00           push 0x8d1bc8
// 005afc23  8d4c2464             lea ecx, [esp + 0x64]
// 005afc27  51                   push ecx
// 005afc28  e85f190f00           call 0x6a158c
// 005afc2d  83ec20               sub esp, 0x20
// 005afc30  8bc4                 mov eax, esp
// 005afc32  c70000000000         mov dword ptr [eax], 0
// 005afc38  8b8c24e4000000       mov ecx, dword ptr [esp + 0xe4]
// 005afc3f  89642430             mov dword ptr [esp + 0x30], esp
// 005afc43  85c9                 test ecx, ecx
// 005afc45  741e                 je 0x5afc65
// 005afc47  8908                 mov dword ptr [eax], ecx
// 005afc49  83c008               add eax, 8
// 005afc4c  6a00                 push 0
// 005afc4e  50                   push eax
// 005afc4f  8b8424ec000000       mov eax, dword ptr [esp + 0xec]
// 005afc56  8b08                 mov ecx, dword ptr [eax]
// 005afc58  8d9424f4000000       lea edx, [esp + 0xf4]
// 005afc5f  52                   push edx
// 005afc60  ffd1                 call ecx
// 005afc62  83c40c               add esp, 0xc
// 005afc65  83ec20               sub esp, 0x20
// 005afc68  8bc4                 mov eax, esp
// 005afc6a  c70000000000         mov dword ptr [eax], 0
// 005afc70  8b8c24e4000000       mov ecx, dword ptr [esp + 0xe4]
// 005afc77  c68424d00000000a     mov byte ptr [esp + 0xd0], 0xa
// 005afc7f  89642454             mov dword ptr [esp + 0x54], esp
// 005afc83  85c9                 test ecx, ecx
// 005afc85  741e                 je 0x5afca5
// 005afc87  8908                 mov dword ptr [eax], ecx
// 005afc89  83c008               add eax, 8
// 005afc8c  6a00                 push 0
// 005afc8e  50                   push eax
// 005afc8f  8b8424ec000000       mov eax, dword ptr [esp + 0xec]
// 005afc96  8b08                 mov ecx, dword ptr [eax]
// 005afc98  8d9424f4000000       lea edx, [esp + 0xf4]
// 005afc9f  52                   push edx
// 005afca0  ffd1                 call ecx
// 005afca2  83c40c               add esp, 0xc
// 005afca5  57                   push edi
// 005afca6  8bce                 mov ecx, esi
// 005afca8  c68424d400000007     mov byte ptr [esp + 0xd4], 7
// 005afcb0  e8cbeeffff           call 0x5aeb80
// 005afcb5  8d4c2424             lea ecx, [esp + 0x24]
// 005afcb9  c684249000000006     mov byte ptr [esp + 0x90], 6
// 005afcc1  ff1568248000         call dword ptr [0x802468]
// 005afcc7  6afe                 push -2
// 005afcc9  55                   push ebp
// 005afcca  c684249800000001     mov byte ptr [esp + 0x98], 1
// 005afcd2  e8491f0600           call 0x611c20
// 005afcd7  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 005afcde  83c408               add esp, 8
// 005afce1  c684249000000000     mov byte ptr [esp + 0x90], 0
// 005afce9  85c0                 test eax, eax
// 005afceb  7423                 je 0x5afd10
// 005afced  8b00                 mov eax, dword ptr [eax]
// 005afcef  85c0                 test eax, eax
// 005afcf1  7412                 je 0x5afd05
// 005afcf3  8d9424ac000000       lea edx, [esp + 0xac]
// 005afcfa  6a01                 push 1
// 005afcfc  52                   push edx
// 005afcfd  8bca                 mov ecx, edx
// 005afcff  51                   push ecx
// 005afd00  ffd0                 call eax
// 005afd02  83c40c               add esp, 0xc
// 005afd05  c78424a400000000000000 mov dword ptr [esp + 0xa4], 0
// 005afd10  8b8424c4000000       mov eax, dword ptr [esp + 0xc4]
// 005afd17  c7842490000000ffffffff mov dword ptr [esp + 0x90], 0xffffffff
// 005afd22  85c0                 test eax, eax
// 005afd24  7418                 je 0x5afd3e
// 005afd26  8b00                 mov eax, dword ptr [eax]
// 005afd28  85c0                 test eax, eax
// 005afd2a  7412                 je 0x5afd3e
// 005afd2c  8d9424cc000000       lea edx, [esp + 0xcc]
// 005afd33  6a01                 push 1
// 005afd35  52                   push edx
// 005afd36  8bca                 mov ecx, edx
// 005afd38  51                   push ecx
// 005afd39  ffd0                 call eax
// 005afd3b  83c40c               add esp, 0xc
// 005afd3e  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 005afd45  5f                   pop edi
// 005afd46  5e                   pop esi
// 005afd47  5d                   pop ebp
// 005afd48  64890d00000000       mov dword ptr fs:[0], ecx
// 005afd4f  5b                   pop ebx
// 005afd50  81c484000000         add esp, 0x84
// 005afd56  c24c00               ret 0x4c
// library rbxgs/roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp (function ?executeInNewThread@ScriptContext@RBX@@QAEXW4Identities@Security@2@PBD1V?$function1@IPAUlua_State@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@V?$function2@XPAUlua_State@@IV?$allocator@Vfunction_base@boost@@@std@@@6@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp
