// roc 2009-12 00883500  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00883500
//
// 00883500  83ec20               sub esp, 0x20
// 00883503  53                   push ebx
// 00883504  56                   push esi
// 00883505  57                   push edi
// 00883506  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0088350a  8bd9                 mov ebx, ecx
// 0088350c  8bcf                 mov ecx, edi
// 0088350e  e85f2f0a00           call 0x926472
// 00883513  a900410000           test eax, 0x4100
// 00883518  742f                 je 0x883549
// 0088351a  8bb374040000         mov esi, dword ptr [ebx + 0x474]
// 00883520  83feff               cmp esi, -1
// 00883523  7506                 jne 0x88352b
// 00883525  8bb370040000         mov esi, dword ptr [ebx + 0x470]
// 0088352b  57                   push edi
// 0088352c  8d4c2420             lea ecx, [esp + 0x20]
// 00883530  e89b7dfcff           call 0x84b2d0
// 00883535  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00883539  56                   push esi
// 0088353a  50                   push eax
// 0088353b  e8be10f7ff           call 0x7f45fe
// 00883540  5f                   pop edi
// 00883541  5e                   pop esi
// 00883542  5b                   pop ebx
// 00883543  83c420               add esp, 0x20
// 00883546  c20800               ret 8
// 00883549  57                   push edi
// 0088354a  8d4c2410             lea ecx, [esp + 0x10]
// 0088354e  e87d7dfcff           call 0x84b2d0
// 00883553  8b742414             mov esi, dword ptr [esp + 0x14]
// 00883557  8b3ddccb9800         mov edi, dword ptr [0x98cbdc]
// 0088355d  2b74240c             sub esi, dword ptr [esp + 0xc]
// 00883561  6a10                 push 0x10
// 00883563  ffd7                 call edi
// 00883565  99                   cdq 
// 00883566  2bc2                 sub eax, edx
// 00883568  d1f8                 sar eax, 1
// 0088356a  3bf0                 cmp esi, eax
// 0088356c  7e0a                 jle 0x883578
// 0088356e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00883572  2b44240c             sub eax, dword ptr [esp + 0xc]
// 00883576  eb09                 jmp 0x883581
// 00883578  6a10                 push 0x10
// 0088357a  ffd7                 call edi
// 0088357c  99                   cdq 
// 0088357d  2bc2                 sub eax, edx
// 0088357f  d1f8                 sar eax, 1
// 00883581  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00883585  8b542410             mov edx, dword ptr [esp + 0x10]
// 00883589  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0088358d  8d4c240c             lea ecx, [esp + 0xc]
// 00883591  51                   push ecx
// 00883592  89442428             mov dword ptr [esp + 0x28], eax
// 00883596  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088359a  6a01                 push 1
// 0088359c  89542428             mov dword ptr [esp + 0x28], edx
// 008835a0  81c35c040000         add ebx, 0x45c
// 008835a6  53                   push ebx
// 008835a7  8d542428             lea edx, [esp + 0x28]
// 008835ab  89442434             mov dword ptr [esp + 0x34], eax
// 008835af  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008835b3  52                   push edx
// 008835b4  50                   push eax
// 008835b5  e8e69cfcff           call 0x84d2a0
// 008835ba  8bc8                 mov ecx, eax
// 008835bc  e8ff9ffcff           call 0x84d5c0
// 008835c1  5f                   pop edi
// 008835c2  5e                   pop esi
// 008835c3  5b                   pop ebx
// 008835c4  83c420               add esp, 0x20
// 008835c7  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?FillDockBar@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPDockBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
