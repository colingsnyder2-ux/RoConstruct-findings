// roc 2010-06 007de9c0  unit: CXTPReportHeader  size: 518 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007de9c0
//
// 007de9c0  83ec7c               sub esp, 0x7c
// 007de9c3  53                   push ebx
// 007de9c4  55                   push ebp
// 007de9c5  56                   push esi
// 007de9c6  8bf1                 mov esi, ecx
// 007de9c8  8b4624               mov eax, dword ptr [esi + 0x24]
// 007de9cb  57                   push edi
// 007de9cc  50                   push eax
// 007de9cd  8d4c2468             lea ecx, [esp + 0x68]
// 007de9d1  e83a090200           call 0x7ff310
// 007de9d6  8b5624               mov edx, dword ptr [esi + 0x24]
// 007de9d9  8b4220               mov eax, dword ptr [edx + 0x20]
// 007de9dc  8d8c2494000000       lea ecx, [esp + 0x94]
// 007de9e3  51                   push ecx
// 007de9e4  50                   push eax
// 007de9e5  ff1558bc9e00         call dword ptr [0x9ebc58]
// 007de9eb  8d4c2414             lea ecx, [esp + 0x14]
// 007de9ef  51                   push ecx
// 007de9f0  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 007de9f7  e844d1ffff           call 0x7dbb40
// 007de9fc  8b542470             mov edx, dword ptr [esp + 0x70]
// 007dea00  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007dea03  8d442414             lea eax, [esp + 0x14]
// 007dea07  50                   push eax
// 007dea08  89542424             mov dword ptr [esp + 0x24], edx
// 007dea0c  e82f95fcff           call 0x7a7f40
// 007dea11  8b4624               mov eax, dword ptr [esi + 0x24]
// 007dea14  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007dea17  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007dea1b  51                   push ecx
// 007dea1c  ff1570ba9e00         call dword ptr [0x9eba70]
// 007dea22  50                   push eax
// 007dea23  e844e31900           call 0x97cd6c
// 007dea28  8bd8                 mov ebx, eax
// 007dea2a  85db                 test ebx, ebx
// 007dea2c  7445                 je 0x7dea73
// 007dea2e  8b4308               mov eax, dword ptr [ebx + 8]
// 007dea31  6a00                 push 0
// 007dea33  8d542458             lea edx, [esp + 0x58]
// 007dea37  52                   push edx
// 007dea38  50                   push eax
// 007dea39  ff1518a19e00         call dword ptr [0x9ea118]
// 007dea3f  8b4b04               mov ecx, dword ptr [ebx + 4]
// 007dea42  8b5624               mov edx, dword ptr [esi + 0x24]
// 007dea45  8be8                 mov ebp, eax
// 007dea47  8b4220               mov eax, dword ptr [edx + 0x20]
// 007dea4a  51                   push ecx
// 007dea4b  50                   push eax
// 007dea4c  ff1568ba9e00         call dword ptr [0x9eba68]
// 007dea52  8bcd                 mov ecx, ebp
// 007dea54  83e103               and ecx, 3
// 007dea57  80f903               cmp cl, 3
// 007dea5a  7517                 jne 0x7dea73
// 007dea5c  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007dea5f  8d542454             lea edx, [esp + 0x54]
// 007dea63  52                   push edx
// 007dea64  e8d794fcff           call 0x7a7f40
// 007dea69  8b442460             mov eax, dword ptr [esp + 0x60]
// 007dea6d  3bc7                 cmp eax, edi
// 007dea6f  7d02                 jge 0x7dea73
// 007dea71  8bf8                 mov edi, eax
// 007dea73  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 007dea7a  50                   push eax
// 007dea7b  8bce                 mov ecx, esi
// 007dea7d  e8eeeaffff           call 0x7dd570
// 007dea82  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 007dea89  8be8                 mov ebp, eax
// 007dea8b  e840d5ffff           call 0x7dbfd0
// 007dea90  8bc8                 mov ecx, eax
// 007dea92  8b442414             mov eax, dword ptr [esp + 0x14]
// 007dea96  8d1428               lea edx, [eax + ebp]
// 007dea99  8954242c             mov dword ptr [esp + 0x2c], edx
// 007dea9d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007deaa1  894c2410             mov dword ptr [esp + 0x10], ecx
// 007deaa5  03c8                 add ecx, eax
// 007deaa7  89542434             mov dword ptr [esp + 0x34], edx
// 007deaab  894c2424             mov dword ptr [esp + 0x24], ecx
// 007deaaf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007deab3  42                   inc edx
// 007deab4  8954243c             mov dword ptr [esp + 0x3c], edx
// 007deab8  894c2428             mov dword ptr [esp + 0x28], ecx
// 007deabc  894c2438             mov dword ptr [esp + 0x38], ecx
// 007deac0  8d50ff               lea edx, [eax - 1]
// 007deac3  894c2448             mov dword ptr [esp + 0x48], ecx
// 007deac7  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007deaca  897c2430             mov dword ptr [esp + 0x30], edi
// 007deace  897c2440             mov dword ptr [esp + 0x40], edi
// 007dead2  89542444             mov dword ptr [esp + 0x44], edx
// 007dead6  8944244c             mov dword ptr [esp + 0x4c], eax
// 007deada  897c2450             mov dword ptr [esp + 0x50], edi
// 007deade  e801e31900           call 0x97cde4
// 007deae3  8bd8                 mov ebx, eax
// 007deae5  81e300004000         and ebx, 0x400000
// 007deaeb  7421                 je 0x7deb0e
// 007deaed  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007deaf1  2b442410             sub eax, dword ptr [esp + 0x10]
// 007deaf5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007deaf9  8b542414             mov edx, dword ptr [esp + 0x14]
// 007deafd  57                   push edi
// 007deafe  50                   push eax
// 007deaff  51                   push ecx
// 007deb00  2bd5                 sub edx, ebp
// 007deb02  52                   push edx
// 007deb03  8d442434             lea eax, [esp + 0x34]
// 007deb07  50                   push eax
// 007deb08  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 007deb0e  6a01                 push 1
// 007deb10  8d4c2478             lea ecx, [esp + 0x78]
// 007deb14  e8270f0200           call 0x7ffa40
// 007deb19  8d442434             lea eax, [esp + 0x34]
// 007deb1d  85db                 test ebx, ebx
// 007deb1f  7504                 jne 0x7deb25
// 007deb21  8d442444             lea eax, [esp + 0x44]
// 007deb25  8b08                 mov ecx, dword ptr [eax]
// 007deb27  8b5004               mov edx, dword ptr [eax + 4]
// 007deb2a  894c247c             mov dword ptr [esp + 0x7c], ecx
// 007deb2e  8b4808               mov ecx, dword ptr [eax + 8]
// 007deb31  89942480000000       mov dword ptr [esp + 0x80], edx
// 007deb38  8b500c               mov edx, dword ptr [eax + 0xc]
// 007deb3b  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 007deb42  89942488000000       mov dword ptr [esp + 0x88], edx
// 007deb49  8d442444             lea eax, [esp + 0x44]
// 007deb4d  85db                 test ebx, ebx
// 007deb4f  7504                 jne 0x7deb55
// 007deb51  8d442434             lea eax, [esp + 0x34]
// 007deb55  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 007deb5c  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 007deb63  6a01                 push 1
// 007deb65  51                   push ecx
// 007deb66  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007deb6a  52                   push edx
// 007deb6b  8b542434             mov edx, dword ptr [esp + 0x34]
// 007deb6f  50                   push eax
// 007deb70  83ec10               sub esp, 0x10
// 007deb73  8bc4                 mov eax, esp
// 007deb75  8908                 mov dword ptr [eax], ecx
// 007deb77  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007deb7b  895004               mov dword ptr [eax + 4], edx
// 007deb7e  8b542450             mov edx, dword ptr [esp + 0x50]
// 007deb82  894808               mov dword ptr [eax + 8], ecx
// 007deb85  89500c               mov dword ptr [eax + 0xc], edx
// 007deb88  8b4624               mov eax, dword ptr [esi + 0x24]
// 007deb8b  50                   push eax
// 007deb8c  8d8c2498000000       lea ecx, [esp + 0x98]
// 007deb93  e8380f0200           call 0x7ffad0
// 007deb98  85c0                 test eax, eax
// 007deb9a  7420                 je 0x7debbc
// 007deb9c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007deba0  2b4c244c             sub ecx, dword ptr [esp + 0x4c]
// 007deba4  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 007debab  51                   push ecx
// 007debac  52                   push edx
// 007debad  8bce                 mov ecx, esi
// 007debaf  e84cf3ffff           call 0x7ddf00
// 007debb4  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007debb7  e82449ffff           call 0x7d34e0
// 007debbc  5f                   pop edi
// 007debbd  5e                   pop esi
// 007debbe  5d                   pop ebp
// 007debbf  5b                   pop ebx
// 007debc0  83c47c               add esp, 0x7c
// 007debc3  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?TrackColumn@CXTPReportHeader@@IAEXPAVCXTPReportColumn@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
