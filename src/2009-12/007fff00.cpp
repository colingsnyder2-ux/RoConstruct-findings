// roc 2009-12 007fff00  unit: CXTPPaintManager  size: 1147 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fff00
//
// 007fff00  6aff                 push -1
// 007fff02  68b9929500           push 0x9592b9
// 007fff07  64a100000000         mov eax, dword ptr fs:[0]
// 007fff0d  50                   push eax
// 007fff0e  83ec48               sub esp, 0x48
// 007fff11  53                   push ebx
// 007fff12  55                   push ebp
// 007fff13  56                   push esi
// 007fff14  57                   push edi
// 007fff15  a10052b600           mov eax, dword ptr [0xb65200]
// 007fff1a  33c4                 xor eax, esp
// 007fff1c  50                   push eax
// 007fff1d  8d44245c             lea eax, [esp + 0x5c]
// 007fff21  64a300000000         mov dword ptr fs:[0], eax
// 007fff27  8bf9                 mov edi, ecx
// 007fff29  837c247800           cmp dword ptr [esp + 0x78], 0
// 007fff2e  8b742474             mov esi, dword ptr [esp + 0x74]
// 007fff32  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007fff38  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 007fff3e  0f841c020000         je 0x800160
// 007fff44  83f802               cmp eax, 2
// 007fff47  751b                 jne 0x7fff64
// 007fff49  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007fff4d  8b07                 mov eax, dword ptr [edi]
// 007fff4f  8b4058               mov eax, dword ptr [eax + 0x58]
// 007fff52  6a01                 push 1
// 007fff54  56                   push esi
// 007fff55  51                   push ecx
// 007fff56  8d542430             lea edx, [esp + 0x30]
// 007fff5a  52                   push edx
// 007fff5b  8bcf                 mov ecx, edi
// 007fff5d  ffd0                 call eax
// 007fff5f  e9e6010000           jmp 0x80014a
// 007fff64  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 007fff6a  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 007fff70  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 007fff76  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 007fff7c  89442444             mov dword ptr [esp + 0x44], eax
// 007fff80  89442434             mov dword ptr [esp + 0x34], eax
// 007fff84  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007fff8a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 007fff8e  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 007fff94  83c302               add ebx, 2
// 007fff97  89542440             mov dword ptr [esp + 0x40], edx
// 007fff9b  894c2448             mov dword ptr [esp + 0x48], ecx
// 007fff9f  89542430             mov dword ptr [esp + 0x30], edx
// 007fffa3  894c2438             mov dword ptr [esp + 0x38], ecx
// 007fffa7  83f8ff               cmp eax, -1
// 007fffaa  750f                 jne 0x7fffbb
// 007fffac  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007fffb2  85c9                 test ecx, ecx
// 007fffb4  7405                 je 0x7fffbb
// 007fffb6  e8f565ffff           call 0x7f65b0
// 007fffbb  8bce                 mov ecx, esi
// 007fffbd  89442478             mov dword ptr [esp + 0x78], eax
// 007fffc1  e8fa92ffff           call 0x7f92c0
// 007fffc6  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 007fffca  85c0                 test eax, eax
// 007fffcc  0f84ab000000         je 0x80007d
// 007fffd2  8b16                 mov edx, dword ptr [esi]
// 007fffd4  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 007fffda  8d442414             lea eax, [esp + 0x14]
// 007fffde  50                   push eax
// 007fffdf  8bce                 mov ecx, esi
// 007fffe1  ffd2                 call edx
// 007fffe3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007fffe7  8b06                 mov eax, dword ptr [esi]
// 007fffe9  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 007fffef  51                   push ecx
// 007ffff0  8bce                 mov ecx, esi
// 007ffff2  ffd2                 call edx
// 007ffff4  8bd8                 mov ebx, eax
// 007ffff6  8bcb                 mov ecx, ebx
// 007ffff8  e87358cdff           call 0x4d5870
// 007ffffd  0faf442414           imul eax, dword ptr [esp + 0x14]
// 00800002  8bcb                 mov ecx, ebx
// 00800004  89442470             mov dword ptr [esp + 0x70], eax
// 00800008  e873dc0400           call 0x84dc80
// 0080000d  8bc8                 mov ecx, eax
// 0080000f  8b442470             mov eax, dword ptr [esp + 0x70]
// 00800013  99                   cdq 
// 00800014  f7f9                 idiv ecx
// 00800016  8b542440             mov edx, dword ptr [esp + 0x40]
// 0080001a  6a01                 push 1
// 0080001c  6a00                 push 0
// 0080001e  6a00                 push 0
// 00800020  89442424             mov dword ptr [esp + 0x24], eax
// 00800024  8b442454             mov eax, dword ptr [esp + 0x54]
// 00800028  03c2                 add eax, edx
// 0080002a  99                   cdq 
// 0080002b  2bc2                 sub eax, edx
// 0080002d  8bc8                 mov ecx, eax
// 0080002f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00800033  99                   cdq 
// 00800034  2bc2                 sub eax, edx
// 00800036  8b542448             mov edx, dword ptr [esp + 0x48]
// 0080003a  83c203               add edx, 3
// 0080003d  89542430             mov dword ptr [esp + 0x30], edx
// 00800041  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 00800048  52                   push edx
// 00800049  8b542428             mov edx, dword ptr [esp + 0x28]
// 0080004d  6a00                 push 0
// 0080004f  6a00                 push 0
// 00800051  53                   push ebx
// 00800052  52                   push edx
// 00800053  8b542434             mov edx, dword ptr [esp + 0x34]
// 00800057  d1f9                 sar ecx, 1
// 00800059  d1f8                 sar eax, 1
// 0080005b  2bc8                 sub ecx, eax
// 0080005d  8b07                 mov eax, dword ptr [edi]
// 0080005f  52                   push edx
// 00800060  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 00800066  51                   push ecx
// 00800067  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0080006b  51                   push ecx
// 0080006c  55                   push ebp
// 0080006d  8bcf                 mov ecx, edi
// 0080006f  ffd2                 call edx
// 00800071  8b442414             mov eax, dword ptr [esp + 0x14]
// 00800075  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00800079  8d5c0106             lea ebx, [ecx + eax + 6]
// 0080007d  8b16                 mov edx, dword ptr [esi]
// 0080007f  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 00800085  8bce                 mov ecx, esi
// 00800087  ffd0                 call eax
// 00800089  85c0                 test eax, eax
// 0080008b  0f84b9000000         je 0x80014a
// 00800091  85ff                 test edi, edi
// 00800093  7510                 jne 0x8000a5
// 00800095  6a11                 push 0x11
// 00800097  ff1590b19800         call dword ptr [0x98b190]
// 0080009d  50                   push eax
// 0080009e  e8c142ffff           call 0x7f4364
// 008000a3  eb06                 jmp 0x8000ab
// 008000a5  8d87f0000000         lea eax, [edi + 0xf0]
// 008000ab  50                   push eax
// 008000ac  55                   push ebp
// 008000ad  8d4c241c             lea ecx, [esp + 0x1c]
// 008000b1  e8aab50400           call 0x84b660
// 008000b6  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008000bc  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 008000c2  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 008000c8  8b5500               mov edx, dword ptr [ebp]
// 008000cb  51                   push ecx
// 008000cc  50                   push eax
// 008000cd  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008000d4  6a00                 push 0
// 008000d6  6a00                 push 0
// 008000d8  50                   push eax
// 008000d9  89942484000000       mov dword ptr [esp + 0x84], edx
// 008000e0  8b17                 mov edx, dword ptr [edi]
// 008000e2  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 008000e8  6a00                 push 0
// 008000ea  6a00                 push 0
// 008000ec  8bcf                 mov ecx, edi
// 008000ee  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 008000f9  ffd2                 call edx
// 008000fb  50                   push eax
// 008000fc  8b442474             mov eax, dword ptr [esp + 0x74]
// 00800100  8b5038               mov edx, dword ptr [eax + 0x38]
// 00800103  8bcd                 mov ecx, ebp
// 00800105  ffd2                 call edx
// 00800107  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0080010b  8b542434             mov edx, dword ptr [esp + 0x34]
// 0080010f  6a00                 push 0
// 00800111  6a00                 push 0
// 00800113  6a00                 push 0
// 00800115  6a01                 push 1
// 00800117  83ec10               sub esp, 0x10
// 0080011a  8bc4                 mov eax, esp
// 0080011c  8918                 mov dword ptr [eax], ebx
// 0080011e  894804               mov dword ptr [eax + 4], ecx
// 00800121  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00800125  56                   push esi
// 00800126  895008               mov dword ptr [eax + 8], edx
// 00800129  55                   push ebp
// 0080012a  8d54244c             lea edx, [esp + 0x4c]
// 0080012e  89480c               mov dword ptr [eax + 0xc], ecx
// 00800131  52                   push edx
// 00800132  8bcf                 mov ecx, edi
// 00800134  e827f6ffff           call 0x7ff760
// 00800139  8d4c2414             lea ecx, [esp + 0x14]
// 0080013d  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 00800145  e896b50400           call 0x84b6e0
// 0080014a  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0080014e  c70000000000         mov dword ptr [eax], 0
// 00800154  c7400400000000       mov dword ptr [eax + 4], 0
// 0080015b  e905020000           jmp 0x800365
// 00800160  8b16                 mov edx, dword ptr [esi]
// 00800162  8b5258               mov edx, dword ptr [edx + 0x58]
// 00800165  33c9                 xor ecx, ecx
// 00800167  83f802               cmp eax, 2
// 0080016a  0f94c1               sete cl
// 0080016d  8d442474             lea eax, [esp + 0x74]
// 00800171  50                   push eax
// 00800172  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00800176  8bce                 mov ecx, esi
// 00800178  ffd2                 call edx
// 0080017a  8d442474             lea eax, [esp + 0x74]
// 0080017e  50                   push eax
// 0080017f  c744246801000000     mov dword ptr [esp + 0x68], 1
// 00800187  e844d7ffff           call 0x7fd8d0
// 0080018c  8b6c2474             mov ebp, dword ptr [esp + 0x74]
// 00800190  83c404               add esp, 4
// 00800193  8d8fa4000000         lea ecx, [edi + 0xa4]
// 00800199  51                   push ecx
// 0080019a  55                   push ebp
// 0080019b  8d4c2454             lea ecx, [esp + 0x54]
// 0080019f  e8bcb40400           call 0x84b660
// 008001a4  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 008001aa  c644246402           mov byte ptr [esp + 0x64], 2
// 008001af  85c0                 test eax, eax
// 008001b1  7e06                 jle 0x8001b9
// 008001b3  89442470             mov dword ptr [esp + 0x70], eax
// 008001b7  eb21                 jmp 0x8001da
// 008001b9  8b4508               mov eax, dword ptr [ebp + 8]
// 008001bc  8d542424             lea edx, [esp + 0x24]
// 008001c0  52                   push edx
// 008001c1  6a01                 push 1
// 008001c3  6868619a00           push 0x9a6168
// 008001c8  50                   push eax
// 008001c9  ff156cb19800         call dword ptr [0x98b16c]
// 008001cf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008001d3  83c107               add ecx, 7
// 008001d6  894c2470             mov dword ptr [esp + 0x70], ecx
// 008001da  8d87f0000000         lea eax, [edi + 0xf0]
// 008001e0  50                   push eax
// 008001e1  8d4c2450             lea ecx, [esp + 0x50]
// 008001e5  e8969f0400           call 0x84a180
// 008001ea  8b16                 mov edx, dword ptr [esi]
// 008001ec  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 008001f2  8bce                 mov ecx, esi
// 008001f4  ffd0                 call eax
// 008001f6  8bd8                 mov ebx, eax
// 008001f8  85db                 test ebx, ebx
// 008001fa  7449                 je 0x800245
// 008001fc  83bf1401000000       cmp dword ptr [edi + 0x114], 0
// 00800203  7540                 jne 0x800245
// 00800205  8b5508               mov edx, dword ptr [ebp + 8]
// 00800208  8d4c2424             lea ecx, [esp + 0x24]
// 0080020c  51                   push ecx
// 0080020d  6a01                 push 1
// 0080020f  6868619a00           push 0x9a6168
// 00800214  52                   push edx
// 00800215  ff156cb19800         call dword ptr [0x98b16c]
// 0080021b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0080021f  83c007               add eax, 7
// 00800222  39442470             cmp dword ptr [esp + 0x70], eax
// 00800226  7f1d                 jg 0x800245
// 00800228  6a01                 push 1
// 0080022a  6868619a00           push 0x9a6168
// 0080022f  8d4c241c             lea ecx, [esp + 0x1c]
// 00800233  51                   push ecx
// 00800234  8bcd                 mov ecx, ebp
// 00800236  e8d5dfffff           call 0x7fe210
// 0080023b  8b4004               mov eax, dword ptr [eax + 4]
// 0080023e  83c007               add eax, 7
// 00800241  89442470             mov dword ptr [esp + 0x70], eax
// 00800245  8d542424             lea edx, [esp + 0x24]
// 00800249  52                   push edx
// 0080024a  8d4c2478             lea ecx, [esp + 0x78]
// 0080024e  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00800254  50                   push eax
// 00800255  8d4c247c             lea ecx, [esp + 0x7c]
// 00800259  ff1580de9800         call dword ptr [0x98de80]
// 0080025f  50                   push eax
// 00800260  8b4508               mov eax, dword ptr [ebp + 8]
// 00800263  50                   push eax
// 00800264  ff156cb19800         call dword ptr [0x98b16c]
// 0080026a  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0080026e  83c505               add ebp, 5
// 00800271  837c247800           cmp dword ptr [esp + 0x78], 0
// 00800276  7443                 je 0x8002bb
// 00800278  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0080027e  8b17                 mov edx, dword ptr [edi]
// 00800280  50                   push eax
// 00800281  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 00800287  8bcf                 mov ecx, edi
// 00800289  ffd0                 call eax
// 0080028b  8bbf80000000         mov edi, dword ptr [edi + 0x80]
// 00800291  03f8                 add edi, eax
// 00800293  03fd                 add edi, ebp
// 00800295  39be80010000         cmp dword ptr [esi + 0x180], edi
// 0080029b  7410                 je 0x8002ad
// 0080029d  89be80010000         mov dword ptr [esi + 0x180], edi
// 008002a3  c7868401000001000000 mov dword ptr [esi + 0x184], 1
// 008002ad  8bb660010000         mov esi, dword ptr [esi + 0x160]
// 008002b3  8d0c06               lea ecx, [esi + eax]
// 008002b6  e983000000           jmp 0x80033e
// 008002bb  8bce                 mov ecx, esi
// 008002bd  e8fe8fffff           call 0x7f92c0
// 008002c2  8bf8                 mov edi, eax
// 008002c4  85ff                 test edi, edi
// 008002c6  7418                 je 0x8002e0
// 008002c8  8b06                 mov eax, dword ptr [esi]
// 008002ca  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 008002d0  8d4c2424             lea ecx, [esp + 0x24]
// 008002d4  51                   push ecx
// 008002d5  8bce                 mov ecx, esi
// 008002d7  ffd2                 call edx
// 008002d9  8b00                 mov eax, dword ptr [eax]
// 008002db  83c004               add eax, 4
// 008002de  eb02                 jmp 0x8002e2
// 008002e0  33c0                 xor eax, eax
// 008002e2  f7db                 neg ebx
// 008002e4  1bdb                 sbb ebx, ebx
// 008002e6  23dd                 and ebx, ebp
// 008002e8  03d8                 add ebx, eax
// 008002ea  85ff                 test edi, edi
// 008002ec  7432                 je 0x800320
// 008002ee  8b06                 mov eax, dword ptr [esi]
// 008002f0  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 008002f6  8d4c242c             lea ecx, [esp + 0x2c]
// 008002fa  51                   push ecx
// 008002fb  8bce                 mov ecx, esi
// 008002fd  ffd2                 call edx
// 008002ff  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00800303  3b4804               cmp ecx, dword ptr [eax + 4]
// 00800306  7f18                 jg 0x800320
// 00800308  8b16                 mov edx, dword ptr [esi]
// 0080030a  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 00800310  8d44243c             lea eax, [esp + 0x3c]
// 00800314  50                   push eax
// 00800315  8bce                 mov ecx, esi
// 00800317  ffd2                 call edx
// 00800319  8b4004               mov eax, dword ptr [eax + 4]
// 0080031c  89442470             mov dword ptr [esp + 0x70], eax
// 00800320  399e80010000         cmp dword ptr [esi + 0x180], ebx
// 00800326  7410                 je 0x800338
// 00800328  899e80010000         mov dword ptr [esi + 0x180], ebx
// 0080032e  c7868401000001000000 mov dword ptr [esi + 0x184], 1
// 00800338  8b8e60010000         mov ecx, dword ptr [esi + 0x160]
// 0080033e  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00800342  8b542470             mov edx, dword ptr [esp + 0x70]
// 00800346  890e                 mov dword ptr [esi], ecx
// 00800348  8d4c244c             lea ecx, [esp + 0x4c]
// 0080034c  895604               mov dword ptr [esi + 4], edx
// 0080034f  c644246401           mov byte ptr [esp + 0x64], 1
// 00800354  e887b30400           call 0x84b6e0
// 00800359  8d4c2474             lea ecx, [esp + 0x74]
// 0080035d  ff15c0de9800         call dword ptr [0x98dec0]
// 00800363  8bc6                 mov eax, esi
// 00800365  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00800369  64890d00000000       mov dword ptr fs:[0], ecx
// 00800370  59                   pop ecx
// 00800371  5f                   pop edi
// 00800372  5e                   pop esi
// 00800373  5d                   pop ebp
// 00800374  5b                   pop ebx
// 00800375  83c454               add esp, 0x54
// 00800378  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlEdit@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@PAVCXTPControlEdit@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp