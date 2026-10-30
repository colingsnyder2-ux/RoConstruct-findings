// roc 2011-06 0083e240  unit: CXTPReportHeader  size: 518 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083e240
//
// 0083e240  83ec7c               sub esp, 0x7c
// 0083e243  53                   push ebx
// 0083e244  55                   push ebp
// 0083e245  56                   push esi
// 0083e246  8bf1                 mov esi, ecx
// 0083e248  8b4624               mov eax, dword ptr [esi + 0x24]
// 0083e24b  57                   push edi
// 0083e24c  50                   push eax
// 0083e24d  8d4c2468             lea ecx, [esp + 0x68]
// 0083e251  e83aeb0100           call 0x85cd90
// 0083e256  8b5624               mov edx, dword ptr [esi + 0x24]
// 0083e259  8b4220               mov eax, dword ptr [edx + 0x20]
// 0083e25c  8d8c2494000000       lea ecx, [esp + 0x94]
// 0083e263  51                   push ecx
// 0083e264  50                   push eax
// 0083e265  ff15781ca400         call dword ptr [0xa41c78]
// 0083e26b  8d4c2414             lea ecx, [esp + 0x14]
// 0083e26f  51                   push ecx
// 0083e270  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0083e277  e88419ffff           call 0x82fc00
// 0083e27c  8b542470             mov edx, dword ptr [esp + 0x70]
// 0083e280  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0083e283  8d442414             lea eax, [esp + 0x14]
// 0083e287  50                   push eax
// 0083e288  89542424             mov dword ptr [esp + 0x24], edx
// 0083e28c  e86dc3fcff           call 0x80a5fe
// 0083e291  8b4624               mov eax, dword ptr [esi + 0x24]
// 0083e294  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0083e297  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0083e29b  51                   push ecx
// 0083e29c  ff15e419a400         call dword ptr [0xa419e4]
// 0083e2a2  50                   push eax
// 0083e2a3  e810e31800           call 0x9cc5b8
// 0083e2a8  8bd8                 mov ebx, eax
// 0083e2aa  85db                 test ebx, ebx
// 0083e2ac  7445                 je 0x83e2f3
// 0083e2ae  8b4308               mov eax, dword ptr [ebx + 8]
// 0083e2b1  6a00                 push 0
// 0083e2b3  8d542458             lea edx, [esp + 0x58]
// 0083e2b7  52                   push edx
// 0083e2b8  50                   push eax
// 0083e2b9  ff15cc00a400         call dword ptr [0xa400cc]
// 0083e2bf  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0083e2c2  8b5624               mov edx, dword ptr [esi + 0x24]
// 0083e2c5  8be8                 mov ebp, eax
// 0083e2c7  8b4220               mov eax, dword ptr [edx + 0x20]
// 0083e2ca  51                   push ecx
// 0083e2cb  50                   push eax
// 0083e2cc  ff15dc19a400         call dword ptr [0xa419dc]
// 0083e2d2  8bcd                 mov ecx, ebp
// 0083e2d4  83e103               and ecx, 3
// 0083e2d7  80f903               cmp cl, 3
// 0083e2da  7517                 jne 0x83e2f3
// 0083e2dc  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0083e2df  8d542454             lea edx, [esp + 0x54]
// 0083e2e3  52                   push edx
// 0083e2e4  e815c3fcff           call 0x80a5fe
// 0083e2e9  8b442460             mov eax, dword ptr [esp + 0x60]
// 0083e2ed  3bc7                 cmp eax, edi
// 0083e2ef  7d02                 jge 0x83e2f3
// 0083e2f1  8bf8                 mov edi, eax
// 0083e2f3  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 0083e2fa  50                   push eax
// 0083e2fb  8bce                 mov ecx, esi
// 0083e2fd  e8eeeaffff           call 0x83cdf0
// 0083e302  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0083e309  8be8                 mov ebp, eax
// 0083e30b  e8901dffff           call 0x8300a0
// 0083e310  8bc8                 mov ecx, eax
// 0083e312  8b442414             mov eax, dword ptr [esp + 0x14]
// 0083e316  8d1428               lea edx, [eax + ebp]
// 0083e319  8954242c             mov dword ptr [esp + 0x2c], edx
// 0083e31d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0083e321  894c2410             mov dword ptr [esp + 0x10], ecx
// 0083e325  03c8                 add ecx, eax
// 0083e327  89542434             mov dword ptr [esp + 0x34], edx
// 0083e32b  894c2424             mov dword ptr [esp + 0x24], ecx
// 0083e32f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083e333  42                   inc edx
// 0083e334  8954243c             mov dword ptr [esp + 0x3c], edx
// 0083e338  894c2428             mov dword ptr [esp + 0x28], ecx
// 0083e33c  894c2438             mov dword ptr [esp + 0x38], ecx
// 0083e340  8d50ff               lea edx, [eax - 1]
// 0083e343  894c2448             mov dword ptr [esp + 0x48], ecx
// 0083e347  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0083e34a  897c2430             mov dword ptr [esp + 0x30], edi
// 0083e34e  897c2440             mov dword ptr [esp + 0x40], edi
// 0083e352  89542444             mov dword ptr [esp + 0x44], edx
// 0083e356  8944244c             mov dword ptr [esp + 0x4c], eax
// 0083e35a  897c2450             mov dword ptr [esp + 0x50], edi
// 0083e35e  e8bbe21800           call 0x9cc61e
// 0083e363  8bd8                 mov ebx, eax
// 0083e365  81e300004000         and ebx, 0x400000
// 0083e36b  7421                 je 0x83e38e
// 0083e36d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0083e371  2b442410             sub eax, dword ptr [esp + 0x10]
// 0083e375  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083e379  8b542414             mov edx, dword ptr [esp + 0x14]
// 0083e37d  57                   push edi
// 0083e37e  50                   push eax
// 0083e37f  51                   push ecx
// 0083e380  2bd5                 sub edx, ebp
// 0083e382  52                   push edx
// 0083e383  8d442434             lea eax, [esp + 0x34]
// 0083e387  50                   push eax
// 0083e388  ff15c81ba400         call dword ptr [0xa41bc8]
// 0083e38e  6a01                 push 1
// 0083e390  8d4c2478             lea ecx, [esp + 0x78]
// 0083e394  e827f10100           call 0x85d4c0
// 0083e399  8d442434             lea eax, [esp + 0x34]
// 0083e39d  85db                 test ebx, ebx
// 0083e39f  7504                 jne 0x83e3a5
// 0083e3a1  8d442444             lea eax, [esp + 0x44]
// 0083e3a5  8b08                 mov ecx, dword ptr [eax]
// 0083e3a7  8b5004               mov edx, dword ptr [eax + 4]
// 0083e3aa  894c247c             mov dword ptr [esp + 0x7c], ecx
// 0083e3ae  8b4808               mov ecx, dword ptr [eax + 8]
// 0083e3b1  89942480000000       mov dword ptr [esp + 0x80], edx
// 0083e3b8  8b500c               mov edx, dword ptr [eax + 0xc]
// 0083e3bb  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 0083e3c2  89942488000000       mov dword ptr [esp + 0x88], edx
// 0083e3c9  8d442444             lea eax, [esp + 0x44]
// 0083e3cd  85db                 test ebx, ebx
// 0083e3cf  7504                 jne 0x83e3d5
// 0083e3d1  8d442434             lea eax, [esp + 0x34]
// 0083e3d5  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0083e3dc  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 0083e3e3  6a01                 push 1
// 0083e3e5  51                   push ecx
// 0083e3e6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0083e3ea  52                   push edx
// 0083e3eb  8b542434             mov edx, dword ptr [esp + 0x34]
// 0083e3ef  50                   push eax
// 0083e3f0  83ec10               sub esp, 0x10
// 0083e3f3  8bc4                 mov eax, esp
// 0083e3f5  8908                 mov dword ptr [eax], ecx
// 0083e3f7  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0083e3fb  895004               mov dword ptr [eax + 4], edx
// 0083e3fe  8b542450             mov edx, dword ptr [esp + 0x50]
// 0083e402  894808               mov dword ptr [eax + 8], ecx
// 0083e405  89500c               mov dword ptr [eax + 0xc], edx
// 0083e408  8b4624               mov eax, dword ptr [esi + 0x24]
// 0083e40b  50                   push eax
// 0083e40c  8d8c2498000000       lea ecx, [esp + 0x98]
// 0083e413  e838f10100           call 0x85d550
// 0083e418  85c0                 test eax, eax
// 0083e41a  7420                 je 0x83e43c
// 0083e41c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0083e420  2b4c244c             sub ecx, dword ptr [esp + 0x4c]
// 0083e424  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 0083e42b  51                   push ecx
// 0083e42c  52                   push edx
// 0083e42d  8bce                 mov ecx, esi
// 0083e42f  e84cf3ffff           call 0x83d780
// 0083e434  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0083e437  e83452ffff           call 0x833670
// 0083e43c  5f                   pop edi
// 0083e43d  5e                   pop esi
// 0083e43e  5d                   pop ebp
// 0083e43f  5b                   pop ebx
// 0083e440  83c47c               add esp, 0x7c
// 0083e443  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?TrackColumn@CXTPReportHeader@@IAEXPAVCXTPReportColumn@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
