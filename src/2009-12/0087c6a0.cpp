// roc 2009-12 0087c6a0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 609 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087c6a0
//
// 0087c6a0  83ec48               sub esp, 0x48
// 0087c6a3  53                   push ebx
// 0087c6a4  55                   push ebp
// 0087c6a5  56                   push esi
// 0087c6a6  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0087c6aa  8b06                 mov eax, dword ptr [esi]
// 0087c6ac  8b5078               mov edx, dword ptr [eax + 0x78]
// 0087c6af  57                   push edi
// 0087c6b0  8bf9                 mov edi, ecx
// 0087c6b2  8bce                 mov ecx, esi
// 0087c6b4  ffd2                 call edx
// 0087c6b6  89442418             mov dword ptr [esp + 0x18], eax
// 0087c6ba  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0087c6c0  83f8ff               cmp eax, -1
// 0087c6c3  750f                 jne 0x87c6d4
// 0087c6c5  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0087c6cb  85c9                 test ecx, ecx
// 0087c6cd  7405                 je 0x87c6d4
// 0087c6cf  e8dc9ef7ff           call 0x7f65b0
// 0087c6d4  89442460             mov dword ptr [esp + 0x60], eax
// 0087c6d8  8b06                 mov eax, dword ptr [esi]
// 0087c6da  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0087c6dd  8bce                 mov ecx, esi
// 0087c6df  ffd2                 call edx
// 0087c6e1  89442410             mov dword ptr [esp + 0x10], eax
// 0087c6e5  8d442438             lea eax, [esp + 0x38]
// 0087c6e9  50                   push eax
// 0087c6ea  8bce                 mov ecx, esi
// 0087c6ec  e81ff20000           call 0x88b910
// 0087c6f1  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0087c6f5  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0087c6f9  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0087c6fd  8b742438             mov esi, dword ptr [esp + 0x38]
// 0087c701  8d4801               lea ecx, [eax + 1]
// 0087c704  03c5                 add eax, ebp
// 0087c706  99                   cdq 
// 0087c707  2bc2                 sub eax, edx
// 0087c709  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0087c70d  4b                   dec ebx
// 0087c70e  46                   inc esi
// 0087c70f  8bc8                 mov ecx, eax
// 0087c711  d1f9                 sar ecx, 1
// 0087c713  4d                   dec ebp
// 0087c714  837c246000           cmp dword ptr [esp + 0x60], 0
// 0087c719  895c2430             mov dword ptr [esp + 0x30], ebx
// 0087c71d  895c2450             mov dword ptr [esp + 0x50], ebx
// 0087c721  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 0087c725  89742428             mov dword ptr [esp + 0x28], esi
// 0087c729  894c2434             mov dword ptr [esp + 0x34], ecx
// 0087c72d  89742448             mov dword ptr [esp + 0x48], esi
// 0087c731  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0087c735  896c2454             mov dword ptr [esp + 0x54], ebp
// 0087c739  0f84ab000000         je 0x87c7ea
// 0087c73f  837c241000           cmp dword ptr [esp + 0x10], 0
// 0087c744  753d                 jne 0x87c783
// 0087c746  6aff                 push -1
// 0087c748  6aff                 push -1
// 0087c74a  8d542440             lea edx, [esp + 0x40]
// 0087c74e  52                   push edx
// 0087c74f  ff1558ca9800         call dword ptr [0x98ca58]
// 0087c755  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0087c759  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0087c75d  6a0f                 push 0xf
// 0087c75f  6a05                 push 5
// 0087c761  83ec10               sub esp, 0x10
// 0087c764  8bc4                 mov eax, esp
// 0087c766  8908                 mov dword ptr [eax], ecx
// 0087c768  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0087c76c  895004               mov dword ptr [eax + 4], edx
// 0087c76f  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0087c773  894808               mov dword ptr [eax + 8], ecx
// 0087c776  53                   push ebx
// 0087c777  8bcf                 mov ecx, edi
// 0087c779  89500c               mov dword ptr [eax + 0xc], edx
// 0087c77c  e8df1ff8ff           call 0x7fe760
// 0087c781  eb63                 jmp 0x87c7e6
// 0087c783  6a0f                 push 0xf
// 0087c785  8bcf                 mov ecx, edi
// 0087c787  e8b40ef8ff           call 0x7fd640
// 0087c78c  50                   push eax
// 0087c78d  8d44243c             lea eax, [esp + 0x3c]
// 0087c791  50                   push eax
// 0087c792  8bcb                 mov ecx, ebx
// 0087c794  e8657ef7ff           call 0x7f45fe
// 0087c799  8b742418             mov esi, dword ptr [esp + 0x18]
// 0087c79d  8bcf                 mov ecx, edi
// 0087c79f  83fe03               cmp esi, 3
// 0087c7a2  0f8514010000         jne 0x87c8bc
// 0087c7a8  6a05                 push 5
// 0087c7aa  e8910ef8ff           call 0x7fd640
// 0087c7af  50                   push eax
// 0087c7b0  6a10                 push 0x10
// 0087c7b2  8bcf                 mov ecx, edi
// 0087c7b4  e8870ef8ff           call 0x7fd640
// 0087c7b9  50                   push eax
// 0087c7ba  8d4c2430             lea ecx, [esp + 0x30]
// 0087c7be  51                   push ecx
// 0087c7bf  8bcb                 mov ecx, ebx
// 0087c7c1  e8327ef7ff           call 0x7f45f8
// 0087c7c6  6a10                 push 0x10
// 0087c7c8  8bcf                 mov ecx, edi
// 0087c7ca  e8710ef8ff           call 0x7fd640
// 0087c7cf  50                   push eax
// 0087c7d0  6a05                 push 5
// 0087c7d2  8bcf                 mov ecx, edi
// 0087c7d4  e8670ef8ff           call 0x7fd640
// 0087c7d9  50                   push eax
// 0087c7da  8d4c2450             lea ecx, [esp + 0x50]
// 0087c7de  51                   push ecx
// 0087c7df  8bcb                 mov ecx, ebx
// 0087c7e1  e8127ef7ff           call 0x7f45f8
// 0087c7e6  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0087c7ea  8b542430             mov edx, dword ptr [esp + 0x30]
// 0087c7ee  8b442428             mov eax, dword ptr [esp + 0x28]
// 0087c7f2  03c2                 add eax, edx
// 0087c7f4  99                   cdq 
// 0087c7f5  2bc2                 sub eax, edx
// 0087c7f7  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0087c7fb  8bf0                 mov esi, eax
// 0087c7fd  8d040a               lea eax, [edx + ecx]
// 0087c800  99                   cdq 
// 0087c801  2bc2                 sub eax, edx
// 0087c803  d1f8                 sar eax, 1
// 0087c805  8d6801               lea ebp, [eax + 1]
// 0087c808  48                   dec eax
// 0087c809  89442424             mov dword ptr [esp + 0x24], eax
// 0087c80d  33c0                 xor eax, eax
// 0087c80f  d1fe                 sar esi, 1
// 0087c811  39442460             cmp dword ptr [esp + 0x60], eax
// 0087c815  8d4e02               lea ecx, [esi + 2]
// 0087c818  0f95c0               setne al
// 0087c81b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0087c81f  8d56fe               lea edx, [esi - 2]
// 0087c822  8bcf                 mov ecx, edi
// 0087c824  89542410             mov dword ptr [esp + 0x10], edx
// 0087c828  83c011               add eax, 0x11
// 0087c82b  50                   push eax
// 0087c82c  89442464             mov dword ptr [esp + 0x64], eax
// 0087c830  e80b0ef8ff           call 0x7fd640
// 0087c835  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0087c839  8b542424             mov edx, dword ptr [esp + 0x24]
// 0087c83d  50                   push eax
// 0087c83e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0087c842  55                   push ebp
// 0087c843  50                   push eax
// 0087c844  55                   push ebp
// 0087c845  51                   push ecx
// 0087c846  52                   push edx
// 0087c847  56                   push esi
// 0087c848  53                   push ebx
// 0087c849  e8421ef8ff           call 0x7fe690
// 0087c84e  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0087c852  8b442468             mov eax, dword ptr [esp + 0x68]
// 0087c856  03c1                 add eax, ecx
// 0087c858  99                   cdq 
// 0087c859  2bc2                 sub eax, edx
// 0087c85b  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0087c85f  8bf0                 mov esi, eax
// 0087c861  8b442474             mov eax, dword ptr [esp + 0x74]
// 0087c865  03c2                 add eax, edx
// 0087c867  99                   cdq 
// 0087c868  2bc2                 sub eax, edx
// 0087c86a  d1f8                 sar eax, 1
// 0087c86c  8d68ff               lea ebp, [eax - 1]
// 0087c86f  40                   inc eax
// 0087c870  d1fe                 sar esi, 1
// 0087c872  8d4e02               lea ecx, [esi + 2]
// 0087c875  89442434             mov dword ptr [esp + 0x34], eax
// 0087c879  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0087c880  83c420               add esp, 0x20
// 0087c883  894c2420             mov dword ptr [esp + 0x20], ecx
// 0087c887  8d56fe               lea edx, [esi - 2]
// 0087c88a  50                   push eax
// 0087c88b  8bcf                 mov ecx, edi
// 0087c88d  8954241c             mov dword ptr [esp + 0x1c], edx
// 0087c891  e8aa0df8ff           call 0x7fd640
// 0087c896  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0087c89a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0087c89e  50                   push eax
// 0087c89f  8b442418             mov eax, dword ptr [esp + 0x18]
// 0087c8a3  55                   push ebp
// 0087c8a4  51                   push ecx
// 0087c8a5  55                   push ebp
// 0087c8a6  52                   push edx
// 0087c8a7  50                   push eax
// 0087c8a8  56                   push esi
// 0087c8a9  53                   push ebx
// 0087c8aa  e8e11df8ff           call 0x7fe690
// 0087c8af  83c420               add esp, 0x20
// 0087c8b2  5f                   pop edi
// 0087c8b3  5e                   pop esi
// 0087c8b4  5d                   pop ebp
// 0087c8b5  5b                   pop ebx
// 0087c8b6  83c448               add esp, 0x48
// 0087c8b9  c20800               ret 8
// 0087c8bc  6a10                 push 0x10
// 0087c8be  e87d0df8ff           call 0x7fd640
// 0087c8c3  50                   push eax
// 0087c8c4  6a05                 push 5
// 0087c8c6  8bcf                 mov ecx, edi
// 0087c8c8  e8730df8ff           call 0x7fd640
// 0087c8cd  50                   push eax
// 0087c8ce  8d542430             lea edx, [esp + 0x30]
// 0087c8d2  52                   push edx
// 0087c8d3  8bcb                 mov ecx, ebx
// 0087c8d5  e81e7df7ff           call 0x7f45f8
// 0087c8da  83fe04               cmp esi, 4
// 0087c8dd  0f85e3feffff         jne 0x87c7c6
// 0087c8e3  6a05                 push 5
// 0087c8e5  8bcf                 mov ecx, edi
// 0087c8e7  e8540df8ff           call 0x7fd640
// 0087c8ec  50                   push eax
// 0087c8ed  6a10                 push 0x10
// 0087c8ef  8bcf                 mov ecx, edi
// 0087c8f1  e84a0df8ff           call 0x7fd640
// 0087c8f6  50                   push eax
// 0087c8f7  8d442450             lea eax, [esp + 0x50]
// 0087c8fb  50                   push eax
// 0087c8fc  e9defeffff           jmp 0x87c7df
// copied from an identical function in another client (function ?DrawControlEditSpin@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPControlEdit@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDefaultTheme.cpp