// roc 2008-06 00739f70  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00739f70
//
// 00739f70  83ec20               sub esp, 0x20
// 00739f73  53                   push ebx
// 00739f74  56                   push esi
// 00739f75  57                   push edi
// 00739f76  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00739f7a  8bd9                 mov ebx, ecx
// 00739f7c  8bcf                 mov ecx, edi
// 00739f7e  e887200800           call 0x7bc00a
// 00739f83  a900410000           test eax, 0x4100
// 00739f88  742f                 je 0x739fb9
// 00739f8a  8bb374040000         mov esi, dword ptr [ebx + 0x474]
// 00739f90  83feff               cmp esi, -1
// 00739f93  7506                 jne 0x739f9b
// 00739f95  8bb370040000         mov esi, dword ptr [ebx + 0x470]
// 00739f9b  57                   push edi
// 00739f9c  8d4c2420             lea ecx, [esp + 0x20]
// 00739fa0  e88bdbfbff           call 0x6f7b30
// 00739fa5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00739fa9  56                   push esi
// 00739faa  50                   push eax
// 00739fab  e8ae73f6ff           call 0x6a135e
// 00739fb0  5f                   pop edi
// 00739fb1  5e                   pop esi
// 00739fb2  5b                   pop ebx
// 00739fb3  83c420               add esp, 0x20
// 00739fb6  c20800               ret 8
// 00739fb9  57                   push edi
// 00739fba  8d4c2410             lea ecx, [esp + 0x10]
// 00739fbe  e86ddbfbff           call 0x6f7b30
// 00739fc3  8b742414             mov esi, dword ptr [esp + 0x14]
// 00739fc7  8b3d4c2d8000         mov edi, dword ptr [0x802d4c]
// 00739fcd  2b74240c             sub esi, dword ptr [esp + 0xc]
// 00739fd1  6a10                 push 0x10
// 00739fd3  ffd7                 call edi
// 00739fd5  99                   cdq 
// 00739fd6  2bc2                 sub eax, edx
// 00739fd8  d1f8                 sar eax, 1
// 00739fda  3bf0                 cmp esi, eax
// 00739fdc  7e0a                 jle 0x739fe8
// 00739fde  8b442414             mov eax, dword ptr [esp + 0x14]
// 00739fe2  2b44240c             sub eax, dword ptr [esp + 0xc]
// 00739fe6  eb09                 jmp 0x739ff1
// 00739fe8  6a10                 push 0x10
// 00739fea  ffd7                 call edi
// 00739fec  99                   cdq 
// 00739fed  2bc2                 sub eax, edx
// 00739fef  d1f8                 sar eax, 1
// 00739ff1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00739ff5  8b542410             mov edx, dword ptr [esp + 0x10]
// 00739ff9  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00739ffd  8d4c240c             lea ecx, [esp + 0xc]
// 0073a001  51                   push ecx
// 0073a002  89442428             mov dword ptr [esp + 0x28], eax
// 0073a006  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073a00a  6a01                 push 1
// 0073a00c  89542428             mov dword ptr [esp + 0x28], edx
// 0073a010  81c35c040000         add ebx, 0x45c
// 0073a016  53                   push ebx
// 0073a017  8d542428             lea edx, [esp + 0x28]
// 0073a01b  89442434             mov dword ptr [esp + 0x34], eax
// 0073a01f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0073a023  52                   push edx
// 0073a024  50                   push eax
// 0073a025  e8a6fbfbff           call 0x6f9bd0
// 0073a02a  8bc8                 mov ecx, eax
// 0073a02c  e8bffefbff           call 0x6f9ef0
// 0073a031  5f                   pop edi
// 0073a032  5e                   pop esi
// 0073a033  5b                   pop ebx
// 0073a034  83c420               add esp, 0x20
// 0073a037  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?FillDockBar@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPDockBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
