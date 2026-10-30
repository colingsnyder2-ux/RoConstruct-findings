// roc 2009-12 00872b60  unit: CXTPRibbonTheme  size: 398 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00872b60
//
// 00872b60  83ec60               sub esp, 0x60
// 00872b63  53                   push ebx
// 00872b64  55                   push ebp
// 00872b65  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 00872b69  56                   push esi
// 00872b6a  57                   push edi
// 00872b6b  8bf1                 mov esi, ecx
// 00872b6d  55                   push ebp
// 00872b6e  8d4c2414             lea ecx, [esp + 0x14]
// 00872b72  e85987fdff           call 0x84b2d0
// 00872b77  8bcd                 mov ecx, ebp
// 00872b79  e852210200           call 0x894cd0
// 00872b7e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00872b82  85c0                 test eax, eax
// 00872b84  740a                 je 0x872b90
// 00872b86  038ec0050000         add ecx, dword ptr [esi + 0x5c0]
// 00872b8c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00872b90  8b542410             mov edx, dword ptr [esp + 0x10]
// 00872b94  8b8650060000         mov eax, dword ptr [esi + 0x650]
// 00872b9a  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00872b9e  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 00872ba2  03c1                 add eax, ecx
// 00872ba4  894c2424             mov dword ptr [esp + 0x24], ecx
// 00872ba8  8b8e6c060000         mov ecx, dword ptr [esi + 0x66c]
// 00872bae  89542420             mov dword ptr [esp + 0x20], edx
// 00872bb2  89542430             mov dword ptr [esp + 0x30], edx
// 00872bb6  51                   push ecx
// 00872bb7  89442430             mov dword ptr [esp + 0x30], eax
// 00872bbb  89442438             mov dword ptr [esp + 0x38], eax
// 00872bbf  8b442420             mov eax, dword ptr [esp + 0x20]
// 00872bc3  8d542424             lea edx, [esp + 0x24]
// 00872bc7  52                   push edx
// 00872bc8  8bcb                 mov ecx, ebx
// 00872bca  897c2430             mov dword ptr [esp + 0x30], edi
// 00872bce  897c2440             mov dword ptr [esp + 0x40], edi
// 00872bd2  89442444             mov dword ptr [esp + 0x44], eax
// 00872bd6  e8231af8ff           call 0x7f45fe
// 00872bdb  8b866c060000         mov eax, dword ptr [esi + 0x66c]
// 00872be1  50                   push eax
// 00872be2  8d4c2434             lea ecx, [esp + 0x34]
// 00872be6  51                   push ecx
// 00872be7  8bcb                 mov ecx, ebx
// 00872be9  e8101af8ff           call 0x7f45fe
// 00872bee  8bcd                 mov ecx, ebp
// 00872bf0  e82b2a0200           call 0x895620
// 00872bf5  85c0                 test eax, eax
// 00872bf7  0f8491000000         je 0x872c8e
// 00872bfd  8b952c020000         mov edx, dword ptr [ebp + 0x22c]
// 00872c03  8b8d34020000         mov ecx, dword ptr [ebp + 0x234]
// 00872c09  8b8530020000         mov eax, dword ptr [ebp + 0x230]
// 00872c0f  89542440             mov dword ptr [esp + 0x40], edx
// 00872c13  8b9538020000         mov edx, dword ptr [ebp + 0x238]
// 00872c19  894c2448             mov dword ptr [esp + 0x48], ecx
// 00872c1d  680813a000           push 0xa01308
// 00872c22  8bce                 mov ecx, esi
// 00872c24  89442448             mov dword ptr [esp + 0x48], eax
// 00872c28  89542450             mov dword ptr [esp + 0x50], edx
// 00872c2c  e8cfc00000           call 0x87ed00
// 00872c31  8bf8                 mov edi, eax
// 00872c33  85ff                 test edi, edi
// 00872c35  7457                 je 0x872c8e
// 00872c37  6a01                 push 1
// 00872c39  6a00                 push 0
// 00872c3b  8d442468             lea eax, [esp + 0x68]
// 00872c3f  bd03000000           mov ebp, 3
// 00872c44  50                   push eax
// 00872c45  8bcf                 mov ecx, edi
// 00872c47  896c2468             mov dword ptr [esp + 0x68], ebp
// 00872c4b  e870dc0600           call 0x8e08c0
// 00872c50  83ec10               sub esp, 0x10
// 00872c53  8bcc                 mov ecx, esp
// 00872c55  8929                 mov dword ptr [ecx], ebp
// 00872c57  8bd5                 mov edx, ebp
// 00872c59  895104               mov dword ptr [ecx + 4], edx
// 00872c5c  895108               mov dword ptr [ecx + 8], edx
// 00872c5f  89510c               mov dword ptr [ecx + 0xc], edx
// 00872c62  8b10                 mov edx, dword ptr [eax]
// 00872c64  83ec10               sub esp, 0x10
// 00872c67  8bcc                 mov ecx, esp
// 00872c69  8911                 mov dword ptr [ecx], edx
// 00872c6b  8b5004               mov edx, dword ptr [eax + 4]
// 00872c6e  895104               mov dword ptr [ecx + 4], edx
// 00872c71  8b5008               mov edx, dword ptr [eax + 8]
// 00872c74  8b400c               mov eax, dword ptr [eax + 0xc]
// 00872c77  895108               mov dword ptr [ecx + 8], edx
// 00872c7a  89410c               mov dword ptr [ecx + 0xc], eax
// 00872c7d  8d4c2460             lea ecx, [esp + 0x60]
// 00872c81  51                   push ecx
// 00872c82  53                   push ebx
// 00872c83  8bcf                 mov ecx, edi
// 00872c85  e806d50600           call 0x8e0190
// 00872c8a  8b6c2478             mov ebp, dword ptr [esp + 0x78]
// 00872c8e  8bcd                 mov ecx, ebp
// 00872c90  e8cb210200           call 0x894e60
// 00872c95  85c0                 test eax, eax
// 00872c97  754b                 jne 0x872ce4
// 00872c99  8bcd                 mov ecx, ebp
// 00872c9b  e880290200           call 0x895620
// 00872ca0  85c0                 test eax, eax
// 00872ca2  7540                 jne 0x872ce4
// 00872ca4  8b9680060000         mov edx, dword ptr [esi + 0x680]
// 00872caa  8b442418             mov eax, dword ptr [esp + 0x18]
// 00872cae  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00872cb2  52                   push edx
// 00872cb3  8b542414             mov edx, dword ptr [esp + 0x14]
// 00872cb7  50                   push eax
// 00872cb8  83c1fe               add ecx, -2
// 00872cbb  51                   push ecx
// 00872cbc  52                   push edx
// 00872cbd  53                   push ebx
// 00872cbe  8bce                 mov ecx, esi
// 00872cc0  e8ababf8ff           call 0x7fd870
// 00872cc5  8b867c060000         mov eax, dword ptr [esi + 0x67c]
// 00872ccb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00872ccf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00872cd3  50                   push eax
// 00872cd4  8b442414             mov eax, dword ptr [esp + 0x14]
// 00872cd8  51                   push ecx
// 00872cd9  4a                   dec edx
// 00872cda  52                   push edx
// 00872cdb  50                   push eax
// 00872cdc  53                   push ebx
// 00872cdd  8bce                 mov ecx, esi
// 00872cdf  e88cabf8ff           call 0x7fd870
// 00872ce4  5f                   pop edi
// 00872ce5  5e                   pop esi
// 00872ce6  5d                   pop ebp
// 00872ce7  5b                   pop ebx
// 00872ce8  83c460               add esp, 0x60
// 00872ceb  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillRibbonBar@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
