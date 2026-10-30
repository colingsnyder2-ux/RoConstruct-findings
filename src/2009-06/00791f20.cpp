// roc 2009-06 00791f20  unit: CSelectionCaption  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00791f20
//
// 00791f20  6aff                 push -1
// 00791f22  6868b68700           push 0x87b668
// 00791f27  64a100000000         mov eax, dword ptr fs:[0]
// 00791f2d  50                   push eax
// 00791f2e  81ec84000000         sub esp, 0x84
// 00791f34  53                   push ebx
// 00791f35  56                   push esi
// 00791f36  57                   push edi
// 00791f37  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00791f3c  33c4                 xor eax, esp
// 00791f3e  50                   push eax
// 00791f3f  8d842494000000       lea eax, [esp + 0x94]
// 00791f46  64a300000000         mov dword ptr fs:[0], eax
// 00791f4c  8bf1                 mov esi, ecx
// 00791f4e  8dbed0000000         lea edi, [esi + 0xd0]
// 00791f54  8bcf                 mov ecx, edi
// 00791f56  ff155cfb8900         call dword ptr [0x89fb5c]
// 00791f5c  84c0                 test al, al
// 00791f5e  742d                 je 0x791f8d
// 00791f60  8d4c244c             lea ecx, [esp + 0x4c]
// 00791f64  e8c7e4fdff           call 0x770430
// 00791f69  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00791f70  8b10                 mov edx, dword ptr [eax]
// 00791f72  8911                 mov dword ptr [ecx], edx
// 00791f74  8b5004               mov edx, dword ptr [eax + 4]
// 00791f77  895104               mov dword ptr [ecx + 4], edx
// 00791f7a  8b5008               mov edx, dword ptr [eax + 8]
// 00791f7d  8b400c               mov eax, dword ptr [eax + 0xc]
// 00791f80  895108               mov dword ptr [ecx + 8], edx
// 00791f83  89410c               mov dword ptr [ecx + 0xc], eax
// 00791f86  8bc1                 mov eax, ecx
// 00791f88  e9e3000000           jmp 0x792070
// 00791f8d  56                   push esi
// 00791f8e  8d4c2414             lea ecx, [esp + 0x14]
// 00791f92  e839e5fdff           call 0x7704d0
// 00791f97  6a00                 push 0
// 00791f99  8d4c2424             lea ecx, [esp + 0x24]
// 00791f9d  e8589f0b00           call 0x84befa
// 00791fa2  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00791fa5  6a00                 push 0
// 00791fa7  6a00                 push 0
// 00791fa9  6a31                 push 0x31
// 00791fab  51                   push ecx
// 00791fac  c78424ac00000000000000 mov dword ptr [esp + 0xac], 0
// 00791fb7  ff1590ee8900         call dword ptr [0x89ee90]
// 00791fbd  50                   push eax
// 00791fbe  e87375f8ff           call 0x719536
// 00791fc3  50                   push eax
// 00791fc4  8d542424             lea edx, [esp + 0x24]
// 00791fc8  52                   push edx
// 00791fc9  8d4c2444             lea ecx, [esp + 0x44]
// 00791fcd  e88ee8fdff           call 0x770860
// 00791fd2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00791fd6  8d44245c             lea eax, [esp + 0x5c]
// 00791fda  50                   push eax
// 00791fdb  51                   push ecx
// 00791fdc  ff1598e08900         call dword ptr [0x89e098]
// 00791fe2  8bcf                 mov ecx, edi
// 00791fe4  ff1554fb8900         call dword ptr [0x89fb54]
// 00791fea  8bcf                 mov ecx, edi
// 00791fec  8bd8                 mov ebx, eax
// 00791fee  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00791ff4  8d542434             lea edx, [esp + 0x34]
// 00791ff8  52                   push edx
// 00791ff9  53                   push ebx
// 00791ffa  50                   push eax
// 00791ffb  8b442434             mov eax, dword ptr [esp + 0x34]
// 00791fff  50                   push eax
// 00792000  ff1550e18900         call dword ptr [0x89e150]
// 00792006  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0079200a  8b542434             mov edx, dword ptr [esp + 0x34]
// 0079200e  8bbecc000000         mov edi, dword ptr [esi + 0xcc]
// 00792014  8b442418             mov eax, dword ptr [esp + 0x18]
// 00792018  8d540a0c             lea edx, [edx + ecx + 0xc]
// 0079201c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00792020  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 00792024  f7df                 neg edi
// 00792026  1bff                 sbb edi, edi
// 00792028  83e712               and edi, 0x12
// 0079202b  2bc7                 sub eax, edi
// 0079202d  2b442410             sub eax, dword ptr [esp + 0x10]
// 00792031  3bd0                 cmp edx, eax
// 00792033  7e02                 jle 0x792037
// 00792035  8bd0                 mov edx, eax
// 00792037  8b766c               mov esi, dword ptr [esi + 0x6c]
// 0079203a  8bbc24a4000000       mov edi, dword ptr [esp + 0xa4]
// 00792041  2bce                 sub ecx, esi
// 00792043  8d0416               lea eax, [esi + edx]
// 00792046  894f0c               mov dword ptr [edi + 0xc], ecx
// 00792049  8d4c243c             lea ecx, [esp + 0x3c]
// 0079204d  8937                 mov dword ptr [edi], esi
// 0079204f  897704               mov dword ptr [edi + 4], esi
// 00792052  894708               mov dword ptr [edi + 8], eax
// 00792055  e886e8fdff           call 0x7708e0
// 0079205a  8d4c2420             lea ecx, [esp + 0x20]
// 0079205e  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 00792069  e8869e0b00           call 0x84bef4
// 0079206e  8bc7                 mov eax, edi
// 00792070  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00792077  64890d00000000       mov dword ptr fs:[0], ecx
// 0079207e  59                   pop ecx
// 0079207f  5f                   pop edi
// 00792080  5e                   pop esi
// 00792081  5b                   pop ebx
// 00792082  81c490000000         add esp, 0x90
// 00792088  c20400               ret 4
// copied from an identical function in another client (function ?GetTextRect@CXTCaption@@UBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTCaption.cpp