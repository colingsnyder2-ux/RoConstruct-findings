// roc 2012-06 00a0c070  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0c070
//
// 00a0c070  83ec20               sub esp, 0x20
// 00a0c073  53                   push ebx
// 00a0c074  56                   push esi
// 00a0c075  57                   push edi
// 00a0c076  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00a0c07a  8bd9                 mov ebx, ecx
// 00a0c07c  8bcf                 mov ecx, edi
// 00a0c07e  e84fd50800           call 0xa995d2
// 00a0c083  a900410000           test eax, 0x4100
// 00a0c088  742f                 je 0xa0c0b9
// 00a0c08a  8bb374040000         mov esi, dword ptr [ebx + 0x474]
// 00a0c090  83feff               cmp esi, -1
// 00a0c093  7506                 jne 0xa0c09b
// 00a0c095  8bb370040000         mov esi, dword ptr [ebx + 0x470]
// 00a0c09b  57                   push edi
// 00a0c09c  8d4c2420             lea ecx, [esp + 0x20]
// 00a0c0a0  e8fb90fcff           call 0x9d51a0
// 00a0c0a5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a0c0a9  56                   push esi
// 00a0c0aa  50                   push eax
// 00a0c0ab  e8fc6df7ff           call 0x982eac
// 00a0c0b0  5f                   pop edi
// 00a0c0b1  5e                   pop esi
// 00a0c0b2  5b                   pop ebx
// 00a0c0b3  83c420               add esp, 0x20
// 00a0c0b6  c20800               ret 8
// 00a0c0b9  57                   push edi
// 00a0c0ba  8d4c2410             lea ecx, [esp + 0x10]
// 00a0c0be  e8dd90fcff           call 0x9d51a0
// 00a0c0c3  8b742414             mov esi, dword ptr [esp + 0x14]
// 00a0c0c7  8b3dfc3bb200         mov edi, dword ptr [0xb23bfc]
// 00a0c0cd  2b74240c             sub esi, dword ptr [esp + 0xc]
// 00a0c0d1  6a10                 push 0x10
// 00a0c0d3  ffd7                 call edi
// 00a0c0d5  99                   cdq 
// 00a0c0d6  2bc2                 sub eax, edx
// 00a0c0d8  d1f8                 sar eax, 1
// 00a0c0da  3bf0                 cmp esi, eax
// 00a0c0dc  7e0a                 jle 0xa0c0e8
// 00a0c0de  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a0c0e2  2b44240c             sub eax, dword ptr [esp + 0xc]
// 00a0c0e6  eb09                 jmp 0xa0c0f1
// 00a0c0e8  6a10                 push 0x10
// 00a0c0ea  ffd7                 call edi
// 00a0c0ec  99                   cdq 
// 00a0c0ed  2bc2                 sub eax, edx
// 00a0c0ef  d1f8                 sar eax, 1
// 00a0c0f1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a0c0f5  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a0c0f9  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00a0c0fd  8d4c240c             lea ecx, [esp + 0xc]
// 00a0c101  51                   push ecx
// 00a0c102  89442428             mov dword ptr [esp + 0x28], eax
// 00a0c106  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a0c10a  6a01                 push 1
// 00a0c10c  89542428             mov dword ptr [esp + 0x28], edx
// 00a0c110  81c35c040000         add ebx, 0x45c
// 00a0c116  53                   push ebx
// 00a0c117  8d542428             lea edx, [esp + 0x28]
// 00a0c11b  89442434             mov dword ptr [esp + 0x34], eax
// 00a0c11f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a0c123  52                   push edx
// 00a0c124  50                   push eax
// 00a0c125  e866b0fcff           call 0x9d7190
// 00a0c12a  8bc8                 mov ecx, eax
// 00a0c12c  e87fb3fcff           call 0x9d74b0
// 00a0c131  5f                   pop edi
// 00a0c132  5e                   pop esi
// 00a0c133  5b                   pop ebx
// 00a0c134  83c420               add esp, 0x20
// 00a0c137  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?FillDockBar@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPDockBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
