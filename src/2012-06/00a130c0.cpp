// roc 2012-06 00a130c0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 337 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a130c0
//
// 00a130c0  83ec10               sub esp, 0x10
// 00a130c3  837c243000           cmp dword ptr [esp + 0x30], 0
// 00a130c8  53                   push ebx
// 00a130c9  55                   push ebp
// 00a130ca  56                   push esi
// 00a130cb  57                   push edi
// 00a130cc  8bd9                 mov ebx, ecx
// 00a130ce  0f8422010000         je 0xa131f6
// 00a130d4  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a130d8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a130dc  2b542430             sub edx, dword ptr [esp + 0x30]
// 00a130e0  b801000000           mov eax, 1
// 00a130e5  41                   inc ecx
// 00a130e6  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a130ea  03d0                 add edx, eax
// 00a130ec  6a29                 push 0x29
// 00a130ee  8bcb                 mov ecx, ebx
// 00a130f0  89442414             mov dword ptr [esp + 0x14], eax
// 00a130f4  89442418             mov dword ptr [esp + 0x18], eax
// 00a130f8  89542420             mov dword ptr [esp + 0x20], edx
// 00a130fc  e88f47f7ff           call 0x987890
// 00a13101  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00a13105  50                   push eax
// 00a13106  8d442414             lea eax, [esp + 0x14]
// 00a1310a  50                   push eax
// 00a1310b  8bcd                 mov ecx, ebp
// 00a1310d  e89afdf6ff           call 0x982eac
// 00a13112  6aff                 push -1
// 00a13114  6aff                 push -1
// 00a13116  8d4c2418             lea ecx, [esp + 0x18]
// 00a1311a  51                   push ecx
// 00a1311b  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a13121  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a13125  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 00a13129  b910000000           mov ecx, 0x10
// 00a1312e  99                   cdq 
// 00a1312f  2bc2                 sub eax, edx
// 00a13131  d1f8                 sar eax, 1
// 00a13133  8d78f6               lea edi, [eax - 0xa]
// 00a13136  83ff10               cmp edi, 0x10
// 00a13139  7f02                 jg 0xa1313d
// 00a1313b  8bcf                 mov ecx, edi
// 00a1313d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a13141  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a13145  03c2                 add eax, edx
// 00a13147  99                   cdq 
// 00a13148  2bc2                 sub eax, edx
// 00a1314a  d1f8                 sar eax, 1
// 00a1314c  8bf0                 mov esi, eax
// 00a1314e  2bf1                 sub esi, ecx
// 00a13150  83ff10               cmp edi, 0x10
// 00a13153  7e05                 jle 0xa1315a
// 00a13155  bf10000000           mov edi, 0x10
// 00a1315a  03f8                 add edi, eax
// 00a1315c  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 00a13161  7449                 je 0xa131ac
// 00a13163  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a13167  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a1316b  6a1f                 push 0x1f
// 00a1316d  6a20                 push 0x20
// 00a1316f  83ec10               sub esp, 0x10
// 00a13172  8bc4                 mov eax, esp
// 00a13174  8908                 mov dword ptr [eax], ecx
// 00a13176  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a1317a  895004               mov dword ptr [eax + 4], edx
// 00a1317d  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a13181  894808               mov dword ptr [eax + 8], ecx
// 00a13184  55                   push ebp
// 00a13185  8bcb                 mov ecx, ebx
// 00a13187  89500c               mov dword ptr [eax + 0xc], edx
// 00a1318a  e8e157f7ff           call 0x988970
// 00a1318f  3bf7                 cmp esi, edi
// 00a13191  7d63                 jge 0xa131f6
// 00a13193  6a2d                 push 0x2d
// 00a13195  6a04                 push 4
// 00a13197  57                   push edi
// 00a13198  6a04                 push 4
// 00a1319a  56                   push esi
// 00a1319b  55                   push ebp
// 00a1319c  8bcb                 mov ecx, ebx
// 00a1319e  e80d5cf7ff           call 0x988db0
// 00a131a3  6a2d                 push 0x2d
// 00a131a5  6a06                 push 6
// 00a131a7  57                   push edi
// 00a131a8  6a06                 push 6
// 00a131aa  eb41                 jmp 0xa131ed
// 00a131ac  6a1e                 push 0x1e
// 00a131ae  8bcb                 mov ecx, ebx
// 00a131b0  e8db46f7ff           call 0x987890
// 00a131b5  50                   push eax
// 00a131b6  8d442414             lea eax, [esp + 0x14]
// 00a131ba  50                   push eax
// 00a131bb  8bcd                 mov ecx, ebp
// 00a131bd  e8eafcf6ff           call 0x982eac
// 00a131c2  3bf7                 cmp esi, edi
// 00a131c4  7d30                 jge 0xa131f6
// 00a131c6  6a26                 push 0x26
// 00a131c8  6a03                 push 3
// 00a131ca  57                   push edi
// 00a131cb  6a03                 push 3
// 00a131cd  56                   push esi
// 00a131ce  55                   push ebp
// 00a131cf  8bcb                 mov ecx, ebx
// 00a131d1  e8da5bf7ff           call 0x988db0
// 00a131d6  6a26                 push 0x26
// 00a131d8  6a05                 push 5
// 00a131da  57                   push edi
// 00a131db  6a05                 push 5
// 00a131dd  56                   push esi
// 00a131de  55                   push ebp
// 00a131df  8bcb                 mov ecx, ebx
// 00a131e1  e8ca5bf7ff           call 0x988db0
// 00a131e6  6a26                 push 0x26
// 00a131e8  6a07                 push 7
// 00a131ea  57                   push edi
// 00a131eb  6a07                 push 7
// 00a131ed  56                   push esi
// 00a131ee  55                   push ebp
// 00a131ef  8bcb                 mov ecx, ebx
// 00a131f1  e8ba5bf7ff           call 0x988db0
// 00a131f6  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a131fa  5f                   pop edi
// 00a131fb  5e                   pop esi
// 00a131fc  5d                   pop ebp
// 00a131fd  c70000000000         mov dword ptr [eax], 0
// 00a13203  c7400409000000       mov dword ptr [eax + 4], 9
// 00a1320a  5b                   pop ebx
// 00a1320b  83c410               add esp, 0x10
// 00a1320e  c22000               ret 0x20
// library xtp-13.2.1/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawTearOffGripper@CXTPOfficeTheme@@UAE?AVCSize@@PAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/CommandBars/XTPOfficeTheme.cpp
