// roc 2012-06 009edbf0  unit: CXTPToolTipContextToolTip  size: 1159 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009edbf0
//
// 009edbf0  6aff                 push -1
// 009edbf2  686818ae00           push 0xae1868
// 009edbf7  64a100000000         mov eax, dword ptr fs:[0]
// 009edbfd  50                   push eax
// 009edbfe  81ec5c020000         sub esp, 0x25c
// 009edc04  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009edc09  33c4                 xor eax, esp
// 009edc0b  89842458020000       mov dword ptr [esp + 0x258], eax
// 009edc12  53                   push ebx
// 009edc13  55                   push ebp
// 009edc14  56                   push esi
// 009edc15  57                   push edi
// 009edc16  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009edc1b  33c4                 xor eax, esp
// 009edc1d  50                   push eax
// 009edc1e  8d842470020000       lea eax, [esp + 0x270]
// 009edc25  64a300000000         mov dword ptr fs:[0], eax
// 009edc2b  8b842484020000       mov eax, dword ptr [esp + 0x284]
// 009edc32  8bbc2480020000       mov edi, dword ptr [esp + 0x280]
// 009edc39  8bf1                 mov esi, ecx
// 009edc3b  68003fb800           push 0xb83f00
// 009edc40  8d4c2418             lea ecx, [esp + 0x18]
// 009edc44  89442420             mov dword ptr [esp + 0x20], eax
// 009edc48  ff15c847b200         call dword ptr [0xb247c8]
// 009edc4e  33db                 xor ebx, ebx
// 009edc50  680c76bb00           push 0xbb760c
// 009edc55  8d4c241c             lea ecx, [esp + 0x1c]
// 009edc59  899c247c020000       mov dword ptr [esp + 0x27c], ebx
// 009edc60  ff15c847b200         call dword ptr [0xb247c8]
// 009edc66  8bce                 mov ecx, esi
// 009edc68  c684247802000001     mov byte ptr [esp + 0x278], 1
// 009edc70  e8dbfcffff           call 0x9ed950
// 009edc75  8d8c2418010000       lea ecx, [esp + 0x118]
// 009edc7c  e8fff7ffff           call 0x9ed480
// 009edc81  6a3c                 push 0x3c
// 009edc83  8d8c24bc010000       lea ecx, [esp + 0x1bc]
// 009edc8a  51                   push ecx
// 009edc8b  8d9424a4000000       lea edx, [esp + 0xa4]
// 009edc92  6a3c                 push 0x3c
// 009edc94  52                   push edx
// 009edc95  ff15fc29b200         call dword ptr [0xb229fc]
// 009edc9b  8b2dd82ab200         mov ebp, dword ptr [0xb22ad8]
// 009edca1  83c410               add esp, 0x10
// 009edca4  3bfb                 cmp edi, ebx
// 009edca6  7438                 je 0x9edce0
// 009edca8  57                   push edi
// 009edca9  8bce                 mov ecx, esi
// 009edcab  e870fbffff           call 0x9ed820
// 009edcb0  85c0                 test eax, eax
// 009edcb2  746e                 je 0x9edd22
// 009edcb4  57                   push edi
// 009edcb5  8d8424bc000000       lea eax, [esp + 0xbc]
// 009edcbc  6a20                 push 0x20
// 009edcbe  50                   push eax
// 009edcbf  ffd5                 call ebp
// 009edcc1  57                   push edi
// 009edcc2  8d8c2420020000       lea ecx, [esp + 0x220]
// 009edcc9  6a20                 push 0x20
// 009edccb  51                   push ecx
// 009edccc  ffd5                 call ebp
// 009edcce  57                   push edi
// 009edccf  8d9424ac010000       lea edx, [esp + 0x1ac]
// 009edcd6  6a20                 push 0x20
// 009edcd8  52                   push edx
// 009edcd9  ffd5                 call ebp
// 009edcdb  83c424               add esp, 0x24
// 009edcde  eb42                 jmp 0x9edd22
// 009edce0  399e40010000         cmp dword ptr [esi + 0x140], ebx
// 009edce6  743a                 je 0x9edd22
// 009edce8  80bc24cf01000002     cmp byte ptr [esp + 0x1cf], 2
// 009edcf0  7730                 ja 0x9edd22
// 009edcf2  8d4c2414             lea ecx, [esp + 0x14]
// 009edcf6  ff159847b200         call dword ptr [0xb24798]
// 009edcfc  50                   push eax
// 009edcfd  8bce                 mov ecx, esi
// 009edcff  e81cfbffff           call 0x9ed820
// 009edd04  85c0                 test eax, eax
// 009edd06  741a                 je 0x9edd22
// 009edd08  8d4c2414             lea ecx, [esp + 0x14]
// 009edd0c  ff159847b200         call dword ptr [0xb24798]
// 009edd12  50                   push eax
// 009edd13  8d8424bc000000       lea eax, [esp + 0xbc]
// 009edd1a  6a20                 push 0x20
// 009edd1c  50                   push eax
// 009edd1d  ffd5                 call ebp
// 009edd1f  83c40c               add esp, 0xc
// 009edd22  8d8c249c000000       lea ecx, [esp + 0x9c]
// 009edd29  51                   push ecx
// 009edd2a  8d4c2424             lea ecx, [esp + 0x24]
// 009edd2e  e89df7ffff           call 0x9ed4d0
// 009edd33  6aff                 push -1
// 009edd35  6aff                 push -1
// 009edd37  6aff                 push -1
// 009edd39  6aff                 push -1
// 009edd3b  8d96dc000000         lea edx, [esi + 0xdc]
// 009edd41  52                   push edx
// 009edd42  8d442434             lea eax, [esp + 0x34]
// 009edd46  50                   push eax
// 009edd47  8bce                 mov ecx, esi
// 009edd49  e8e2fcffff           call 0x9eda30
// 009edd4e  85c0                 test eax, eax
// 009edd50  751b                 jne 0x9edd6d
// 009edd52  8d4c2418             lea ecx, [esp + 0x18]
// 009edd56  ff15d047b200         call dword ptr [0xb247d0]
// 009edd5c  8d4c2414             lea ecx, [esp + 0x14]
// 009edd60  ff15d047b200         call dword ptr [0xb247d0]
// 009edd66  33c0                 xor eax, eax
// 009edd68  e9e0020000           jmp 0x9ee04d
// 009edd6d  8d8c249c000000       lea ecx, [esp + 0x9c]
// 009edd74  51                   push ecx
// 009edd75  8d4c2424             lea ecx, [esp + 0x24]
// 009edd79  e852f7ffff           call 0x9ed4d0
// 009edd7e  6aff                 push -1
// 009edd80  6aff                 push -1
// 009edd82  6aff                 push -1
// 009edd84  68bc020000           push 0x2bc
// 009edd89  8d96e4000000         lea edx, [esi + 0xe4]
// 009edd8f  52                   push edx
// 009edd90  8d442434             lea eax, [esp + 0x34]
// 009edd94  50                   push eax
// 009edd95  8bce                 mov ecx, esi
// 009edd97  e894fcffff           call 0x9eda30
// 009edd9c  85c0                 test eax, eax
// 009edd9e  74b2                 je 0x9edd52
// 009edda0  8d8c249c000000       lea ecx, [esp + 0x9c]
// 009edda7  51                   push ecx
// 009edda8  8d4c2424             lea ecx, [esp + 0x24]
// 009eddac  e81ff7ffff           call 0x9ed4d0
// 009eddb1  6aff                 push -1
// 009eddb3  6aff                 push -1
// 009eddb5  6a01                 push 1
// 009eddb7  6aff                 push -1
// 009eddb9  8d96ec000000         lea edx, [esi + 0xec]
// 009eddbf  52                   push edx
// 009eddc0  8d442434             lea eax, [esp + 0x34]
// 009eddc4  50                   push eax
// 009eddc5  8bce                 mov ecx, esi
// 009eddc7  e864fcffff           call 0x9eda30
// 009eddcc  85c0                 test eax, eax
// 009eddce  7482                 je 0x9edd52
// 009eddd0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 009eddd4  3bfb                 cmp edi, ebx
// 009eddd6  7419                 je 0x9eddf1
// 009eddd8  57                   push edi
// 009eddd9  8bce                 mov ecx, esi
// 009edddb  e840faffff           call 0x9ed820
// 009edde0  85c0                 test eax, eax
// 009edde2  7453                 je 0x9ede37
// 009edde4  57                   push edi
// 009edde5  6a20                 push 0x20
// 009edde7  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 009eddee  51                   push ecx
// 009eddef  eb41                 jmp 0x9ede32
// 009eddf1  8d9424d4010000       lea edx, [esp + 0x1d4]
// 009eddf8  52                   push edx
// 009eddf9  8d4c2418             lea ecx, [esp + 0x18]
// 009eddfd  ff151c40b200         call dword ptr [0xb2401c]
// 009ede03  85c0                 test eax, eax
// 009ede05  7430                 je 0x9ede37
// 009ede07  8d4c2418             lea ecx, [esp + 0x18]
// 009ede0b  ff159847b200         call dword ptr [0xb24798]
// 009ede11  50                   push eax
// 009ede12  8bce                 mov ecx, esi
// 009ede14  e807faffff           call 0x9ed820
// 009ede19  85c0                 test eax, eax
// 009ede1b  741a                 je 0x9ede37
// 009ede1d  8d4c2418             lea ecx, [esp + 0x18]
// 009ede21  ff159847b200         call dword ptr [0xb24798]
// 009ede27  50                   push eax
// 009ede28  6a20                 push 0x20
// 009ede2a  8d8424c0000000       lea eax, [esp + 0xc0]
// 009ede31  50                   push eax
// 009ede32  ffd5                 call ebp
// 009ede34  83c40c               add esp, 0xc
// 009ede37  8d8c249c000000       lea ecx, [esp + 0x9c]
// 009ede3e  51                   push ecx
// 009ede3f  8d4c2424             lea ecx, [esp + 0x24]
// 009ede43  e888f6ffff           call 0x9ed4d0
// 009ede48  688c0a0000           push 0xa8c
// 009ede4d  6884030000           push 0x384
// 009ede52  6aff                 push -1
// 009ede54  6aff                 push -1
// 009ede56  8d96f4000000         lea edx, [esi + 0xf4]
// 009ede5c  52                   push edx
// 009ede5d  8d442434             lea eax, [esp + 0x34]
// 009ede61  50                   push eax
// 009ede62  8bce                 mov ecx, esi
// 009ede64  e8c7fbffff           call 0x9eda30
// 009ede69  85c0                 test eax, eax
// 009ede6b  0f84e1feffff         je 0x9edd52
// 009ede71  8d8c249c000000       lea ecx, [esp + 0x9c]
// 009ede78  51                   push ecx
// 009ede79  8d4c2424             lea ecx, [esp + 0x24]
// 009ede7d  e84ef6ffff           call 0x9ed4d0
// 009ede82  688c0a0000           push 0xa8c
// 009ede87  6884030000           push 0x384
// 009ede8c  6aff                 push -1
// 009ede8e  68bc020000           push 0x2bc
// 009ede93  8d96fc000000         lea edx, [esi + 0xfc]
// 009ede99  52                   push edx
// 009ede9a  8d442434             lea eax, [esp + 0x34]
// 009ede9e  50                   push eax
// 009ede9f  8bce                 mov ecx, esi
// 009edea1  e88afbffff           call 0x9eda30
// 009edea6  85c0                 test eax, eax
// 009edea8  0f84a4feffff         je 0x9edd52
// 009edeae  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 009edeb5  e8f6f5ffff           call 0x9ed4b0
// 009edeba  53                   push ebx
// 009edebb  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 009edec2  51                   push ecx
// 009edec3  6a3c                 push 0x3c
// 009edec5  6a1f                 push 0x1f
// 009edec7  ff15543ab200         call dword ptr [0xb23a54]
// 009edecd  6aff                 push -1
// 009edecf  6aff                 push -1
// 009eded1  6aff                 push -1
// 009eded3  6aff                 push -1
// 009eded5  8d9604010000         lea edx, [esi + 0x104]
// 009ededb  52                   push edx
// 009ededc  8d8424ec000000       lea eax, [esp + 0xec]
// 009edee3  50                   push eax
// 009edee4  8bce                 mov ecx, esi
// 009edee6  e845fbffff           call 0x9eda30
// 009edeeb  85c0                 test eax, eax
// 009edeed  0f845ffeffff         je 0x9edd52
// 009edef3  6aff                 push -1
// 009edef5  6aff                 push -1
// 009edef7  6aff                 push -1
// 009edef9  68bc020000           push 0x2bc
// 009edefe  8d8e0c010000         lea ecx, [esi + 0x10c]
// 009edf04  51                   push ecx
// 009edf05  8d9424ec000000       lea edx, [esp + 0xec]
// 009edf0c  52                   push edx
// 009edf0d  8bce                 mov ecx, esi
// 009edf0f  e81cfbffff           call 0x9eda30
// 009edf14  85c0                 test eax, eax
// 009edf16  0f8436feffff         je 0x9edd52
// 009edf1c  8d8424f4010000       lea eax, [esp + 0x1f4]
// 009edf23  50                   push eax
// 009edf24  8d4c2424             lea ecx, [esp + 0x24]
// 009edf28  e8a3f5ffff           call 0x9ed4d0
// 009edf2d  6aff                 push -1
// 009edf2f  6aff                 push -1
// 009edf31  6aff                 push -1
// 009edf33  6aff                 push -1
// 009edf35  8d8e1c010000         lea ecx, [esi + 0x11c]
// 009edf3b  51                   push ecx
// 009edf3c  8d542434             lea edx, [esp + 0x34]
// 009edf40  52                   push edx
// 009edf41  8bce                 mov ecx, esi
// 009edf43  e8e8faffff           call 0x9eda30
// 009edf48  85c0                 test eax, eax
// 009edf4a  0f8402feffff         je 0x9edd52
// 009edf50  8d842474010000       lea eax, [esp + 0x174]
// 009edf57  50                   push eax
// 009edf58  8d4c2424             lea ecx, [esp + 0x24]
// 009edf5c  e86ff5ffff           call 0x9ed4d0
// 009edf61  6aff                 push -1
// 009edf63  6aff                 push -1
// 009edf65  6aff                 push -1
// 009edf67  6aff                 push -1
// 009edf69  8d8e24010000         lea ecx, [esi + 0x124]
// 009edf6f  51                   push ecx
// 009edf70  8d542434             lea edx, [esp + 0x34]
// 009edf74  52                   push edx
// 009edf75  8bce                 mov ecx, esi
// 009edf77  e8b4faffff           call 0x9eda30
// 009edf7c  85c0                 test eax, eax
// 009edf7e  0f84cefdffff         je 0x9edd52
// 009edf84  8b8424d8000000       mov eax, dword ptr [esp + 0xd8]
// 009edf8b  8b0d54d2c000         mov ecx, dword ptr [0xc0d254]
// 009edf91  8b1558d2c000         mov edx, dword ptr [0xc0d258]
// 009edf97  89442460             mov dword ptr [esp + 0x60], eax
// 009edf9b  33c0                 xor eax, eax
// 009edf9d  89842484000000       mov dword ptr [esp + 0x84], eax
// 009edfa4  89842488000000       mov dword ptr [esp + 0x88], eax
// 009edfab  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 009edfb2  89842490000000       mov dword ptr [esp + 0x90], eax
// 009edfb9  89842494000000       mov dword ptr [esp + 0x94], eax
// 009edfc0  89842498000000       mov dword ptr [esp + 0x98], eax
// 009edfc7  8d442460             lea eax, [esp + 0x60]
// 009edfcb  894c247c             mov dword ptr [esp + 0x7c], ecx
// 009edfcf  50                   push eax
// 009edfd0  8d4c2424             lea ecx, [esp + 0x24]
// 009edfd4  895c2468             mov dword ptr [esp + 0x68], ebx
// 009edfd8  895c246c             mov dword ptr [esp + 0x6c], ebx
// 009edfdc  895c2470             mov dword ptr [esp + 0x70], ebx
// 009edfe0  895c2474             mov dword ptr [esp + 0x74], ebx
// 009edfe4  885c2478             mov byte ptr [esp + 0x78], bl
// 009edfe8  885c2479             mov byte ptr [esp + 0x79], bl
// 009edfec  885c247a             mov byte ptr [esp + 0x7a], bl
// 009edff0  c644247b01           mov byte ptr [esp + 0x7b], 1
// 009edff5  885c247c             mov byte ptr [esp + 0x7c], bl
// 009edff9  885c247d             mov byte ptr [esp + 0x7d], bl
// 009edffd  885c247e             mov byte ptr [esp + 0x7e], bl
// 009ee001  885c247f             mov byte ptr [esp + 0x7f], bl
// 009ee005  89942484000000       mov dword ptr [esp + 0x84], edx
// 009ee00c  e8bff4ffff           call 0x9ed4d0
// 009ee011  6aff                 push -1
// 009ee013  6aff                 push -1
// 009ee015  6aff                 push -1
// 009ee017  6aff                 push -1
// 009ee019  8d8e14010000         lea ecx, [esi + 0x114]
// 009ee01f  51                   push ecx
// 009ee020  8d542434             lea edx, [esp + 0x34]
// 009ee024  52                   push edx
// 009ee025  8bce                 mov ecx, esi
// 009ee027  e804faffff           call 0x9eda30
// 009ee02c  8d4c2418             lea ecx, [esp + 0x18]
// 009ee030  85c0                 test eax, eax
// 009ee032  0f841efdffff         je 0x9edd56
// 009ee038  ff15d047b200         call dword ptr [0xb247d0]
// 009ee03e  8d4c2414             lea ecx, [esp + 0x14]
// 009ee042  ff15d047b200         call dword ptr [0xb247d0]
// 009ee048  b801000000           mov eax, 1
// 009ee04d  8b8c2470020000       mov ecx, dword ptr [esp + 0x270]
// 009ee054  64890d00000000       mov dword ptr fs:[0], ecx
// 009ee05b  59                   pop ecx
// 009ee05c  5f                   pop edi
// 009ee05d  5e                   pop esi
// 009ee05e  5d                   pop ebp
// 009ee05f  5b                   pop ebx
// 009ee060  8b8c2458020000       mov ecx, dword ptr [esp + 0x258]
// 009ee067  33cc                 xor ecx, esp
// 009ee069  e8c959f9ff           call 0x983a37
// 009ee06e  81c468020000         add esp, 0x268
// 009ee074  c20800               ret 8
// copied from an identical function in another client (function ?LoadSysFonts@CXTAuxData@@QAEHPBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports Source/Controls/XTGlobal.cpp