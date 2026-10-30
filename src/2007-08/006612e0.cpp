// from server: 100% by auto
// roc 2007-08 006612e0  unit: CXTPReportHeader  size: 520 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006612e0
//
// 006612e0  83ec7c               sub esp, 0x7c
// 006612e3  53                   push ebx
// 006612e4  55                   push ebp
// 006612e5  56                   push esi
// 006612e6  8bf1                 mov esi, ecx
// 006612e8  8b4624               mov eax, dword ptr [esi + 0x24]
// 006612eb  57                   push edi
// 006612ec  50                   push eax
// 006612ed  8d4c2468             lea ecx, [esp + 0x68]
// 006612f1  e80aed0100           call 0x680000
// 006612f6  8b5624               mov edx, dword ptr [esi + 0x24]
// 006612f9  8b4220               mov eax, dword ptr [edx + 0x20]
// 006612fc  8d8c2494000000       lea ecx, [esp + 0x94]
// 00661303  51                   push ecx
// 00661304  50                   push eax
// 00661305  ff15f0ed7700         call dword ptr [0x77edf0]
// 0066130b  8d4c2414             lea ecx, [esp + 0x14]
// 0066130f  51                   push ecx
// 00661310  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00661317  e8840e0300           call 0x6921a0
// 0066131c  8b542470             mov edx, dword ptr [esp + 0x70]
// 00661320  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00661323  8d442414             lea eax, [esp + 0x14]
// 00661327  50                   push eax
// 00661328  89542424             mov dword ptr [esp + 0x24], edx
// 0066132c  e8ddeefcff           call 0x63020e
// 00661331  8b4624               mov eax, dword ptr [esi + 0x24]
// 00661334  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00661337  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0066133b  51                   push ecx
// 0066133c  ff1530ed7700         call dword ptr [0x77ed30]
// 00661342  50                   push eax
// 00661343  e876700d00           call 0x7383be
// 00661348  8bd8                 mov ebx, eax
// 0066134a  85db                 test ebx, ebx
// 0066134c  7445                 je 0x661393
// 0066134e  8b4308               mov eax, dword ptr [ebx + 8]
// 00661351  6a00                 push 0
// 00661353  8d542458             lea edx, [esp + 0x58]
// 00661357  52                   push edx
// 00661358  50                   push eax
// 00661359  ff15e4d07700         call dword ptr [0x77d0e4]
// 0066135f  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00661362  8b5624               mov edx, dword ptr [esi + 0x24]
// 00661365  8be8                 mov ebp, eax
// 00661367  8b4220               mov eax, dword ptr [edx + 0x20]
// 0066136a  51                   push ecx
// 0066136b  50                   push eax
// 0066136c  ff1524ed7700         call dword ptr [0x77ed24]
// 00661372  8bcd                 mov ecx, ebp
// 00661374  83e103               and ecx, 3
// 00661377  80f903               cmp cl, 3
// 0066137a  7517                 jne 0x661393
// 0066137c  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0066137f  8d542454             lea edx, [esp + 0x54]
// 00661383  52                   push edx
// 00661384  e885eefcff           call 0x63020e
// 00661389  8b442460             mov eax, dword ptr [esp + 0x60]
// 0066138d  3bc7                 cmp eax, edi
// 0066138f  7d02                 jge 0x661393
// 00661391  8bf8                 mov edi, eax
// 00661393  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 0066139a  50                   push eax
// 0066139b  8bce                 mov ecx, esi
// 0066139d  e83eebffff           call 0x65fee0
// 006613a2  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 006613a9  8be8                 mov ebp, eax
// 006613ab  e820d6ffff           call 0x65e9d0
// 006613b0  8bc8                 mov ecx, eax
// 006613b2  8b442414             mov eax, dword ptr [esp + 0x14]
// 006613b6  8d1428               lea edx, [eax + ebp]
// 006613b9  8954242c             mov dword ptr [esp + 0x2c], edx
// 006613bd  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006613c1  894c2410             mov dword ptr [esp + 0x10], ecx
// 006613c5  03c8                 add ecx, eax
// 006613c7  89542434             mov dword ptr [esp + 0x34], edx
// 006613cb  894c2424             mov dword ptr [esp + 0x24], ecx
// 006613cf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006613d3  83c201               add edx, 1
// 006613d6  8954243c             mov dword ptr [esp + 0x3c], edx
// 006613da  894c2428             mov dword ptr [esp + 0x28], ecx
// 006613de  894c2438             mov dword ptr [esp + 0x38], ecx
// 006613e2  8d50ff               lea edx, [eax - 1]
// 006613e5  894c2448             mov dword ptr [esp + 0x48], ecx
// 006613e9  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006613ec  897c2430             mov dword ptr [esp + 0x30], edi
// 006613f0  897c2440             mov dword ptr [esp + 0x40], edi
// 006613f4  89542444             mov dword ptr [esp + 0x44], edx
// 006613f8  8944244c             mov dword ptr [esp + 0x4c], eax
// 006613fc  897c2450             mov dword ptr [esp + 0x50], edi
// 00661400  e81d6f0d00           call 0x738322
// 00661405  8bd8                 mov ebx, eax
// 00661407  81e300004000         and ebx, 0x400000
// 0066140d  7421                 je 0x661430
// 0066140f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00661413  2b442410             sub eax, dword ptr [esp + 0x10]
// 00661417  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066141b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0066141f  57                   push edi
// 00661420  50                   push eax
// 00661421  51                   push ecx
// 00661422  2bd5                 sub edx, ebp
// 00661424  52                   push edx
// 00661425  8d442434             lea eax, [esp + 0x34]
// 00661429  50                   push eax
// 0066142a  ff1578ed7700         call dword ptr [0x77ed78]
// 00661430  6a01                 push 1
// 00661432  8d4c2478             lea ecx, [esp + 0x78]
// 00661436  e8b5f40100           call 0x6808f0
// 0066143b  85db                 test ebx, ebx
// 0066143d  8d442434             lea eax, [esp + 0x34]
// 00661441  7504                 jne 0x661447
// 00661443  8d442444             lea eax, [esp + 0x44]
// 00661447  85db                 test ebx, ebx
// 00661449  8b08                 mov ecx, dword ptr [eax]
// 0066144b  8b5004               mov edx, dword ptr [eax + 4]
// 0066144e  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00661452  8b4808               mov ecx, dword ptr [eax + 8]
// 00661455  89942480000000       mov dword ptr [esp + 0x80], edx
// 0066145c  8b500c               mov edx, dword ptr [eax + 0xc]
// 0066145f  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 00661466  89942488000000       mov dword ptr [esp + 0x88], edx
// 0066146d  8d442444             lea eax, [esp + 0x44]
// 00661471  7504                 jne 0x661477
// 00661473  8d442434             lea eax, [esp + 0x34]
// 00661477  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0066147e  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 00661485  6a01                 push 1
// 00661487  51                   push ecx
// 00661488  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0066148c  52                   push edx
// 0066148d  8b542434             mov edx, dword ptr [esp + 0x34]
// 00661491  50                   push eax
// 00661492  83ec10               sub esp, 0x10
// 00661495  8bc4                 mov eax, esp
// 00661497  8908                 mov dword ptr [eax], ecx
// 00661499  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0066149d  895004               mov dword ptr [eax + 4], edx
// 006614a0  8b542450             mov edx, dword ptr [esp + 0x50]
// 006614a4  894808               mov dword ptr [eax + 8], ecx
// 006614a7  89500c               mov dword ptr [eax + 0xc], edx
// 006614aa  8b4624               mov eax, dword ptr [esi + 0x24]
// 006614ad  50                   push eax
// 006614ae  8d8c2498000000       lea ecx, [esp + 0x98]
// 006614b5  e8c6f40100           call 0x680980
// 006614ba  85c0                 test eax, eax
// 006614bc  7420                 je 0x6614de
// 006614be  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006614c2  2b4c244c             sub ecx, dword ptr [esp + 0x4c]
// 006614c6  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 006614cd  51                   push ecx
// 006614ce  52                   push edx
// 006614cf  8bce                 mov ecx, esi
// 006614d1  e8aaf3ffff           call 0x660880
// 006614d6  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006614d9  e8325fffff           call 0x657410
// 006614de  5f                   pop edi
// 006614df  5e                   pop esi
// 006614e0  5d                   pop ebp
// 006614e1  5b                   pop ebx
// 006614e2  83c47c               add esp, 0x7c
// 006614e5  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportHeader.cpp (function ?TrackColumn@CXTPReportHeader@@IAEXPAVCXTPReportColumn@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportHeader.cpp
