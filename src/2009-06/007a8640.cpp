// roc 2009-06 007a8640  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a8640
//
// 007a8640  83ec20               sub esp, 0x20
// 007a8643  53                   push ebx
// 007a8644  56                   push esi
// 007a8645  57                   push edi
// 007a8646  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 007a864a  8bd9                 mov ebx, ecx
// 007a864c  8bcf                 mov ecx, edi
// 007a864e  e889380a00           call 0x84bedc
// 007a8653  a900410000           test eax, 0x4100
// 007a8658  742f                 je 0x7a8689
// 007a865a  8bb374040000         mov esi, dword ptr [ebx + 0x474]
// 007a8660  83feff               cmp esi, -1
// 007a8663  7506                 jne 0x7a866b
// 007a8665  8bb370040000         mov esi, dword ptr [ebx + 0x470]
// 007a866b  57                   push edi
// 007a866c  8d4c2420             lea ecx, [esp + 0x20]
// 007a8670  e85b7efcff           call 0x7704d0
// 007a8675  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007a8679  56                   push esi
// 007a867a  50                   push eax
// 007a867b  e85011f7ff           call 0x7197d0
// 007a8680  5f                   pop edi
// 007a8681  5e                   pop esi
// 007a8682  5b                   pop ebx
// 007a8683  83c420               add esp, 0x20
// 007a8686  c20800               ret 8
// 007a8689  57                   push edi
// 007a868a  8d4c2410             lea ecx, [esp + 0x10]
// 007a868e  e83d7efcff           call 0x7704d0
// 007a8693  8b742414             mov esi, dword ptr [esp + 0x14]
// 007a8697  8b3ddced8900         mov edi, dword ptr [0x89eddc]
// 007a869d  2b74240c             sub esi, dword ptr [esp + 0xc]
// 007a86a1  6a10                 push 0x10
// 007a86a3  ffd7                 call edi
// 007a86a5  99                   cdq 
// 007a86a6  2bc2                 sub eax, edx
// 007a86a8  d1f8                 sar eax, 1
// 007a86aa  3bf0                 cmp esi, eax
// 007a86ac  7e0a                 jle 0x7a86b8
// 007a86ae  8b442414             mov eax, dword ptr [esp + 0x14]
// 007a86b2  2b44240c             sub eax, dword ptr [esp + 0xc]
// 007a86b6  eb09                 jmp 0x7a86c1
// 007a86b8  6a10                 push 0x10
// 007a86ba  ffd7                 call edi
// 007a86bc  99                   cdq 
// 007a86bd  2bc2                 sub eax, edx
// 007a86bf  d1f8                 sar eax, 1
// 007a86c1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007a86c5  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a86c9  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007a86cd  8d4c240c             lea ecx, [esp + 0xc]
// 007a86d1  51                   push ecx
// 007a86d2  89442428             mov dword ptr [esp + 0x28], eax
// 007a86d6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007a86da  6a01                 push 1
// 007a86dc  89542428             mov dword ptr [esp + 0x28], edx
// 007a86e0  81c35c040000         add ebx, 0x45c
// 007a86e6  53                   push ebx
// 007a86e7  8d542428             lea edx, [esp + 0x28]
// 007a86eb  89442434             mov dword ptr [esp + 0x34], eax
// 007a86ef  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007a86f3  52                   push edx
// 007a86f4  50                   push eax
// 007a86f5  e8769efcff           call 0x772570
// 007a86fa  8bc8                 mov ecx, eax
// 007a86fc  e88fa1fcff           call 0x772890
// 007a8701  5f                   pop edi
// 007a8702  5e                   pop esi
// 007a8703  5b                   pop ebx
// 007a8704  83c420               add esp, 0x20
// 007a8707  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?FillDockBar@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPDockBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
