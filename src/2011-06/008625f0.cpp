// roc 2011-06 008625f0  unit: CXTPPropExchangeXMLNode  size: 1752 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008625f0
//
// 008625f0  55                   push ebp
// 008625f1  8bec                 mov ebp, esp
// 008625f3  83e4c0               and esp, 0xffffffc0
// 008625f6  6aff                 push -1
// 008625f8  68a96aa000           push 0xa06aa9
// 008625fd  64a100000000         mov eax, dword ptr fs:[0]
// 00862603  50                   push eax
// 00862604  81eca8000000         sub esp, 0xa8
// 0086260a  53                   push ebx
// 0086260b  56                   push esi
// 0086260c  57                   push edi
// 0086260d  a12058c900           mov eax, dword ptr [0xc95820]
// 00862612  33c4                 xor eax, esp
// 00862614  50                   push eax
// 00862615  8d8424b8000000       lea eax, [esp + 0xb8]
// 0086261c  64a300000000         mov dword ptr fs:[0], eax
// 00862622  8bf1                 mov esi, ecx
// 00862624  33db                 xor ebx, ebx
// 00862626  395e28               cmp dword ptr [esi + 0x28], ebx
// 00862629  0f843e030000         je 0x86296d
// 0086262f  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00862632  0fb7c7               movzx eax, di
// 00862635  83c0fe               add eax, -2
// 00862638  83f863               cmp eax, 0x63
// 0086263b  0f875d050000         ja 0x862b9e
// 00862641  0fb680d82b8600       movzx eax, byte ptr [eax + 0x862bd8]
// 00862648  ff2485b82b8600       jmp dword ptr [eax*4 + 0x862bb8]
// 0086264f  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00862652  ff15c82da400         call dword ptr [0xa42dc8]
// 00862658  50                   push eax
// 00862659  ff15200aa400         call dword ptr [0xa40a20]
// 0086265f  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00862662  83c404               add esp, 4
// 00862665  8d4c244c             lea ecx, [esp + 0x4c]
// 00862669  51                   push ecx
// 0086266a  52                   push edx
// 0086266b  57                   push edi
// 0086266c  8bce                 mov ecx, esi
// 0086266e  89442458             mov dword ptr [esp + 0x58], eax
// 00862672  e809e4ffff           call 0x860a80
// 00862677  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 0086267e  64890d00000000       mov dword ptr fs:[0], ecx
// 00862685  59                   pop ecx
// 00862686  5f                   pop edi
// 00862687  5e                   pop esi
// 00862688  5b                   pop ebx
// 00862689  8be5                 mov esp, ebp
// 0086268b  5d                   pop ebp
// 0086268c  c21000               ret 0x10
// 0086268f  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00862692  8d44244c             lea eax, [esp + 0x4c]
// 00862696  50                   push eax
// 00862697  895c2450             mov dword ptr [esp + 0x50], ebx
// 0086269b  ff15c82da400         call dword ptr [0xa42dc8]
// 008626a1  50                   push eax
// 008626a2  ff156408a400         call dword ptr [0xa40864]
// 008626a8  d95c2468             fstp dword ptr [esp + 0x68]
// 008626ac  8b5510               mov edx, dword ptr [ebp + 0x10]
// 008626af  83c408               add esp, 8
// 008626b2  8d4c2460             lea ecx, [esp + 0x60]
// 008626b6  51                   push ecx
// 008626b7  52                   push edx
// 008626b8  57                   push edi
// 008626b9  8bce                 mov ecx, esi
// 008626bb  e8c0e3ffff           call 0x860a80
// 008626c0  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008626c7  64890d00000000       mov dword ptr fs:[0], ecx
// 008626ce  59                   pop ecx
// 008626cf  5f                   pop edi
// 008626d0  5e                   pop esi
// 008626d1  5b                   pop ebx
// 008626d2  8be5                 mov esp, ebp
// 008626d4  5d                   pop ebp
// 008626d5  c21000               ret 0x10
// 008626d8  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008626db  8d442460             lea eax, [esp + 0x60]
// 008626df  50                   push eax
// 008626e0  895c2464             mov dword ptr [esp + 0x64], ebx
// 008626e4  ff15c82da400         call dword ptr [0xa42dc8]
// 008626ea  50                   push eax
// 008626eb  ff156408a400         call dword ptr [0xa40864]
// 008626f1  dd5c2454             fstp qword ptr [esp + 0x54]
// 008626f5  8b5510               mov edx, dword ptr [ebp + 0x10]
// 008626f8  83c408               add esp, 8
// 008626fb  8d4c244c             lea ecx, [esp + 0x4c]
// 008626ff  51                   push ecx
// 00862700  52                   push edx
// 00862701  57                   push edi
// 00862702  8bce                 mov ecx, esi
// 00862704  e877e3ffff           call 0x860a80
// 00862709  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00862710  64890d00000000       mov dword ptr fs:[0], ecx
// 00862717  59                   pop ecx
// 00862718  5f                   pop edi
// 00862719  5e                   pop esi
// 0086271a  5b                   pop ebx
// 0086271b  8be5                 mov esp, ebp
// 0086271d  5d                   pop ebp
// 0086271e  c21000               ret 0x10
// 00862721  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00862724  d9ee                 fldz 
// 00862726  8d442460             lea eax, [esp + 0x60]
// 0086272a  dd5c2460             fstp qword ptr [esp + 0x60]
// 0086272e  50                   push eax
// 0086272f  51                   push ecx
// 00862730  8bce                 mov ecx, esi
// 00862732  895c2470             mov dword ptr [esp + 0x70], ebx
// 00862736  e865fdffff           call 0x8624a0
// 0086273b  85c0                 test eax, eax
// 0086273d  0f845b040000         je 0x862b9e
// 00862743  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00862746  8b542460             mov edx, dword ptr [esp + 0x60]
// 0086274a  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0086274e  8910                 mov dword ptr [eax], edx
// 00862750  8b542468             mov edx, dword ptr [esp + 0x68]
// 00862754  894804               mov dword ptr [eax + 4], ecx
// 00862757  895008               mov dword ptr [eax + 8], edx
// 0086275a  b801000000           mov eax, 1
// 0086275f  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00862766  64890d00000000       mov dword ptr fs:[0], ecx
// 0086276d  59                   pop ecx
// 0086276e  5f                   pop edi
// 0086276f  5e                   pop esi
// 00862770  5b                   pop ebx
// 00862771  8be5                 mov esp, ebp
// 00862773  5d                   pop ebp
// 00862774  c21000               ret 0x10
// 00862777  6683ff65             cmp di, 0x65
// 0086277b  0f8582000000         jne 0x862803
// 00862781  8d442464             lea eax, [esp + 0x64]
// 00862785  50                   push eax
// 00862786  8d4c2464             lea ecx, [esp + 0x64]
// 0086278a  51                   push ecx
// 0086278b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0086278e  6898aaac00           push 0xacaa98
// 00862793  895c246c             mov dword ptr [esp + 0x6c], ebx
// 00862797  895c2470             mov dword ptr [esp + 0x70], ebx
// 0086279b  ff15c82da400         call dword ptr [0xa42dc8]
// 008627a1  50                   push eax
// 008627a2  ff159809a400         call dword ptr [0xa40998]
// 008627a8  83c410               add esp, 0x10
// 008627ab  83f802               cmp eax, 2
// 008627ae  8b4510               mov eax, dword ptr [ebp + 0x10]
// 008627b1  7426                 je 0x8627d9
// 008627b3  8b5514               mov edx, dword ptr [ebp + 0x14]
// 008627b6  52                   push edx
// 008627b7  50                   push eax
// 008627b8  6a65                 push 0x65
// 008627ba  8bce                 mov ecx, esi
// 008627bc  e8bfe2ffff           call 0x860a80
// 008627c1  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008627c8  64890d00000000       mov dword ptr fs:[0], ecx
// 008627cf  59                   pop ecx
// 008627d0  5f                   pop edi
// 008627d1  5e                   pop esi
// 008627d2  5b                   pop ebx
// 008627d3  8be5                 mov esp, ebp
// 008627d5  5d                   pop ebp
// 008627d6  c21000               ret 0x10
// 008627d9  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008627dd  8b542464             mov edx, dword ptr [esp + 0x64]
// 008627e1  8908                 mov dword ptr [eax], ecx
// 008627e3  895004               mov dword ptr [eax + 4], edx
// 008627e6  b801000000           mov eax, 1
// 008627eb  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008627f2  64890d00000000       mov dword ptr fs:[0], ecx
// 008627f9  59                   pop ecx
// 008627fa  5f                   pop edi
// 008627fb  5e                   pop esi
// 008627fc  5b                   pop ebx
// 008627fd  8be5                 mov esp, ebp
// 008627ff  5d                   pop ebp
// 00862800  c21000               ret 0x10
// 00862803  6683ff64             cmp di, 0x64
// 00862807  0f85a8000000         jne 0x8628b5
// 0086280d  8d44246c             lea eax, [esp + 0x6c]
// 00862811  50                   push eax
// 00862812  8d4c246c             lea ecx, [esp + 0x6c]
// 00862816  51                   push ecx
// 00862817  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0086281a  8d54246c             lea edx, [esp + 0x6c]
// 0086281e  52                   push edx
// 0086281f  8d44246c             lea eax, [esp + 0x6c]
// 00862823  50                   push eax
// 00862824  6888aaac00           push 0xacaa88
// 00862829  895c2474             mov dword ptr [esp + 0x74], ebx
// 0086282d  895c2478             mov dword ptr [esp + 0x78], ebx
// 00862831  895c247c             mov dword ptr [esp + 0x7c], ebx
// 00862835  899c2480000000       mov dword ptr [esp + 0x80], ebx
// 0086283c  ff15c82da400         call dword ptr [0xa42dc8]
// 00862842  50                   push eax
// 00862843  ff159809a400         call dword ptr [0xa40998]
// 00862849  83c418               add esp, 0x18
// 0086284c  83f804               cmp eax, 4
// 0086284f  7429                 je 0x86287a
// 00862851  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00862854  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00862857  51                   push ecx
// 00862858  52                   push edx
// 00862859  6a64                 push 0x64
// 0086285b  8bce                 mov ecx, esi
// 0086285d  e81ee2ffff           call 0x860a80
// 00862862  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00862869  64890d00000000       mov dword ptr fs:[0], ecx
// 00862870  59                   pop ecx
// 00862871  5f                   pop edi
// 00862872  5e                   pop esi
// 00862873  5b                   pop ebx
// 00862874  8be5                 mov esp, ebp
// 00862876  5d                   pop ebp
// 00862877  c21000               ret 0x10
// 0086287a  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0086287d  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00862881  8b542464             mov edx, dword ptr [esp + 0x64]
// 00862885  8908                 mov dword ptr [eax], ecx
// 00862887  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0086288b  895004               mov dword ptr [eax + 4], edx
// 0086288e  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00862892  894808               mov dword ptr [eax + 8], ecx
// 00862895  89500c               mov dword ptr [eax + 0xc], edx
// 00862898  b801000000           mov eax, 1
// 0086289d  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008628a4  64890d00000000       mov dword ptr fs:[0], ecx
// 008628ab  59                   pop ecx
// 008628ac  5f                   pop edi
// 008628ad  5e                   pop esi
// 008628ae  5b                   pop ebx
// 008628af  8be5                 mov esp, ebp
// 008628b1  5d                   pop ebp
// 008628b2  c21000               ret 0x10
// 008628b5  8b7d08               mov edi, dword ptr [ebp + 8]
// 008628b8  57                   push edi
// 008628b9  e812d1ffff           call 0x85f9d0
// 008628be  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 008628c1  57                   push edi
// 008628c2  ff156425a400         call dword ptr [0xa42564]
// 008628c8  b801000000           mov eax, 1
// 008628cd  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008628d4  64890d00000000       mov dword ptr fs:[0], ecx
// 008628db  59                   pop ecx
// 008628dc  5f                   pop edi
// 008628dd  5e                   pop esi
// 008628de  5b                   pop ebx
// 008628df  8be5                 mov esp, ebp
// 008628e1  5d                   pop ebp
// 008628e2  c21000               ret 0x10
// 008628e5  8b4508               mov eax, dword ptr [ebp + 8]
// 008628e8  50                   push eax
// 008628e9  8d4c2450             lea ecx, [esp + 0x50]
// 008628ed  e8fedbffff           call 0x8604f0
// 008628f2  833dc074c900ff       cmp dword ptr [0xc974c0], -1
// 008628f9  899c24c0000000       mov dword ptr [esp + 0xc0], ebx
// 00862900  7533                 jne 0x862935
// 00862902  d9ee                 fldz 
// 00862904  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00862907  dd5c2460             fstp qword ptr [esp + 0x60]
// 0086290b  895c2468             mov dword ptr [esp + 0x68], ebx
// 0086290f  ff15c82da400         call dword ptr [0xa42dc8]
// 00862915  50                   push eax
// 00862916  8d4c2464             lea ecx, [esp + 0x64]
// 0086291a  51                   push ecx
// 0086291b  e850faffff           call 0x862370
// 00862920  83c408               add esp, 8
// 00862923  85c0                 test eax, eax
// 00862925  740e                 je 0x862935
// 00862927  8d542460             lea edx, [esp + 0x60]
// 0086292b  52                   push edx
// 0086292c  8d4c2450             lea ecx, [esp + 0x50]
// 00862930  e885a01600           call 0x9cc9ba
// 00862935  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00862938  8d44244c             lea eax, [esp + 0x4c]
// 0086293c  50                   push eax
// 0086293d  51                   push ecx
// 0086293e  57                   push edi
// 0086293f  8bce                 mov ecx, esi
// 00862941  e83ae1ffff           call 0x860a80
// 00862946  8d54244c             lea edx, [esp + 0x4c]
// 0086294a  52                   push edx
// 0086294b  8bf0                 mov esi, eax
// 0086294d  ff15d80aa400         call dword ptr [0xa40ad8]
// 00862953  8bc6                 mov eax, esi
// 00862955  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 0086295c  64890d00000000       mov dword ptr fs:[0], ecx
// 00862963  59                   pop ecx
// 00862964  5f                   pop edi
// 00862965  5e                   pop esi
// 00862966  5b                   pop ebx
// 00862967  8be5                 mov esp, ebp
// 00862969  5d                   pop ebp
// 0086296a  c21000               ret 0x10
// 0086296d  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00862970  0fb7c1               movzx eax, cx
// 00862973  83c0fe               add eax, -2
// 00862976  83f863               cmp eax, 0x63
// 00862979  0f871f020000         ja 0x862b9e
// 0086297f  0fb680642c8600       movzx eax, byte ptr [eax + 0x862c64]
// 00862986  ff24853c2c8600       jmp dword ptr [eax*4 + 0x862c3c]
// 0086298d  51                   push ecx
// 0086298e  8bce                 mov ecx, esi
// 00862990  895c2450             mov dword ptr [esp + 0x50], ebx
// 00862994  e867ccffff           call 0x85f600
// 00862999  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0086299c  50                   push eax
// 0086299d  51                   push ecx
// 0086299e  8d542454             lea edx, [esp + 0x54]
// 008629a2  52                   push edx
// 008629a3  e8348cfaff           call 0x80b5dc
// 008629a8  8b442458             mov eax, dword ptr [esp + 0x58]
// 008629ac  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008629af  50                   push eax
// 008629b0  68983eac00           push 0xac3e98
// 008629b5  51                   push ecx
// 008629b6  ff15bc2da400         call dword ptr [0xa42dbc]
// 008629bc  83c418               add esp, 0x18
// 008629bf  b801000000           mov eax, 1
// 008629c4  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008629cb  64890d00000000       mov dword ptr fs:[0], ecx
// 008629d2  59                   pop ecx
// 008629d3  5f                   pop edi
// 008629d4  5e                   pop esi
// 008629d5  5b                   pop ebx
// 008629d6  8be5                 mov esp, ebp
// 008629d8  5d                   pop ebp
// 008629d9  c21000               ret 0x10
// 008629dc  8b5510               mov edx, dword ptr [ebp + 0x10]
// 008629df  8b7d08               mov edi, dword ptr [ebp + 8]
// 008629e2  52                   push edx
// 008629e3  8bcf                 mov ecx, edi
// 008629e5  ff156425a400         call dword ptr [0xa42564]
// 008629eb  57                   push edi
// 008629ec  8bce                 mov ecx, esi
// 008629ee  e8ddcfffff           call 0x85f9d0
// 008629f3  b801000000           mov eax, 1
// 008629f8  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008629ff  64890d00000000       mov dword ptr fs:[0], ecx
// 00862a06  59                   pop ecx
// 00862a07  5f                   pop edi
// 00862a08  5e                   pop esi
// 00862a09  5b                   pop ebx
// 00862a0a  8be5                 mov esp, ebp
// 00862a0c  5d                   pop ebp
// 00862a0d  c21000               ret 0x10
// 00862a10  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00862a13  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00862a16  50                   push eax
// 00862a17  51                   push ecx
// 00862a18  8bce                 mov ecx, esi
// 00862a1a  e881faffff           call 0x8624a0
// 00862a1f  b801000000           mov eax, 1
// 00862a24  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00862a2b  64890d00000000       mov dword ptr fs:[0], ecx
// 00862a32  59                   pop ecx
// 00862a33  5f                   pop edi
// 00862a34  5e                   pop esi
// 00862a35  5b                   pop ebx
// 00862a36  8be5                 mov esp, ebp
// 00862a38  5d                   pop ebp
// 00862a39  c21000               ret 0x10
// 00862a3c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00862a3f  d902                 fld dword ptr [edx]
// 00862a41  83ec08               sub esp, 8
// 00862a44  dd1c24               fstp qword ptr [esp]
// 00862a47  681cabac00           push 0xacab1c
// 00862a4c  8b4508               mov eax, dword ptr [ebp + 8]
// 00862a4f  50                   push eax
// 00862a50  ff15bc2da400         call dword ptr [0xa42dbc]
// 00862a56  83c410               add esp, 0x10
// 00862a59  b801000000           mov eax, 1
// 00862a5e  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00862a65  64890d00000000       mov dword ptr fs:[0], ecx
// 00862a6c  59                   pop ecx
// 00862a6d  5f                   pop edi
// 00862a6e  5e                   pop esi
// 00862a6f  5b                   pop ebx
// 00862a70  8be5                 mov esp, ebp
// 00862a72  5d                   pop ebp
// 00862a73  c21000               ret 0x10
// 00862a76  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00862a79  dd01                 fld qword ptr [ecx]
// 00862a7b  8b5508               mov edx, dword ptr [ebp + 8]
// 00862a7e  83ec08               sub esp, 8
// 00862a81  dd1c24               fstp qword ptr [esp]
// 00862a84  681cabac00           push 0xacab1c
// 00862a89  52                   push edx
// 00862a8a  ff15bc2da400         call dword ptr [0xa42dbc]
// 00862a90  83c410               add esp, 0x10
// 00862a93  b801000000           mov eax, 1
// 00862a98  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00862a9f  64890d00000000       mov dword ptr fs:[0], ecx
// 00862aa6  59                   pop ecx
// 00862aa7  5f                   pop edi
// 00862aa8  5e                   pop esi
// 00862aa9  5b                   pop ebx
// 00862aaa  8be5                 mov esp, ebp
// 00862aac  5d                   pop ebp
// 00862aad  c21000               ret 0x10
// 00862ab0  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00862ab3  8b4804               mov ecx, dword ptr [eax + 4]
// 00862ab6  8b10                 mov edx, dword ptr [eax]
// 00862ab8  51                   push ecx
// 00862ab9  52                   push edx
// 00862aba  6898aaac00           push 0xacaa98
// 00862abf  eb8b                 jmp 0x862a4c
// 00862ac1  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00862ac4  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00862ac7  8b5008               mov edx, dword ptr [eax + 8]
// 00862aca  51                   push ecx
// 00862acb  8b4804               mov ecx, dword ptr [eax + 4]
// 00862ace  52                   push edx
// 00862acf  8b10                 mov edx, dword ptr [eax]
// 00862ad1  8b4508               mov eax, dword ptr [ebp + 8]
// 00862ad4  51                   push ecx
// 00862ad5  52                   push edx
// 00862ad6  6888aaac00           push 0xacaa88
// 00862adb  50                   push eax
// 00862adc  ff15bc2da400         call dword ptr [0xa42dbc]
// 00862ae2  83c418               add esp, 0x18
// 00862ae5  e96fffffff           jmp 0x862a59
// 00862aea  8b35c074c900         mov esi, dword ptr [0xc974c0]
// 00862af0  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00862af3  83feff               cmp esi, -1
// 00862af6  7549                 jne 0x862b41
// 00862af8  66833f07             cmp word ptr [edi], 7
// 00862afc  7541                 jne 0x862b3f
// 00862afe  dd4708               fld qword ptr [edi + 8]
// 00862b01  8d4c2460             lea ecx, [esp + 0x60]
// 00862b05  51                   push ecx
// 00862b06  dd5c2464             fstp qword ptr [esp + 0x64]
// 00862b0a  8d542474             lea edx, [esp + 0x74]
// 00862b0e  52                   push edx
// 00862b0f  895c2470             mov dword ptr [esp + 0x70], ebx
// 00862b13  e8f8d9ffff           call 0x860510
// 00862b18  83c408               add esp, 8
// 00862b1b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00862b1e  50                   push eax
// 00862b1f  c78424c400000001000000 mov dword ptr [esp + 0xc4], 1
// 00862b2a  ff156425a400         call dword ptr [0xa42564]
// 00862b30  8d4c2470             lea ecx, [esp + 0x70]
// 00862b34  ff15082ea400         call dword ptr [0xa42e08]
// 00862b3a  e91affffff           jmp 0x862a59
// 00862b3f  33f6                 xor esi, esi
// 00862b41  8d442474             lea eax, [esp + 0x74]
// 00862b45  50                   push eax
// 00862b46  e8ef9c1600           call 0x9cc83a
// 00862b4b  6a08                 push 8
// 00862b4d  53                   push ebx
// 00862b4e  56                   push esi
// 00862b4f  57                   push edi
// 00862b50  8d8c2484000000       lea ecx, [esp + 0x84]
// 00862b57  51                   push ecx
// 00862b58  c78424d400000002000000 mov dword ptr [esp + 0xd4], 2
// 00862b63  ff15880aa400         call dword ptr [0xa40a88]
// 00862b69  85c0                 test eax, eax
// 00862b6b  7c26                 jl 0x862b93
// 00862b6d  66837c247408         cmp word ptr [esp + 0x74], 8
// 00862b73  751e                 jne 0x862b93
// 00862b75  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00862b79  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00862b7c  52                   push edx
// 00862b7d  ff15302aa400         call dword ptr [0xa42a30]
// 00862b83  8d442474             lea eax, [esp + 0x74]
// 00862b87  50                   push eax
// 00862b88  ff15d80aa400         call dword ptr [0xa40ad8]
// 00862b8e  e9c6feffff           jmp 0x862a59
// 00862b93  8d4c2474             lea ecx, [esp + 0x74]
// 00862b97  51                   push ecx
// 00862b98  ff15d80aa400         call dword ptr [0xa40ad8]
// 00862b9e  33c0                 xor eax, eax
// 00862ba0  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00862ba7  64890d00000000       mov dword ptr fs:[0], ecx
// 00862bae  59                   pop ecx
// 00862baf  5f                   pop edi
// 00862bb0  5e                   pop esi
// 00862bb1  5b                   pop ebx
// 00862bb2  8be5                 mov esp, ebp
// 00862bb4  5d                   pop ebp
// 00862bb5  c21000               ret 0x10
// 00862bb8  4f                   dec edi
// 00862bb9  268600               xchg byte ptr es:[eax], al
// copied from an identical function in another client (function ?ExchangePropStringHelper@CXTPPropExchange@@IAEHAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@GPAXPBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp