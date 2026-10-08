// roc 2007-03 00604a60  unit: seg_00600000  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00604a60
//
// 00604a60  64a100000000         mov eax, dword ptr fs:[0]
// 00604a66  6aff                 push -1
// 00604a68  68d0ca7500           push 0x75cad0
// 00604a6d  50                   push eax
// 00604a6e  64892500000000       mov dword ptr fs:[0], esp
// 00604a75  83ec50               sub esp, 0x50
// 00604a78  56                   push esi
// 00604a79  8bf1                 mov esi, ecx
// 00604a7b  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00604a7e  e81d46fdff           call 0x5d90a0
// 00604a83  84c0                 test al, al
// 00604a85  0f84fb000000         je 0x604b86
// 00604a8b  807e3000             cmp byte ptr [esi + 0x30], 0
// 00604a8f  0f84dd000000         je 0x604b72
// 00604a95  8b442464             mov eax, dword ptr [esp + 0x64]
// 00604a99  8b4008               mov eax, dword ptr [eax + 8]
// 00604a9c  83e872               sub eax, 0x72
// 00604a9f  746d                 je 0x604b0e
// 00604aa1  83e802               sub eax, 2
// 00604aa4  0f85c8000000         jne 0x604b72
// 00604aaa  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00604aad  57                   push edi
// 00604aae  8d542410             lea edx, [esp + 0x10]
// 00604ab2  52                   push edx
// 00604ab3  e8d8fcffff           call 0x604790
// 00604ab8  8d4c2408             lea ecx, [esp + 8]
// 00604abc  51                   push ecx
// 00604abd  8bc8                 mov ecx, eax
// 00604abf  c744246402000000     mov dword ptr [esp + 0x64], 2
// 00604ac7  e8e468fcff           call 0x5cb3b0
// 00604acc  8b38                 mov edi, dword ptr [eax]
// 00604ace  8b4618               mov eax, dword ptr [esi + 0x18]
// 00604ad1  8d8830020000         lea ecx, [eax + 0x230]
// 00604ad7  8b01                 mov eax, dword ptr [ecx]
// 00604ad9  8d542428             lea edx, [esp + 0x28]
// 00604add  52                   push edx
// 00604ade  8b5004               mov edx, dword ptr [eax + 4]
// 00604ae1  c644246403           mov byte ptr [esp + 0x64], 3
// 00604ae6  ffd2                 call edx
// 00604ae8  8bc8                 mov ecx, eax
// 00604aea  e8910fe5ff           call 0x455a80
// 00604aef  50                   push eax
// 00604af0  57                   push edi
// 00604af1  e82a1b0100           call 0x616620
// 00604af6  83c408               add esp, 8
// 00604af9  8d4c2408             lea ecx, [esp + 8]
// 00604afd  c644246002           mov byte ptr [esp + 0x60], 2
// 00604b02  e869eafcff           call 0x5d3570
// 00604b07  8b442414             mov eax, dword ptr [esp + 0x14]
// 00604b0b  5f                   pop edi
// 00604b0c  eb43                 jmp 0x604b51
// 00604b0e  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00604b11  8d44241c             lea eax, [esp + 0x1c]
// 00604b15  50                   push eax
// 00604b16  e875fcffff           call 0x604790
// 00604b1b  8d4c2414             lea ecx, [esp + 0x14]
// 00604b1f  51                   push ecx
// 00604b20  8bc8                 mov ecx, eax
// 00604b22  c744246000000000     mov dword ptr [esp + 0x60], 0
// 00604b2a  e88168fcff           call 0x5cb3b0
// 00604b2f  8b00                 mov eax, dword ptr [eax]
// 00604b31  50                   push eax
// 00604b32  c644246001           mov byte ptr [esp + 0x60], 1
// 00604b37  e8841a0100           call 0x6165c0
// 00604b3c  83c404               add esp, 4
// 00604b3f  8d4c2414             lea ecx, [esp + 0x14]
// 00604b43  c644245c00           mov byte ptr [esp + 0x5c], 0
// 00604b48  e823eafcff           call 0x5d3570
// 00604b4d  8b442420             mov eax, dword ptr [esp + 0x20]
// 00604b51  85c0                 test eax, eax
// 00604b53  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 00604b5b  7415                 je 0x604b72
// 00604b5d  8bc8                 mov ecx, eax
// 00604b5f  83caff               or edx, 0xffffffff
// 00604b62  83c008               add eax, 8
// 00604b65  f00fc110             lock xadd dword ptr [eax], edx
// 00604b69  7507                 jne 0x604b72
// 00604b6b  8b01                 mov eax, dword ptr [ecx]
// 00604b6d  8b5008               mov edx, dword ptr [eax + 8]
// 00604b70  ffd2                 call edx
// 00604b72  8bc6                 mov eax, esi
// 00604b74  5e                   pop esi
// 00604b75  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00604b79  64890d00000000       mov dword ptr fs:[0], ecx
// 00604b80  83c45c               add esp, 0x5c
// 00604b83  c20400               ret 4
// 00604b86  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00604b8a  33c0                 xor eax, eax
// 00604b8c  5e                   pop esi
// 00604b8d  64890d00000000       mov dword ptr fs:[0], ecx
// 00604b94  83c45c               add esp, 0x5c
// 00604b97  c20400               ret 4
// library rbxgs/tool\PartDragTool.cpp (function ?onKeyDown@PartDragTool@RBX@@UAEPAVMouseCommand@2@ABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/PartDragTool.cpp
