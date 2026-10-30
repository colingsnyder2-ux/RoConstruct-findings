// roc 2009-06 0074fb80  unit: CXTPReportHeader  size: 518 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074fb80
//
// 0074fb80  83ec7c               sub esp, 0x7c
// 0074fb83  53                   push ebx
// 0074fb84  55                   push ebp
// 0074fb85  56                   push esi
// 0074fb86  8bf1                 mov esi, ecx
// 0074fb88  8b4624               mov eax, dword ptr [esi + 0x24]
// 0074fb8b  57                   push edi
// 0074fb8c  50                   push eax
// 0074fb8d  8d4c2468             lea ecx, [esp + 0x68]
// 0074fb91  e83a090200           call 0x7704d0
// 0074fb96  8b5624               mov edx, dword ptr [esi + 0x24]
// 0074fb99  8b4220               mov eax, dword ptr [edx + 0x20]
// 0074fb9c  8d8c2494000000       lea ecx, [esp + 0x94]
// 0074fba3  51                   push ecx
// 0074fba4  50                   push eax
// 0074fba5  ff1510ee8900         call dword ptr [0x89ee10]
// 0074fbab  8d4c2414             lea ecx, [esp + 0x14]
// 0074fbaf  51                   push ecx
// 0074fbb0  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0074fbb7  e824d1ffff           call 0x74cce0
// 0074fbbc  8b542470             mov edx, dword ptr [esp + 0x70]
// 0074fbc0  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0074fbc3  8d442414             lea eax, [esp + 0x14]
// 0074fbc7  50                   push eax
// 0074fbc8  89542424             mov dword ptr [esp + 0x24], edx
// 0074fbcc  e80194fcff           call 0x718fd2
// 0074fbd1  8b4624               mov eax, dword ptr [esi + 0x24]
// 0074fbd4  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0074fbd7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0074fbdb  51                   push ecx
// 0074fbdc  ff1550ed8900         call dword ptr [0x89ed50]
// 0074fbe2  50                   push eax
// 0074fbe3  e824c30f00           call 0x84bf0c
// 0074fbe8  8bd8                 mov ebx, eax
// 0074fbea  85db                 test ebx, ebx
// 0074fbec  7445                 je 0x74fc33
// 0074fbee  8b4308               mov eax, dword ptr [ebx + 8]
// 0074fbf1  6a00                 push 0
// 0074fbf3  8d542458             lea edx, [esp + 0x58]
// 0074fbf7  52                   push edx
// 0074fbf8  50                   push eax
// 0074fbf9  ff158ce08900         call dword ptr [0x89e08c]
// 0074fbff  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0074fc02  8b5624               mov edx, dword ptr [esi + 0x24]
// 0074fc05  8be8                 mov ebp, eax
// 0074fc07  8b4220               mov eax, dword ptr [edx + 0x20]
// 0074fc0a  51                   push ecx
// 0074fc0b  50                   push eax
// 0074fc0c  ff1540ed8900         call dword ptr [0x89ed40]
// 0074fc12  8bcd                 mov ecx, ebp
// 0074fc14  83e103               and ecx, 3
// 0074fc17  80f903               cmp cl, 3
// 0074fc1a  7517                 jne 0x74fc33
// 0074fc1c  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0074fc1f  8d542454             lea edx, [esp + 0x54]
// 0074fc23  52                   push edx
// 0074fc24  e8a993fcff           call 0x718fd2
// 0074fc29  8b442460             mov eax, dword ptr [esp + 0x60]
// 0074fc2d  3bc7                 cmp eax, edi
// 0074fc2f  7d02                 jge 0x74fc33
// 0074fc31  8bf8                 mov edi, eax
// 0074fc33  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 0074fc3a  50                   push eax
// 0074fc3b  8bce                 mov ecx, esi
// 0074fc3d  e8eeeaffff           call 0x74e730
// 0074fc42  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0074fc49  8be8                 mov ebp, eax
// 0074fc4b  e840d5ffff           call 0x74d190
// 0074fc50  8bc8                 mov ecx, eax
// 0074fc52  8b442414             mov eax, dword ptr [esp + 0x14]
// 0074fc56  8d1428               lea edx, [eax + ebp]
// 0074fc59  8954242c             mov dword ptr [esp + 0x2c], edx
// 0074fc5d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0074fc61  894c2410             mov dword ptr [esp + 0x10], ecx
// 0074fc65  03c8                 add ecx, eax
// 0074fc67  89542434             mov dword ptr [esp + 0x34], edx
// 0074fc6b  894c2424             mov dword ptr [esp + 0x24], ecx
// 0074fc6f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0074fc73  42                   inc edx
// 0074fc74  8954243c             mov dword ptr [esp + 0x3c], edx
// 0074fc78  894c2428             mov dword ptr [esp + 0x28], ecx
// 0074fc7c  894c2438             mov dword ptr [esp + 0x38], ecx
// 0074fc80  8d50ff               lea edx, [eax - 1]
// 0074fc83  894c2448             mov dword ptr [esp + 0x48], ecx
// 0074fc87  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0074fc8a  897c2430             mov dword ptr [esp + 0x30], edi
// 0074fc8e  897c2440             mov dword ptr [esp + 0x40], edi
// 0074fc92  89542444             mov dword ptr [esp + 0x44], edx
// 0074fc96  8944244c             mov dword ptr [esp + 0x4c], eax
// 0074fc9a  897c2450             mov dword ptr [esp + 0x50], edi
// 0074fc9e  e83fc20f00           call 0x84bee2
// 0074fca3  8bd8                 mov ebx, eax
// 0074fca5  81e300004000         and ebx, 0x400000
// 0074fcab  7421                 je 0x74fcce
// 0074fcad  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0074fcb1  2b442410             sub eax, dword ptr [esp + 0x10]
// 0074fcb5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0074fcb9  8b542414             mov edx, dword ptr [esp + 0x14]
// 0074fcbd  57                   push edi
// 0074fcbe  50                   push eax
// 0074fcbf  51                   push ecx
// 0074fcc0  2bd5                 sub edx, ebp
// 0074fcc2  52                   push edx
// 0074fcc3  8d442434             lea eax, [esp + 0x34]
// 0074fcc7  50                   push eax
// 0074fcc8  ff15a4ed8900         call dword ptr [0x89eda4]
// 0074fcce  6a01                 push 1
// 0074fcd0  8d4c2478             lea ecx, [esp + 0x78]
// 0074fcd4  e8270f0200           call 0x770c00
// 0074fcd9  8d442434             lea eax, [esp + 0x34]
// 0074fcdd  85db                 test ebx, ebx
// 0074fcdf  7504                 jne 0x74fce5
// 0074fce1  8d442444             lea eax, [esp + 0x44]
// 0074fce5  8b08                 mov ecx, dword ptr [eax]
// 0074fce7  8b5004               mov edx, dword ptr [eax + 4]
// 0074fcea  894c247c             mov dword ptr [esp + 0x7c], ecx
// 0074fcee  8b4808               mov ecx, dword ptr [eax + 8]
// 0074fcf1  89942480000000       mov dword ptr [esp + 0x80], edx
// 0074fcf8  8b500c               mov edx, dword ptr [eax + 0xc]
// 0074fcfb  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 0074fd02  89942488000000       mov dword ptr [esp + 0x88], edx
// 0074fd09  8d442444             lea eax, [esp + 0x44]
// 0074fd0d  85db                 test ebx, ebx
// 0074fd0f  7504                 jne 0x74fd15
// 0074fd11  8d442434             lea eax, [esp + 0x34]
// 0074fd15  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0074fd1c  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 0074fd23  6a01                 push 1
// 0074fd25  51                   push ecx
// 0074fd26  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0074fd2a  52                   push edx
// 0074fd2b  8b542434             mov edx, dword ptr [esp + 0x34]
// 0074fd2f  50                   push eax
// 0074fd30  83ec10               sub esp, 0x10
// 0074fd33  8bc4                 mov eax, esp
// 0074fd35  8908                 mov dword ptr [eax], ecx
// 0074fd37  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0074fd3b  895004               mov dword ptr [eax + 4], edx
// 0074fd3e  8b542450             mov edx, dword ptr [esp + 0x50]
// 0074fd42  894808               mov dword ptr [eax + 8], ecx
// 0074fd45  89500c               mov dword ptr [eax + 0xc], edx
// 0074fd48  8b4624               mov eax, dword ptr [esi + 0x24]
// 0074fd4b  50                   push eax
// 0074fd4c  8d8c2498000000       lea ecx, [esp + 0x98]
// 0074fd53  e8380f0200           call 0x770c90
// 0074fd58  85c0                 test eax, eax
// 0074fd5a  7420                 je 0x74fd7c
// 0074fd5c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0074fd60  2b4c244c             sub ecx, dword ptr [esp + 0x4c]
// 0074fd64  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 0074fd6b  51                   push ecx
// 0074fd6c  52                   push edx
// 0074fd6d  8bce                 mov ecx, esi
// 0074fd6f  e84cf3ffff           call 0x74f0c0
// 0074fd74  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0074fd77  e8f448ffff           call 0x744670
// 0074fd7c  5f                   pop edi
// 0074fd7d  5e                   pop esi
// 0074fd7e  5d                   pop ebp
// 0074fd7f  5b                   pop ebx
// 0074fd80  83c47c               add esp, 0x7c
// 0074fd83  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?TrackColumn@CXTPReportHeader@@IAEXPAVCXTPReportColumn@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
