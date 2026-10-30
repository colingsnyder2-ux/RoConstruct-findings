// roc 2009-12 008a14d0  unit: CXTPReportInplaceList  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a14d0
//
// 008a14d0  6aff                 push -1
// 008a14d2  6812219600           push 0x962112
// 008a14d7  64a100000000         mov eax, dword ptr fs:[0]
// 008a14dd  50                   push eax
// 008a14de  83ec08               sub esp, 8
// 008a14e1  53                   push ebx
// 008a14e2  55                   push ebp
// 008a14e3  56                   push esi
// 008a14e4  57                   push edi
// 008a14e5  a10052b600           mov eax, dword ptr [0xb65200]
// 008a14ea  33c4                 xor eax, esp
// 008a14ec  50                   push eax
// 008a14ed  8d44241c             lea eax, [esp + 0x1c]
// 008a14f1  64a300000000         mov dword ptr fs:[0], eax
// 008a14f7  8bf1                 mov esi, ecx
// 008a14f9  8d4c2418             lea ecx, [esp + 0x18]
// 008a14fd  ff1574de9800         call dword ptr [0x98de74]
// 008a1503  33ff                 xor edi, edi
// 008a1505  8d4c2414             lea ecx, [esp + 0x14]
// 008a1509  897c2424             mov dword ptr [esp + 0x24], edi
// 008a150d  ff1574de9800         call dword ptr [0x98de74]
// 008a1513  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008a1517  8d442418             lea eax, [esp + 0x18]
// 008a151b  50                   push eax
// 008a151c  51                   push ecx
// 008a151d  8bce                 mov ecx, esi
// 008a151f  c644242c01           mov byte ptr [esp + 0x2c], 1
// 008a1524  e8434f0800           call 0x92646c
// 008a1529  8b5660               mov edx, dword ptr [esi + 0x60]
// 008a152c  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008a152f  52                   push edx
// 008a1530  e87b9ff7ff           call 0x81b4b0
// 008a1535  8b5828               mov ebx, dword ptr [eax + 0x28]
// 008a1538  8bcb                 mov ecx, ebx
// 008a153a  e841c7faff           call 0x84dc80
// 008a153f  8be8                 mov ebp, eax
// 008a1541  3bef                 cmp ebp, edi
// 008a1543  7e58                 jle 0x8a159d
// 008a1545  57                   push edi
// 008a1546  8bcb                 mov ecx, ebx
// 008a1548  e8e3190000           call 0x8a2f30
// 008a154d  8944242c             mov dword ptr [esp + 0x2c], eax
// 008a1551  83c020               add eax, 0x20
// 008a1554  50                   push eax
// 008a1555  8d4c2418             lea ecx, [esp + 0x18]
// 008a1559  ff1538d59800         call dword ptr [0x98d538]
// 008a155f  8d4c2414             lea ecx, [esp + 0x14]
// 008a1563  ff1580de9800         call dword ptr [0x98de80]
// 008a1569  50                   push eax
// 008a156a  8d4c241c             lea ecx, [esp + 0x1c]
// 008a156e  ff15d4cf9800         call dword ptr [0x98cfd4]
// 008a1574  85c0                 test eax, eax
// 008a1576  7407                 je 0x8a157f
// 008a1578  47                   inc edi
// 008a1579  3bfd                 cmp edi, ebp
// 008a157b  7cc8                 jl 0x8a1545
// 008a157d  eb1e                 jmp 0x8a159d
// 008a157f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008a1583  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008a1586  8b01                 mov eax, dword ptr [ecx]
// 008a1588  8b8034020000         mov eax, dword ptr [eax + 0x234]
// 008a158e  52                   push edx
// 008a158f  8b5660               mov edx, dword ptr [esi + 0x60]
// 008a1592  52                   push edx
// 008a1593  8b5664               mov edx, dword ptr [esi + 0x64]
// 008a1596  52                   push edx
// 008a1597  8b565c               mov edx, dword ptr [esi + 0x5c]
// 008a159a  52                   push edx
// 008a159b  ffd0                 call eax
// 008a159d  8d4c2414             lea ecx, [esp + 0x14]
// 008a15a1  ff15c0de9800         call dword ptr [0x98dec0]
// 008a15a7  8d4c2418             lea ecx, [esp + 0x18]
// 008a15ab  ff15c0de9800         call dword ptr [0x98dec0]
// 008a15b1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a15b5  64890d00000000       mov dword ptr fs:[0], ecx
// 008a15bc  59                   pop ecx
// 008a15bd  5f                   pop edi
// 008a15be  5e                   pop esi
// 008a15bf  5d                   pop ebp
// 008a15c0  5b                   pop ebx
// 008a15c1  83c414               add esp, 0x14
// 008a15c4  c20400               ret 4
// copied from an identical function in another client (function ?OnSelectionChanged@CXTPReportInplaceList@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportInplaceControls.cpp