// roc 2008-06 00477970  unit: G3D::VARArea  size: 592 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00477970
//
// 00477970  64a100000000         mov eax, dword ptr fs:[0]
// 00477976  6aff                 push -1
// 00477978  6895497c00           push 0x7c4995
// 0047797d  50                   push eax
// 0047797e  64892500000000       mov dword ptr fs:[0], esp
// 00477985  ff4178               inc dword ptr [ecx + 0x78]
// 00477988  83ec1c               sub esp, 0x1c
// 0047798b  57                   push edi
// 0047798c  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00477990  83ff09               cmp edi, 9
// 00477993  0f84f1010000         je 0x477b8a
// 00477999  56                   push esi
// 0047799a  8b742434             mov esi, dword ptr [esp + 0x34]
// 0047799e  8bc6                 mov eax, esi
// 004779a0  6bc05c               imul eax, eax, 0x5c
// 004779a3  39bc081c050000       cmp dword ptr [eax + ecx + 0x51c], edi
// 004779aa  8d94081c050000       lea edx, [eax + ecx + 0x51c]
// 004779b1  0f84d2010000         je 0x477b89
// 004779b7  ff4170               inc dword ptr [ecx + 0x70]
// 004779ba  8b81c4040000         mov eax, dword ptr [ecx + 0x4c4]
// 004779c0  3bc6                 cmp eax, esi
// 004779c2  7d02                 jge 0x4779c6
// 004779c4  8bc6                 mov eax, esi
// 004779c6  53                   push ebx
// 004779c7  8981c4040000         mov dword ptr [ecx + 0x4c4], eax
// 004779cd  33db                 xor ebx, ebx
// 004779cf  893a                 mov dword ptr [edx], edi
// 004779d1  381d7eee9600         cmp byte ptr [0x96ee7e], bl
// 004779d7  740d                 je 0x4779e6
// 004779d9  81c6c0840000         add esi, 0x84c0
// 004779df  56                   push esi
// 004779e0  ff1504f89600         call dword ptr [0x96f804]
// 004779e6  83ceff               or esi, 0xffffffff
// 004779e9  f60540f0960001       test byte ptr [0x96f040], 1
// 004779f0  7543                 jne 0x477a35
// 004779f2  830d40f0960001       or dword ptr [0x96f040], 1
// 004779f9  68c8e48100           push 0x81e4c8
// 004779fe  8d4c2410             lea ecx, [esp + 0x10]
// 00477a02  895c2434             mov dword ptr [esp + 0x34], ebx
// 00477a06  ff1558248000         call dword ptr [0x802458]
// 00477a0c  8d4c240c             lea ecx, [esp + 0xc]
// 00477a10  51                   push ecx
// 00477a11  c644243401           mov byte ptr [esp + 0x34], 1
// 00477a16  e84596ffff           call 0x471060
// 00477a1b  83c404               add esp, 4
// 00477a1e  8d4c240c             lea ecx, [esp + 0xc]
// 00477a22  a23ef09600           mov byte ptr [0x96f03e], al
// 00477a27  885c2430             mov byte ptr [esp + 0x30], bl
// 00477a2b  ff1568248000         call dword ptr [0x802468]
// 00477a31  89742430             mov dword ptr [esp + 0x30], esi
// 00477a35  bb02000000           mov ebx, 2
// 00477a3a  841d40f09600         test byte ptr [0x96f040], bl
// 00477a40  7542                 jne 0x477a84
// 00477a42  091d40f09600         or dword ptr [0x96f040], ebx
// 00477a48  68ace48100           push 0x81e4ac
// 00477a4d  8d4c2410             lea ecx, [esp + 0x10]
// 00477a51  895c2434             mov dword ptr [esp + 0x34], ebx
// 00477a55  ff1558248000         call dword ptr [0x802458]
// 00477a5b  8d54240c             lea edx, [esp + 0xc]
// 00477a5f  52                   push edx
// 00477a60  c644243403           mov byte ptr [esp + 0x34], 3
// 00477a65  e8f695ffff           call 0x471060
// 00477a6a  83c404               add esp, 4
// 00477a6d  8d4c240c             lea ecx, [esp + 0xc]
// 00477a71  a23df09600           mov byte ptr [0x96f03d], al
// 00477a76  885c2430             mov byte ptr [esp + 0x30], bl
// 00477a7a  ff1568248000         call dword ptr [0x802468]
// 00477a80  89742430             mov dword ptr [esp + 0x30], esi
// 00477a84  bb04000000           mov ebx, 4
// 00477a89  841d40f09600         test byte ptr [0x96f040], bl
// 00477a8f  753e                 jne 0x477acf
// 00477a91  091d40f09600         or dword ptr [0x96f040], ebx
// 00477a97  6894e48100           push 0x81e494
// 00477a9c  8d4c2410             lea ecx, [esp + 0x10]
// 00477aa0  895c2434             mov dword ptr [esp + 0x34], ebx
// 00477aa4  ff1558248000         call dword ptr [0x802458]
// 00477aaa  8d44240c             lea eax, [esp + 0xc]
// 00477aae  50                   push eax
// 00477aaf  c644243405           mov byte ptr [esp + 0x34], 5
// 00477ab4  e8a795ffff           call 0x471060
// 00477ab9  83c404               add esp, 4
// 00477abc  8d4c240c             lea ecx, [esp + 0xc]
// 00477ac0  a23cf09600           mov byte ptr [0x96f03c], al
// 00477ac5  885c2430             mov byte ptr [esp + 0x30], bl
// 00477ac9  ff1568248000         call dword ptr [0x802468]
// 00477acf  5b                   pop ebx
// 00477ad0  83ff08               cmp edi, 8
// 00477ad3  0f87b0000000         ja 0x477b89
// 00477ad9  ff24bd9c7b4700       jmp dword ptr [edi*4 + 0x477b9c]
// 00477ae0  68011e0000           push 0x1e01
// 00477ae5  e98f000000           jmp 0x477b79
// 00477aea  68e20b0000           push 0xbe2
// 00477aef  e985000000           jmp 0x477b79
// 00477af4  6800210000           push 0x2100
// 00477af9  eb7e                 jmp 0x477b79
// 00477afb  6801210000           push 0x2101
// 00477b00  eb77                 jmp 0x477b79
// 00477b02  0fb60d3df09600       movzx ecx, byte ptr [0x96f03d]
// 00477b09  f7d9                 neg ecx
// 00477b0b  1bc9                 sbb ecx, ecx
// 00477b0d  81e122f5ffff         and ecx, 0xfffff522
// 00477b13  81c1e20b0000         add ecx, 0xbe2
// 00477b19  51                   push ecx
// 00477b1a  eb5d                 jmp 0x477b79
// 00477b1c  0fb6153ef09600       movzx edx, byte ptr [0x96f03e]
// 00477b23  f7da                 neg edx
// 00477b25  1bd2                 sbb edx, edx
// 00477b27  81e205790000         and edx, 0x7905
// 00477b2d  eb43                 jmp 0x477b72
// 00477b2f  0fb6053ef09600       movzx eax, byte ptr [0x96f03e]
// 00477b36  f7d8                 neg eax
// 00477b38  1bc0                 sbb eax, eax
// 00477b3a  2592790000           and eax, 0x7992
// 00477b3f  05e20b0000           add eax, 0xbe2
// 00477b44  50                   push eax
// 00477b45  eb32                 jmp 0x477b79
// 00477b47  0fb60d3cf09600       movzx ecx, byte ptr [0x96f03c]
// 00477b4e  f7d9                 neg ecx
// 00477b50  1bc9                 sbb ecx, ecx
// 00477b52  81e1cc7a0000         and ecx, 0x7acc
// 00477b58  81c1e20b0000         add ecx, 0xbe2
// 00477b5e  51                   push ecx
// 00477b5f  eb18                 jmp 0x477b79
// 00477b61  0fb6153cf09600       movzx edx, byte ptr [0x96f03c]
// 00477b68  f7da                 neg edx
// 00477b6a  1bd2                 sbb edx, edx
// 00477b6c  81e2cd7a0000         and edx, 0x7acd
// 00477b72  81c2e20b0000         add edx, 0xbe2
// 00477b78  52                   push edx
// 00477b79  6800220000           push 0x2200
// 00477b7e  6800230000           push 0x2300
// 00477b83  ff15842a8000         call dword ptr [0x802a84]
// 00477b89  5e                   pop esi
// 00477b8a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00477b8e  5f                   pop edi
// 00477b8f  64890d00000000       mov dword ptr fs:[0], ecx
// 00477b96  83c428               add esp, 0x28
// 00477b99  c20800               ret 8
// 00477b9c  e07a                 loopne 0x477c18
// 00477b9e  47                   inc edi
// 00477b9f  00ea                 add dl, ch
// 00477ba1  7a47                 jp 0x477bea
// 00477ba3  00fb                 add bl, bh
// 00477ba5  7a47                 jp 0x477bee
// 00477ba7  0002                 add byte ptr [edx], al
// 00477ba9  7b47                 jnp 0x477bf2
// 00477bab  00f4                 add ah, dh
// 00477bad  7a47                 jp 0x477bf6
// 00477baf  002f                 add byte ptr [edi], ch
// 00477bb1  7b47                 jnp 0x477bfa
// 00477bb3  001c7b               add byte ptr [ebx + edi*2], bl
// 00477bb6  47                   inc edi
// 00477bb7  00477b               add byte ptr [edi + 0x7b], al
// 00477bba  47                   inc edi
// 00477bbb  00617b               add byte ptr [ecx + 0x7b], ah
// 00477bbe  47                   inc edi
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTextureCombineMode@RenderDevice@G3D@@QAEXIW4CombineMode@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
