// roc 2008-06 00733090  unit: XTPPaintThemes::CXTPDefaultTheme  size: 609 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00733090
//
// 00733090  83ec48               sub esp, 0x48
// 00733093  53                   push ebx
// 00733094  55                   push ebp
// 00733095  56                   push esi
// 00733096  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0073309a  8b06                 mov eax, dword ptr [esi]
// 0073309c  8b5078               mov edx, dword ptr [eax + 0x78]
// 0073309f  57                   push edi
// 007330a0  8bf9                 mov edi, ecx
// 007330a2  8bce                 mov ecx, esi
// 007330a4  ffd2                 call edx
// 007330a6  89442418             mov dword ptr [esp + 0x18], eax
// 007330aa  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007330b0  83f8ff               cmp eax, -1
// 007330b3  750f                 jne 0x7330c4
// 007330b5  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007330bb  85c9                 test ecx, ecx
// 007330bd  7405                 je 0x7330c4
// 007330bf  e8fc86f7ff           call 0x6ab7c0
// 007330c4  89442460             mov dword ptr [esp + 0x60], eax
// 007330c8  8b06                 mov eax, dword ptr [esi]
// 007330ca  8b506c               mov edx, dword ptr [eax + 0x6c]
// 007330cd  8bce                 mov ecx, esi
// 007330cf  ffd2                 call edx
// 007330d1  89442410             mov dword ptr [esp + 0x10], eax
// 007330d5  8d442438             lea eax, [esp + 0x38]
// 007330d9  50                   push eax
// 007330da  8bce                 mov ecx, esi
// 007330dc  e84ff30000           call 0x742430
// 007330e1  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007330e5  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 007330e9  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 007330ed  8b742438             mov esi, dword ptr [esp + 0x38]
// 007330f1  8d4801               lea ecx, [eax + 1]
// 007330f4  03c5                 add eax, ebp
// 007330f6  99                   cdq 
// 007330f7  2bc2                 sub eax, edx
// 007330f9  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007330fd  4b                   dec ebx
// 007330fe  46                   inc esi
// 007330ff  8bc8                 mov ecx, eax
// 00733101  d1f9                 sar ecx, 1
// 00733103  4d                   dec ebp
// 00733104  837c246000           cmp dword ptr [esp + 0x60], 0
// 00733109  895c2430             mov dword ptr [esp + 0x30], ebx
// 0073310d  895c2450             mov dword ptr [esp + 0x50], ebx
// 00733111  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 00733115  89742428             mov dword ptr [esp + 0x28], esi
// 00733119  894c2434             mov dword ptr [esp + 0x34], ecx
// 0073311d  89742448             mov dword ptr [esp + 0x48], esi
// 00733121  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00733125  896c2454             mov dword ptr [esp + 0x54], ebp
// 00733129  0f84ab000000         je 0x7331da
// 0073312f  837c241000           cmp dword ptr [esp + 0x10], 0
// 00733134  753d                 jne 0x733173
// 00733136  6aff                 push -1
// 00733138  6aff                 push -1
// 0073313a  8d542440             lea edx, [esp + 0x40]
// 0073313e  52                   push edx
// 0073313f  ff15282d8000         call dword ptr [0x802d28]
// 00733145  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00733149  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0073314d  6a0f                 push 0xf
// 0073314f  6a05                 push 5
// 00733151  83ec10               sub esp, 0x10
// 00733154  8bc4                 mov eax, esp
// 00733156  8908                 mov dword ptr [eax], ecx
// 00733158  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0073315c  895004               mov dword ptr [eax + 4], edx
// 0073315f  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00733163  894808               mov dword ptr [eax + 8], ecx
// 00733166  53                   push ebx
// 00733167  8bcf                 mov ecx, edi
// 00733169  89500c               mov dword ptr [eax + 0xc], edx
// 0073316c  e85fbff7ff           call 0x6af0d0
// 00733171  eb63                 jmp 0x7331d6
// 00733173  6a0f                 push 0xf
// 00733175  8bcf                 mov ecx, edi
// 00733177  e8f4aef7ff           call 0x6ae070
// 0073317c  50                   push eax
// 0073317d  8d44243c             lea eax, [esp + 0x3c]
// 00733181  50                   push eax
// 00733182  8bcb                 mov ecx, ebx
// 00733184  e8d5e1f6ff           call 0x6a135e
// 00733189  8b742418             mov esi, dword ptr [esp + 0x18]
// 0073318d  8bcf                 mov ecx, edi
// 0073318f  83fe03               cmp esi, 3
// 00733192  0f8514010000         jne 0x7332ac
// 00733198  6a05                 push 5
// 0073319a  e8d1aef7ff           call 0x6ae070
// 0073319f  50                   push eax
// 007331a0  6a10                 push 0x10
// 007331a2  8bcf                 mov ecx, edi
// 007331a4  e8c7aef7ff           call 0x6ae070
// 007331a9  50                   push eax
// 007331aa  8d4c2430             lea ecx, [esp + 0x30]
// 007331ae  51                   push ecx
// 007331af  8bcb                 mov ecx, ebx
// 007331b1  e8a2e1f6ff           call 0x6a1358
// 007331b6  6a10                 push 0x10
// 007331b8  8bcf                 mov ecx, edi
// 007331ba  e8b1aef7ff           call 0x6ae070
// 007331bf  50                   push eax
// 007331c0  6a05                 push 5
// 007331c2  8bcf                 mov ecx, edi
// 007331c4  e8a7aef7ff           call 0x6ae070
// 007331c9  50                   push eax
// 007331ca  8d4c2450             lea ecx, [esp + 0x50]
// 007331ce  51                   push ecx
// 007331cf  8bcb                 mov ecx, ebx
// 007331d1  e882e1f6ff           call 0x6a1358
// 007331d6  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007331da  8b542430             mov edx, dword ptr [esp + 0x30]
// 007331de  8b442428             mov eax, dword ptr [esp + 0x28]
// 007331e2  03c2                 add eax, edx
// 007331e4  99                   cdq 
// 007331e5  2bc2                 sub eax, edx
// 007331e7  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007331eb  8bf0                 mov esi, eax
// 007331ed  8d040a               lea eax, [edx + ecx]
// 007331f0  99                   cdq 
// 007331f1  2bc2                 sub eax, edx
// 007331f3  d1f8                 sar eax, 1
// 007331f5  8d6801               lea ebp, [eax + 1]
// 007331f8  48                   dec eax
// 007331f9  89442424             mov dword ptr [esp + 0x24], eax
// 007331fd  33c0                 xor eax, eax
// 007331ff  d1fe                 sar esi, 1
// 00733201  39442460             cmp dword ptr [esp + 0x60], eax
// 00733205  8d4e02               lea ecx, [esi + 2]
// 00733208  0f95c0               setne al
// 0073320b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0073320f  8d56fe               lea edx, [esi - 2]
// 00733212  8bcf                 mov ecx, edi
// 00733214  89542410             mov dword ptr [esp + 0x10], edx
// 00733218  83c011               add eax, 0x11
// 0073321b  50                   push eax
// 0073321c  89442464             mov dword ptr [esp + 0x64], eax
// 00733220  e84baef7ff           call 0x6ae070
// 00733225  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00733229  8b542424             mov edx, dword ptr [esp + 0x24]
// 0073322d  50                   push eax
// 0073322e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00733232  55                   push ebp
// 00733233  50                   push eax
// 00733234  55                   push ebp
// 00733235  51                   push ecx
// 00733236  52                   push edx
// 00733237  56                   push esi
// 00733238  53                   push ebx
// 00733239  e8d257fcff           call 0x6f8a10
// 0073323e  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00733242  8b442468             mov eax, dword ptr [esp + 0x68]
// 00733246  03c1                 add eax, ecx
// 00733248  99                   cdq 
// 00733249  2bc2                 sub eax, edx
// 0073324b  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0073324f  8bf0                 mov esi, eax
// 00733251  8b442474             mov eax, dword ptr [esp + 0x74]
// 00733255  03c2                 add eax, edx
// 00733257  99                   cdq 
// 00733258  2bc2                 sub eax, edx
// 0073325a  d1f8                 sar eax, 1
// 0073325c  8d68ff               lea ebp, [eax - 1]
// 0073325f  40                   inc eax
// 00733260  d1fe                 sar esi, 1
// 00733262  8d4e02               lea ecx, [esi + 2]
// 00733265  89442434             mov dword ptr [esp + 0x34], eax
// 00733269  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00733270  83c420               add esp, 0x20
// 00733273  894c2420             mov dword ptr [esp + 0x20], ecx
// 00733277  8d56fe               lea edx, [esi - 2]
// 0073327a  50                   push eax
// 0073327b  8bcf                 mov ecx, edi
// 0073327d  8954241c             mov dword ptr [esp + 0x1c], edx
// 00733281  e8eaadf7ff           call 0x6ae070
// 00733286  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0073328a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073328e  50                   push eax
// 0073328f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00733293  55                   push ebp
// 00733294  51                   push ecx
// 00733295  55                   push ebp
// 00733296  52                   push edx
// 00733297  50                   push eax
// 00733298  56                   push esi
// 00733299  53                   push ebx
// 0073329a  e87157fcff           call 0x6f8a10
// 0073329f  83c420               add esp, 0x20
// 007332a2  5f                   pop edi
// 007332a3  5e                   pop esi
// 007332a4  5d                   pop ebp
// 007332a5  5b                   pop ebx
// 007332a6  83c448               add esp, 0x48
// 007332a9  c20800               ret 8
// 007332ac  6a10                 push 0x10
// 007332ae  e8bdadf7ff           call 0x6ae070
// 007332b3  50                   push eax
// 007332b4  6a05                 push 5
// 007332b6  8bcf                 mov ecx, edi
// 007332b8  e8b3adf7ff           call 0x6ae070
// 007332bd  50                   push eax
// 007332be  8d542430             lea edx, [esp + 0x30]
// 007332c2  52                   push edx
// 007332c3  8bcb                 mov ecx, ebx
// 007332c5  e88ee0f6ff           call 0x6a1358
// 007332ca  83fe04               cmp esi, 4
// 007332cd  0f85e3feffff         jne 0x7331b6
// 007332d3  6a05                 push 5
// 007332d5  8bcf                 mov ecx, edi
// 007332d7  e894adf7ff           call 0x6ae070
// 007332dc  50                   push eax
// 007332dd  6a10                 push 0x10
// 007332df  8bcf                 mov ecx, edi
// 007332e1  e88aadf7ff           call 0x6ae070
// 007332e6  50                   push eax
// 007332e7  8d442450             lea eax, [esp + 0x50]
// 007332eb  50                   push eax
// 007332ec  e9defeffff           jmp 0x7331cf
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawControlEditSpin@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPControlEdit@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDefaultTheme.cpp
