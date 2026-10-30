// roc 2009-12 008a3a20  unit: CXTPReportGroupRow_Batch  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a3a20
//
// 008a3a20  6aff                 push -1
// 008a3a22  6899869500           push 0x958699
// 008a3a27  64a100000000         mov eax, dword ptr fs:[0]
// 008a3a2d  50                   push eax
// 008a3a2e  51                   push ecx
// 008a3a2f  56                   push esi
// 008a3a30  a10052b600           mov eax, dword ptr [0xb65200]
// 008a3a35  33c4                 xor eax, esp
// 008a3a37  50                   push eax
// 008a3a38  8d44240c             lea eax, [esp + 0xc]
// 008a3a3c  64a300000000         mov dword ptr fs:[0], eax
// 008a3a42  8bf1                 mov esi, ecx
// 008a3a44  8b06                 mov eax, dword ptr [esi]
// 008a3a46  8b9000010000         mov edx, dword ptr [eax + 0x100]
// 008a3a4c  8d4c2408             lea ecx, [esp + 8]
// 008a3a50  51                   push ecx
// 008a3a51  8bce                 mov ecx, esi
// 008a3a53  ffd2                 call edx
// 008a3a55  8d4c2408             lea ecx, [esp + 8]
// 008a3a59  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008a3a61  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008a3a67  84c0                 test al, al
// 008a3a69  7420                 je 0x8a3a8b
// 008a3a6b  8d4c2408             lea ecx, [esp + 8]
// 008a3a6f  ff15c0de9800         call dword ptr [0x98dec0]
// 008a3a75  83c8ff               or eax, 0xffffffff
// 008a3a78  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a3a7c  64890d00000000       mov dword ptr fs:[0], ecx
// 008a3a83  59                   pop ecx
// 008a3a84  5e                   pop esi
// 008a3a85  83c410               add esp, 0x10
// 008a3a88  c20c00               ret 0xc
// 008a3a8b  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 008a3a8e  8b5630               mov edx, dword ptr [esi + 0x30]
// 008a3a91  8d442408             lea eax, [esp + 8]
// 008a3a95  50                   push eax
// 008a3a96  56                   push esi
// 008a3a97  83ec10               sub esp, 0x10
// 008a3a9a  8bc4                 mov eax, esp
// 008a3a9c  8908                 mov dword ptr [eax], ecx
// 008a3a9e  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008a3aa1  895004               mov dword ptr [eax + 4], edx
// 008a3aa4  8b5638               mov edx, dword ptr [esi + 0x38]
// 008a3aa7  894808               mov dword ptr [eax + 8], ecx
// 008a3aaa  89500c               mov dword ptr [eax + 0xc], edx
// 008a3aad  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a3ab0  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008a3ab3  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008a3ab7  51                   push ecx
// 008a3ab8  52                   push edx
// 008a3ab9  e872c5fbff           call 0x860030
// 008a3abe  83c420               add esp, 0x20
// 008a3ac1  8d4c2408             lea ecx, [esp + 8]
// 008a3ac5  ff15c0de9800         call dword ptr [0x98dec0]
// 008a3acb  8bc6                 mov eax, esi
// 008a3acd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a3ad1  64890d00000000       mov dword ptr fs:[0], ecx
// 008a3ad8  59                   pop ecx
// 008a3ad9  5e                   pop esi
// 008a3ada  83c410               add esp, 0x10
// 008a3add  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnToolHitTest@CXTPReportGroupRow@@MAEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportGroupRow.cpp