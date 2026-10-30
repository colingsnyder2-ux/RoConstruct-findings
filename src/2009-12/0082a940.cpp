// roc 2009-12 0082a940  unit: CXTPReportHeader  size: 518 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082a940
//
// 0082a940  83ec7c               sub esp, 0x7c
// 0082a943  53                   push ebx
// 0082a944  55                   push ebp
// 0082a945  56                   push esi
// 0082a946  8bf1                 mov esi, ecx
// 0082a948  8b4624               mov eax, dword ptr [esi + 0x24]
// 0082a94b  57                   push edi
// 0082a94c  50                   push eax
// 0082a94d  8d4c2468             lea ecx, [esp + 0x68]
// 0082a951  e87a090200           call 0x84b2d0
// 0082a956  8b5624               mov edx, dword ptr [esi + 0x24]
// 0082a959  8b4220               mov eax, dword ptr [edx + 0x20]
// 0082a95c  8d8c2494000000       lea ecx, [esp + 0x94]
// 0082a963  51                   push ecx
// 0082a964  50                   push eax
// 0082a965  ff1554cc9800         call dword ptr [0x98cc54]
// 0082a96b  8d4c2414             lea ecx, [esp + 0x14]
// 0082a96f  51                   push ecx
// 0082a970  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0082a977  e854d1ffff           call 0x827ad0
// 0082a97c  8b542470             mov edx, dword ptr [esp + 0x70]
// 0082a980  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082a983  8d442414             lea eax, [esp + 0x14]
// 0082a987  50                   push eax
// 0082a988  89542424             mov dword ptr [esp + 0x24], edx
// 0082a98c  e86994fcff           call 0x7f3dfa
// 0082a991  8b4624               mov eax, dword ptr [esi + 0x24]
// 0082a994  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0082a997  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0082a99b  51                   push ecx
// 0082a99c  ff15e0cb9800         call dword ptr [0x98cbe0]
// 0082a9a2  50                   push eax
// 0082a9a3  e888ba0f00           call 0x926430
// 0082a9a8  8bd8                 mov ebx, eax
// 0082a9aa  85db                 test ebx, ebx
// 0082a9ac  7445                 je 0x82a9f3
// 0082a9ae  8b4308               mov eax, dword ptr [ebx + 8]
// 0082a9b1  6a00                 push 0
// 0082a9b3  8d542458             lea edx, [esp + 0x58]
// 0082a9b7  52                   push edx
// 0082a9b8  50                   push eax
// 0082a9b9  ff15d0b09800         call dword ptr [0x98b0d0]
// 0082a9bf  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0082a9c2  8b5624               mov edx, dword ptr [esi + 0x24]
// 0082a9c5  8be8                 mov ebp, eax
// 0082a9c7  8b4220               mov eax, dword ptr [edx + 0x20]
// 0082a9ca  51                   push ecx
// 0082a9cb  50                   push eax
// 0082a9cc  ff15d8cb9800         call dword ptr [0x98cbd8]
// 0082a9d2  8bcd                 mov ecx, ebp
// 0082a9d4  83e103               and ecx, 3
// 0082a9d7  80f903               cmp cl, 3
// 0082a9da  7517                 jne 0x82a9f3
// 0082a9dc  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082a9df  8d542454             lea edx, [esp + 0x54]
// 0082a9e3  52                   push edx
// 0082a9e4  e81194fcff           call 0x7f3dfa
// 0082a9e9  8b442460             mov eax, dword ptr [esp + 0x60]
// 0082a9ed  3bc7                 cmp eax, edi
// 0082a9ef  7d02                 jge 0x82a9f3
// 0082a9f1  8bf8                 mov edi, eax
// 0082a9f3  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 0082a9fa  50                   push eax
// 0082a9fb  8bce                 mov ecx, esi
// 0082a9fd  e8eeeaffff           call 0x8294f0
// 0082aa02  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0082aa09  8be8                 mov ebp, eax
// 0082aa0b  e840d5ffff           call 0x827f50
// 0082aa10  8bc8                 mov ecx, eax
// 0082aa12  8b442414             mov eax, dword ptr [esp + 0x14]
// 0082aa16  8d1428               lea edx, [eax + ebp]
// 0082aa19  8954242c             mov dword ptr [esp + 0x2c], edx
// 0082aa1d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0082aa21  894c2410             mov dword ptr [esp + 0x10], ecx
// 0082aa25  03c8                 add ecx, eax
// 0082aa27  89542434             mov dword ptr [esp + 0x34], edx
// 0082aa2b  894c2424             mov dword ptr [esp + 0x24], ecx
// 0082aa2f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0082aa33  42                   inc edx
// 0082aa34  8954243c             mov dword ptr [esp + 0x3c], edx
// 0082aa38  894c2428             mov dword ptr [esp + 0x28], ecx
// 0082aa3c  894c2438             mov dword ptr [esp + 0x38], ecx
// 0082aa40  8d50ff               lea edx, [eax - 1]
// 0082aa43  894c2448             mov dword ptr [esp + 0x48], ecx
// 0082aa47  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082aa4a  897c2430             mov dword ptr [esp + 0x30], edi
// 0082aa4e  897c2440             mov dword ptr [esp + 0x40], edi
// 0082aa52  89542444             mov dword ptr [esp + 0x44], edx
// 0082aa56  8944244c             mov dword ptr [esp + 0x4c], eax
// 0082aa5a  897c2450             mov dword ptr [esp + 0x50], edi
// 0082aa5e  e815ba0f00           call 0x926478
// 0082aa63  8bd8                 mov ebx, eax
// 0082aa65  81e300004000         and ebx, 0x400000
// 0082aa6b  7421                 je 0x82aa8e
// 0082aa6d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0082aa71  2b442410             sub eax, dword ptr [esp + 0x10]
// 0082aa75  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0082aa79  8b542414             mov edx, dword ptr [esp + 0x14]
// 0082aa7d  57                   push edi
// 0082aa7e  50                   push eax
// 0082aa7f  51                   push ecx
// 0082aa80  2bd5                 sub edx, ebp
// 0082aa82  52                   push edx
// 0082aa83  8d442434             lea eax, [esp + 0x34]
// 0082aa87  50                   push eax
// 0082aa88  ff1538ca9800         call dword ptr [0x98ca38]
// 0082aa8e  6a01                 push 1
// 0082aa90  8d4c2478             lea ecx, [esp + 0x78]
// 0082aa94  e8670f0200           call 0x84ba00
// 0082aa99  8d442434             lea eax, [esp + 0x34]
// 0082aa9d  85db                 test ebx, ebx
// 0082aa9f  7504                 jne 0x82aaa5
// 0082aaa1  8d442444             lea eax, [esp + 0x44]
// 0082aaa5  8b08                 mov ecx, dword ptr [eax]
// 0082aaa7  8b5004               mov edx, dword ptr [eax + 4]
// 0082aaaa  894c247c             mov dword ptr [esp + 0x7c], ecx
// 0082aaae  8b4808               mov ecx, dword ptr [eax + 8]
// 0082aab1  89942480000000       mov dword ptr [esp + 0x80], edx
// 0082aab8  8b500c               mov edx, dword ptr [eax + 0xc]
// 0082aabb  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 0082aac2  89942488000000       mov dword ptr [esp + 0x88], edx
// 0082aac9  8d442444             lea eax, [esp + 0x44]
// 0082aacd  85db                 test ebx, ebx
// 0082aacf  7504                 jne 0x82aad5
// 0082aad1  8d442434             lea eax, [esp + 0x34]
// 0082aad5  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0082aadc  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 0082aae3  6a01                 push 1
// 0082aae5  51                   push ecx
// 0082aae6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0082aaea  52                   push edx
// 0082aaeb  8b542434             mov edx, dword ptr [esp + 0x34]
// 0082aaef  50                   push eax
// 0082aaf0  83ec10               sub esp, 0x10
// 0082aaf3  8bc4                 mov eax, esp
// 0082aaf5  8908                 mov dword ptr [eax], ecx
// 0082aaf7  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0082aafb  895004               mov dword ptr [eax + 4], edx
// 0082aafe  8b542450             mov edx, dword ptr [esp + 0x50]
// 0082ab02  894808               mov dword ptr [eax + 8], ecx
// 0082ab05  89500c               mov dword ptr [eax + 0xc], edx
// 0082ab08  8b4624               mov eax, dword ptr [esi + 0x24]
// 0082ab0b  50                   push eax
// 0082ab0c  8d8c2498000000       lea ecx, [esp + 0x98]
// 0082ab13  e8780f0200           call 0x84ba90
// 0082ab18  85c0                 test eax, eax
// 0082ab1a  7420                 je 0x82ab3c
// 0082ab1c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0082ab20  2b4c244c             sub ecx, dword ptr [esp + 0x4c]
// 0082ab24  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 0082ab2b  51                   push ecx
// 0082ab2c  52                   push edx
// 0082ab2d  8bce                 mov ecx, esi
// 0082ab2f  e84cf3ffff           call 0x829e80
// 0082ab34  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082ab37  e84449ffff           call 0x81f480
// 0082ab3c  5f                   pop edi
// 0082ab3d  5e                   pop esi
// 0082ab3e  5d                   pop ebp
// 0082ab3f  5b                   pop ebx
// 0082ab40  83c47c               add esp, 0x7c
// 0082ab43  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?TrackColumn@CXTPReportHeader@@IAEXPAVCXTPReportColumn@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
