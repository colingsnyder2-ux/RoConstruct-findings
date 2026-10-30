// from server: 100% by auto
// roc 2008-06 00742490  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00742490
//
// 00742490  83ec30               sub esp, 0x30
// 00742493  56                   push esi
// 00742494  8bf1                 mov esi, ecx
// 00742496  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0074249c  83f8ff               cmp eax, -1
// 0074249f  750f                 jne 0x7424b0
// 007424a1  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007424a7  85c9                 test ecx, ecx
// 007424a9  7405                 je 0x7424b0
// 007424ab  e81093f6ff           call 0x6ab7c0
// 007424b0  85c0                 test eax, eax
// 007424b2  0f8410010000         je 0x7425c8
// 007424b8  83beac01000000       cmp dword ptr [esi + 0x1ac], 0
// 007424bf  0f8403010000         je 0x7425c8
// 007424c5  83bea400000000       cmp dword ptr [esi + 0xa4], 0
// 007424cc  0f84f6000000         je 0x7425c8
// 007424d2  53                   push ebx
// 007424d3  57                   push edi
// 007424d4  8d44240c             lea eax, [esp + 0xc]
// 007424d8  50                   push eax
// 007424d9  8bce                 mov ecx, esi
// 007424db  e850ffffff           call 0x742430
// 007424e0  8b442410             mov eax, dword ptr [esp + 0x10]
// 007424e4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007424e8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007424ec  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007424f0  89442420             mov dword ptr [esp + 0x20], eax
// 007424f4  03c3                 add eax, ebx
// 007424f6  99                   cdq 
// 007424f7  2bc2                 sub eax, edx
// 007424f9  8b542440             mov edx, dword ptr [esp + 0x40]
// 007424fd  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00742501  d1f8                 sar eax, 1
// 00742503  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00742507  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0074250b  51                   push ecx
// 0074250c  8944242c             mov dword ptr [esp + 0x2c], eax
// 00742510  89442434             mov dword ptr [esp + 0x34], eax
// 00742514  52                   push edx
// 00742515  8d442424             lea eax, [esp + 0x24]
// 00742519  897c242c             mov dword ptr [esp + 0x2c], edi
// 0074251d  897c243c             mov dword ptr [esp + 0x3c], edi
// 00742521  8b3d2c2d8000         mov edi, dword ptr [0x802d2c]
// 00742527  50                   push eax
// 00742528  895c2444             mov dword ptr [esp + 0x44], ebx
// 0074252c  ffd7                 call edi
// 0074252e  bb03000000           mov ebx, 3
// 00742533  85c0                 test eax, eax
// 00742535  7420                 je 0x742557
// 00742537  399ea4000000         cmp dword ptr [esi + 0xa4], ebx
// 0074253d  7418                 je 0x742557
// 0074253f  6a00                 push 0
// 00742541  8bce                 mov ecx, esi
// 00742543  899ea4000000         mov dword ptr [esi + 0xa4], ebx
// 00742549  e88293f6ff           call 0x6ab8d0
// 0074254e  5f                   pop edi
// 0074254f  5b                   pop ebx
// 00742550  5e                   pop esi
// 00742551  83c430               add esp, 0x30
// 00742554  c20800               ret 8
// 00742557  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0074255b  8b542440             mov edx, dword ptr [esp + 0x40]
// 0074255f  51                   push ecx
// 00742560  52                   push edx
// 00742561  8d442434             lea eax, [esp + 0x34]
// 00742565  50                   push eax
// 00742566  ffd7                 call edi
// 00742568  b904000000           mov ecx, 4
// 0074256d  85c0                 test eax, eax
// 0074256f  7420                 je 0x742591
// 00742571  398ea4000000         cmp dword ptr [esi + 0xa4], ecx
// 00742577  7418                 je 0x742591
// 00742579  898ea4000000         mov dword ptr [esi + 0xa4], ecx
// 0074257f  6a00                 push 0
// 00742581  8bce                 mov ecx, esi
// 00742583  e84893f6ff           call 0x6ab8d0
// 00742588  5f                   pop edi
// 00742589  5b                   pop ebx
// 0074258a  5e                   pop esi
// 0074258b  83c430               add esp, 0x30
// 0074258e  c20800               ret 8
// 00742591  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00742597  3bc3                 cmp eax, ebx
// 00742599  7404                 je 0x74259f
// 0074259b  3bc1                 cmp eax, ecx
// 0074259d  7527                 jne 0x7425c6
// 0074259f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007425a3  8b542440             mov edx, dword ptr [esp + 0x40]
// 007425a7  51                   push ecx
// 007425a8  52                   push edx
// 007425a9  8d442414             lea eax, [esp + 0x14]
// 007425ad  50                   push eax
// 007425ae  ffd7                 call edi
// 007425b0  85c0                 test eax, eax
// 007425b2  7512                 jne 0x7425c6
// 007425b4  50                   push eax
// 007425b5  8bce                 mov ecx, esi
// 007425b7  c786a400000001000000 mov dword ptr [esi + 0xa4], 1
// 007425c1  e80a93f6ff           call 0x6ab8d0
// 007425c6  5f                   pop edi
// 007425c7  5b                   pop ebx
// 007425c8  5e                   pop esi
// 007425c9  83c430               add esp, 0x30
// 007425cc  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?OnMouseMove@CXTPControlEdit@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
