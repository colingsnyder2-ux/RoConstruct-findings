// roc 2009-12 00850550  unit: CXTPPropExchangeArchive  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00850550
//
// 00850550  56                   push esi
// 00850551  8bf1                 mov esi, ecx
// 00850553  8b06                 mov eax, dword ptr [esi]
// 00850555  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 0085055b  ffd2                 call edx
// 0085055d  85c0                 test eax, eax
// 0085055f  7506                 jne 0x850567
// 00850561  33c0                 xor eax, eax
// 00850563  5e                   pop esi
// 00850564  c20c00               ret 0xc
// 00850567  837e2800             cmp dword ptr [esi + 0x28], 0
// 0085056b  7518                 jne 0x850585
// 0085056d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00850571  8b08                 mov ecx, dword ptr [eax]
// 00850573  51                   push ecx
// 00850574  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00850577  e8d2640d00           call 0x926a4e
// 0085057c  b801000000           mov eax, 1
// 00850581  5e                   pop esi
// 00850582  c20c00               ret 0xc
// 00850585  8b442410             mov eax, dword ptr [esp + 0x10]
// 00850589  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0085058c  6a00                 push 0
// 0085058e  8d562c               lea edx, [esi + 0x2c]
// 00850591  52                   push edx
// 00850592  50                   push eax
// 00850593  e8b0640d00           call 0x926a48
// 00850598  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085059c  8901                 mov dword ptr [ecx], eax
// 0085059e  85c0                 test eax, eax
// 008505a0  74bf                 je 0x850561
// 008505a2  b801000000           mov eax, 1
// 008505a7  5e                   pop esi
// 008505a8  c20c00               ret 0xc
// copied from an identical function in another client (function ?ExchangeRuntimeClass@CXTPPropExchangeArchive@@UAEHPBDAAPAUCRuntimeClass@@PAU2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp