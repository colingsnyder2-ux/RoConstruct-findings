// roc 2009-12 00863e80  unit: CXTPToolTipContextToolTip  size: 1159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00863e80
//
// 00863e80  6aff                 push -1
// 00863e82  6858ec9500           push 0x95ec58
// 00863e87  64a100000000         mov eax, dword ptr fs:[0]
// 00863e8d  50                   push eax
// 00863e8e  81ec5c020000         sub esp, 0x25c
// 00863e94  a10052b600           mov eax, dword ptr [0xb65200]
// 00863e99  33c4                 xor eax, esp
// 00863e9b  89842458020000       mov dword ptr [esp + 0x258], eax
// 00863ea2  53                   push ebx
// 00863ea3  55                   push ebp
// 00863ea4  56                   push esi
// 00863ea5  57                   push edi
// 00863ea6  a10052b600           mov eax, dword ptr [0xb65200]
// 00863eab  33c4                 xor eax, esp
// 00863ead  50                   push eax
// 00863eae  8d842470020000       lea eax, [esp + 0x270]
// 00863eb5  64a300000000         mov dword ptr fs:[0], eax
// 00863ebb  8b842484020000       mov eax, dword ptr [esp + 0x284]
// 00863ec2  8bbc2480020000       mov edi, dword ptr [esp + 0x280]
// 00863ec9  8bf1                 mov esi, ecx
// 00863ecb  68f82f9c00           push 0x9c2ff8
// 00863ed0  8d4c2418             lea ecx, [esp + 0x18]
// 00863ed4  89442420             mov dword ptr [esp + 0x20], eax
// 00863ed8  ff15b8de9800         call dword ptr [0x98deb8]
// 00863ede  33db                 xor ebx, ebx
// 00863ee0  68ccb99f00           push 0x9fb9cc
// 00863ee5  8d4c241c             lea ecx, [esp + 0x1c]
// 00863ee9  899c247c020000       mov dword ptr [esp + 0x27c], ebx
// 00863ef0  ff15b8de9800         call dword ptr [0x98deb8]
// 00863ef6  8bce                 mov ecx, esi
// 00863ef8  c684247802000001     mov byte ptr [esp + 0x278], 1
// 00863f00  e8dbfcffff           call 0x863be0
// 00863f05  8d8c2418010000       lea ecx, [esp + 0x118]
// 00863f0c  e8bf96f9ff           call 0x7fd5d0
// 00863f11  6a3c                 push 0x3c
// 00863f13  8d8c24bc010000       lea ecx, [esp + 0x1bc]
// 00863f1a  51                   push ecx
// 00863f1b  8d9424a4000000       lea edx, [esp + 0xa4]
// 00863f22  6a3c                 push 0x3c
// 00863f24  52                   push edx
// 00863f25  ff157cb79800         call dword ptr [0x98b77c]
// 00863f2b  8b2dc8b79800         mov ebp, dword ptr [0x98b7c8]
// 00863f31  83c410               add esp, 0x10
// 00863f34  3bfb                 cmp edi, ebx
// 00863f36  7438                 je 0x863f70
// 00863f38  57                   push edi
// 00863f39  8bce                 mov ecx, esi
// 00863f3b  e870fbffff           call 0x863ab0
// 00863f40  85c0                 test eax, eax
// 00863f42  746e                 je 0x863fb2
// 00863f44  57                   push edi
// 00863f45  8d8424bc000000       lea eax, [esp + 0xbc]
// 00863f4c  6a20                 push 0x20
// 00863f4e  50                   push eax
// 00863f4f  ffd5                 call ebp
// 00863f51  57                   push edi
// 00863f52  8d8c2420020000       lea ecx, [esp + 0x220]
// 00863f59  6a20                 push 0x20
// 00863f5b  51                   push ecx
// 00863f5c  ffd5                 call ebp
// 00863f5e  57                   push edi
// 00863f5f  8d9424ac010000       lea edx, [esp + 0x1ac]
// 00863f66  6a20                 push 0x20
// 00863f68  52                   push edx
// 00863f69  ffd5                 call ebp
// 00863f6b  83c424               add esp, 0x24
// 00863f6e  eb42                 jmp 0x863fb2
// 00863f70  399e40010000         cmp dword ptr [esi + 0x140], ebx
// 00863f76  743a                 je 0x863fb2
// 00863f78  80bc24cf01000002     cmp byte ptr [esp + 0x1cf], 2
// 00863f80  7730                 ja 0x863fb2
// 00863f82  8d4c2414             lea ecx, [esp + 0x14]
// 00863f86  ff1580de9800         call dword ptr [0x98de80]
// 00863f8c  50                   push eax
// 00863f8d  8bce                 mov ecx, esi
// 00863f8f  e81cfbffff           call 0x863ab0
// 00863f94  85c0                 test eax, eax
// 00863f96  741a                 je 0x863fb2
// 00863f98  8d4c2414             lea ecx, [esp + 0x14]
// 00863f9c  ff1580de9800         call dword ptr [0x98de80]
// 00863fa2  50                   push eax
// 00863fa3  8d8424bc000000       lea eax, [esp + 0xbc]
// 00863faa  6a20                 push 0x20
// 00863fac  50                   push eax
// 00863fad  ffd5                 call ebp
// 00863faf  83c40c               add esp, 0xc
// 00863fb2  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00863fb9  51                   push ecx
// 00863fba  8d4c2424             lea ecx, [esp + 0x24]
// 00863fbe  e89df7ffff           call 0x863760
// 00863fc3  6aff                 push -1
// 00863fc5  6aff                 push -1
// 00863fc7  6aff                 push -1
// 00863fc9  6aff                 push -1
// 00863fcb  8d96dc000000         lea edx, [esi + 0xdc]
// 00863fd1  52                   push edx
// 00863fd2  8d442434             lea eax, [esp + 0x34]
// 00863fd6  50                   push eax
// 00863fd7  8bce                 mov ecx, esi
// 00863fd9  e8e2fcffff           call 0x863cc0
// 00863fde  85c0                 test eax, eax
// 00863fe0  751b                 jne 0x863ffd
// 00863fe2  8d4c2418             lea ecx, [esp + 0x18]
// 00863fe6  ff15c0de9800         call dword ptr [0x98dec0]
// 00863fec  8d4c2414             lea ecx, [esp + 0x14]
// 00863ff0  ff15c0de9800         call dword ptr [0x98dec0]
// 00863ff6  33c0                 xor eax, eax
// 00863ff8  e9e0020000           jmp 0x8642dd
// 00863ffd  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00864004  51                   push ecx
// 00864005  8d4c2424             lea ecx, [esp + 0x24]
// 00864009  e852f7ffff           call 0x863760
// 0086400e  6aff                 push -1
// 00864010  6aff                 push -1
// 00864012  6aff                 push -1
// 00864014  68bc020000           push 0x2bc
// 00864019  8d96e4000000         lea edx, [esi + 0xe4]
// 0086401f  52                   push edx
// 00864020  8d442434             lea eax, [esp + 0x34]
// 00864024  50                   push eax
// 00864025  8bce                 mov ecx, esi
// 00864027  e894fcffff           call 0x863cc0
// 0086402c  85c0                 test eax, eax
// 0086402e  74b2                 je 0x863fe2
// 00864030  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00864037  51                   push ecx
// 00864038  8d4c2424             lea ecx, [esp + 0x24]
// 0086403c  e81ff7ffff           call 0x863760
// 00864041  6aff                 push -1
// 00864043  6aff                 push -1
// 00864045  6a01                 push 1
// 00864047  6aff                 push -1
// 00864049  8d96ec000000         lea edx, [esi + 0xec]
// 0086404f  52                   push edx
// 00864050  8d442434             lea eax, [esp + 0x34]
// 00864054  50                   push eax
// 00864055  8bce                 mov ecx, esi
// 00864057  e864fcffff           call 0x863cc0
// 0086405c  85c0                 test eax, eax
// 0086405e  7482                 je 0x863fe2
// 00864060  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00864064  3bfb                 cmp edi, ebx
// 00864066  7419                 je 0x864081
// 00864068  57                   push edi
// 00864069  8bce                 mov ecx, esi
// 0086406b  e840faffff           call 0x863ab0
// 00864070  85c0                 test eax, eax
// 00864072  7453                 je 0x8640c7
// 00864074  57                   push edi
// 00864075  6a20                 push 0x20
// 00864077  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 0086407e  51                   push ecx
// 0086407f  eb41                 jmp 0x8640c2
// 00864081  8d9424d4010000       lea edx, [esp + 0x1d4]
// 00864088  52                   push edx
// 00864089  8d4c2418             lea ecx, [esp + 0x18]
// 0086408d  ff15d4cf9800         call dword ptr [0x98cfd4]
// 00864093  85c0                 test eax, eax
// 00864095  7430                 je 0x8640c7
// 00864097  8d4c2418             lea ecx, [esp + 0x18]
// 0086409b  ff1580de9800         call dword ptr [0x98de80]
// 008640a1  50                   push eax
// 008640a2  8bce                 mov ecx, esi
// 008640a4  e807faffff           call 0x863ab0
// 008640a9  85c0                 test eax, eax
// 008640ab  741a                 je 0x8640c7
// 008640ad  8d4c2418             lea ecx, [esp + 0x18]
// 008640b1  ff1580de9800         call dword ptr [0x98de80]
// 008640b7  50                   push eax
// 008640b8  6a20                 push 0x20
// 008640ba  8d8424c0000000       lea eax, [esp + 0xc0]
// 008640c1  50                   push eax
// 008640c2  ffd5                 call ebp
// 008640c4  83c40c               add esp, 0xc
// 008640c7  8d8c249c000000       lea ecx, [esp + 0x9c]
// 008640ce  51                   push ecx
// 008640cf  8d4c2424             lea ecx, [esp + 0x24]
// 008640d3  e888f6ffff           call 0x863760
// 008640d8  688c0a0000           push 0xa8c
// 008640dd  6884030000           push 0x384
// 008640e2  6aff                 push -1
// 008640e4  6aff                 push -1
// 008640e6  8d96f4000000         lea edx, [esi + 0xf4]
// 008640ec  52                   push edx
// 008640ed  8d442434             lea eax, [esp + 0x34]
// 008640f1  50                   push eax
// 008640f2  8bce                 mov ecx, esi
// 008640f4  e8c7fbffff           call 0x863cc0
// 008640f9  85c0                 test eax, eax
// 008640fb  0f84e1feffff         je 0x863fe2
// 00864101  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00864108  51                   push ecx
// 00864109  8d4c2424             lea ecx, [esp + 0x24]
// 0086410d  e84ef6ffff           call 0x863760
// 00864112  688c0a0000           push 0xa8c
// 00864117  6884030000           push 0x384
// 0086411c  6aff                 push -1
// 0086411e  68bc020000           push 0x2bc
// 00864123  8d96fc000000         lea edx, [esi + 0xfc]
// 00864129  52                   push edx
// 0086412a  8d442434             lea eax, [esp + 0x34]
// 0086412e  50                   push eax
// 0086412f  8bce                 mov ecx, esi
// 00864131  e88afbffff           call 0x863cc0
// 00864136  85c0                 test eax, eax
// 00864138  0f84a4feffff         je 0x863fe2
// 0086413e  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 00864145  e8f6f5ffff           call 0x863740
// 0086414a  53                   push ebx
// 0086414b  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 00864152  51                   push ecx
// 00864153  6a3c                 push 0x3c
// 00864155  6a1f                 push 0x1f
// 00864157  ff1500cc9800         call dword ptr [0x98cc00]
// 0086415d  6aff                 push -1
// 0086415f  6aff                 push -1
// 00864161  6aff                 push -1
// 00864163  6aff                 push -1
// 00864165  8d9604010000         lea edx, [esi + 0x104]
// 0086416b  52                   push edx
// 0086416c  8d8424ec000000       lea eax, [esp + 0xec]
// 00864173  50                   push eax
// 00864174  8bce                 mov ecx, esi
// 00864176  e845fbffff           call 0x863cc0
// 0086417b  85c0                 test eax, eax
// 0086417d  0f845ffeffff         je 0x863fe2
// 00864183  6aff                 push -1
// 00864185  6aff                 push -1
// 00864187  6aff                 push -1
// 00864189  68bc020000           push 0x2bc
// 0086418e  8d8e0c010000         lea ecx, [esi + 0x10c]
// 00864194  51                   push ecx
// 00864195  8d9424ec000000       lea edx, [esp + 0xec]
// 0086419c  52                   push edx
// 0086419d  8bce                 mov ecx, esi
// 0086419f  e81cfbffff           call 0x863cc0
// 008641a4  85c0                 test eax, eax
// 008641a6  0f8436feffff         je 0x863fe2
// 008641ac  8d8424f4010000       lea eax, [esp + 0x1f4]
// 008641b3  50                   push eax
// 008641b4  8d4c2424             lea ecx, [esp + 0x24]
// 008641b8  e8a3f5ffff           call 0x863760
// 008641bd  6aff                 push -1
// 008641bf  6aff                 push -1
// 008641c1  6aff                 push -1
// 008641c3  6aff                 push -1
// 008641c5  8d8e1c010000         lea ecx, [esi + 0x11c]
// 008641cb  51                   push ecx
// 008641cc  8d542434             lea edx, [esp + 0x34]
// 008641d0  52                   push edx
// 008641d1  8bce                 mov ecx, esi
// 008641d3  e8e8faffff           call 0x863cc0
// 008641d8  85c0                 test eax, eax
// 008641da  0f8402feffff         je 0x863fe2
// 008641e0  8d842474010000       lea eax, [esp + 0x174]
// 008641e7  50                   push eax
// 008641e8  8d4c2424             lea ecx, [esp + 0x24]
// 008641ec  e86ff5ffff           call 0x863760
// 008641f1  6aff                 push -1
// 008641f3  6aff                 push -1
// 008641f5  6aff                 push -1
// 008641f7  6aff                 push -1
// 008641f9  8d8e24010000         lea ecx, [esi + 0x124]
// 008641ff  51                   push ecx
// 00864200  8d542434             lea edx, [esp + 0x34]
// 00864204  52                   push edx
// 00864205  8bce                 mov ecx, esi
// 00864207  e8b4faffff           call 0x863cc0
// 0086420c  85c0                 test eax, eax
// 0086420e  0f84cefdffff         je 0x863fe2
// 00864214  8b8424d8000000       mov eax, dword ptr [esp + 0xd8]
// 0086421b  8b0dac2a9f00         mov ecx, dword ptr [0x9f2aac]
// 00864221  8b15b02a9f00         mov edx, dword ptr [0x9f2ab0]
// 00864227  89442460             mov dword ptr [esp + 0x60], eax
// 0086422b  33c0                 xor eax, eax
// 0086422d  89842484000000       mov dword ptr [esp + 0x84], eax
// 00864234  89842488000000       mov dword ptr [esp + 0x88], eax
// 0086423b  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 00864242  89842490000000       mov dword ptr [esp + 0x90], eax
// 00864249  89842494000000       mov dword ptr [esp + 0x94], eax
// 00864250  89842498000000       mov dword ptr [esp + 0x98], eax
// 00864257  8d442460             lea eax, [esp + 0x60]
// 0086425b  894c247c             mov dword ptr [esp + 0x7c], ecx
// 0086425f  50                   push eax
// 00864260  8d4c2424             lea ecx, [esp + 0x24]
// 00864264  895c2468             mov dword ptr [esp + 0x68], ebx
// 00864268  895c246c             mov dword ptr [esp + 0x6c], ebx
// 0086426c  895c2470             mov dword ptr [esp + 0x70], ebx
// 00864270  895c2474             mov dword ptr [esp + 0x74], ebx
// 00864274  885c2478             mov byte ptr [esp + 0x78], bl
// 00864278  885c2479             mov byte ptr [esp + 0x79], bl
// 0086427c  885c247a             mov byte ptr [esp + 0x7a], bl
// 00864280  c644247b01           mov byte ptr [esp + 0x7b], 1
// 00864285  885c247c             mov byte ptr [esp + 0x7c], bl
// 00864289  885c247d             mov byte ptr [esp + 0x7d], bl
// 0086428d  885c247e             mov byte ptr [esp + 0x7e], bl
// 00864291  885c247f             mov byte ptr [esp + 0x7f], bl
// 00864295  89942484000000       mov dword ptr [esp + 0x84], edx
// 0086429c  e8bff4ffff           call 0x863760
// 008642a1  6aff                 push -1
// 008642a3  6aff                 push -1
// 008642a5  6aff                 push -1
// 008642a7  6aff                 push -1
// 008642a9  8d8e14010000         lea ecx, [esi + 0x114]
// 008642af  51                   push ecx
// 008642b0  8d542434             lea edx, [esp + 0x34]
// 008642b4  52                   push edx
// 008642b5  8bce                 mov ecx, esi
// 008642b7  e804faffff           call 0x863cc0
// 008642bc  8d4c2418             lea ecx, [esp + 0x18]
// 008642c0  85c0                 test eax, eax
// 008642c2  0f841efdffff         je 0x863fe6
// 008642c8  ff15c0de9800         call dword ptr [0x98dec0]
// 008642ce  8d4c2414             lea ecx, [esp + 0x14]
// 008642d2  ff15c0de9800         call dword ptr [0x98dec0]
// 008642d8  b801000000           mov eax, 1
// 008642dd  8b8c2470020000       mov ecx, dword ptr [esp + 0x270]
// 008642e4  64890d00000000       mov dword ptr fs:[0], ecx
// 008642eb  59                   pop ecx
// 008642ec  5f                   pop edi
// 008642ed  5e                   pop esi
// 008642ee  5d                   pop ebp
// 008642ef  5b                   pop ebx
// 008642f0  8b8c2458020000       mov ecx, dword ptr [esp + 0x258]
// 008642f7  33cc                 xor ecx, esp
// 008642f9  e89c10f9ff           call 0x7f539a
// 008642fe  81c468020000         add esp, 0x268
// 00864304  c20800               ret 8
// copied from an identical function in another client (function ?LoadSysFonts@CXTAuxData@@QAEHPBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports Source/Controls/XTGlobal.cpp