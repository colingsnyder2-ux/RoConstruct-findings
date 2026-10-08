// roc 2011-06 0086e730  unit: CXTPDockingPane  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e730
//
// 0086e730  56                   push esi
// 0086e731  57                   push edi
// 0086e732  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0086e736  8bf1                 mov esi, ecx
// 0086e738  8b06                 mov eax, dword ptr [esi]
// 0086e73a  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0086e73d  57                   push edi
// 0086e73e  ffd2                 call edx
// 0086e740  8b442420             mov eax, dword ptr [esp + 0x20]
// 0086e744  85c0                 test eax, eax
// 0086e746  7409                 je 0x86e751
// 0086e748  833800               cmp dword ptr [eax], 0
// 0086e74b  0f8486000000         je 0x86e7d7
// 0086e751  8b442410             mov eax, dword ptr [esp + 0x10]
// 0086e755  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0086e759  8b542418             mov edx, dword ptr [esp + 0x18]
// 0086e75d  89461c               mov dword ptr [esi + 0x1c], eax
// 0086e760  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0086e764  894e20               mov dword ptr [esi + 0x20], ecx
// 0086e767  895624               mov dword ptr [esi + 0x24], edx
// 0086e76a  894628               mov dword ptr [esi + 0x28], eax
// 0086e76d  85ff                 test edi, edi
// 0086e76f  7466                 je 0x86e7d7
// 0086e771  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0086e774  85c9                 test ecx, ecx
// 0086e776  745f                 je 0x86e7d7
// 0086e778  8b01                 mov eax, dword ptr [ecx]
// 0086e77a  8b7f20               mov edi, dword ptr [edi + 0x20]
// 0086e77d  6a02                 push 2
// 0086e77f  8d542414             lea edx, [esp + 0x14]
// 0086e783  52                   push edx
// 0086e784  8b5020               mov edx, dword ptr [eax + 0x20]
// 0086e787  ffd2                 call edx
// 0086e789  50                   push eax
// 0086e78a  57                   push edi
// 0086e78b  ff15101ba400         call dword ptr [0xa41b10]
// 0086e791  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0086e797  85c0                 test eax, eax
// 0086e799  7421                 je 0x86e7bc
// 0086e79b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0086e79f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0086e7a3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0086e7a7  6a01                 push 1
// 0086e7a9  2bd1                 sub edx, ecx
// 0086e7ab  52                   push edx
// 0086e7ac  8b542418             mov edx, dword ptr [esp + 0x18]
// 0086e7b0  2bfa                 sub edi, edx
// 0086e7b2  57                   push edi
// 0086e7b3  51                   push ecx
// 0086e7b4  52                   push edx
// 0086e7b5  50                   push eax
// 0086e7b6  ff15801aa400         call dword ptr [0xa41a80]
// 0086e7bc  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0086e7c2  85c0                 test eax, eax
// 0086e7c4  7411                 je 0x86e7d7
// 0086e7c6  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0086e7cc  83e101               and ecx, 1
// 0086e7cf  51                   push ecx
// 0086e7d0  50                   push eax
// 0086e7d1  ff15b019a400         call dword ptr [0xa419b0]
// 0086e7d7  5f                   pop edi
// 0086e7d8  5e                   pop esi
// 0086e7d9  c21800               ret 0x18
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?OnSizeParent@CXTPDockingPane@@MAEXPAVCWnd@@VCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
