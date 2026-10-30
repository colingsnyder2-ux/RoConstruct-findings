// roc 2009-12 00898470  unit: CXTPRibbonBar  size: 420 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00898470
//
// 00898470  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00898474  83ec10               sub esp, 0x10
// 00898477  56                   push esi
// 00898478  57                   push edi
// 00898479  8bf1                 mov esi, ecx
// 0089847b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089847f  50                   push eax
// 00898480  51                   push ecx
// 00898481  8bce                 mov ecx, esi
// 00898483  e8a8ccffff           call 0x895130
// 00898488  8bce                 mov ecx, esi
// 0089848a  83f802               cmp eax, 2
// 0089848d  7561                 jne 0x8984f0
// 0089848f  e83cc0f6ff           call 0x8044d0
// 00898494  8bc8                 mov ecx, eax
// 00898496  e845daf7ff           call 0x815ee0
// 0089849b  8b5620               mov edx, dword ptr [esi + 0x20]
// 0089849e  52                   push edx
// 0089849f  ff15a4ca9800         call dword ptr [0x98caa4]
// 008984a5  8bce                 mov ecx, esi
// 008984a7  e8e4ebf6ff           call 0x807090
// 008984ac  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008984af  8bf8                 mov edi, eax
// 008984b1  8d442420             lea eax, [esp + 0x20]
// 008984b5  50                   push eax
// 008984b6  51                   push ecx
// 008984b7  ff1554cc9800         call dword ptr [0x98cc54]
// 008984bd  85ff                 test edi, edi
// 008984bf  7504                 jne 0x8984c5
// 008984c1  33c0                 xor eax, eax
// 008984c3  eb03                 jmp 0x8984c8
// 008984c5  8b4720               mov eax, dword ptr [edi + 0x20]
// 008984c8  0fb7542424           movzx edx, word ptr [esp + 0x24]
// 008984cd  0fb74c2420           movzx ecx, word ptr [esp + 0x20]
// 008984d2  c1e210               shl edx, 0x10
// 008984d5  0bd1                 or edx, ecx
// 008984d7  52                   push edx
// 008984d8  8b5720               mov edx, dword ptr [edi + 0x20]
// 008984db  50                   push eax
// 008984dc  6813030000           push 0x313
// 008984e1  52                   push edx
// 008984e2  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008984e8  5f                   pop edi
// 008984e9  5e                   pop esi
// 008984ea  83c410               add esp, 0x10
// 008984ed  c20c00               ret 0xc
// 008984f0  e80bc0f6ff           call 0x804500
// 008984f5  85c0                 test eax, eax
// 008984f7  0f850f010000         jne 0x89860c
// 008984fd  8b442424             mov eax, dword ptr [esp + 0x24]
// 00898501  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00898505  50                   push eax
// 00898506  51                   push ecx
// 00898507  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0089850d  e80ed1faff           call 0x845620
// 00898512  8bf8                 mov edi, eax
// 00898514  85ff                 test edi, edi
// 00898516  745d                 je 0x898575
// 00898518  8bce                 mov ecx, esi
// 0089851a  e871ebf6ff           call 0x807090
// 0089851f  8b4020               mov eax, dword ptr [eax + 0x20]
// 00898522  57                   push edi
// 00898523  8d542424             lea edx, [esp + 0x24]
// 00898527  52                   push edx
// 00898528  6859280000           push 0x2859
// 0089852d  50                   push eax
// 0089852e  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00898534  83f801               cmp eax, 1
// 00898537  0f84cf000000         je 0x89860c
// 0089853d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00898541  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00898545  8b17                 mov edx, dword ptr [edi]
// 00898547  8b92f4000000         mov edx, dword ptr [edx + 0xf4]
// 0089854d  50                   push eax
// 0089854e  51                   push ecx
// 0089854f  8bcf                 mov ecx, edi
// 00898551  ffd2                 call edx
// 00898553  85c0                 test eax, eax
// 00898555  0f85b1000000         jne 0x89860c
// 0089855b  57                   push edi
// 0089855c  8b442428             mov eax, dword ptr [esp + 0x28]
// 00898560  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00898564  50                   push eax
// 00898565  51                   push ecx
// 00898566  8bce                 mov ecx, esi
// 00898568  e843eeffff           call 0x8973b0
// 0089856d  5f                   pop edi
// 0089856e  5e                   pop esi
// 0089856f  83c410               add esp, 0x10
// 00898572  c20c00               ret 0xc
// 00898575  8b442424             mov eax, dword ptr [esp + 0x24]
// 00898579  8b96c4010000         mov edx, dword ptr [esi + 0x1c4]
// 0089857f  8b5208               mov edx, dword ptr [edx + 8]
// 00898582  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 00898588  50                   push eax
// 00898589  8b442424             mov eax, dword ptr [esp + 0x24]
// 0089858d  50                   push eax
// 0089858e  ffd2                 call edx
// 00898590  8bf8                 mov edi, eax
// 00898592  85ff                 test edi, edi
// 00898594  7448                 je 0x8985de
// 00898596  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00898599  8b4734               mov eax, dword ptr [edi + 0x34]
// 0089859c  8b573c               mov edx, dword ptr [edi + 0x3c]
// 0089859f  894c240c             mov dword ptr [esp + 0xc], ecx
// 008985a3  53                   push ebx
// 008985a4  8b5f40               mov ebx, dword ptr [edi + 0x40]
// 008985a7  8bce                 mov ecx, esi
// 008985a9  8944240c             mov dword ptr [esp + 0xc], eax
// 008985ad  89542414             mov dword ptr [esp + 0x14], edx
// 008985b1  e8bac6ffff           call 0x894c70
// 008985b6  2b9860060000         sub ebx, dword ptr [eax + 0x660]
// 008985bc  8b442428             mov eax, dword ptr [esp + 0x28]
// 008985c0  3bd8                 cmp ebx, eax
// 008985c2  5b                   pop ebx
// 008985c3  7d1d                 jge 0x8985e2
// 008985c5  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 008985c8  8b542420             mov edx, dword ptr [esp + 0x20]
// 008985cc  51                   push ecx
// 008985cd  50                   push eax
// 008985ce  52                   push edx
// 008985cf  8bce                 mov ecx, esi
// 008985d1  e8daedffff           call 0x8973b0
// 008985d6  5f                   pop edi
// 008985d7  5e                   pop esi
// 008985d8  83c410               add esp, 0x10
// 008985db  c20c00               ret 0xc
// 008985de  8b442424             mov eax, dword ptr [esp + 0x24]
// 008985e2  50                   push eax
// 008985e3  8b442424             mov eax, dword ptr [esp + 0x24]
// 008985e7  50                   push eax
// 008985e8  8d8e2c020000         lea ecx, [esi + 0x22c]
// 008985ee  51                   push ecx
// 008985ef  ff155cca9800         call dword ptr [0x98ca5c]
// 008985f5  85c0                 test eax, eax
// 008985f7  740c                 je 0x898605
// 008985f9  8b9668020000         mov edx, dword ptr [esi + 0x268]
// 008985ff  52                   push edx
// 00898600  e957ffffff           jmp 0x89855c
// 00898605  8bce                 mov ecx, esi
// 00898607  e824b8f5ff           call 0x7f3e30
// 0089860c  5f                   pop edi
// 0089860d  5e                   pop esi
// 0089860e  83c410               add esp, 0x10
// 00898611  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnRButtonUp@CXTPRibbonBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp