// roc 2011-06 00893a90  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00893a90
//
// 00893a90  83ec20               sub esp, 0x20
// 00893a93  53                   push ebx
// 00893a94  56                   push esi
// 00893a95  57                   push edi
// 00893a96  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00893a9a  8bd9                 mov ebx, ecx
// 00893a9c  8bcf                 mov ecx, edi
// 00893a9e  e8758b1300           call 0x9cc618
// 00893aa3  a900410000           test eax, 0x4100
// 00893aa8  742f                 je 0x893ad9
// 00893aaa  8bb374040000         mov esi, dword ptr [ebx + 0x474]
// 00893ab0  83feff               cmp esi, -1
// 00893ab3  7506                 jne 0x893abb
// 00893ab5  8bb370040000         mov esi, dword ptr [ebx + 0x470]
// 00893abb  57                   push edi
// 00893abc  8d4c2420             lea ecx, [esp + 0x20]
// 00893ac0  e8cb92fcff           call 0x85cd90
// 00893ac5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00893ac9  56                   push esi
// 00893aca  50                   push eax
// 00893acb  e85073f7ff           call 0x80ae20
// 00893ad0  5f                   pop edi
// 00893ad1  5e                   pop esi
// 00893ad2  5b                   pop ebx
// 00893ad3  83c420               add esp, 0x20
// 00893ad6  c20800               ret 8
// 00893ad9  57                   push edi
// 00893ada  8d4c2410             lea ecx, [esp + 0x10]
// 00893ade  e8ad92fcff           call 0x85cd90
// 00893ae3  8b742414             mov esi, dword ptr [esp + 0x14]
// 00893ae7  8b3de019a400         mov edi, dword ptr [0xa419e0]
// 00893aed  2b74240c             sub esi, dword ptr [esp + 0xc]
// 00893af1  6a10                 push 0x10
// 00893af3  ffd7                 call edi
// 00893af5  99                   cdq 
// 00893af6  2bc2                 sub eax, edx
// 00893af8  d1f8                 sar eax, 1
// 00893afa  3bf0                 cmp esi, eax
// 00893afc  7e0a                 jle 0x893b08
// 00893afe  8b442414             mov eax, dword ptr [esp + 0x14]
// 00893b02  2b44240c             sub eax, dword ptr [esp + 0xc]
// 00893b06  eb09                 jmp 0x893b11
// 00893b08  6a10                 push 0x10
// 00893b0a  ffd7                 call edi
// 00893b0c  99                   cdq 
// 00893b0d  2bc2                 sub eax, edx
// 00893b0f  d1f8                 sar eax, 1
// 00893b11  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00893b15  8b542410             mov edx, dword ptr [esp + 0x10]
// 00893b19  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00893b1d  8d4c240c             lea ecx, [esp + 0xc]
// 00893b21  51                   push ecx
// 00893b22  89442428             mov dword ptr [esp + 0x28], eax
// 00893b26  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00893b2a  6a01                 push 1
// 00893b2c  89542428             mov dword ptr [esp + 0x28], edx
// 00893b30  81c35c040000         add ebx, 0x45c
// 00893b36  53                   push ebx
// 00893b37  8d542428             lea edx, [esp + 0x28]
// 00893b3b  89442434             mov dword ptr [esp + 0x34], eax
// 00893b3f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00893b43  52                   push edx
// 00893b44  50                   push eax
// 00893b45  e836b2fcff           call 0x85ed80
// 00893b4a  8bc8                 mov ecx, eax
// 00893b4c  e84fb5fcff           call 0x85f0a0
// 00893b51  5f                   pop edi
// 00893b52  5e                   pop esi
// 00893b53  5b                   pop ebx
// 00893b54  83c420               add esp, 0x20
// 00893b57  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?FillDockBar@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPDockBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
