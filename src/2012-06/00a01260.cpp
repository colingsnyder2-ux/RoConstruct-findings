// roc 2012-06 00a01260  unit: XTPPaintThemes::CXTPDefaultTheme  size: 490 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a01260
//
// 00a01260  8b442408             mov eax, dword ptr [esp + 8]
// 00a01264  83ec20               sub esp, 0x20
// 00a01267  53                   push ebx
// 00a01268  55                   push ebp
// 00a01269  56                   push esi
// 00a0126a  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00a0126e  03c6                 add eax, esi
// 00a01270  99                   cdq 
// 00a01271  2bc2                 sub eax, edx
// 00a01273  d1f8                 sar eax, 1
// 00a01275  837c244402           cmp dword ptr [esp + 0x44], 2
// 00a0127a  57                   push edi
// 00a0127b  8bd9                 mov ebx, ecx
// 00a0127d  0f858c000000         jne 0xa0130f
// 00a01283  8d70f8               lea esi, [eax - 8]
// 00a01286  8d6808               lea ebp, [eax + 8]
// 00a01289  3bf5                 cmp esi, ebp
// 00a0128b  0f8daf010000         jge 0xa01440
// 00a01291  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00a01295  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a01299  8d4e01               lea ecx, [esi + 1]
// 00a0129c  894c2410             mov dword ptr [esp + 0x10], ecx
// 00a012a0  8d5004               lea edx, [eax + 4]
// 00a012a3  8d4e03               lea ecx, [esi + 3]
// 00a012a6  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a012aa  83c006               add eax, 6
// 00a012ad  6a05                 push 5
// 00a012af  8bcb                 mov ecx, ebx
// 00a012b1  89542418             mov dword ptr [esp + 0x18], edx
// 00a012b5  89442420             mov dword ptr [esp + 0x20], eax
// 00a012b9  e8d265f8ff           call 0x987890
// 00a012be  50                   push eax
// 00a012bf  8d542414             lea edx, [esp + 0x14]
// 00a012c3  52                   push edx
// 00a012c4  8bcf                 mov ecx, edi
// 00a012c6  e8e11bf8ff           call 0x982eac
// 00a012cb  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a012cf  8d4803               lea ecx, [eax + 3]
// 00a012d2  894c2424             mov dword ptr [esp + 0x24], ecx
// 00a012d6  8d5602               lea edx, [esi + 2]
// 00a012d9  83c005               add eax, 5
// 00a012dc  6a26                 push 0x26
// 00a012de  8bcb                 mov ecx, ebx
// 00a012e0  89742424             mov dword ptr [esp + 0x24], esi
// 00a012e4  8954242c             mov dword ptr [esp + 0x2c], edx
// 00a012e8  89442430             mov dword ptr [esp + 0x30], eax
// 00a012ec  e89f65f8ff           call 0x987890
// 00a012f1  50                   push eax
// 00a012f2  8d442424             lea eax, [esp + 0x24]
// 00a012f6  50                   push eax
// 00a012f7  8bcf                 mov ecx, edi
// 00a012f9  e8ae1bf8ff           call 0x982eac
// 00a012fe  83c604               add esi, 4
// 00a01301  3bf5                 cmp esi, ebp
// 00a01303  7c90                 jl 0xa01295
// 00a01305  5f                   pop edi
// 00a01306  5e                   pop esi
// 00a01307  5d                   pop ebp
// 00a01308  5b                   pop ebx
// 00a01309  83c420               add esp, 0x20
// 00a0130c  c21800               ret 0x18
// 00a0130f  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00a01313  83c7fc               add edi, -4
// 00a01316  83c6fc               add esi, -4
// 00a01319  8d4701               lea eax, [edi + 1]
// 00a0131c  8d4e01               lea ecx, [esi + 1]
// 00a0131f  89442424             mov dword ptr [esp + 0x24], eax
// 00a01323  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a01327  8d5603               lea edx, [esi + 3]
// 00a0132a  8d4703               lea eax, [edi + 3]
// 00a0132d  6a05                 push 5
// 00a0132f  8bcb                 mov ecx, ebx
// 00a01331  8954242c             mov dword ptr [esp + 0x2c], edx
// 00a01335  89442430             mov dword ptr [esp + 0x30], eax
// 00a01339  e85265f8ff           call 0x987890
// 00a0133e  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00a01342  50                   push eax
// 00a01343  8d442424             lea eax, [esp + 0x24]
// 00a01347  50                   push eax
// 00a01348  8bcd                 mov ecx, ebp
// 00a0134a  e85d1bf8ff           call 0x982eac
// 00a0134f  8d4e02               lea ecx, [esi + 2]
// 00a01352  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a01356  8d4702               lea eax, [edi + 2]
// 00a01359  6a26                 push 0x26
// 00a0135b  8bcb                 mov ecx, ebx
// 00a0135d  89742424             mov dword ptr [esp + 0x24], esi
// 00a01361  897c2428             mov dword ptr [esp + 0x28], edi
// 00a01365  89442430             mov dword ptr [esp + 0x30], eax
// 00a01369  e82265f8ff           call 0x987890
// 00a0136e  50                   push eax
// 00a0136f  8d542424             lea edx, [esp + 0x24]
// 00a01373  52                   push edx
// 00a01374  8bcd                 mov ecx, ebp
// 00a01376  e8311bf8ff           call 0x982eac
// 00a0137b  83ee04               sub esi, 4
// 00a0137e  8d4601               lea eax, [esi + 1]
// 00a01381  89442420             mov dword ptr [esp + 0x20], eax
// 00a01385  8d4701               lea eax, [edi + 1]
// 00a01388  8d4e03               lea ecx, [esi + 3]
// 00a0138b  89442424             mov dword ptr [esp + 0x24], eax
// 00a0138f  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a01393  8d4703               lea eax, [edi + 3]
// 00a01396  6a05                 push 5
// 00a01398  8bcb                 mov ecx, ebx
// 00a0139a  89442430             mov dword ptr [esp + 0x30], eax
// 00a0139e  e8ed64f8ff           call 0x987890
// 00a013a3  50                   push eax
// 00a013a4  8d542424             lea edx, [esp + 0x24]
// 00a013a8  52                   push edx
// 00a013a9  8bcd                 mov ecx, ebp
// 00a013ab  e8fc1af8ff           call 0x982eac
// 00a013b0  8d4602               lea eax, [esi + 2]
// 00a013b3  89442428             mov dword ptr [esp + 0x28], eax
// 00a013b7  8d4702               lea eax, [edi + 2]
// 00a013ba  6a26                 push 0x26
// 00a013bc  8bcb                 mov ecx, ebx
// 00a013be  89742424             mov dword ptr [esp + 0x24], esi
// 00a013c2  897c2428             mov dword ptr [esp + 0x28], edi
// 00a013c6  89442430             mov dword ptr [esp + 0x30], eax
// 00a013ca  e8c164f8ff           call 0x987890
// 00a013cf  50                   push eax
// 00a013d0  8d4c2424             lea ecx, [esp + 0x24]
// 00a013d4  51                   push ecx
// 00a013d5  8bcd                 mov ecx, ebp
// 00a013d7  e8d01af8ff           call 0x982eac
// 00a013dc  83c604               add esi, 4
// 00a013df  83ef04               sub edi, 4
// 00a013e2  8d5601               lea edx, [esi + 1]
// 00a013e5  8d4e03               lea ecx, [esi + 3]
// 00a013e8  89542420             mov dword ptr [esp + 0x20], edx
// 00a013ec  8d4701               lea eax, [edi + 1]
// 00a013ef  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a013f3  8d5703               lea edx, [edi + 3]
// 00a013f6  6a05                 push 5
// 00a013f8  8bcb                 mov ecx, ebx
// 00a013fa  89442428             mov dword ptr [esp + 0x28], eax
// 00a013fe  89542430             mov dword ptr [esp + 0x30], edx
// 00a01402  e88964f8ff           call 0x987890
// 00a01407  50                   push eax
// 00a01408  8d442424             lea eax, [esp + 0x24]
// 00a0140c  50                   push eax
// 00a0140d  8bcd                 mov ecx, ebp
// 00a0140f  e8981af8ff           call 0x982eac
// 00a01414  89742420             mov dword ptr [esp + 0x20], esi
// 00a01418  897c2424             mov dword ptr [esp + 0x24], edi
// 00a0141c  83c602               add esi, 2
// 00a0141f  83c702               add edi, 2
// 00a01422  6a26                 push 0x26
// 00a01424  8bcb                 mov ecx, ebx
// 00a01426  8974242c             mov dword ptr [esp + 0x2c], esi
// 00a0142a  897c2430             mov dword ptr [esp + 0x30], edi
// 00a0142e  e85d64f8ff           call 0x987890
// 00a01433  50                   push eax
// 00a01434  8d4c2424             lea ecx, [esp + 0x24]
// 00a01438  51                   push ecx
// 00a01439  8bcd                 mov ecx, ebp
// 00a0143b  e86c1af8ff           call 0x982eac
// 00a01440  5f                   pop edi
// 00a01441  5e                   pop esi
// 00a01442  5d                   pop ebp
// 00a01443  5b                   pop ebx
// 00a01444  83c420               add esp, 0x20
// 00a01447  c21800               ret 0x18
// library xtp-15.2.1/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawPopupResizeGripper@CXTPDefaultTheme@@UAEXPAVCDC@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDefaultTheme.cpp
