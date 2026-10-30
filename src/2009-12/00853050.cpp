// roc 2009-12 00853050  unit: CXTPPropExchangeXMLNode  size: 1752 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00853050
//
// 00853050  55                   push ebp
// 00853051  8bec                 mov ebp, esp
// 00853053  83e4c0               and esp, 0xffffffc0
// 00853056  6aff                 push -1
// 00853058  68b9dc9500           push 0x95dcb9
// 0085305d  64a100000000         mov eax, dword ptr fs:[0]
// 00853063  50                   push eax
// 00853064  81eca8000000         sub esp, 0xa8
// 0085306a  53                   push ebx
// 0085306b  56                   push esi
// 0085306c  57                   push edi
// 0085306d  a10052b600           mov eax, dword ptr [0xb65200]
// 00853072  33c4                 xor eax, esp
// 00853074  50                   push eax
// 00853075  8d8424b8000000       lea eax, [esp + 0xb8]
// 0085307c  64a300000000         mov dword ptr fs:[0], eax
// 00853082  8bf1                 mov esi, ecx
// 00853084  33db                 xor ebx, ebx
// 00853086  395e28               cmp dword ptr [esi + 0x28], ebx
// 00853089  0f843e030000         je 0x8533cd
// 0085308f  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00853092  0fb7c7               movzx eax, di
// 00853095  83c0fe               add eax, -2
// 00853098  83f863               cmp eax, 0x63
// 0085309b  0f875d050000         ja 0x8535fe
// 008530a1  0fb68038368500       movzx eax, byte ptr [eax + 0x853638]
// 008530a8  ff248518368500       jmp dword ptr [eax*4 + 0x853618]
// 008530af  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008530b2  ff1580de9800         call dword ptr [0x98de80]
// 008530b8  50                   push eax
// 008530b9  ff1598b79800         call dword ptr [0x98b798]
// 008530bf  8b5510               mov edx, dword ptr [ebp + 0x10]
// 008530c2  83c404               add esp, 4
// 008530c5  8d4c244c             lea ecx, [esp + 0x4c]
// 008530c9  51                   push ecx
// 008530ca  52                   push edx
// 008530cb  57                   push edi
// 008530cc  8bce                 mov ecx, esi
// 008530ce  89442458             mov dword ptr [esp + 0x58], eax
// 008530d2  e849e4ffff           call 0x851520
// 008530d7  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008530de  64890d00000000       mov dword ptr fs:[0], ecx
// 008530e5  59                   pop ecx
// 008530e6  5f                   pop edi
// 008530e7  5e                   pop esi
// 008530e8  5b                   pop ebx
// 008530e9  8be5                 mov esp, ebp
// 008530eb  5d                   pop ebp
// 008530ec  c21000               ret 0x10
// 008530ef  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008530f2  8d44244c             lea eax, [esp + 0x4c]
// 008530f6  50                   push eax
// 008530f7  895c2450             mov dword ptr [esp + 0x50], ebx
// 008530fb  ff1580de9800         call dword ptr [0x98de80]
// 00853101  50                   push eax
// 00853102  ff15f8b89800         call dword ptr [0x98b8f8]
// 00853108  d95c2468             fstp dword ptr [esp + 0x68]
// 0085310c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0085310f  83c408               add esp, 8
// 00853112  8d4c2460             lea ecx, [esp + 0x60]
// 00853116  51                   push ecx
// 00853117  52                   push edx
// 00853118  57                   push edi
// 00853119  8bce                 mov ecx, esi
// 0085311b  e800e4ffff           call 0x851520
// 00853120  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00853127  64890d00000000       mov dword ptr fs:[0], ecx
// 0085312e  59                   pop ecx
// 0085312f  5f                   pop edi
// 00853130  5e                   pop esi
// 00853131  5b                   pop ebx
// 00853132  8be5                 mov esp, ebp
// 00853134  5d                   pop ebp
// 00853135  c21000               ret 0x10
// 00853138  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0085313b  8d442460             lea eax, [esp + 0x60]
// 0085313f  50                   push eax
// 00853140  895c2464             mov dword ptr [esp + 0x64], ebx
// 00853144  ff1580de9800         call dword ptr [0x98de80]
// 0085314a  50                   push eax
// 0085314b  ff15f8b89800         call dword ptr [0x98b8f8]
// 00853151  dd5c2454             fstp qword ptr [esp + 0x54]
// 00853155  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00853158  83c408               add esp, 8
// 0085315b  8d4c244c             lea ecx, [esp + 0x4c]
// 0085315f  51                   push ecx
// 00853160  52                   push edx
// 00853161  57                   push edi
// 00853162  8bce                 mov ecx, esi
// 00853164  e8b7e3ffff           call 0x851520
// 00853169  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00853170  64890d00000000       mov dword ptr fs:[0], ecx
// 00853177  59                   pop ecx
// 00853178  5f                   pop edi
// 00853179  5e                   pop esi
// 0085317a  5b                   pop ebx
// 0085317b  8be5                 mov esp, ebp
// 0085317d  5d                   pop ebp
// 0085317e  c21000               ret 0x10
// 00853181  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00853184  d9ee                 fldz 
// 00853186  8d442460             lea eax, [esp + 0x60]
// 0085318a  dd5c2460             fstp qword ptr [esp + 0x60]
// 0085318e  50                   push eax
// 0085318f  51                   push ecx
// 00853190  8bce                 mov ecx, esi
// 00853192  895c2470             mov dword ptr [esp + 0x70], ebx
// 00853196  e865fdffff           call 0x852f00
// 0085319b  85c0                 test eax, eax
// 0085319d  0f845b040000         je 0x8535fe
// 008531a3  8b4510               mov eax, dword ptr [ebp + 0x10]
// 008531a6  8b542460             mov edx, dword ptr [esp + 0x60]
// 008531aa  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008531ae  8910                 mov dword ptr [eax], edx
// 008531b0  8b542468             mov edx, dword ptr [esp + 0x68]
// 008531b4  894804               mov dword ptr [eax + 4], ecx
// 008531b7  895008               mov dword ptr [eax + 8], edx
// 008531ba  b801000000           mov eax, 1
// 008531bf  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008531c6  64890d00000000       mov dword ptr fs:[0], ecx
// 008531cd  59                   pop ecx
// 008531ce  5f                   pop edi
// 008531cf  5e                   pop esi
// 008531d0  5b                   pop ebx
// 008531d1  8be5                 mov esp, ebp
// 008531d3  5d                   pop ebp
// 008531d4  c21000               ret 0x10
// 008531d7  6683ff65             cmp di, 0x65
// 008531db  0f8582000000         jne 0x853263
// 008531e1  8d442464             lea eax, [esp + 0x64]
// 008531e5  50                   push eax
// 008531e6  8d4c2464             lea ecx, [esp + 0x64]
// 008531ea  51                   push ecx
// 008531eb  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008531ee  6838c59f00           push 0x9fc538
// 008531f3  895c246c             mov dword ptr [esp + 0x6c], ebx
// 008531f7  895c2470             mov dword ptr [esp + 0x70], ebx
// 008531fb  ff1580de9800         call dword ptr [0x98de80]
// 00853201  50                   push eax
// 00853202  ff1570b89800         call dword ptr [0x98b870]
// 00853208  83c410               add esp, 0x10
// 0085320b  83f802               cmp eax, 2
// 0085320e  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00853211  7426                 je 0x853239
// 00853213  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00853216  52                   push edx
// 00853217  50                   push eax
// 00853218  6a65                 push 0x65
// 0085321a  8bce                 mov ecx, esi
// 0085321c  e8ffe2ffff           call 0x851520
// 00853221  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00853228  64890d00000000       mov dword ptr fs:[0], ecx
// 0085322f  59                   pop ecx
// 00853230  5f                   pop edi
// 00853231  5e                   pop esi
// 00853232  5b                   pop ebx
// 00853233  8be5                 mov esp, ebp
// 00853235  5d                   pop ebp
// 00853236  c21000               ret 0x10
// 00853239  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0085323d  8b542464             mov edx, dword ptr [esp + 0x64]
// 00853241  8908                 mov dword ptr [eax], ecx
// 00853243  895004               mov dword ptr [eax + 4], edx
// 00853246  b801000000           mov eax, 1
// 0085324b  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00853252  64890d00000000       mov dword ptr fs:[0], ecx
// 00853259  59                   pop ecx
// 0085325a  5f                   pop edi
// 0085325b  5e                   pop esi
// 0085325c  5b                   pop ebx
// 0085325d  8be5                 mov esp, ebp
// 0085325f  5d                   pop ebp
// 00853260  c21000               ret 0x10
// 00853263  6683ff64             cmp di, 0x64
// 00853267  0f85a8000000         jne 0x853315
// 0085326d  8d44246c             lea eax, [esp + 0x6c]
// 00853271  50                   push eax
// 00853272  8d4c246c             lea ecx, [esp + 0x6c]
// 00853276  51                   push ecx
// 00853277  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0085327a  8d54246c             lea edx, [esp + 0x6c]
// 0085327e  52                   push edx
// 0085327f  8d44246c             lea eax, [esp + 0x6c]
// 00853283  50                   push eax
// 00853284  6828c59f00           push 0x9fc528
// 00853289  895c2474             mov dword ptr [esp + 0x74], ebx
// 0085328d  895c2478             mov dword ptr [esp + 0x78], ebx
// 00853291  895c247c             mov dword ptr [esp + 0x7c], ebx
// 00853295  899c2480000000       mov dword ptr [esp + 0x80], ebx
// 0085329c  ff1580de9800         call dword ptr [0x98de80]
// 008532a2  50                   push eax
// 008532a3  ff1570b89800         call dword ptr [0x98b870]
// 008532a9  83c418               add esp, 0x18
// 008532ac  83f804               cmp eax, 4
// 008532af  7429                 je 0x8532da
// 008532b1  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 008532b4  8b5510               mov edx, dword ptr [ebp + 0x10]
// 008532b7  51                   push ecx
// 008532b8  52                   push edx
// 008532b9  6a64                 push 0x64
// 008532bb  8bce                 mov ecx, esi
// 008532bd  e85ee2ffff           call 0x851520
// 008532c2  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008532c9  64890d00000000       mov dword ptr fs:[0], ecx
// 008532d0  59                   pop ecx
// 008532d1  5f                   pop edi
// 008532d2  5e                   pop esi
// 008532d3  5b                   pop ebx
// 008532d4  8be5                 mov esp, ebp
// 008532d6  5d                   pop ebp
// 008532d7  c21000               ret 0x10
// 008532da  8b4510               mov eax, dword ptr [ebp + 0x10]
// 008532dd  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008532e1  8b542464             mov edx, dword ptr [esp + 0x64]
// 008532e5  8908                 mov dword ptr [eax], ecx
// 008532e7  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008532eb  895004               mov dword ptr [eax + 4], edx
// 008532ee  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008532f2  894808               mov dword ptr [eax + 8], ecx
// 008532f5  89500c               mov dword ptr [eax + 0xc], edx
// 008532f8  b801000000           mov eax, 1
// 008532fd  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00853304  64890d00000000       mov dword ptr fs:[0], ecx
// 0085330b  59                   pop ecx
// 0085330c  5f                   pop edi
// 0085330d  5e                   pop esi
// 0085330e  5b                   pop ebx
// 0085330f  8be5                 mov esp, ebp
// 00853311  5d                   pop ebp
// 00853312  c21000               ret 0x10
// 00853315  8b7d08               mov edi, dword ptr [ebp + 8]
// 00853318  57                   push edi
// 00853319  e872d1ffff           call 0x850490
// 0085331e  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00853321  57                   push edi
// 00853322  ff1538d59800         call dword ptr [0x98d538]
// 00853328  b801000000           mov eax, 1
// 0085332d  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00853334  64890d00000000       mov dword ptr fs:[0], ecx
// 0085333b  59                   pop ecx
// 0085333c  5f                   pop edi
// 0085333d  5e                   pop esi
// 0085333e  5b                   pop ebx
// 0085333f  8be5                 mov esp, ebp
// 00853341  5d                   pop ebp
// 00853342  c21000               ret 0x10
// 00853345  8b4508               mov eax, dword ptr [ebp + 8]
// 00853348  50                   push eax
// 00853349  8d4c2450             lea ecx, [esp + 0x50]
// 0085334d  e84edcffff           call 0x850fa0
// 00853352  833d6471b600ff       cmp dword ptr [0xb67164], -1
// 00853359  899c24c0000000       mov dword ptr [esp + 0xc0], ebx
// 00853360  7533                 jne 0x853395
// 00853362  d9ee                 fldz 
// 00853364  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00853367  dd5c2460             fstp qword ptr [esp + 0x60]
// 0085336b  895c2468             mov dword ptr [esp + 0x68], ebx
// 0085336f  ff1580de9800         call dword ptr [0x98de80]
// 00853375  50                   push eax
// 00853376  8d4c2464             lea ecx, [esp + 0x64]
// 0085337a  51                   push ecx
// 0085337b  e850faffff           call 0x852dd0
// 00853380  83c408               add esp, 8
// 00853383  85c0                 test eax, eax
// 00853385  740e                 je 0x853395
// 00853387  8d542460             lea edx, [esp + 0x60]
// 0085338b  52                   push edx
// 0085338c  8d4c2450             lea ecx, [esp + 0x50]
// 00853390  e8ef360d00           call 0x926a84
// 00853395  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00853398  8d44244c             lea eax, [esp + 0x4c]
// 0085339c  50                   push eax
// 0085339d  51                   push ecx
// 0085339e  57                   push edi
// 0085339f  8bce                 mov ecx, esi
// 008533a1  e87ae1ffff           call 0x851520
// 008533a6  8d54244c             lea edx, [esp + 0x4c]
// 008533aa  52                   push edx
// 008533ab  8bf0                 mov esi, eax
// 008533ad  ff1534ba9800         call dword ptr [0x98ba34]
// 008533b3  8bc6                 mov eax, esi
// 008533b5  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008533bc  64890d00000000       mov dword ptr fs:[0], ecx
// 008533c3  59                   pop ecx
// 008533c4  5f                   pop edi
// 008533c5  5e                   pop esi
// 008533c6  5b                   pop ebx
// 008533c7  8be5                 mov esp, ebp
// 008533c9  5d                   pop ebp
// 008533ca  c21000               ret 0x10
// 008533cd  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 008533d0  0fb7c1               movzx eax, cx
// 008533d3  83c0fe               add eax, -2
// 008533d6  83f863               cmp eax, 0x63
// 008533d9  0f871f020000         ja 0x8535fe
// 008533df  0fb680c4368500       movzx eax, byte ptr [eax + 0x8536c4]
// 008533e6  ff24859c368500       jmp dword ptr [eax*4 + 0x85369c]
// 008533ed  51                   push ecx
// 008533ee  8bce                 mov ecx, esi
// 008533f0  895c2450             mov dword ptr [esp + 0x50], ebx
// 008533f4  e8c7ccffff           call 0x8500c0
// 008533f9  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 008533fc  50                   push eax
// 008533fd  51                   push ecx
// 008533fe  8d542454             lea edx, [esp + 0x54]
// 00853402  52                   push edx
// 00853403  e8de18faff           call 0x7f4ce6
// 00853408  8b442458             mov eax, dword ptr [esp + 0x58]
// 0085340c  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0085340f  50                   push eax
// 00853410  68583f9f00           push 0x9f3f58
// 00853415  51                   push ecx
// 00853416  ff157cde9800         call dword ptr [0x98de7c]
// 0085341c  83c418               add esp, 0x18
// 0085341f  b801000000           mov eax, 1
// 00853424  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 0085342b  64890d00000000       mov dword ptr fs:[0], ecx
// 00853432  59                   pop ecx
// 00853433  5f                   pop edi
// 00853434  5e                   pop esi
// 00853435  5b                   pop ebx
// 00853436  8be5                 mov esp, ebp
// 00853438  5d                   pop ebp
// 00853439  c21000               ret 0x10
// 0085343c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0085343f  8b7d08               mov edi, dword ptr [ebp + 8]
// 00853442  52                   push edx
// 00853443  8bcf                 mov ecx, edi
// 00853445  ff1538d59800         call dword ptr [0x98d538]
// 0085344b  57                   push edi
// 0085344c  8bce                 mov ecx, esi
// 0085344e  e83dd0ffff           call 0x850490
// 00853453  b801000000           mov eax, 1
// 00853458  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 0085345f  64890d00000000       mov dword ptr fs:[0], ecx
// 00853466  59                   pop ecx
// 00853467  5f                   pop edi
// 00853468  5e                   pop esi
// 00853469  5b                   pop ebx
// 0085346a  8be5                 mov esp, ebp
// 0085346c  5d                   pop ebp
// 0085346d  c21000               ret 0x10
// 00853470  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00853473  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00853476  50                   push eax
// 00853477  51                   push ecx
// 00853478  8bce                 mov ecx, esi
// 0085347a  e881faffff           call 0x852f00
// 0085347f  b801000000           mov eax, 1
// 00853484  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 0085348b  64890d00000000       mov dword ptr fs:[0], ecx
// 00853492  59                   pop ecx
// 00853493  5f                   pop edi
// 00853494  5e                   pop esi
// 00853495  5b                   pop ebx
// 00853496  8be5                 mov esp, ebp
// 00853498  5d                   pop ebp
// 00853499  c21000               ret 0x10
// 0085349c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0085349f  d902                 fld dword ptr [edx]
// 008534a1  83ec08               sub esp, 8
// 008534a4  dd1c24               fstp qword ptr [esp]
// 008534a7  68bcc59f00           push 0x9fc5bc
// 008534ac  8b4508               mov eax, dword ptr [ebp + 8]
// 008534af  50                   push eax
// 008534b0  ff157cde9800         call dword ptr [0x98de7c]
// 008534b6  83c410               add esp, 0x10
// 008534b9  b801000000           mov eax, 1
// 008534be  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008534c5  64890d00000000       mov dword ptr fs:[0], ecx
// 008534cc  59                   pop ecx
// 008534cd  5f                   pop edi
// 008534ce  5e                   pop esi
// 008534cf  5b                   pop ebx
// 008534d0  8be5                 mov esp, ebp
// 008534d2  5d                   pop ebp
// 008534d3  c21000               ret 0x10
// 008534d6  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 008534d9  dd01                 fld qword ptr [ecx]
// 008534db  8b5508               mov edx, dword ptr [ebp + 8]
// 008534de  83ec08               sub esp, 8
// 008534e1  dd1c24               fstp qword ptr [esp]
// 008534e4  68bcc59f00           push 0x9fc5bc
// 008534e9  52                   push edx
// 008534ea  ff157cde9800         call dword ptr [0x98de7c]
// 008534f0  83c410               add esp, 0x10
// 008534f3  b801000000           mov eax, 1
// 008534f8  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008534ff  64890d00000000       mov dword ptr fs:[0], ecx
// 00853506  59                   pop ecx
// 00853507  5f                   pop edi
// 00853508  5e                   pop esi
// 00853509  5b                   pop ebx
// 0085350a  8be5                 mov esp, ebp
// 0085350c  5d                   pop ebp
// 0085350d  c21000               ret 0x10
// 00853510  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00853513  8b4804               mov ecx, dword ptr [eax + 4]
// 00853516  8b10                 mov edx, dword ptr [eax]
// 00853518  51                   push ecx
// 00853519  52                   push edx
// 0085351a  6838c59f00           push 0x9fc538
// 0085351f  eb8b                 jmp 0x8534ac
// 00853521  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00853524  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00853527  8b5008               mov edx, dword ptr [eax + 8]
// 0085352a  51                   push ecx
// 0085352b  8b4804               mov ecx, dword ptr [eax + 4]
// 0085352e  52                   push edx
// 0085352f  8b10                 mov edx, dword ptr [eax]
// 00853531  8b4508               mov eax, dword ptr [ebp + 8]
// 00853534  51                   push ecx
// 00853535  52                   push edx
// 00853536  6828c59f00           push 0x9fc528
// 0085353b  50                   push eax
// 0085353c  ff157cde9800         call dword ptr [0x98de7c]
// 00853542  83c418               add esp, 0x18
// 00853545  e96fffffff           jmp 0x8534b9
// 0085354a  8b356471b600         mov esi, dword ptr [0xb67164]
// 00853550  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00853553  83feff               cmp esi, -1
// 00853556  7549                 jne 0x8535a1
// 00853558  66833f07             cmp word ptr [edi], 7
// 0085355c  7541                 jne 0x85359f
// 0085355e  dd4708               fld qword ptr [edi + 8]
// 00853561  8d4c2460             lea ecx, [esp + 0x60]
// 00853565  51                   push ecx
// 00853566  dd5c2464             fstp qword ptr [esp + 0x64]
// 0085356a  8d542474             lea edx, [esp + 0x74]
// 0085356e  52                   push edx
// 0085356f  895c2470             mov dword ptr [esp + 0x70], ebx
// 00853573  e858daffff           call 0x850fd0
// 00853578  83c408               add esp, 8
// 0085357b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0085357e  50                   push eax
// 0085357f  c78424c400000001000000 mov dword ptr [esp + 0xc4], 1
// 0085358a  ff1538d59800         call dword ptr [0x98d538]
// 00853590  8d4c2470             lea ecx, [esp + 0x70]
// 00853594  ff15c0de9800         call dword ptr [0x98dec0]
// 0085359a  e91affffff           jmp 0x8534b9
// 0085359f  33f6                 xor esi, esi
// 008535a1  8d442474             lea eax, [esp + 0x74]
// 008535a5  50                   push eax
// 008535a6  e83d310d00           call 0x9266e8
// 008535ab  6a08                 push 8
// 008535ad  53                   push ebx
// 008535ae  56                   push esi
// 008535af  57                   push edi
// 008535b0  8d8c2484000000       lea ecx, [esp + 0x84]
// 008535b7  51                   push ecx
// 008535b8  c78424d400000002000000 mov dword ptr [esp + 0xd4], 2
// 008535c3  ff157cba9800         call dword ptr [0x98ba7c]
// 008535c9  85c0                 test eax, eax
// 008535cb  7c26                 jl 0x8535f3
// 008535cd  66837c247408         cmp word ptr [esp + 0x74], 8
// 008535d3  751e                 jne 0x8535f3
// 008535d5  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 008535d9  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008535dc  52                   push edx
// 008535dd  ff15f4da9800         call dword ptr [0x98daf4]
// 008535e3  8d442474             lea eax, [esp + 0x74]
// 008535e7  50                   push eax
// 008535e8  ff1534ba9800         call dword ptr [0x98ba34]
// 008535ee  e9c6feffff           jmp 0x8534b9
// 008535f3  8d4c2474             lea ecx, [esp + 0x74]
// 008535f7  51                   push ecx
// 008535f8  ff1534ba9800         call dword ptr [0x98ba34]
// 008535fe  33c0                 xor eax, eax
// 00853600  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00853607  64890d00000000       mov dword ptr fs:[0], ecx
// 0085360e  59                   pop ecx
// 0085360f  5f                   pop edi
// 00853610  5e                   pop esi
// 00853611  5b                   pop ebx
// 00853612  8be5                 mov esp, ebp
// 00853614  5d                   pop ebp
// 00853615  c21000               ret 0x10
// 00853618  af                   scasd eax, dword ptr es:[edi]
// 00853619  308500ef3085         xor byte ptr [ebp - 0x7acf1100], al
// 0085361f  0038                 add byte ptr [eax], bh
// 00853621  318500813185         xor dword ptr [ebp - 0x7ace7f00], eax
// 00853627  00fe                 add dh, bh
// 00853629  3585004533           xor eax, 0x33450085
// 0085362e  8500                 test dword ptr [eax], eax
// 00853630  d7                   xlatb 
// 00853631  318500fe3585         xor dword ptr [ebp - 0x7aca0200], eax
// 00853637  0000                 add byte ptr [eax], al
// 00853639  0001                 add byte ptr [ecx], al
// 0085363b  0207                 add al, byte ptr [edi]
// 0085363d  030407               add eax, dword ptr [edi + eax]
// 00853640  07                   pop es
// 00853641  000507070707         add byte ptr [0x7070707], al
// 00853647  0007                 add byte ptr [edi], al
// 00853649  07                   pop es
// 0085364a  07                   pop es
// 0085364b  07                   pop es
// 0085364c  07                   pop es
// 0085364d  07                   pop es
// 0085364e  07                   pop es
// 0085364f  07                   pop es
// 00853650  07                   pop es
// 00853651  07                   pop es
// 00853652  07                   pop es
// 00853653  07                   pop es
// 00853654  06                   push es
// 00853655  07                   pop es
// 00853656  07                   pop es
// 00853657  07                   pop es
// 00853658  07                   pop es
// 00853659  07                   pop es
// 0085365a  07                   pop es
// 0085365b  07                   pop es
// 0085365c  07                   pop es
// 0085365d  07                   pop es
// 0085365e  07                   pop es
// 0085365f  07                   pop es
// 00853660  07                   pop es
// 00853661  07                   pop es
// 00853662  07                   pop es
// 00853663  07                   pop es
// 00853664  07                   pop es
// 00853665  07                   pop es
// 00853666  07                   pop es
// 00853667  07                   pop es
// 00853668  07                   pop es
// 00853669  07                   pop es
// 0085366a  07                   pop es
// 0085366b  07                   pop es
// 0085366c  07                   pop es
// 0085366d  07                   pop es
// 0085366e  07                   pop es
// 0085366f  07                   pop es
// 00853670  07                   pop es
// 00853671  07                   pop es
// 00853672  07                   pop es
// 00853673  07                   pop es
// 00853674  07                   pop es
// 00853675  07                   pop es
// 00853676  07                   pop es
// 00853677  07                   pop es
// 00853678  07                   pop es
// 00853679  07                   pop es
// 0085367a  07                   pop es
// 0085367b  07                   pop es
// 0085367c  07                   pop es
// 0085367d  07                   pop es
// 0085367e  07                   pop es
// 0085367f  07                   pop es
// 00853680  07                   pop es
// 00853681  07                   pop es
// 00853682  07                   pop es
// 00853683  07                   pop es
// 00853684  07                   pop es
// 00853685  07                   pop es
// 00853686  07                   pop es
// 00853687  07                   pop es
// 00853688  07                   pop es
// 00853689  07                   pop es
// 0085368a  07                   pop es
// 0085368b  07                   pop es
// 0085368c  07                   pop es
// 0085368d  07                   pop es
// 0085368e  07                   pop es
// 0085368f  07                   pop es
// 00853690  07                   pop es
// 00853691  07                   pop es
// 00853692  07                   pop es
// 00853693  07                   pop es
// 00853694  07                   pop es
// 00853695  07                   pop es
// 00853696  07                   pop es
// 00853697  07                   pop es
// 00853698  07                   pop es
// 00853699  07                   pop es
// 0085369a  06                   push es
// 0085369b  06                   push es
// 0085369c  ed                   in eax, dx
// 0085369d  3385009c3485         xor eax, dword ptr [ebp - 0x7acb6400]
// 008536a3  00d6                 add dh, dl
// 008536a5  3485                 xor al, 0x85
// 008536a7  007034               add byte ptr [eax + 0x34], dh
// 008536aa  8500                 test dword ptr [eax], eax
// copied from an identical function in another client (function ?ExchangePropStringHelper@CXTPPropExchange@@IAEHAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@GPAXPBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp