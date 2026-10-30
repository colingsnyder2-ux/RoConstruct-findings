// roc 2009-06 00788e80  unit: CXTPToolTipContextToolTip  size: 1159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00788e80
//
// 00788e80  6aff                 push -1
// 00788e82  68a8a98700           push 0x87a9a8
// 00788e87  64a100000000         mov eax, dword ptr fs:[0]
// 00788e8d  50                   push eax
// 00788e8e  81ec5c020000         sub esp, 0x25c
// 00788e94  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00788e99  33c4                 xor eax, esp
// 00788e9b  89842458020000       mov dword ptr [esp + 0x258], eax
// 00788ea2  53                   push ebx
// 00788ea3  55                   push ebp
// 00788ea4  56                   push esi
// 00788ea5  57                   push edi
// 00788ea6  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00788eab  33c4                 xor eax, esp
// 00788ead  50                   push eax
// 00788eae  8d842470020000       lea eax, [esp + 0x270]
// 00788eb5  64a300000000         mov dword ptr fs:[0], eax
// 00788ebb  8b842484020000       mov eax, dword ptr [esp + 0x284]
// 00788ec2  8bbc2480020000       mov edi, dword ptr [esp + 0x280]
// 00788ec9  8bf1                 mov esi, ecx
// 00788ecb  6850c18c00           push 0x8cc150
// 00788ed0  8d4c2418             lea ecx, [esp + 0x18]
// 00788ed4  89442420             mov dword ptr [esp + 0x20], eax
// 00788ed8  ff1508fd8900         call dword ptr [0x89fd08]
// 00788ede  33db                 xor ebx, ebx
// 00788ee0  6824b58f00           push 0x8fb524
// 00788ee5  8d4c241c             lea ecx, [esp + 0x1c]
// 00788ee9  899c247c020000       mov dword ptr [esp + 0x27c], ebx
// 00788ef0  ff1508fd8900         call dword ptr [0x89fd08]
// 00788ef6  8bce                 mov ecx, esi
// 00788ef8  c684247802000001     mov byte ptr [esp + 0x278], 1
// 00788f00  e8dbfcffff           call 0x788be0
// 00788f05  8d8c2418010000       lea ecx, [esp + 0x118]
// 00788f0c  e8fff7ffff           call 0x788710
// 00788f11  6a3c                 push 0x3c
// 00788f13  8d8c24bc010000       lea ecx, [esp + 0x1bc]
// 00788f1a  51                   push ecx
// 00788f1b  8d9424a4000000       lea edx, [esp + 0xa4]
// 00788f22  6a3c                 push 0x3c
// 00788f24  52                   push edx
// 00788f25  ff1590e98900         call dword ptr [0x89e990]
// 00788f2b  8b2d50e98900         mov ebp, dword ptr [0x89e950]
// 00788f31  83c410               add esp, 0x10
// 00788f34  3bfb                 cmp edi, ebx
// 00788f36  7438                 je 0x788f70
// 00788f38  57                   push edi
// 00788f39  8bce                 mov ecx, esi
// 00788f3b  e870fbffff           call 0x788ab0
// 00788f40  85c0                 test eax, eax
// 00788f42  746e                 je 0x788fb2
// 00788f44  57                   push edi
// 00788f45  8d8424bc000000       lea eax, [esp + 0xbc]
// 00788f4c  6a20                 push 0x20
// 00788f4e  50                   push eax
// 00788f4f  ffd5                 call ebp
// 00788f51  57                   push edi
// 00788f52  8d8c2420020000       lea ecx, [esp + 0x220]
// 00788f59  6a20                 push 0x20
// 00788f5b  51                   push ecx
// 00788f5c  ffd5                 call ebp
// 00788f5e  57                   push edi
// 00788f5f  8d9424ac010000       lea edx, [esp + 0x1ac]
// 00788f66  6a20                 push 0x20
// 00788f68  52                   push edx
// 00788f69  ffd5                 call ebp
// 00788f6b  83c424               add esp, 0x24
// 00788f6e  eb42                 jmp 0x788fb2
// 00788f70  399e40010000         cmp dword ptr [esi + 0x140], ebx
// 00788f76  743a                 je 0x788fb2
// 00788f78  80bc24cf01000002     cmp byte ptr [esp + 0x1cf], 2
// 00788f80  7730                 ja 0x788fb2
// 00788f82  8d4c2414             lea ecx, [esp + 0x14]
// 00788f86  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00788f8c  50                   push eax
// 00788f8d  8bce                 mov ecx, esi
// 00788f8f  e81cfbffff           call 0x788ab0
// 00788f94  85c0                 test eax, eax
// 00788f96  741a                 je 0x788fb2
// 00788f98  8d4c2414             lea ecx, [esp + 0x14]
// 00788f9c  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00788fa2  50                   push eax
// 00788fa3  8d8424bc000000       lea eax, [esp + 0xbc]
// 00788faa  6a20                 push 0x20
// 00788fac  50                   push eax
// 00788fad  ffd5                 call ebp
// 00788faf  83c40c               add esp, 0xc
// 00788fb2  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00788fb9  51                   push ecx
// 00788fba  8d4c2424             lea ecx, [esp + 0x24]
// 00788fbe  e89df7ffff           call 0x788760
// 00788fc3  6aff                 push -1
// 00788fc5  6aff                 push -1
// 00788fc7  6aff                 push -1
// 00788fc9  6aff                 push -1
// 00788fcb  8d96dc000000         lea edx, [esi + 0xdc]
// 00788fd1  52                   push edx
// 00788fd2  8d442434             lea eax, [esp + 0x34]
// 00788fd6  50                   push eax
// 00788fd7  8bce                 mov ecx, esi
// 00788fd9  e8e2fcffff           call 0x788cc0
// 00788fde  85c0                 test eax, eax
// 00788fe0  751b                 jne 0x788ffd
// 00788fe2  8d4c2418             lea ecx, [esp + 0x18]
// 00788fe6  ff1510fd8900         call dword ptr [0x89fd10]
// 00788fec  8d4c2414             lea ecx, [esp + 0x14]
// 00788ff0  ff1510fd8900         call dword ptr [0x89fd10]
// 00788ff6  33c0                 xor eax, eax
// 00788ff8  e9e0020000           jmp 0x7892dd
// 00788ffd  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00789004  51                   push ecx
// 00789005  8d4c2424             lea ecx, [esp + 0x24]
// 00789009  e852f7ffff           call 0x788760
// 0078900e  6aff                 push -1
// 00789010  6aff                 push -1
// 00789012  6aff                 push -1
// 00789014  68bc020000           push 0x2bc
// 00789019  8d96e4000000         lea edx, [esi + 0xe4]
// 0078901f  52                   push edx
// 00789020  8d442434             lea eax, [esp + 0x34]
// 00789024  50                   push eax
// 00789025  8bce                 mov ecx, esi
// 00789027  e894fcffff           call 0x788cc0
// 0078902c  85c0                 test eax, eax
// 0078902e  74b2                 je 0x788fe2
// 00789030  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00789037  51                   push ecx
// 00789038  8d4c2424             lea ecx, [esp + 0x24]
// 0078903c  e81ff7ffff           call 0x788760
// 00789041  6aff                 push -1
// 00789043  6aff                 push -1
// 00789045  6a01                 push 1
// 00789047  6aff                 push -1
// 00789049  8d96ec000000         lea edx, [esi + 0xec]
// 0078904f  52                   push edx
// 00789050  8d442434             lea eax, [esp + 0x34]
// 00789054  50                   push eax
// 00789055  8bce                 mov ecx, esi
// 00789057  e864fcffff           call 0x788cc0
// 0078905c  85c0                 test eax, eax
// 0078905e  7482                 je 0x788fe2
// 00789060  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00789064  3bfb                 cmp edi, ebx
// 00789066  7419                 je 0x789081
// 00789068  57                   push edi
// 00789069  8bce                 mov ecx, esi
// 0078906b  e840faffff           call 0x788ab0
// 00789070  85c0                 test eax, eax
// 00789072  7453                 je 0x7890c7
// 00789074  57                   push edi
// 00789075  6a20                 push 0x20
// 00789077  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 0078907e  51                   push ecx
// 0078907f  eb41                 jmp 0x7890c2
// 00789081  8d9424d4010000       lea edx, [esp + 0x1d4]
// 00789088  52                   push edx
// 00789089  8d4c2418             lea ecx, [esp + 0x18]
// 0078908d  ff158cf38900         call dword ptr [0x89f38c]
// 00789093  85c0                 test eax, eax
// 00789095  7430                 je 0x7890c7
// 00789097  8d4c2418             lea ecx, [esp + 0x18]
// 0078909b  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007890a1  50                   push eax
// 007890a2  8bce                 mov ecx, esi
// 007890a4  e807faffff           call 0x788ab0
// 007890a9  85c0                 test eax, eax
// 007890ab  741a                 je 0x7890c7
// 007890ad  8d4c2418             lea ecx, [esp + 0x18]
// 007890b1  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007890b7  50                   push eax
// 007890b8  6a20                 push 0x20
// 007890ba  8d8424c0000000       lea eax, [esp + 0xc0]
// 007890c1  50                   push eax
// 007890c2  ffd5                 call ebp
// 007890c4  83c40c               add esp, 0xc
// 007890c7  8d8c249c000000       lea ecx, [esp + 0x9c]
// 007890ce  51                   push ecx
// 007890cf  8d4c2424             lea ecx, [esp + 0x24]
// 007890d3  e888f6ffff           call 0x788760
// 007890d8  688c0a0000           push 0xa8c
// 007890dd  6884030000           push 0x384
// 007890e2  6aff                 push -1
// 007890e4  6aff                 push -1
// 007890e6  8d96f4000000         lea edx, [esi + 0xf4]
// 007890ec  52                   push edx
// 007890ed  8d442434             lea eax, [esp + 0x34]
// 007890f1  50                   push eax
// 007890f2  8bce                 mov ecx, esi
// 007890f4  e8c7fbffff           call 0x788cc0
// 007890f9  85c0                 test eax, eax
// 007890fb  0f84e1feffff         je 0x788fe2
// 00789101  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00789108  51                   push ecx
// 00789109  8d4c2424             lea ecx, [esp + 0x24]
// 0078910d  e84ef6ffff           call 0x788760
// 00789112  688c0a0000           push 0xa8c
// 00789117  6884030000           push 0x384
// 0078911c  6aff                 push -1
// 0078911e  68bc020000           push 0x2bc
// 00789123  8d96fc000000         lea edx, [esi + 0xfc]
// 00789129  52                   push edx
// 0078912a  8d442434             lea eax, [esp + 0x34]
// 0078912e  50                   push eax
// 0078912f  8bce                 mov ecx, esi
// 00789131  e88afbffff           call 0x788cc0
// 00789136  85c0                 test eax, eax
// 00789138  0f84a4feffff         je 0x788fe2
// 0078913e  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 00789145  e8f6f5ffff           call 0x788740
// 0078914a  53                   push ebx
// 0078914b  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 00789152  51                   push ecx
// 00789153  6a3c                 push 0x3c
// 00789155  6a1f                 push 0x1f
// 00789157  ff1564ee8900         call dword ptr [0x89ee64]
// 0078915d  6aff                 push -1
// 0078915f  6aff                 push -1
// 00789161  6aff                 push -1
// 00789163  6aff                 push -1
// 00789165  8d9604010000         lea edx, [esi + 0x104]
// 0078916b  52                   push edx
// 0078916c  8d8424ec000000       lea eax, [esp + 0xec]
// 00789173  50                   push eax
// 00789174  8bce                 mov ecx, esi
// 00789176  e845fbffff           call 0x788cc0
// 0078917b  85c0                 test eax, eax
// 0078917d  0f845ffeffff         je 0x788fe2
// 00789183  6aff                 push -1
// 00789185  6aff                 push -1
// 00789187  6aff                 push -1
// 00789189  68bc020000           push 0x2bc
// 0078918e  8d8e0c010000         lea ecx, [esi + 0x10c]
// 00789194  51                   push ecx
// 00789195  8d9424ec000000       lea edx, [esp + 0xec]
// 0078919c  52                   push edx
// 0078919d  8bce                 mov ecx, esi
// 0078919f  e81cfbffff           call 0x788cc0
// 007891a4  85c0                 test eax, eax
// 007891a6  0f8436feffff         je 0x788fe2
// 007891ac  8d8424f4010000       lea eax, [esp + 0x1f4]
// 007891b3  50                   push eax
// 007891b4  8d4c2424             lea ecx, [esp + 0x24]
// 007891b8  e8a3f5ffff           call 0x788760
// 007891bd  6aff                 push -1
// 007891bf  6aff                 push -1
// 007891c1  6aff                 push -1
// 007891c3  6aff                 push -1
// 007891c5  8d8e1c010000         lea ecx, [esi + 0x11c]
// 007891cb  51                   push ecx
// 007891cc  8d542434             lea edx, [esp + 0x34]
// 007891d0  52                   push edx
// 007891d1  8bce                 mov ecx, esi
// 007891d3  e8e8faffff           call 0x788cc0
// 007891d8  85c0                 test eax, eax
// 007891da  0f8402feffff         je 0x788fe2
// 007891e0  8d842474010000       lea eax, [esp + 0x174]
// 007891e7  50                   push eax
// 007891e8  8d4c2424             lea ecx, [esp + 0x24]
// 007891ec  e86ff5ffff           call 0x788760
// 007891f1  6aff                 push -1
// 007891f3  6aff                 push -1
// 007891f5  6aff                 push -1
// 007891f7  6aff                 push -1
// 007891f9  8d8e24010000         lea ecx, [esi + 0x124]
// 007891ff  51                   push ecx
// 00789200  8d542434             lea edx, [esp + 0x34]
// 00789204  52                   push edx
// 00789205  8bce                 mov ecx, esi
// 00789207  e8b4faffff           call 0x788cc0
// 0078920c  85c0                 test eax, eax
// 0078920e  0f84cefdffff         je 0x788fe2
// 00789214  8b8424d8000000       mov eax, dword ptr [esp + 0xd8]
// 0078921b  8b0dcc258f00         mov ecx, dword ptr [0x8f25cc]
// 00789221  8b15d0258f00         mov edx, dword ptr [0x8f25d0]
// 00789227  89442460             mov dword ptr [esp + 0x60], eax
// 0078922b  33c0                 xor eax, eax
// 0078922d  89842484000000       mov dword ptr [esp + 0x84], eax
// 00789234  89842488000000       mov dword ptr [esp + 0x88], eax
// 0078923b  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 00789242  89842490000000       mov dword ptr [esp + 0x90], eax
// 00789249  89842494000000       mov dword ptr [esp + 0x94], eax
// 00789250  89842498000000       mov dword ptr [esp + 0x98], eax
// 00789257  8d442460             lea eax, [esp + 0x60]
// 0078925b  894c247c             mov dword ptr [esp + 0x7c], ecx
// 0078925f  50                   push eax
// 00789260  8d4c2424             lea ecx, [esp + 0x24]
// 00789264  895c2468             mov dword ptr [esp + 0x68], ebx
// 00789268  895c246c             mov dword ptr [esp + 0x6c], ebx
// 0078926c  895c2470             mov dword ptr [esp + 0x70], ebx
// 00789270  895c2474             mov dword ptr [esp + 0x74], ebx
// 00789274  885c2478             mov byte ptr [esp + 0x78], bl
// 00789278  885c2479             mov byte ptr [esp + 0x79], bl
// 0078927c  885c247a             mov byte ptr [esp + 0x7a], bl
// 00789280  c644247b01           mov byte ptr [esp + 0x7b], 1
// 00789285  885c247c             mov byte ptr [esp + 0x7c], bl
// 00789289  885c247d             mov byte ptr [esp + 0x7d], bl
// 0078928d  885c247e             mov byte ptr [esp + 0x7e], bl
// 00789291  885c247f             mov byte ptr [esp + 0x7f], bl
// 00789295  89942484000000       mov dword ptr [esp + 0x84], edx
// 0078929c  e8bff4ffff           call 0x788760
// 007892a1  6aff                 push -1
// 007892a3  6aff                 push -1
// 007892a5  6aff                 push -1
// 007892a7  6aff                 push -1
// 007892a9  8d8e14010000         lea ecx, [esi + 0x114]
// 007892af  51                   push ecx
// 007892b0  8d542434             lea edx, [esp + 0x34]
// 007892b4  52                   push edx
// 007892b5  8bce                 mov ecx, esi
// 007892b7  e804faffff           call 0x788cc0
// 007892bc  8d4c2418             lea ecx, [esp + 0x18]
// 007892c0  85c0                 test eax, eax
// 007892c2  0f841efdffff         je 0x788fe6
// 007892c8  ff1510fd8900         call dword ptr [0x89fd10]
// 007892ce  8d4c2414             lea ecx, [esp + 0x14]
// 007892d2  ff1510fd8900         call dword ptr [0x89fd10]
// 007892d8  b801000000           mov eax, 1
// 007892dd  8b8c2470020000       mov ecx, dword ptr [esp + 0x270]
// 007892e4  64890d00000000       mov dword ptr fs:[0], ecx
// 007892eb  59                   pop ecx
// 007892ec  5f                   pop edi
// 007892ed  5e                   pop esi
// 007892ee  5d                   pop ebp
// 007892ef  5b                   pop ebx
// 007892f0  8b8c2458020000       mov ecx, dword ptr [esp + 0x258]
// 007892f7  33cc                 xor ecx, esp
// 007892f9  e87c12f9ff           call 0x71a57a
// 007892fe  81c468020000         add esp, 0x268
// 00789304  c20800               ret 8
// copied from an identical function in another client (function ?LoadSysFonts@CXTAuxData@@QAEHPBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports Source/Controls/XTGlobal.cpp