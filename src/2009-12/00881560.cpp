// roc 2009-12 00881560  unit: CXTPOffice2007Theme  size: 634 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00881560
//
// 00881560  6aff                 push -1
// 00881562  68e9089600           push 0x9608e9
// 00881567  64a100000000         mov eax, dword ptr fs:[0]
// 0088156d  50                   push eax
// 0088156e  83ec50               sub esp, 0x50
// 00881571  53                   push ebx
// 00881572  55                   push ebp
// 00881573  56                   push esi
// 00881574  57                   push edi
// 00881575  a10052b600           mov eax, dword ptr [0xb65200]
// 0088157a  33c4                 xor eax, esp
// 0088157c  50                   push eax
// 0088157d  8d442464             lea eax, [esp + 0x64]
// 00881581  64a300000000         mov dword ptr fs:[0], eax
// 00881587  8bd9                 mov ebx, ecx
// 00881589  83bc249400000000     cmp dword ptr [esp + 0x94], 0
// 00881591  bf03000000           mov edi, 3
// 00881596  7504                 jne 0x88159c
// 00881598  8bef                 mov ebp, edi
// 0088159a  eb31                 jmp 0x8815cd
// 0088159c  83bc249000000000     cmp dword ptr [esp + 0x90], 0
// 008815a4  7411                 je 0x8815b7
// 008815a6  83bc248c00000000     cmp dword ptr [esp + 0x8c], 0
// 008815ae  7418                 je 0x8815c8
// 008815b0  bd02000000           mov ebp, 2
// 008815b5  eb16                 jmp 0x8815cd
// 008815b7  83bc248c00000000     cmp dword ptr [esp + 0x8c], 0
// 008815bf  7507                 jne 0x8815c8
// 008815c1  33ed                 xor ebp, ebp
// 008815c3  e9a1000000           jmp 0x881669
// 008815c8  bd01000000           mov ebp, 1
// 008815cd  83bc248c00000000     cmp dword ptr [esp + 0x8c], 0
// 008815d5  750e                 jne 0x8815e5
// 008815d7  83bc249000000000     cmp dword ptr [esp + 0x90], 0
// 008815df  0f8484000000         je 0x881669
// 008815e5  68d025a000           push 0xa025d0
// 008815ea  e811d7ffff           call 0x87ed00
// 008815ef  83bc249000000000     cmp dword ptr [esp + 0x90], 0
// 008815f7  8bf0                 mov esi, eax
// 008815f9  7411                 je 0x88160c
// 008815fb  83bc248c00000000     cmp dword ptr [esp + 0x8c], 0
// 00881603  7407                 je 0x88160c
// 00881605  b801000000           mov eax, 1
// 0088160a  eb02                 jmp 0x88160e
// 0088160c  33c0                 xor eax, eax
// 0088160e  6a02                 push 2
// 00881610  50                   push eax
// 00881611  8d44245c             lea eax, [esp + 0x5c]
// 00881615  50                   push eax
// 00881616  8bce                 mov ecx, esi
// 00881618  897c2430             mov dword ptr [esp + 0x30], edi
// 0088161c  897c2434             mov dword ptr [esp + 0x34], edi
// 00881620  897c2438             mov dword ptr [esp + 0x38], edi
// 00881624  897c243c             mov dword ptr [esp + 0x3c], edi
// 00881628  e893f20500           call 0x8e08c0
// 0088162d  8b10                 mov edx, dword ptr [eax]
// 0088162f  68ff00ff00           push 0xff00ff
// 00881634  8d4c2428             lea ecx, [esp + 0x28]
// 00881638  51                   push ecx
// 00881639  83ec10               sub esp, 0x10
// 0088163c  8bcc                 mov ecx, esp
// 0088163e  8911                 mov dword ptr [ecx], edx
// 00881640  8b5004               mov edx, dword ptr [eax + 4]
// 00881643  895104               mov dword ptr [ecx + 4], edx
// 00881646  8b5008               mov edx, dword ptr [eax + 8]
// 00881649  8b400c               mov eax, dword ptr [eax + 0xc]
// 0088164c  895108               mov dword ptr [ecx + 8], edx
// 0088164f  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 00881656  89410c               mov dword ptr [ecx + 0xc], eax
// 00881659  8d8c2490000000       lea ecx, [esp + 0x90]
// 00881660  51                   push ecx
// 00881661  52                   push edx
// 00881662  8bce                 mov ecx, esi
// 00881664  e897f70500           call 0x8e0e00
// 00881669  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00881670  2b442478             sub eax, dword ptr [esp + 0x78]
// 00881674  bf17000000           mov edi, 0x17
// 00881679  83f81b               cmp eax, 0x1b
// 0088167c  7d05                 jge 0x881683
// 0088167e  bf11000000           mov edi, 0x11
// 00881683  83f80f               cmp eax, 0xf
// 00881686  7d05                 jge 0x88168d
// 00881688  bf0d000000           mov edi, 0xd
// 0088168d  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00881694  3d60f00000           cmp eax, 0xf060
// 00881699  7507                 jne 0x8816a2
// 0088169b  bed0f09e00           mov esi, 0x9ef0d0
// 008816a0  eb1f                 jmp 0x8816c1
// 008816a2  3d20f00000           cmp eax, 0xf020
// 008816a7  7507                 jne 0x8816b0
// 008816a9  bec425a000           mov esi, 0xa025c4
// 008816ae  eb11                 jmp 0x8816c1
// 008816b0  beb825a000           mov esi, 0xa025b8
// 008816b5  3d30f00000           cmp eax, 0xf030
// 008816ba  7405                 je 0x8816c1
// 008816bc  beb025a000           mov esi, 0xa025b0
// 008816c1  8d8c2494000000       lea ecx, [esp + 0x94]
// 008816c8  ff1574de9800         call dword ptr [0x98de74]
// 008816ce  57                   push edi
// 008816cf  56                   push esi
// 008816d0  8d84249c000000       lea eax, [esp + 0x9c]
// 008816d7  689c25a000           push 0xa0259c
// 008816dc  50                   push eax
// 008816dd  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 008816e5  ff157cde9800         call dword ptr [0x98de7c]
// 008816eb  83c410               add esp, 0x10
// 008816ee  8d8c2494000000       lea ecx, [esp + 0x94]
// 008816f5  ff1580de9800         call dword ptr [0x98de80]
// 008816fb  50                   push eax
// 008816fc  8bcb                 mov ecx, ebx
// 008816fe  e8fdd5ffff           call 0x87ed00
// 00881703  6a05                 push 5
// 00881705  55                   push ebp
// 00881706  8d4c241c             lea ecx, [esp + 0x1c]
// 0088170a  8bd8                 mov ebx, eax
// 0088170c  51                   push ecx
// 0088170d  8bcb                 mov ecx, ebx
// 0088170f  e8acf10500           call 0x8e08c0
// 00881714  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00881718  8b442414             mov eax, dword ptr [esp + 0x14]
// 0088171c  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00881720  8bf5                 mov esi, ebp
// 00881722  2bf0                 sub esi, eax
// 00881724  2bc5                 sub eax, ebp
// 00881726  03442478             add eax, dword ptr [esp + 0x78]
// 0088172a  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 0088172e  03842480000000       add eax, dword ptr [esp + 0x80]
// 00881735  68ff00ff00           push 0xff00ff
// 0088173a  99                   cdq 
// 0088173b  2bc2                 sub eax, edx
// 0088173d  8bc8                 mov ecx, eax
// 0088173f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00881743  2b442424             sub eax, dword ptr [esp + 0x24]
// 00881747  d1f9                 sar ecx, 1
// 00881749  03842488000000       add eax, dword ptr [esp + 0x88]
// 00881750  894c2448             mov dword ptr [esp + 0x48], ecx
// 00881754  03842480000000       add eax, dword ptr [esp + 0x80]
// 0088175b  03ce                 add ecx, esi
// 0088175d  99                   cdq 
// 0088175e  2bc2                 sub eax, edx
// 00881760  d1f8                 sar eax, 1
// 00881762  8944244c             mov dword ptr [esp + 0x4c], eax
// 00881766  03c7                 add eax, edi
// 00881768  89442454             mov dword ptr [esp + 0x54], eax
// 0088176c  33c0                 xor eax, eax
// 0088176e  8d542438             lea edx, [esp + 0x38]
// 00881772  52                   push edx
// 00881773  8b542420             mov edx, dword ptr [esp + 0x20]
// 00881777  83ec10               sub esp, 0x10
// 0088177a  894c2464             mov dword ptr [esp + 0x64], ecx
// 0088177e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00881782  8944244c             mov dword ptr [esp + 0x4c], eax
// 00881786  89442450             mov dword ptr [esp + 0x50], eax
// 0088178a  89442454             mov dword ptr [esp + 0x54], eax
// 0088178e  89442458             mov dword ptr [esp + 0x58], eax
// 00881792  8bc4                 mov eax, esp
// 00881794  8908                 mov dword ptr [eax], ecx
// 00881796  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088179a  895004               mov dword ptr [eax + 4], edx
// 0088179d  896808               mov dword ptr [eax + 8], ebp
// 008817a0  89480c               mov dword ptr [eax + 0xc], ecx
// 008817a3  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 008817aa  8d54245c             lea edx, [esp + 0x5c]
// 008817ae  52                   push edx
// 008817af  50                   push eax
// 008817b0  8bcb                 mov ecx, ebx
// 008817b2  e849f60500           call 0x8e0e00
// 008817b7  8d8c2494000000       lea ecx, [esp + 0x94]
// 008817be  ff15c0de9800         call dword ptr [0x98dec0]
// 008817c4  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008817c8  64890d00000000       mov dword ptr fs:[0], ecx
// 008817cf  59                   pop ecx
// 008817d0  5f                   pop edi
// 008817d1  5e                   pop esi
// 008817d2  5d                   pop ebp
// 008817d3  5b                   pop ebx
// 008817d4  83c45c               add esp, 0x5c
// 008817d7  c22400               ret 0x24
// copied from an identical function in another client (function ?DrawRibbonFrameCaptionButton@CXTPOffice2007Theme@@UAEXPAVCDC@@VCRect@@HHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp