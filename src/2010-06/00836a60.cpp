// roc 2010-06 00836a60  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00836a60
//
// 00836a60  83ec20               sub esp, 0x20
// 00836a63  53                   push ebx
// 00836a64  56                   push esi
// 00836a65  57                   push edi
// 00836a66  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00836a6a  8bd9                 mov ebx, ecx
// 00836a6c  8bcf                 mov ecx, edi
// 00836a6e  e86b631400           call 0x97cdde
// 00836a73  a900410000           test eax, 0x4100
// 00836a78  742f                 je 0x836aa9
// 00836a7a  8bb374040000         mov esi, dword ptr [ebx + 0x474]
// 00836a80  83feff               cmp esi, -1
// 00836a83  7506                 jne 0x836a8b
// 00836a85  8bb370040000         mov esi, dword ptr [ebx + 0x470]
// 00836a8b  57                   push edi
// 00836a8c  8d4c2420             lea ecx, [esp + 0x20]
// 00836a90  e87b88fcff           call 0x7ff310
// 00836a95  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00836a99  56                   push esi
// 00836a9a  50                   push eax
// 00836a9b  e89e1cf7ff           call 0x7a873e
// 00836aa0  5f                   pop edi
// 00836aa1  5e                   pop esi
// 00836aa2  5b                   pop ebx
// 00836aa3  83c420               add esp, 0x20
// 00836aa6  c20800               ret 8
// 00836aa9  57                   push edi
// 00836aaa  8d4c2410             lea ecx, [esp + 0x10]
// 00836aae  e85d88fcff           call 0x7ff310
// 00836ab3  8b742414             mov esi, dword ptr [esp + 0x14]
// 00836ab7  8b3d6cba9e00         mov edi, dword ptr [0x9eba6c]
// 00836abd  2b74240c             sub esi, dword ptr [esp + 0xc]
// 00836ac1  6a10                 push 0x10
// 00836ac3  ffd7                 call edi
// 00836ac5  99                   cdq 
// 00836ac6  2bc2                 sub eax, edx
// 00836ac8  d1f8                 sar eax, 1
// 00836aca  3bf0                 cmp esi, eax
// 00836acc  7e0a                 jle 0x836ad8
// 00836ace  8b442414             mov eax, dword ptr [esp + 0x14]
// 00836ad2  2b44240c             sub eax, dword ptr [esp + 0xc]
// 00836ad6  eb09                 jmp 0x836ae1
// 00836ad8  6a10                 push 0x10
// 00836ada  ffd7                 call edi
// 00836adc  99                   cdq 
// 00836add  2bc2                 sub eax, edx
// 00836adf  d1f8                 sar eax, 1
// 00836ae1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00836ae5  8b542410             mov edx, dword ptr [esp + 0x10]
// 00836ae9  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00836aed  8d4c240c             lea ecx, [esp + 0xc]
// 00836af1  51                   push ecx
// 00836af2  89442428             mov dword ptr [esp + 0x28], eax
// 00836af6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00836afa  6a01                 push 1
// 00836afc  89542428             mov dword ptr [esp + 0x28], edx
// 00836b00  81c35c040000         add ebx, 0x45c
// 00836b06  53                   push ebx
// 00836b07  8d542428             lea edx, [esp + 0x28]
// 00836b0b  89442434             mov dword ptr [esp + 0x34], eax
// 00836b0f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00836b13  52                   push edx
// 00836b14  50                   push eax
// 00836b15  e8e6a7fcff           call 0x801300
// 00836b1a  8bc8                 mov ecx, eax
// 00836b1c  e8ffaafcff           call 0x801620
// 00836b21  5f                   pop edi
// 00836b22  5e                   pop esi
// 00836b23  5b                   pop ebx
// 00836b24  83c420               add esp, 0x20
// 00836b27  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?FillDockBar@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPDockBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
