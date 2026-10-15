// roc 2008-06 0063f040  unit: RBX::ResizeTool  size: 649 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063f040
//
// 0063f040  6aff                 push -1
// 0063f042  685ba97d00           push 0x7da95b
// 0063f047  64a100000000         mov eax, dword ptr fs:[0]
// 0063f04d  50                   push eax
// 0063f04e  64892500000000       mov dword ptr fs:[0], esp
// 0063f055  83ec78               sub esp, 0x78
// 0063f058  53                   push ebx
// 0063f059  55                   push ebp
// 0063f05a  56                   push esi
// 0063f05b  57                   push edi
// 0063f05c  8bf9                 mov edi, ecx
// 0063f05e  8b4718               mov eax, dword ptr [edi + 0x18]
// 0063f061  89442418             mov dword ptr [esp + 0x18], eax
// 0063f065  33c0                 xor eax, eax
// 0063f067  8944241c             mov dword ptr [esp + 0x1c], eax
// 0063f06b  89442420             mov dword ptr [esp + 0x20], eax
// 0063f06f  6a01                 push 1
// 0063f071  8d4c241c             lea ecx, [esp + 0x1c]
// 0063f075  89842494000000       mov dword ptr [esp + 0x94], eax
// 0063f07c  e83f2cf4ff           call 0x581cc0
// 0063f081  8bb054010000         mov esi, dword ptr [eax + 0x154]
// 0063f087  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0063f08a  3b6e10               cmp ebp, dword ptr [esi + 0x10]
// 0063f08d  7606                 jbe 0x63f095
// 0063f08f  ff1590288000         call dword ptr [0x802890]
// 0063f095  8b0e                 mov ecx, dword ptr [esi]
// 0063f097  894c2410             mov dword ptr [esp + 0x10], ecx
// 0063f09b  8bdd                 mov ebx, ebp
// 0063f09d  8d4900               lea ecx, [ecx]
// 0063f0a0  6a01                 push 1
// 0063f0a2  8d4c241c             lea ecx, [esp + 0x1c]
// 0063f0a6  e8152cf4ff           call 0x581cc0
// 0063f0ab  8bb054010000         mov esi, dword ptr [eax + 0x154]
// 0063f0b1  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0063f0b4  396e0c               cmp dword ptr [esi + 0xc], ebp
// 0063f0b7  7606                 jbe 0x63f0bf
// 0063f0b9  ff1590288000         call dword ptr [0x802890]
// 0063f0bf  8b442410             mov eax, dword ptr [esp + 0x10]
// 0063f0c3  8b36                 mov esi, dword ptr [esi]
// 0063f0c5  85c0                 test eax, eax
// 0063f0c7  7404                 je 0x63f0cd
// 0063f0c9  3bc6                 cmp eax, esi
// 0063f0cb  740e                 je 0x63f0db
// 0063f0cd  8b3590288000         mov esi, dword ptr [0x802890]
// 0063f0d3  ffd6                 call esi
// 0063f0d5  8b442410             mov eax, dword ptr [esp + 0x10]
// 0063f0d9  eb06                 jmp 0x63f0e1
// 0063f0db  8b3590288000         mov esi, dword ptr [0x802890]
// 0063f0e1  3bdd                 cmp ebx, ebp
// 0063f0e3  0f8456010000         je 0x63f23f
// 0063f0e9  85c0                 test eax, eax
// 0063f0eb  0f85b4000000         jne 0x63f1a5
// 0063f0f1  ffd6                 call esi
// 0063f0f3  33c0                 xor eax, eax
// 0063f0f5  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0063f0f8  7202                 jb 0x63f0fc
// 0063f0fa  ffd6                 call esi
// 0063f0fc  8b03                 mov eax, dword ptr [ebx]
// 0063f0fe  6a00                 push 0
// 0063f100  6850dd9200           push 0x92dd50
// 0063f105  687c909200           push 0x92907c
// 0063f10a  6a00                 push 0
// 0063f10c  50                   push eax
// 0063f10d  e8b4260600           call 0x6a17c6
// 0063f112  8bf0                 mov esi, eax
// 0063f114  83c414               add esp, 0x14
// 0063f117  85f6                 test esi, esi
// 0063f119  7467                 je 0x63f182
// 0063f11b  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 0063f122  52                   push edx
// 0063f123  8d442440             lea eax, [esp + 0x40]
// 0063f127  50                   push eax
// 0063f128  8bcf                 mov ecx, edi
// 0063f12a  e8d16bfdff           call 0x615d00
// 0063f12f  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 0063f135  8b5108               mov edx, dword ptr [ecx + 8]
// 0063f138  8d8c3234010000       lea ecx, [edx + esi + 0x134]
// 0063f13f  8d472c               lea eax, [edi + 0x2c]
// 0063f142  50                   push eax
// 0063f143  8d5730               lea edx, [edi + 0x30]
// 0063f146  52                   push edx
// 0063f147  8b11                 mov edx, dword ptr [ecx]
// 0063f149  8b12                 mov edx, dword ptr [edx]
// 0063f14b  8d442444             lea eax, [esp + 0x44]
// 0063f14f  50                   push eax
// 0063f150  8d442464             lea eax, [esp + 0x64]
// 0063f154  50                   push eax
// 0063f155  c68424a000000001     mov byte ptr [esp + 0xa0], 1
// 0063f15d  ffd2                 call edx
// 0063f15f  50                   push eax
// 0063f160  8b06                 mov eax, dword ptr [esi]
// 0063f162  8b5058               mov edx, dword ptr [eax + 0x58]
// 0063f165  8d4c2434             lea ecx, [esp + 0x34]
// 0063f169  51                   push ecx
// 0063f16a  8bce                 mov ecx, esi
// 0063f16c  ffd2                 call edx
// 0063f16e  50                   push eax
// 0063f16f  e83c650200           call 0x6656b0
// 0063f174  83c414               add esp, 0x14
// 0063f177  84c0                 test al, al
// 0063f179  7535                 jne 0x63f1b0
// 0063f17b  88842490000000       mov byte ptr [esp + 0x90], al
// 0063f182  8b442410             mov eax, dword ptr [esp + 0x10]
// 0063f186  85c0                 test eax, eax
// 0063f188  7522                 jne 0x63f1ac
// 0063f18a  ff1590288000         call dword ptr [0x802890]
// 0063f190  33c0                 xor eax, eax
// 0063f192  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0063f195  7206                 jb 0x63f19d
// 0063f197  ff1590288000         call dword ptr [0x802890]
// 0063f19d  83c308               add ebx, 8
// 0063f1a0  e9fbfeffff           jmp 0x63f0a0
// 0063f1a5  8b00                 mov eax, dword ptr [eax]
// 0063f1a7  e949ffffff           jmp 0x63f0f5
// 0063f1ac  8b00                 mov eax, dword ptr [eax]
// 0063f1ae  ebe2                 jmp 0x63f192
// 0063f1b0  8d442410             lea eax, [esp + 0x10]
// 0063f1b4  56                   push esi
// 0063f1b5  50                   push eax
// 0063f1b6  e88598fdff           call 0x618a40
// 0063f1bb  83c408               add esp, 8
// 0063f1be  8b08                 mov ecx, dword ptr [eax]
// 0063f1c0  894f20               mov dword ptr [edi + 0x20], ecx
// 0063f1c3  8b7004               mov esi, dword ptr [eax + 4]
// 0063f1c6  c684249000000002     mov byte ptr [esp + 0x90], 2
// 0063f1ce  85f6                 test esi, esi
// 0063f1d0  740c                 je 0x63f1de
// 0063f1d2  8d5608               lea edx, [esi + 8]
// 0063f1d5  b801000000           mov eax, 1
// 0063f1da  f00fc102             lock xadd dword ptr [edx], eax
// 0063f1de  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0063f1e1  85c9                 test ecx, ecx
// 0063f1e3  7413                 je 0x63f1f8
// 0063f1e5  8d5108               lea edx, [ecx + 8]
// 0063f1e8  83c8ff               or eax, 0xffffffff
// 0063f1eb  f00fc102             lock xadd dword ptr [edx], eax
// 0063f1ef  7507                 jne 0x63f1f8
// 0063f1f1  8b11                 mov edx, dword ptr [ecx]
// 0063f1f3  8b4208               mov eax, dword ptr [edx + 8]
// 0063f1f6  ffd0                 call eax
// 0063f1f8  897724               mov dword ptr [edi + 0x24], esi
// 0063f1fb  8b742414             mov esi, dword ptr [esp + 0x14]
// 0063f1ff  c684249000000001     mov byte ptr [esp + 0x90], 1
// 0063f207  85f6                 test esi, esi
// 0063f209  742a                 je 0x63f235
// 0063f20b  8d4e04               lea ecx, [esi + 4]
// 0063f20e  83caff               or edx, 0xffffffff
// 0063f211  f00fc111             lock xadd dword ptr [ecx], edx
// 0063f215  751e                 jne 0x63f235
// 0063f217  8b06                 mov eax, dword ptr [esi]
// 0063f219  8b5004               mov edx, dword ptr [eax + 4]
// 0063f21c  8bce                 mov ecx, esi
// 0063f21e  ffd2                 call edx
// 0063f220  8d4608               lea eax, [esi + 8]
// 0063f223  83c9ff               or ecx, 0xffffffff
// 0063f226  f00fc108             lock xadd dword ptr [eax], ecx
// 0063f22a  7509                 jne 0x63f235
// 0063f22c  8b16                 mov edx, dword ptr [esi]
// 0063f22e  8b4208               mov eax, dword ptr [edx + 8]
// 0063f231  8bce                 mov ecx, esi
// 0063f233  ffd0                 call eax
// 0063f235  c744243cc4828200     mov dword ptr [esp + 0x3c], 0x8282c4
// 0063f23d  eb32                 jmp 0x63f271
// 0063f23f  8d4720               lea eax, [edi + 0x20]
// 0063f242  8d4c2410             lea ecx, [esp + 0x10]
// 0063f246  3bc8                 cmp ecx, eax
// 0063f248  7406                 je 0x63f250
// 0063f24a  c70000000000         mov dword ptr [eax], 0
// 0063f250  8b4804               mov ecx, dword ptr [eax + 4]
// 0063f253  c7400400000000       mov dword ptr [eax + 4], 0
// 0063f25a  85c9                 test ecx, ecx
// 0063f25c  7413                 je 0x63f271
// 0063f25e  8d5108               lea edx, [ecx + 8]
// 0063f261  83c8ff               or eax, 0xffffffff
// 0063f264  f00fc102             lock xadd dword ptr [edx], eax
// 0063f268  7507                 jne 0x63f271
// 0063f26a  8b11                 mov edx, dword ptr [ecx]
// 0063f26c  8b4208               mov eax, dword ptr [edx + 8]
// 0063f26f  ffd0                 call eax
// 0063f271  8b742420             mov esi, dword ptr [esp + 0x20]
// 0063f275  c7842490000000ffffffff mov dword ptr [esp + 0x90], 0xffffffff
// 0063f280  85f6                 test esi, esi
// 0063f282  742a                 je 0x63f2ae
// 0063f284  83caff               or edx, 0xffffffff
// 0063f287  8d4e04               lea ecx, [esi + 4]
// 0063f28a  f00fc111             lock xadd dword ptr [ecx], edx
// 0063f28e  751e                 jne 0x63f2ae
// 0063f290  8b06                 mov eax, dword ptr [esi]
// 0063f292  8b5004               mov edx, dword ptr [eax + 4]
// 0063f295  8bce                 mov ecx, esi
// 0063f297  ffd2                 call edx
// 0063f299  83c9ff               or ecx, 0xffffffff
// 0063f29c  8d4608               lea eax, [esi + 8]
// 0063f29f  f00fc108             lock xadd dword ptr [eax], ecx
// 0063f2a3  7509                 jne 0x63f2ae
// 0063f2a5  8b16                 mov edx, dword ptr [esi]
// 0063f2a7  8b4208               mov eax, dword ptr [edx + 8]
// 0063f2aa  8bce                 mov ecx, esi
// 0063f2ac  ffd0                 call eax
// 0063f2ae  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0063f2b5  5f                   pop edi
// 0063f2b6  5e                   pop esi
// 0063f2b7  5d                   pop ebp
// 0063f2b8  5b                   pop ebx
// 0063f2b9  64890d00000000       mov dword ptr fs:[0], ecx
// 0063f2c0  81c484000000         add esp, 0x84
// 0063f2c6  c20400               ret 4
// library rbxgs/roc_unit_3ec6397cb9dfa2ae.cpp (function ?findTargetPV@ResizeTool@RBX@@AAEXABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_3ec6397cb9dfa2ae.cpp
