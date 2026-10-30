// roc 2009-12 008952e0  unit: CXTPRibbonBar  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008952e0
//
// 008952e0  83ec10               sub esp, 0x10
// 008952e3  56                   push esi
// 008952e4  8bf1                 mov esi, ecx
// 008952e6  57                   push edi
// 008952e7  8d8e3cfeffff         lea ecx, [esi - 0x1c4]
// 008952ed  e8eef9ffff           call 0x894ce0
// 008952f2  8bf8                 mov edi, eax
// 008952f4  85ff                 test edi, edi
// 008952f6  750a                 jne 0x895302
// 008952f8  5f                   pop edi
// 008952f9  33c0                 xor eax, eax
// 008952fb  5e                   pop esi
// 008952fc  83c410               add esp, 0x10
// 008952ff  c20800               ret 8
// 00895302  e859fbffff           call 0x894e60
// 00895307  85c0                 test eax, eax
// 00895309  74ed                 je 0x8952f8
// 0089530b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089530f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00895313  50                   push eax
// 00895314  51                   push ecx
// 00895315  8d5628               lea edx, [esi + 0x28]
// 00895318  52                   push edx
// 00895319  ff155cca9800         call dword ptr [0x98ca5c]
// 0089531f  85c0                 test eax, eax
// 00895321  74d5                 je 0x8952f8
// 00895323  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00895326  85c9                 test ecx, ecx
// 00895328  7432                 je 0x89535c
// 0089532a  8b01                 mov eax, dword ptr [ecx]
// 0089532c  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00895332  6a00                 push 0
// 00895334  ffd2                 call edx
// 00895336  85c0                 test eax, eax
// 00895338  7422                 je 0x89535c
// 0089533a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089533e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00895342  50                   push eax
// 00895343  51                   push ecx
// 00895344  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00895347  8d542410             lea edx, [esp + 0x10]
// 0089534b  52                   push edx
// 0089534c  e85f08f6ff           call 0x7f5bb0
// 00895351  8bc8                 mov ecx, eax
// 00895353  e858d3bbff           call 0x4526b0
// 00895358  85c0                 test eax, eax
// 0089535a  759c                 jne 0x8952f8
// 0089535c  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0089535f  85c9                 test ecx, ecx
// 00895361  7436                 je 0x895399
// 00895363  8b01                 mov eax, dword ptr [ecx]
// 00895365  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 0089536b  6a00                 push 0
// 0089536d  ffd2                 call edx
// 0089536f  85c0                 test eax, eax
// 00895371  7426                 je 0x895399
// 00895373  8b442420             mov eax, dword ptr [esp + 0x20]
// 00895377  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0089537b  50                   push eax
// 0089537c  51                   push ecx
// 0089537d  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00895380  8d542410             lea edx, [esp + 0x10]
// 00895384  52                   push edx
// 00895385  e82608f6ff           call 0x7f5bb0
// 0089538a  8bc8                 mov ecx, eax
// 0089538c  e81fd3bbff           call 0x4526b0
// 00895391  85c0                 test eax, eax
// 00895393  0f855fffffff         jne 0x8952f8
// 00895399  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089539d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008953a1  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 008953a7  50                   push eax
// 008953a8  52                   push edx
// 008953a9  e8427a0500           call 0x8ecdf0
// 008953ae  5f                   pop edi
// 008953af  5e                   pop esi
// 008953b0  83c410               add esp, 0x10
// 008953b3  c20800               ret 8
// copied from an identical function in another client (function ?HitTestGroup@CXTPRibbonBar@@UBEPAVCXTPRibbonGroup@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonBar.cpp