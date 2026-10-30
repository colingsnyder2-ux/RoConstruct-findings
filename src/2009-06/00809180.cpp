// roc 2009-06 00809180  unit: CXTShadowHook  size: 1309 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00809180
//
// 00809180  55                   push ebp
// 00809181  8bec                 mov ebp, esp
// 00809183  83e4c0               and esp, 0xffffffc0
// 00809186  6aff                 push -1
// 00809188  6833fd8700           push 0x87fd33
// 0080918d  64a100000000         mov eax, dword ptr fs:[0]
// 00809193  50                   push eax
// 00809194  81ece8000000         sub esp, 0xe8
// 0080919a  53                   push ebx
// 0080919b  56                   push esi
// 0080919c  57                   push edi
// 0080919d  a1304fa200           mov eax, dword ptr [0xa24f30]
// 008091a2  33c4                 xor eax, esp
// 008091a4  50                   push eax
// 008091a5  8d8424f8000000       lea eax, [esp + 0xf8]
// 008091ac  64a300000000         mov dword ptr fs:[0], eax
// 008091b2  8bd9                 mov ebx, ecx
// 008091b4  895c2448             mov dword ptr [esp + 0x48], ebx
// 008091b8  e84bfef0ff           call 0x719008
// 008091bd  8b750c               mov esi, dword ptr [ebp + 0xc]
// 008091c0  85f6                 test esi, esi
// 008091c2  0f84bd040000         je 0x809685
// 008091c8  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 008091cb  85ff                 test edi, edi
// 008091cd  0f84b2040000         je 0x809685
// 008091d3  837b6000             cmp dword ptr [ebx + 0x60], 0
// 008091d7  0f84a8040000         je 0x809685
// 008091dd  e80efcffff           call 0x808df0
// 008091e2  8bc8                 mov ecx, eax
// 008091e4  33c0                 xor eax, eax
// 008091e6  394138               cmp dword ptr [ecx + 0x38], eax
// 008091e9  0f8496040000         je 0x809685
// 008091ef  53                   push ebx
// 008091f0  8d8c2488000000       lea ecx, [esp + 0x88]
// 008091f7  88442460             mov byte ptr [esp + 0x60], al
// 008091fb  88442461             mov byte ptr [esp + 0x61], al
// 008091ff  c6442462ff           mov byte ptr [esp + 0x62], 0xff
// 00809204  c644246301           mov byte ptr [esp + 0x63], 1
// 00809209  89442478             mov dword ptr [esp + 0x78], eax
// 0080920d  8944247c             mov dword ptr [esp + 0x7c], eax
// 00809211  e88c06f1ff           call 0x7198a2
// 00809216  8d4c2464             lea ecx, [esp + 0x64]
// 0080921a  c784240001000000000000 mov dword ptr [esp + 0x100], 0
// 00809225  e81e2d0400           call 0x84bf48
// 0080922a  8d942484000000       lea edx, [esp + 0x84]
// 00809231  52                   push edx
// 00809232  8d4c2468             lea ecx, [esp + 0x68]
// 00809236  c684240401000001     mov byte ptr [esp + 0x104], 1
// 0080923e  e82da0f1ff           call 0x723270
// 00809243  6a2c                 push 0x2c
// 00809245  8d84249c000000       lea eax, [esp + 0x9c]
// 0080924c  6a00                 push 0
// 0080924e  50                   push eax
// 0080924f  e8200af1ff           call 0x719c74
// 00809254  8bc6                 mov eax, esi
// 00809256  0fafc7               imul eax, edi
// 00809259  83c40c               add esp, 0xc
// 0080925c  6a00                 push 0
// 0080925e  b901000000           mov ecx, 1
// 00809263  6a00                 push 0
// 00809265  66898c24ac000000     mov word ptr [esp + 0xac], cx
// 0080926d  03c0                 add eax, eax
// 0080926f  8d4c244c             lea ecx, [esp + 0x4c]
// 00809273  51                   push ecx
// 00809274  ba20000000           mov edx, 0x20
// 00809279  03c0                 add eax, eax
// 0080927b  66899424b2000000     mov word ptr [esp + 0xb2], dx
// 00809283  6a00                 push 0
// 00809285  8d9424a8000000       lea edx, [esp + 0xa8]
// 0080928c  898424bc000000       mov dword ptr [esp + 0xbc], eax
// 00809293  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 0080929a  52                   push edx
// 0080929b  50                   push eax
// 0080929c  c78424b000000028000000 mov dword ptr [esp + 0xb0], 0x28
// 008092a7  89b424b4000000       mov dword ptr [esp + 0xb4], esi
// 008092ae  89bc24b8000000       mov dword ptr [esp + 0xb8], edi
// 008092b5  c78424c000000000000000 mov dword ptr [esp + 0xc0], 0
// 008092c0  ff155ce18900         call dword ptr [0x89e15c]
// 008092c6  837c244400           cmp dword ptr [esp + 0x44], 0
// 008092cb  89442460             mov dword ptr [esp + 0x60], eax
// 008092cf  0f8488030000         je 0x80965d
// 008092d5  e8e661f7ff           call 0x77f4c0
// 008092da  8b4020               mov eax, dword ptr [eax + 0x20]
// 008092dd  83f802               cmp eax, 2
// 008092e0  7510                 jne 0x8092f2
// 008092e2  e839b8f4ff           call 0x754b20
// 008092e7  6a3b                 push 0x3b
// 008092e9  8bc8                 mov ecx, eax
// 008092eb  e8e0b1f4ff           call 0x7544d0
// 008092f0  eb0e                 jmp 0x809300
// 008092f2  e829b8f4ff           call 0x754b20
// 008092f7  6a3b                 push 0x3b
// 008092f9  8bc8                 mov ecx, eax
// 008092fb  e8a0aff4ff           call 0x7542a0
// 00809300  0fb6c8               movzx ecx, al
// 00809303  8bd0                 mov edx, eax
// 00809305  c1ea08               shr edx, 8
// 00809308  c1e810               shr eax, 0x10
// 0080930b  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 0080930f  894c2454             mov dword ptr [esp + 0x54], ecx
// 00809313  0fb6ca               movzx ecx, dl
// 00809316  0fb6d0               movzx edx, al
// 00809319  894c2450             mov dword ptr [esp + 0x50], ecx
// 0080931d  89542458             mov dword ptr [esp + 0x58], edx
// 00809321  bb01000000           mov ebx, 1
// 00809326  0f8516010000         jne 0x809442
// 0080932c  8bc6                 mov eax, esi
// 0080932e  f7d8                 neg eax
// 00809330  03c0                 add eax, eax
// 00809332  03c0                 add eax, eax
// 00809334  4f                   dec edi
// 00809335  0faffe               imul edi, esi
// 00809338  8944244c             mov dword ptr [esp + 0x4c], eax
// 0080933c  8d04bd0c000000       lea eax, [edi*4 + 0xc]
// 00809343  c744243400000003     mov dword ptr [esp + 0x34], 0x3000000
// 0080934b  89442430             mov dword ptr [esp + 0x30], eax
// 0080934f  c744244004000000     mov dword ptr [esp + 0x40], 4
// 00809357  8b742434             mov esi, dword ptr [esp + 0x34]
// 0080935b  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0080935f  895c2438             mov dword ptr [esp + 0x38], ebx
// 00809363  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 0080936b  db442438             fild dword ptr [esp + 0x38]
// 0080936f  83ec08               sub esp, 8
// 00809372  8d4c2460             lea ecx, [esp + 0x60]
// 00809376  8d542458             lea edx, [esp + 0x58]
// 0080937a  dc35e03f8d00         fdiv qword ptr [0x8d3fe0]
// 00809380  8d44245c             lea eax, [esp + 0x5c]
// 00809384  dd1c24               fstp qword ptr [esp]
// 00809387  51                   push ecx
// 00809388  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0080938c  52                   push edx
// 0080938d  50                   push eax
// 0080938e  e89df0ffff           call 0x808430
// 00809393  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00809397  015c2438             add dword ptr [esp + 0x38], ebx
// 0080939b  03c6                 add eax, esi
// 0080939d  03742434             add esi, dword ptr [esp + 0x34]
// 008093a1  89040f               mov dword ptr [edi + ecx], eax
// 008093a4  037c244c             add edi, dword ptr [esp + 0x4c]
// 008093a8  836c243c01           sub dword ptr [esp + 0x3c], 1
// 008093ad  75bc                 jne 0x80936b
// 008093af  8144243400000003     add dword ptr [esp + 0x34], 0x3000000
// 008093b7  836c243004           sub dword ptr [esp + 0x30], 4
// 008093bc  43                   inc ebx
// 008093bd  836c244001           sub dword ptr [esp + 0x40], 1
// 008093c2  7593                 jne 0x809357
// 008093c4  bf03000000           mov edi, 3
// 008093c9  c744243001000000     mov dword ptr [esp + 0x30], 1
// 008093d1  db442430             fild dword ptr [esp + 0x30]
// 008093d5  83ec08               sub esp, 8
// 008093d8  8d542460             lea edx, [esp + 0x60]
// 008093dc  8d442458             lea eax, [esp + 0x58]
// 008093e0  dc0de87d8c00         fmul qword ptr [0x8c7de8]
// 008093e6  8d4c245c             lea ecx, [esp + 0x5c]
// 008093ea  dd1c24               fstp qword ptr [esp]
// 008093ed  52                   push edx
// 008093ee  50                   push eax
// 008093ef  51                   push ecx
// 008093f0  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008093f4  e837f0ffff           call 0x808430
// 008093f9  ba04000000           mov edx, 4
// 008093fe  2bd7                 sub edx, edi
// 00809400  69d20000000f         imul edx, edx, 0xf000000
// 00809406  03c2                 add eax, edx
// 00809408  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0080940b  83c2fc               add edx, -4
// 0080940e  85d2                 test edx, edx
// 00809410  7e1c                 jle 0x80942e
// 00809412  8b750c               mov esi, dword ptr [ebp + 0xc]
// 00809415  03f6                 add esi, esi
// 00809417  03f6                 add esi, esi
// 00809419  8d0cbd00000000       lea ecx, [edi*4]
// 00809420  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00809424  890419               mov dword ptr [ecx + ebx], eax
// 00809427  03ce                 add ecx, esi
// 00809429  83ea01               sub edx, 1
// 0080942c  75f2                 jne 0x809420
// 0080942e  8b442430             mov eax, dword ptr [esp + 0x30]
// 00809432  40                   inc eax
// 00809433  4f                   dec edi
// 00809434  83f804               cmp eax, 4
// 00809437  89442430             mov dword ptr [esp + 0x30], eax
// 0080943b  7e94                 jle 0x8093d1
// 0080943d  e99e010000           jmp 0x8095e0
// 00809442  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0080944a  c744243400000003     mov dword ptr [esp + 0x34], 0x3000000
// 00809452  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 0080945a  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0080945e  8b742434             mov esi, dword ptr [esp + 0x34]
// 00809462  895c2430             mov dword ptr [esp + 0x30], ebx
// 00809466  c744244004000000     mov dword ptr [esp + 0x40], 4
// 0080946e  db442430             fild dword ptr [esp + 0x30]
// 00809472  83ec08               sub esp, 8
// 00809475  8d442460             lea eax, [esp + 0x60]
// 00809479  8d4c2458             lea ecx, [esp + 0x58]
// 0080947d  dc35e03f8d00         fdiv qword ptr [0x8d3fe0]
// 00809483  8d54245c             lea edx, [esp + 0x5c]
// 00809487  dd1c24               fstp qword ptr [esp]
// 0080948a  50                   push eax
// 0080948b  51                   push ecx
// 0080948c  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00809490  52                   push edx
// 00809491  e89aefffff           call 0x808430
// 00809496  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0080949a  015c2430             add dword ptr [esp + 0x30], ebx
// 0080949e  03c6                 add eax, esi
// 008094a0  03742434             add esi, dword ptr [esp + 0x34]
// 008094a4  89040f               mov dword ptr [edi + ecx], eax
// 008094a7  8b450c               mov eax, dword ptr [ebp + 0xc]
// 008094aa  03c0                 add eax, eax
// 008094ac  03c0                 add eax, eax
// 008094ae  03f8                 add edi, eax
// 008094b0  836c244001           sub dword ptr [esp + 0x40], 1
// 008094b5  75b7                 jne 0x80946e
// 008094b7  8344243804           add dword ptr [esp + 0x38], 4
// 008094bc  8144243400000003     add dword ptr [esp + 0x34], 0x3000000
// 008094c4  43                   inc ebx
// 008094c5  836c243c01           sub dword ptr [esp + 0x3c], 1
// 008094ca  758e                 jne 0x80945a
// 008094cc  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 008094cf  33c0                 xor eax, eax
// 008094d1  be0000000f           mov esi, 0xf000000
// 008094d6  c744243010000000     mov dword ptr [esp + 0x30], 0x10
// 008094de  8d5801               lea ebx, [eax + 1]
// 008094e1  895c244c             mov dword ptr [esp + 0x4c], ebx
// 008094e5  db44244c             fild dword ptr [esp + 0x4c]
// 008094e9  83ec08               sub esp, 8
// 008094ec  8d542460             lea edx, [esp + 0x60]
// 008094f0  8d442458             lea eax, [esp + 0x58]
// 008094f4  dc0de87d8c00         fmul qword ptr [0x8c7de8]
// 008094fa  8d4c245c             lea ecx, [esp + 0x5c]
// 008094fe  dd1c24               fstp qword ptr [esp]
// 00809501  52                   push edx
// 00809502  50                   push eax
// 00809503  51                   push ecx
// 00809504  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00809508  e823efffff           call 0x808430
// 0080950d  8d57fc               lea edx, [edi - 4]
// 00809510  03c6                 add eax, esi
// 00809512  83fa04               cmp edx, 4
// 00809515  7e1b                 jle 0x809532
// 00809517  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0080951b  83c2fc               add edx, -4
// 0080951e  8bff                 mov edi, edi
// 00809520  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00809524  890439               mov dword ptr [ecx + edi], eax
// 00809527  83c104               add ecx, 4
// 0080952a  83ea01               sub edx, 1
// 0080952d  75f1                 jne 0x809520
// 0080952f  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00809532  8d0cbd00000000       lea ecx, [edi*4]
// 00809539  014c2430             add dword ptr [esp + 0x30], ecx
// 0080953d  81c60000000f         add esi, 0xf000000
// 00809543  81fe0000004b         cmp esi, 0x4b000000
// 00809549  8bc3                 mov eax, ebx
// 0080954b  7c91                 jl 0x8094de
// 0080954d  8d04bd00000000       lea eax, [edi*4]
// 00809554  bb01000000           mov ebx, 1
// 00809559  c744243400000003     mov dword ptr [esp + 0x34], 0x3000000
// 00809561  89442438             mov dword ptr [esp + 0x38], eax
// 00809565  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 0080956d  8b742434             mov esi, dword ptr [esp + 0x34]
// 00809571  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00809575  895c2430             mov dword ptr [esp + 0x30], ebx
// 00809579  c744244004000000     mov dword ptr [esp + 0x40], 4
// 00809581  db442430             fild dword ptr [esp + 0x30]
// 00809585  83ec08               sub esp, 8
// 00809588  8d542460             lea edx, [esp + 0x60]
// 0080958c  8d442458             lea eax, [esp + 0x58]
// 00809590  dc35e03f8d00         fdiv qword ptr [0x8d3fe0]
// 00809596  8d4c245c             lea ecx, [esp + 0x5c]
// 0080959a  dd1c24               fstp qword ptr [esp]
// 0080959d  52                   push edx
// 0080959e  50                   push eax
// 0080959f  51                   push ecx
// 008095a0  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008095a4  e887eeffff           call 0x808430
// 008095a9  8b542444             mov edx, dword ptr [esp + 0x44]
// 008095ad  015c2430             add dword ptr [esp + 0x30], ebx
// 008095b1  03c6                 add eax, esi
// 008095b3  03742434             add esi, dword ptr [esp + 0x34]
// 008095b7  894417fc             mov dword ptr [edi + edx - 4], eax
// 008095bb  8b450c               mov eax, dword ptr [ebp + 0xc]
// 008095be  03c0                 add eax, eax
// 008095c0  03c0                 add eax, eax
// 008095c2  03f8                 add edi, eax
// 008095c4  836c244001           sub dword ptr [esp + 0x40], 1
// 008095c9  75b6                 jne 0x809581
// 008095cb  8144243400000003     add dword ptr [esp + 0x34], 0x3000000
// 008095d3  836c243804           sub dword ptr [esp + 0x38], 4
// 008095d8  43                   inc ebx
// 008095d9  836c243c01           sub dword ptr [esp + 0x3c], 1
// 008095de  758d                 jne 0x80956d
// 008095e0  8b442460             mov eax, dword ptr [esp + 0x60]
// 008095e4  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008095e8  8b3524e18900         mov esi, dword ptr [0x89e124]
// 008095ee  50                   push eax
// 008095ef  51                   push ecx
// 008095f0  ffd6                 call esi
// 008095f2  8b550c               mov edx, dword ptr [ebp + 0xc]
// 008095f5  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008095f9  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 008095fd  8bf8                 mov edi, eax
// 008095ff  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00809602  8954247c             mov dword ptr [esp + 0x7c], edx
// 00809606  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00809609  89842480000000       mov dword ptr [esp + 0x80], eax
// 00809610  8954244c             mov dword ptr [esp + 0x4c], edx
// 00809614  e8d7f7ffff           call 0x808df0
// 00809619  8b4038               mov eax, dword ptr [eax + 0x38]
// 0080961c  6a02                 push 2
// 0080961e  8d4c2460             lea ecx, [esp + 0x60]
// 00809622  51                   push ecx
// 00809623  6a00                 push 0
// 00809625  8d942480000000       lea edx, [esp + 0x80]
// 0080962c  52                   push edx
// 0080962d  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00809631  53                   push ebx
// 00809632  8d8c2490000000       lea ecx, [esp + 0x90]
// 00809639  51                   push ecx
// 0080963a  6a00                 push 0
// 0080963c  6a00                 push 0
// 0080963e  52                   push edx
// 0080963f  ffd0                 call eax
// 00809641  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00809645  57                   push edi
// 00809646  51                   push ecx
// 00809647  ffd6                 call esi
// 00809649  8b542460             mov edx, dword ptr [esp + 0x60]
// 0080964d  52                   push edx
// 0080964e  ff1560e18900         call dword ptr [0x89e160]
// 00809654  8d4c2464             lea ecx, [esp + 0x64]
// 00809658  e8ad2d0400           call 0x84c40a
// 0080965d  8d4c2464             lea ecx, [esp + 0x64]
// 00809661  c684240001000000     mov byte ptr [esp + 0x100], 0
// 00809669  e8d4280400           call 0x84bf42
// 0080966e  8d8c2484000000       lea ecx, [esp + 0x84]
// 00809675  c7842400010000ffffffff mov dword ptr [esp + 0x100], 0xffffffff
// 00809680  e81702f1ff           call 0x71989c
// 00809685  8b8c24f8000000       mov ecx, dword ptr [esp + 0xf8]
// 0080968c  64890d00000000       mov dword ptr fs:[0], ecx
// 00809693  59                   pop ecx
// 00809694  5f                   pop edi
// 00809695  5e                   pop esi
// 00809696  5b                   pop ebx
// 00809697  8be5                 mov esp, ebp
// 00809699  5d                   pop ebp
// 0080969a  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSize@CXTShadowWnd@@IAEXIHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp