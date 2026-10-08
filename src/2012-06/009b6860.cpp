// roc 2012-06 009b6860  unit: CXTPReportHeader  size: 518 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b6860
//
// 009b6860  83ec7c               sub esp, 0x7c
// 009b6863  53                   push ebx
// 009b6864  55                   push ebp
// 009b6865  56                   push esi
// 009b6866  8bf1                 mov esi, ecx
// 009b6868  8b4624               mov eax, dword ptr [esi + 0x24]
// 009b686b  57                   push edi
// 009b686c  50                   push eax
// 009b686d  8d4c2468             lea ecx, [esp + 0x68]
// 009b6871  e82ae90100           call 0x9d51a0
// 009b6876  8b5624               mov edx, dword ptr [esi + 0x24]
// 009b6879  8b4220               mov eax, dword ptr [edx + 0x20]
// 009b687c  8d8c2494000000       lea ecx, [esp + 0x94]
// 009b6883  51                   push ecx
// 009b6884  50                   push eax
// 009b6885  ff15dc3ab200         call dword ptr [0xb23adc]
// 009b688b  8d4c2414             lea ecx, [esp + 0x14]
// 009b688f  51                   push ecx
// 009b6890  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 009b6897  e86419ffff           call 0x9a8200
// 009b689c  8b542470             mov edx, dword ptr [esp + 0x70]
// 009b68a0  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 009b68a3  8d442414             lea eax, [esp + 0x14]
// 009b68a7  50                   push eax
// 009b68a8  89542424             mov dword ptr [esp + 0x24], edx
// 009b68ac  e8fdbdfcff           call 0x9826ae
// 009b68b1  8b4624               mov eax, dword ptr [esi + 0x24]
// 009b68b4  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009b68b7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 009b68bb  51                   push ecx
// 009b68bc  ff15f83bb200         call dword ptr [0xb23bf8]
// 009b68c2  50                   push eax
// 009b68c3  e8aa2c0e00           call 0xa99572
// 009b68c8  8bd8                 mov ebx, eax
// 009b68ca  85db                 test ebx, ebx
// 009b68cc  7445                 je 0x9b6913
// 009b68ce  8b4308               mov eax, dword ptr [ebx + 8]
// 009b68d1  6a00                 push 0
// 009b68d3  8d542458             lea edx, [esp + 0x58]
// 009b68d7  52                   push edx
// 009b68d8  50                   push eax
// 009b68d9  ff15f820b200         call dword ptr [0xb220f8]
// 009b68df  8b4b04               mov ecx, dword ptr [ebx + 4]
// 009b68e2  8b5624               mov edx, dword ptr [esi + 0x24]
// 009b68e5  8be8                 mov ebp, eax
// 009b68e7  8b4220               mov eax, dword ptr [edx + 0x20]
// 009b68ea  51                   push ecx
// 009b68eb  50                   push eax
// 009b68ec  ff15003cb200         call dword ptr [0xb23c00]
// 009b68f2  8bcd                 mov ecx, ebp
// 009b68f4  83e103               and ecx, 3
// 009b68f7  80f903               cmp cl, 3
// 009b68fa  7517                 jne 0x9b6913
// 009b68fc  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 009b68ff  8d542454             lea edx, [esp + 0x54]
// 009b6903  52                   push edx
// 009b6904  e8a5bdfcff           call 0x9826ae
// 009b6909  8b442460             mov eax, dword ptr [esp + 0x60]
// 009b690d  3bc7                 cmp eax, edi
// 009b690f  7d02                 jge 0x9b6913
// 009b6911  8bf8                 mov edi, eax
// 009b6913  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 009b691a  50                   push eax
// 009b691b  8bce                 mov ecx, esi
// 009b691d  e8eeeaffff           call 0x9b5410
// 009b6922  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 009b6929  8be8                 mov ebp, eax
// 009b692b  e8601dffff           call 0x9a8690
// 009b6930  8bc8                 mov ecx, eax
// 009b6932  8b442414             mov eax, dword ptr [esp + 0x14]
// 009b6936  8d1428               lea edx, [eax + ebp]
// 009b6939  8954242c             mov dword ptr [esp + 0x2c], edx
// 009b693d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009b6941  894c2410             mov dword ptr [esp + 0x10], ecx
// 009b6945  03c8                 add ecx, eax
// 009b6947  89542434             mov dword ptr [esp + 0x34], edx
// 009b694b  894c2424             mov dword ptr [esp + 0x24], ecx
// 009b694f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009b6953  42                   inc edx
// 009b6954  8954243c             mov dword ptr [esp + 0x3c], edx
// 009b6958  894c2428             mov dword ptr [esp + 0x28], ecx
// 009b695c  894c2438             mov dword ptr [esp + 0x38], ecx
// 009b6960  8d50ff               lea edx, [eax - 1]
// 009b6963  894c2448             mov dword ptr [esp + 0x48], ecx
// 009b6967  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 009b696a  897c2430             mov dword ptr [esp + 0x30], edi
// 009b696e  897c2440             mov dword ptr [esp + 0x40], edi
// 009b6972  89542444             mov dword ptr [esp + 0x44], edx
// 009b6976  8944244c             mov dword ptr [esp + 0x4c], eax
// 009b697a  897c2450             mov dword ptr [esp + 0x50], edi
// 009b697e  e8552c0e00           call 0xa995d8
// 009b6983  8bd8                 mov ebx, eax
// 009b6985  81e300004000         and ebx, 0x400000
// 009b698b  7421                 je 0x9b69ae
// 009b698d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009b6991  2b442410             sub eax, dword ptr [esp + 0x10]
// 009b6995  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009b6999  8b542414             mov edx, dword ptr [esp + 0x14]
// 009b699d  57                   push edi
// 009b699e  50                   push eax
// 009b699f  51                   push ecx
// 009b69a0  2bd5                 sub edx, ebp
// 009b69a2  52                   push edx
// 009b69a3  8d442434             lea eax, [esp + 0x34]
// 009b69a7  50                   push eax
// 009b69a8  ff156c3bb200         call dword ptr [0xb23b6c]
// 009b69ae  6a01                 push 1
// 009b69b0  8d4c2478             lea ecx, [esp + 0x78]
// 009b69b4  e817ef0100           call 0x9d58d0
// 009b69b9  8d442434             lea eax, [esp + 0x34]
// 009b69bd  85db                 test ebx, ebx
// 009b69bf  7504                 jne 0x9b69c5
// 009b69c1  8d442444             lea eax, [esp + 0x44]
// 009b69c5  8b08                 mov ecx, dword ptr [eax]
// 009b69c7  8b5004               mov edx, dword ptr [eax + 4]
// 009b69ca  894c247c             mov dword ptr [esp + 0x7c], ecx
// 009b69ce  8b4808               mov ecx, dword ptr [eax + 8]
// 009b69d1  89942480000000       mov dword ptr [esp + 0x80], edx
// 009b69d8  8b500c               mov edx, dword ptr [eax + 0xc]
// 009b69db  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 009b69e2  89942488000000       mov dword ptr [esp + 0x88], edx
// 009b69e9  8d442444             lea eax, [esp + 0x44]
// 009b69ed  85db                 test ebx, ebx
// 009b69ef  7504                 jne 0x9b69f5
// 009b69f1  8d442434             lea eax, [esp + 0x34]
// 009b69f5  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 009b69fc  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 009b6a03  6a01                 push 1
// 009b6a05  51                   push ecx
// 009b6a06  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009b6a0a  52                   push edx
// 009b6a0b  8b542434             mov edx, dword ptr [esp + 0x34]
// 009b6a0f  50                   push eax
// 009b6a10  83ec10               sub esp, 0x10
// 009b6a13  8bc4                 mov eax, esp
// 009b6a15  8908                 mov dword ptr [eax], ecx
// 009b6a17  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 009b6a1b  895004               mov dword ptr [eax + 4], edx
// 009b6a1e  8b542450             mov edx, dword ptr [esp + 0x50]
// 009b6a22  894808               mov dword ptr [eax + 8], ecx
// 009b6a25  89500c               mov dword ptr [eax + 0xc], edx
// 009b6a28  8b4624               mov eax, dword ptr [esi + 0x24]
// 009b6a2b  50                   push eax
// 009b6a2c  8d8c2498000000       lea ecx, [esp + 0x98]
// 009b6a33  e828ef0100           call 0x9d5960
// 009b6a38  85c0                 test eax, eax
// 009b6a3a  7420                 je 0x9b6a5c
// 009b6a3c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 009b6a40  2b4c244c             sub ecx, dword ptr [esp + 0x4c]
// 009b6a44  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 009b6a4b  51                   push ecx
// 009b6a4c  52                   push edx
// 009b6a4d  8bce                 mov ecx, esi
// 009b6a4f  e84cf3ffff           call 0x9b5da0
// 009b6a54  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 009b6a57  e81452ffff           call 0x9abc70
// 009b6a5c  5f                   pop edi
// 009b6a5d  5e                   pop esi
// 009b6a5e  5d                   pop ebp
// 009b6a5f  5b                   pop ebx
// 009b6a60  83c47c               add esp, 0x7c
// 009b6a63  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?TrackColumn@CXTPReportHeader@@IAEXPAVCXTPReportColumn@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
