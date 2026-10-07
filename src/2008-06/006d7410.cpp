// roc 2008-06 006d7410  unit: CXTPReportHeader  size: 518 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d7410
//
// 006d7410  83ec7c               sub esp, 0x7c
// 006d7413  53                   push ebx
// 006d7414  55                   push ebp
// 006d7415  56                   push esi
// 006d7416  8bf1                 mov esi, ecx
// 006d7418  8b4624               mov eax, dword ptr [esi + 0x24]
// 006d741b  57                   push edi
// 006d741c  50                   push eax
// 006d741d  8d4c2468             lea ecx, [esp + 0x68]
// 006d7421  e80a070200           call 0x6f7b30
// 006d7426  8b5624               mov edx, dword ptr [esi + 0x24]
// 006d7429  8b4220               mov eax, dword ptr [edx + 0x20]
// 006d742c  8d8c2494000000       lea ecx, [esp + 0x94]
// 006d7433  51                   push ecx
// 006d7434  50                   push eax
// 006d7435  ff15802d8000         call dword ptr [0x802d80]
// 006d743b  8d4c2414             lea ecx, [esp + 0x14]
// 006d743f  51                   push ecx
// 006d7440  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 006d7447  e834d1ffff           call 0x6d4580
// 006d744c  8b542470             mov edx, dword ptr [esp + 0x70]
// 006d7450  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006d7453  8d442414             lea eax, [esp + 0x14]
// 006d7457  50                   push eax
// 006d7458  89542424             mov dword ptr [esp + 0x24], edx
// 006d745c  e8d197fcff           call 0x6a0c32
// 006d7461  8b4624               mov eax, dword ptr [esi + 0x24]
// 006d7464  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006d7467  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006d746b  51                   push ecx
// 006d746c  ff15cc2c8000         call dword ptr [0x802ccc]
// 006d7472  50                   push eax
// 006d7473  e8b04b0e00           call 0x7bc028
// 006d7478  8bd8                 mov ebx, eax
// 006d747a  85db                 test ebx, ebx
// 006d747c  7445                 je 0x6d74c3
// 006d747e  8b4308               mov eax, dword ptr [ebx + 8]
// 006d7481  6a00                 push 0
// 006d7483  8d542458             lea edx, [esp + 0x58]
// 006d7487  52                   push edx
// 006d7488  50                   push eax
// 006d7489  ff1518218000         call dword ptr [0x802118]
// 006d748f  8b4b04               mov ecx, dword ptr [ebx + 4]
// 006d7492  8b5624               mov edx, dword ptr [esi + 0x24]
// 006d7495  8be8                 mov ebp, eax
// 006d7497  8b4220               mov eax, dword ptr [edx + 0x20]
// 006d749a  51                   push ecx
// 006d749b  50                   push eax
// 006d749c  ff15c02c8000         call dword ptr [0x802cc0]
// 006d74a2  8bcd                 mov ecx, ebp
// 006d74a4  83e103               and ecx, 3
// 006d74a7  80f903               cmp cl, 3
// 006d74aa  7517                 jne 0x6d74c3
// 006d74ac  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006d74af  8d542454             lea edx, [esp + 0x54]
// 006d74b3  52                   push edx
// 006d74b4  e87997fcff           call 0x6a0c32
// 006d74b9  8b442460             mov eax, dword ptr [esp + 0x60]
// 006d74bd  3bc7                 cmp eax, edi
// 006d74bf  7d02                 jge 0x6d74c3
// 006d74c1  8bf8                 mov edi, eax
// 006d74c3  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 006d74ca  50                   push eax
// 006d74cb  8bce                 mov ecx, esi
// 006d74cd  e8eeeaffff           call 0x6d5fc0
// 006d74d2  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 006d74d9  8be8                 mov ebp, eax
// 006d74db  e840d5ffff           call 0x6d4a20
// 006d74e0  8bc8                 mov ecx, eax
// 006d74e2  8b442414             mov eax, dword ptr [esp + 0x14]
// 006d74e6  8d1428               lea edx, [eax + ebp]
// 006d74e9  8954242c             mov dword ptr [esp + 0x2c], edx
// 006d74ed  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006d74f1  894c2410             mov dword ptr [esp + 0x10], ecx
// 006d74f5  03c8                 add ecx, eax
// 006d74f7  89542434             mov dword ptr [esp + 0x34], edx
// 006d74fb  894c2424             mov dword ptr [esp + 0x24], ecx
// 006d74ff  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006d7503  42                   inc edx
// 006d7504  8954243c             mov dword ptr [esp + 0x3c], edx
// 006d7508  894c2428             mov dword ptr [esp + 0x28], ecx
// 006d750c  894c2438             mov dword ptr [esp + 0x38], ecx
// 006d7510  8d50ff               lea edx, [eax - 1]
// 006d7513  894c2448             mov dword ptr [esp + 0x48], ecx
// 006d7517  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006d751a  897c2430             mov dword ptr [esp + 0x30], edi
// 006d751e  897c2440             mov dword ptr [esp + 0x40], edi
// 006d7522  89542444             mov dword ptr [esp + 0x44], edx
// 006d7526  8944244c             mov dword ptr [esp + 0x4c], eax
// 006d752a  897c2450             mov dword ptr [esp + 0x50], edi
// 006d752e  e8654a0e00           call 0x7bbf98
// 006d7533  8bd8                 mov ebx, eax
// 006d7535  81e300004000         and ebx, 0x400000
// 006d753b  7421                 je 0x6d755e
// 006d753d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006d7541  2b442410             sub eax, dword ptr [esp + 0x10]
// 006d7545  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006d7549  8b542414             mov edx, dword ptr [esp + 0x14]
// 006d754d  57                   push edi
// 006d754e  50                   push eax
// 006d754f  51                   push ecx
// 006d7550  2bd5                 sub edx, ebp
// 006d7552  52                   push edx
// 006d7553  8d442434             lea eax, [esp + 0x34]
// 006d7557  50                   push eax
// 006d7558  ff15102d8000         call dword ptr [0x802d10]
// 006d755e  6a01                 push 1
// 006d7560  8d4c2478             lea ecx, [esp + 0x78]
// 006d7564  e8f70c0200           call 0x6f8260
// 006d7569  8d442434             lea eax, [esp + 0x34]
// 006d756d  85db                 test ebx, ebx
// 006d756f  7504                 jne 0x6d7575
// 006d7571  8d442444             lea eax, [esp + 0x44]
// 006d7575  8b08                 mov ecx, dword ptr [eax]
// 006d7577  8b5004               mov edx, dword ptr [eax + 4]
// 006d757a  894c247c             mov dword ptr [esp + 0x7c], ecx
// 006d757e  8b4808               mov ecx, dword ptr [eax + 8]
// 006d7581  89942480000000       mov dword ptr [esp + 0x80], edx
// 006d7588  8b500c               mov edx, dword ptr [eax + 0xc]
// 006d758b  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 006d7592  89942488000000       mov dword ptr [esp + 0x88], edx
// 006d7599  8d442444             lea eax, [esp + 0x44]
// 006d759d  85db                 test ebx, ebx
// 006d759f  7504                 jne 0x6d75a5
// 006d75a1  8d442434             lea eax, [esp + 0x34]
// 006d75a5  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 006d75ac  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 006d75b3  6a01                 push 1
// 006d75b5  51                   push ecx
// 006d75b6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006d75ba  52                   push edx
// 006d75bb  8b542434             mov edx, dword ptr [esp + 0x34]
// 006d75bf  50                   push eax
// 006d75c0  83ec10               sub esp, 0x10
// 006d75c3  8bc4                 mov eax, esp
// 006d75c5  8908                 mov dword ptr [eax], ecx
// 006d75c7  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 006d75cb  895004               mov dword ptr [eax + 4], edx
// 006d75ce  8b542450             mov edx, dword ptr [esp + 0x50]
// 006d75d2  894808               mov dword ptr [eax + 8], ecx
// 006d75d5  89500c               mov dword ptr [eax + 0xc], edx
// 006d75d8  8b4624               mov eax, dword ptr [esi + 0x24]
// 006d75db  50                   push eax
// 006d75dc  8d8c2498000000       lea ecx, [esp + 0x98]
// 006d75e3  e8080d0200           call 0x6f82f0
// 006d75e8  85c0                 test eax, eax
// 006d75ea  7420                 je 0x6d760c
// 006d75ec  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006d75f0  2b4c244c             sub ecx, dword ptr [esp + 0x4c]
// 006d75f4  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 006d75fb  51                   push ecx
// 006d75fc  52                   push edx
// 006d75fd  8bce                 mov ecx, esi
// 006d75ff  e84cf3ffff           call 0x6d6950
// 006d7604  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006d7607  e82449ffff           call 0x6cbf30
// 006d760c  5f                   pop edi
// 006d760d  5e                   pop esi
// 006d760e  5d                   pop ebp
// 006d760f  5b                   pop ebx
// 006d7610  83c47c               add esp, 0x7c
// 006d7613  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?TrackColumn@CXTPReportHeader@@IAEXPAVCXTPReportColumn@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
