// roc 2009-06 00598420  unit: seg_00590000  size: 622 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00598420
//
// 00598420  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00598424  53                   push ebx
// 00598425  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00598429  57                   push edi
// 0059842a  8bf9                 mov edi, ecx
// 0059842c  c1ef10               shr edi, 0x10
// 0059842f  81e1ffff0000         and ecx, 0xffff
// 00598435  83fb01               cmp ebx, 1
// 00598438  7531                 jne 0x59846b
// 0059843a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059843e  0fb610               movzx edx, byte ptr [eax]
// 00598441  03ca                 add ecx, edx
// 00598443  81f9f1ff0000         cmp ecx, 0xfff1
// 00598449  7206                 jb 0x598451
// 0059844b  81e9f1ff0000         sub ecx, 0xfff1
// 00598451  03f9                 add edi, ecx
// 00598453  81fff1ff0000         cmp edi, 0xfff1
// 00598459  7206                 jb 0x598461
// 0059845b  81eff1ff0000         sub edi, 0xfff1
// 00598461  8bc7                 mov eax, edi
// 00598463  c1e010               shl eax, 0x10
// 00598466  5f                   pop edi
// 00598467  0bc1                 or eax, ecx
// 00598469  5b                   pop ebx
// 0059846a  c3                   ret 
// 0059846b  56                   push esi
// 0059846c  8b742414             mov esi, dword ptr [esp + 0x14]
// 00598470  85f6                 test esi, esi
// 00598472  7507                 jne 0x59847b
// 00598474  8d4601               lea eax, [esi + 1]
// 00598477  5e                   pop esi
// 00598478  5f                   pop edi
// 00598479  5b                   pop ebx
// 0059847a  c3                   ret 
// 0059847b  83fb10               cmp ebx, 0x10
// 0059847e  733b                 jae 0x5984bb
// 00598480  85db                 test ebx, ebx
// 00598482  740d                 je 0x598491
// 00598484  0fb606               movzx eax, byte ptr [esi]
// 00598487  03c8                 add ecx, eax
// 00598489  4b                   dec ebx
// 0059848a  46                   inc esi
// 0059848b  03f9                 add edi, ecx
// 0059848d  85db                 test ebx, ebx
// 0059848f  75f3                 jne 0x598484
// 00598491  81f9f1ff0000         cmp ecx, 0xfff1
// 00598497  7206                 jb 0x59849f
// 00598499  81e9f1ff0000         sub ecx, 0xfff1
// 0059849f  b871800780           mov eax, 0x80078071
// 005984a4  f7e7                 mul edi
// 005984a6  c1ea0f               shr edx, 0xf
// 005984a9  8bc2                 mov eax, edx
// 005984ab  c1e004               shl eax, 4
// 005984ae  2bc2                 sub eax, edx
// 005984b0  03c7                 add eax, edi
// 005984b2  5e                   pop esi
// 005984b3  c1e010               shl eax, 0x10
// 005984b6  5f                   pop edi
// 005984b7  0bc1                 or eax, ecx
// 005984b9  5b                   pop ebx
// 005984ba  c3                   ret 
// 005984bb  81fbb0150000         cmp ebx, 0x15b0
// 005984c1  0f82e2000000         jb 0x5985a9
// 005984c7  b8afa96e5e           mov eax, 0x5e6ea9af
// 005984cc  f7e3                 mul ebx
// 005984ce  55                   push ebp
// 005984cf  8bea                 mov ebp, edx
// 005984d1  c1ed0b               shr ebp, 0xb
// 005984d4  eb0a                 jmp 0x5984e0
// 005984d6  8da42400000000       lea esp, [esp]
// 005984dd  8d4900               lea ecx, [ecx]
// 005984e0  81ebb0150000         sub ebx, 0x15b0
// 005984e6  b85b010000           mov eax, 0x15b
// 005984eb  eb03                 jmp 0x5984f0
// 005984ed  8d4900               lea ecx, [ecx]
// 005984f0  0fb616               movzx edx, byte ptr [esi]
// 005984f3  03ca                 add ecx, edx
// 005984f5  0fb65601             movzx edx, byte ptr [esi + 1]
// 005984f9  03f9                 add edi, ecx
// 005984fb  03ca                 add ecx, edx
// 005984fd  0fb65602             movzx edx, byte ptr [esi + 2]
// 00598501  03f9                 add edi, ecx
// 00598503  03ca                 add ecx, edx
// 00598505  0fb65603             movzx edx, byte ptr [esi + 3]
// 00598509  03f9                 add edi, ecx
// 0059850b  03ca                 add ecx, edx
// 0059850d  0fb65604             movzx edx, byte ptr [esi + 4]
// 00598511  03f9                 add edi, ecx
// 00598513  03ca                 add ecx, edx
// 00598515  0fb65605             movzx edx, byte ptr [esi + 5]
// 00598519  03f9                 add edi, ecx
// 0059851b  03ca                 add ecx, edx
// 0059851d  0fb65606             movzx edx, byte ptr [esi + 6]
// 00598521  03f9                 add edi, ecx
// 00598523  03ca                 add ecx, edx
// 00598525  0fb65607             movzx edx, byte ptr [esi + 7]
// 00598529  03f9                 add edi, ecx
// 0059852b  03ca                 add ecx, edx
// 0059852d  0fb65608             movzx edx, byte ptr [esi + 8]
// 00598531  03f9                 add edi, ecx
// 00598533  03ca                 add ecx, edx
// 00598535  0fb65609             movzx edx, byte ptr [esi + 9]
// 00598539  03f9                 add edi, ecx
// 0059853b  03ca                 add ecx, edx
// 0059853d  0fb6560a             movzx edx, byte ptr [esi + 0xa]
// 00598541  03f9                 add edi, ecx
// 00598543  03ca                 add ecx, edx
// 00598545  0fb6560b             movzx edx, byte ptr [esi + 0xb]
// 00598549  03f9                 add edi, ecx
// 0059854b  03ca                 add ecx, edx
// 0059854d  0fb6560c             movzx edx, byte ptr [esi + 0xc]
// 00598551  03f9                 add edi, ecx
// 00598553  03ca                 add ecx, edx
// 00598555  0fb6560d             movzx edx, byte ptr [esi + 0xd]
// 00598559  03f9                 add edi, ecx
// 0059855b  03ca                 add ecx, edx
// 0059855d  0fb6560e             movzx edx, byte ptr [esi + 0xe]
// 00598561  03f9                 add edi, ecx
// 00598563  03ca                 add ecx, edx
// 00598565  0fb6560f             movzx edx, byte ptr [esi + 0xf]
// 00598569  03f9                 add edi, ecx
// 0059856b  03ca                 add ecx, edx
// 0059856d  03f9                 add edi, ecx
// 0059856f  83c610               add esi, 0x10
// 00598572  83e801               sub eax, 1
// 00598575  0f8575ffffff         jne 0x5984f0
// 0059857b  b871800780           mov eax, 0x80078071
// 00598580  f7e1                 mul ecx
// 00598582  c1ea0f               shr edx, 0xf
// 00598585  69d20f00ffff         imul edx, edx, 0xffff000f
// 0059858b  03ca                 add ecx, edx
// 0059858d  b871800780           mov eax, 0x80078071
// 00598592  f7e7                 mul edi
// 00598594  c1ea0f               shr edx, 0xf
// 00598597  69d20f00ffff         imul edx, edx, 0xffff000f
// 0059859d  03fa                 add edi, edx
// 0059859f  83ed01               sub ebp, 1
// 005985a2  0f8538ffffff         jne 0x5984e0
// 005985a8  5d                   pop ebp
// 005985a9  85db                 test ebx, ebx
// 005985ab  0f84d2000000         je 0x598683
// 005985b1  83fb10               cmp ebx, 0x10
// 005985b4  0f8294000000         jb 0x59864e
// 005985ba  8bc3                 mov eax, ebx
// 005985bc  c1e804               shr eax, 4
// 005985bf  90                   nop 
// 005985c0  0fb616               movzx edx, byte ptr [esi]
// 005985c3  03ca                 add ecx, edx
// 005985c5  0fb65601             movzx edx, byte ptr [esi + 1]
// 005985c9  03f9                 add edi, ecx
// 005985cb  03ca                 add ecx, edx
// 005985cd  0fb65602             movzx edx, byte ptr [esi + 2]
// 005985d1  03f9                 add edi, ecx
// 005985d3  03ca                 add ecx, edx
// 005985d5  0fb65603             movzx edx, byte ptr [esi + 3]
// 005985d9  03f9                 add edi, ecx
// 005985db  03ca                 add ecx, edx
// 005985dd  0fb65604             movzx edx, byte ptr [esi + 4]
// 005985e1  03f9                 add edi, ecx
// 005985e3  03ca                 add ecx, edx
// 005985e5  0fb65605             movzx edx, byte ptr [esi + 5]
// 005985e9  03f9                 add edi, ecx
// 005985eb  03ca                 add ecx, edx
// 005985ed  0fb65606             movzx edx, byte ptr [esi + 6]
// 005985f1  03f9                 add edi, ecx
// 005985f3  03ca                 add ecx, edx
// 005985f5  0fb65607             movzx edx, byte ptr [esi + 7]
// 005985f9  03f9                 add edi, ecx
// 005985fb  03ca                 add ecx, edx
// 005985fd  0fb65608             movzx edx, byte ptr [esi + 8]
// 00598601  03f9                 add edi, ecx
// 00598603  03ca                 add ecx, edx
// 00598605  0fb65609             movzx edx, byte ptr [esi + 9]
// 00598609  03f9                 add edi, ecx
// 0059860b  03ca                 add ecx, edx
// 0059860d  0fb6560a             movzx edx, byte ptr [esi + 0xa]
// 00598611  03f9                 add edi, ecx
// 00598613  03ca                 add ecx, edx
// 00598615  0fb6560b             movzx edx, byte ptr [esi + 0xb]
// 00598619  03f9                 add edi, ecx
// 0059861b  03ca                 add ecx, edx
// 0059861d  0fb6560c             movzx edx, byte ptr [esi + 0xc]
// 00598621  03f9                 add edi, ecx
// 00598623  03ca                 add ecx, edx
// 00598625  0fb6560d             movzx edx, byte ptr [esi + 0xd]
// 00598629  03f9                 add edi, ecx
// 0059862b  03ca                 add ecx, edx
// 0059862d  0fb6560e             movzx edx, byte ptr [esi + 0xe]
// 00598631  03f9                 add edi, ecx
// 00598633  03ca                 add ecx, edx
// 00598635  0fb6560f             movzx edx, byte ptr [esi + 0xf]
// 00598639  03f9                 add edi, ecx
// 0059863b  03ca                 add ecx, edx
// 0059863d  83eb10               sub ebx, 0x10
// 00598640  03f9                 add edi, ecx
// 00598642  83c610               add esi, 0x10
// 00598645  83e801               sub eax, 1
// 00598648  0f8572ffffff         jne 0x5985c0
// 0059864e  85db                 test ebx, ebx
// 00598650  740d                 je 0x59865f
// 00598652  0fb606               movzx eax, byte ptr [esi]
// 00598655  03c8                 add ecx, eax
// 00598657  4b                   dec ebx
// 00598658  46                   inc esi
// 00598659  03f9                 add edi, ecx
// 0059865b  85db                 test ebx, ebx
// 0059865d  75f3                 jne 0x598652
// 0059865f  b871800780           mov eax, 0x80078071
// 00598664  f7e1                 mul ecx
// 00598666  c1ea0f               shr edx, 0xf
// 00598669  69d20f00ffff         imul edx, edx, 0xffff000f
// 0059866f  03ca                 add ecx, edx
// 00598671  b871800780           mov eax, 0x80078071
// 00598676  f7e7                 mul edi
// 00598678  c1ea0f               shr edx, 0xf
// 0059867b  69d20f00ffff         imul edx, edx, 0xffff000f
// 00598681  03fa                 add edi, edx
// 00598683  8bc7                 mov eax, edi
// 00598685  5e                   pop esi
// 00598686  c1e010               shl eax, 0x10
// 00598689  5f                   pop edi
// 0059868a  0bc1                 or eax, ecx
// 0059868c  5b                   pop ebx
// 0059868d  c3                   ret 
// library zlib-1.2.3/adler32.c (function _adler32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 adler32.c
