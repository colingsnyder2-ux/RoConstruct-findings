// roc 2007-03 006b1220  unit: seg_006b0000  size: 337 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b1220
//
// 006b1220  83ec10               sub esp, 0x10
// 006b1223  837c243000           cmp dword ptr [esp + 0x30], 0
// 006b1228  53                   push ebx
// 006b1229  55                   push ebp
// 006b122a  56                   push esi
// 006b122b  57                   push edi
// 006b122c  8bd9                 mov ebx, ecx
// 006b122e  0f8422010000         je 0x6b1356
// 006b1234  8b542438             mov edx, dword ptr [esp + 0x38]
// 006b1238  8b742434             mov esi, dword ptr [esp + 0x34]
// 006b123c  2b542430             sub edx, dword ptr [esp + 0x30]
// 006b1240  b801000000           mov eax, 1
// 006b1245  8d4e01               lea ecx, [esi + 1]
// 006b1248  894c2418             mov dword ptr [esp + 0x18], ecx
// 006b124c  03d0                 add edx, eax
// 006b124e  6a29                 push 0x29
// 006b1250  8bcb                 mov ecx, ebx
// 006b1252  89442414             mov dword ptr [esp + 0x14], eax
// 006b1256  89442418             mov dword ptr [esp + 0x18], eax
// 006b125a  89542420             mov dword ptr [esp + 0x20], edx
// 006b125e  e83d0ff8ff           call 0x6321a0
// 006b1263  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 006b1267  50                   push eax
// 006b1268  8d442414             lea eax, [esp + 0x14]
// 006b126c  50                   push eax
// 006b126d  8bcd                 mov ecx, ebp
// 006b126f  e8a6daf6ff           call 0x61ed1a
// 006b1274  6aff                 push -1
// 006b1276  6aff                 push -1
// 006b1278  8d4c2418             lea ecx, [esp + 0x18]
// 006b127c  51                   push ecx
// 006b127d  ff159ced7700         call dword ptr [0x77ed9c]
// 006b1283  8bc6                 mov eax, esi
// 006b1285  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 006b1289  b910000000           mov ecx, 0x10
// 006b128e  99                   cdq 
// 006b128f  2bc2                 sub eax, edx
// 006b1291  d1f8                 sar eax, 1
// 006b1293  8d78f6               lea edi, [eax - 0xa]
// 006b1296  83ff10               cmp edi, 0x10
// 006b1299  7f02                 jg 0x6b129d
// 006b129b  8bcf                 mov ecx, edi
// 006b129d  8b542418             mov edx, dword ptr [esp + 0x18]
// 006b12a1  8b442410             mov eax, dword ptr [esp + 0x10]
// 006b12a5  03c2                 add eax, edx
// 006b12a7  99                   cdq 
// 006b12a8  2bc2                 sub eax, edx
// 006b12aa  d1f8                 sar eax, 1
// 006b12ac  8bf0                 mov esi, eax
// 006b12ae  2bf1                 sub esi, ecx
// 006b12b0  83ff10               cmp edi, 0x10
// 006b12b3  7e05                 jle 0x6b12ba
// 006b12b5  bf10000000           mov edi, 0x10
// 006b12ba  03f8                 add edi, eax
// 006b12bc  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 006b12c1  7449                 je 0x6b130c
// 006b12c3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006b12c7  8b542414             mov edx, dword ptr [esp + 0x14]
// 006b12cb  6a1f                 push 0x1f
// 006b12cd  6a20                 push 0x20
// 006b12cf  83ec10               sub esp, 0x10
// 006b12d2  8bc4                 mov eax, esp
// 006b12d4  8908                 mov dword ptr [eax], ecx
// 006b12d6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006b12da  895004               mov dword ptr [eax + 4], edx
// 006b12dd  8b542434             mov edx, dword ptr [esp + 0x34]
// 006b12e1  894808               mov dword ptr [eax + 8], ecx
// 006b12e4  55                   push ebp
// 006b12e5  8bcb                 mov ecx, ebx
// 006b12e7  89500c               mov dword ptr [eax + 0xc], edx
// 006b12ea  e8d11df8ff           call 0x6330c0
// 006b12ef  3bf7                 cmp esi, edi
// 006b12f1  7d63                 jge 0x6b1356
// 006b12f3  6a2d                 push 0x2d
// 006b12f5  6a04                 push 4
// 006b12f7  57                   push edi
// 006b12f8  6a04                 push 4
// 006b12fa  56                   push esi
// 006b12fb  55                   push ebp
// 006b12fc  8bcb                 mov ecx, ebx
// 006b12fe  e8dd21f8ff           call 0x6334e0
// 006b1303  6a2d                 push 0x2d
// 006b1305  6a06                 push 6
// 006b1307  57                   push edi
// 006b1308  6a06                 push 6
// 006b130a  eb41                 jmp 0x6b134d
// 006b130c  6a1e                 push 0x1e
// 006b130e  8bcb                 mov ecx, ebx
// 006b1310  e88b0ef8ff           call 0x6321a0
// 006b1315  50                   push eax
// 006b1316  8d442414             lea eax, [esp + 0x14]
// 006b131a  50                   push eax
// 006b131b  8bcd                 mov ecx, ebp
// 006b131d  e8f8d9f6ff           call 0x61ed1a
// 006b1322  3bf7                 cmp esi, edi
// 006b1324  7d30                 jge 0x6b1356
// 006b1326  6a26                 push 0x26
// 006b1328  6a03                 push 3
// 006b132a  57                   push edi
// 006b132b  6a03                 push 3
// 006b132d  56                   push esi
// 006b132e  55                   push ebp
// 006b132f  8bcb                 mov ecx, ebx
// 006b1331  e8aa21f8ff           call 0x6334e0
// 006b1336  6a26                 push 0x26
// 006b1338  6a05                 push 5
// 006b133a  57                   push edi
// 006b133b  6a05                 push 5
// 006b133d  56                   push esi
// 006b133e  55                   push ebp
// 006b133f  8bcb                 mov ecx, ebx
// 006b1341  e89a21f8ff           call 0x6334e0
// 006b1346  6a26                 push 0x26
// 006b1348  6a07                 push 7
// 006b134a  57                   push edi
// 006b134b  6a07                 push 7
// 006b134d  56                   push esi
// 006b134e  55                   push ebp
// 006b134f  8bcb                 mov ecx, ebx
// 006b1351  e88a21f8ff           call 0x6334e0
// 006b1356  8b442424             mov eax, dword ptr [esp + 0x24]
// 006b135a  5f                   pop edi
// 006b135b  5e                   pop esi
// 006b135c  5d                   pop ebp
// 006b135d  c70000000000         mov dword ptr [eax], 0
// 006b1363  c7400409000000       mov dword ptr [eax + 4], 9
// 006b136a  5b                   pop ebx
// 006b136b  83c410               add esp, 0x10
// 006b136e  c22000               ret 0x20
// library xtp-11.2.2-vc8/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawTearOffGripper@CXTPOfficeTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPOfficeTheme.cpp
