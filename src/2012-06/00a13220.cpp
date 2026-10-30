// from server: 100% by auto
// roc 2012-06 00a13220  unit: XTPPaintThemes::CXTPOfficeTheme  size: 513 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a13220
//
// 00a13220  83ec20               sub esp, 0x20
// 00a13223  53                   push ebx
// 00a13224  55                   push ebp
// 00a13225  56                   push esi
// 00a13226  57                   push edi
// 00a13227  6a1e                 push 0x1e
// 00a13229  8bd9                 mov ebx, ecx
// 00a1322b  e86046f7ff           call 0x987890
// 00a13230  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00a13234  50                   push eax
// 00a13235  8d44243c             lea eax, [esp + 0x3c]
// 00a13239  50                   push eax
// 00a1323a  8bcd                 mov ecx, ebp
// 00a1323c  e86bfcf6ff           call 0x982eac
// 00a13241  8b742440             mov esi, dword ptr [esp + 0x40]
// 00a13245  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a13249  8d0431               lea eax, [ecx + esi]
// 00a1324c  99                   cdq 
// 00a1324d  2bc2                 sub eax, edx
// 00a1324f  d1f8                 sar eax, 1
// 00a13251  837c244802           cmp dword ptr [esp + 0x48], 2
// 00a13256  0f858e000000         jne 0xa132ea
// 00a1325c  8d70f8               lea esi, [eax - 8]
// 00a1325f  8d7808               lea edi, [eax + 8]
// 00a13262  3bf7                 cmp esi, edi
// 00a13264  0f8dad010000         jge 0xa13417
// 00a1326a  8d9b00000000         lea ebx, [ebx]
// 00a13270  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a13274  8d4804               lea ecx, [eax + 4]
// 00a13277  8d5601               lea edx, [esi + 1]
// 00a1327a  89542410             mov dword ptr [esp + 0x10], edx
// 00a1327e  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a13282  8d5603               lea edx, [esi + 3]
// 00a13285  83c006               add eax, 6
// 00a13288  6a05                 push 5
// 00a1328a  8bcb                 mov ecx, ebx
// 00a1328c  8954241c             mov dword ptr [esp + 0x1c], edx
// 00a13290  89442420             mov dword ptr [esp + 0x20], eax
// 00a13294  e8f745f7ff           call 0x987890
// 00a13299  50                   push eax
// 00a1329a  8d442414             lea eax, [esp + 0x14]
// 00a1329e  50                   push eax
// 00a1329f  8bcd                 mov ecx, ebp
// 00a132a1  e806fcf6ff           call 0x982eac
// 00a132a6  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a132aa  8d4803               lea ecx, [eax + 3]
// 00a132ad  894c2424             mov dword ptr [esp + 0x24], ecx
// 00a132b1  8d5602               lea edx, [esi + 2]
// 00a132b4  83c005               add eax, 5
// 00a132b7  6a26                 push 0x26
// 00a132b9  8bcb                 mov ecx, ebx
// 00a132bb  89742424             mov dword ptr [esp + 0x24], esi
// 00a132bf  8954242c             mov dword ptr [esp + 0x2c], edx
// 00a132c3  89442430             mov dword ptr [esp + 0x30], eax
// 00a132c7  e8c445f7ff           call 0x987890
// 00a132cc  50                   push eax
// 00a132cd  8d442424             lea eax, [esp + 0x24]
// 00a132d1  50                   push eax
// 00a132d2  8bcd                 mov ecx, ebp
// 00a132d4  e8d3fbf6ff           call 0x982eac
// 00a132d9  83c604               add esi, 4
// 00a132dc  3bf7                 cmp esi, edi
// 00a132de  7c90                 jl 0xa13270
// 00a132e0  5f                   pop edi
// 00a132e1  5e                   pop esi
// 00a132e2  5d                   pop ebp
// 00a132e3  5b                   pop ebx
// 00a132e4  83c420               add esp, 0x20
// 00a132e7  c21800               ret 0x18
// 00a132ea  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00a132ee  83c7fc               add edi, -4
// 00a132f1  83c6fc               add esi, -4
// 00a132f4  8d4701               lea eax, [edi + 1]
// 00a132f7  8d4e01               lea ecx, [esi + 1]
// 00a132fa  89442424             mov dword ptr [esp + 0x24], eax
// 00a132fe  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a13302  8d5603               lea edx, [esi + 3]
// 00a13305  8d4703               lea eax, [edi + 3]
// 00a13308  6a05                 push 5
// 00a1330a  8bcb                 mov ecx, ebx
// 00a1330c  8954242c             mov dword ptr [esp + 0x2c], edx
// 00a13310  89442430             mov dword ptr [esp + 0x30], eax
// 00a13314  e87745f7ff           call 0x987890
// 00a13319  50                   push eax
// 00a1331a  8d442424             lea eax, [esp + 0x24]
// 00a1331e  50                   push eax
// 00a1331f  8bcd                 mov ecx, ebp
// 00a13321  e886fbf6ff           call 0x982eac
// 00a13326  8d4e02               lea ecx, [esi + 2]
// 00a13329  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a1332d  8d4702               lea eax, [edi + 2]
// 00a13330  6a26                 push 0x26
// 00a13332  8bcb                 mov ecx, ebx
// 00a13334  89742424             mov dword ptr [esp + 0x24], esi
// 00a13338  897c2428             mov dword ptr [esp + 0x28], edi
// 00a1333c  89442430             mov dword ptr [esp + 0x30], eax
// 00a13340  e84b45f7ff           call 0x987890
// 00a13345  50                   push eax
// 00a13346  8d542424             lea edx, [esp + 0x24]
// 00a1334a  52                   push edx
// 00a1334b  8bcd                 mov ecx, ebp
// 00a1334d  e85afbf6ff           call 0x982eac
// 00a13352  83ee04               sub esi, 4
// 00a13355  8d4601               lea eax, [esi + 1]
// 00a13358  89442420             mov dword ptr [esp + 0x20], eax
// 00a1335c  8d4701               lea eax, [edi + 1]
// 00a1335f  8d4e03               lea ecx, [esi + 3]
// 00a13362  89442424             mov dword ptr [esp + 0x24], eax
// 00a13366  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a1336a  8d4703               lea eax, [edi + 3]
// 00a1336d  6a05                 push 5
// 00a1336f  8bcb                 mov ecx, ebx
// 00a13371  89442430             mov dword ptr [esp + 0x30], eax
// 00a13375  e81645f7ff           call 0x987890
// 00a1337a  50                   push eax
// 00a1337b  8d542424             lea edx, [esp + 0x24]
// 00a1337f  52                   push edx
// 00a13380  8bcd                 mov ecx, ebp
// 00a13382  e825fbf6ff           call 0x982eac
// 00a13387  8d4602               lea eax, [esi + 2]
// 00a1338a  89442428             mov dword ptr [esp + 0x28], eax
// 00a1338e  8d4702               lea eax, [edi + 2]
// 00a13391  6a26                 push 0x26
// 00a13393  8bcb                 mov ecx, ebx
// 00a13395  89742424             mov dword ptr [esp + 0x24], esi
// 00a13399  897c2428             mov dword ptr [esp + 0x28], edi
// 00a1339d  89442430             mov dword ptr [esp + 0x30], eax
// 00a133a1  e8ea44f7ff           call 0x987890
// 00a133a6  50                   push eax
// 00a133a7  8d4c2424             lea ecx, [esp + 0x24]
// 00a133ab  51                   push ecx
// 00a133ac  8bcd                 mov ecx, ebp
// 00a133ae  e8f9faf6ff           call 0x982eac
// 00a133b3  83c604               add esi, 4
// 00a133b6  83ef04               sub edi, 4
// 00a133b9  8d5601               lea edx, [esi + 1]
// 00a133bc  8d4e03               lea ecx, [esi + 3]
// 00a133bf  89542420             mov dword ptr [esp + 0x20], edx
// 00a133c3  8d4701               lea eax, [edi + 1]
// 00a133c6  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a133ca  8d5703               lea edx, [edi + 3]
// 00a133cd  6a05                 push 5
// 00a133cf  8bcb                 mov ecx, ebx
// 00a133d1  89442428             mov dword ptr [esp + 0x28], eax
// 00a133d5  89542430             mov dword ptr [esp + 0x30], edx
// 00a133d9  e8b244f7ff           call 0x987890
// 00a133de  50                   push eax
// 00a133df  8d442424             lea eax, [esp + 0x24]
// 00a133e3  50                   push eax
// 00a133e4  8bcd                 mov ecx, ebp
// 00a133e6  e8c1faf6ff           call 0x982eac
// 00a133eb  89742420             mov dword ptr [esp + 0x20], esi
// 00a133ef  897c2424             mov dword ptr [esp + 0x24], edi
// 00a133f3  83c602               add esi, 2
// 00a133f6  83c702               add edi, 2
// 00a133f9  6a26                 push 0x26
// 00a133fb  8bcb                 mov ecx, ebx
// 00a133fd  8974242c             mov dword ptr [esp + 0x2c], esi
// 00a13401  897c2430             mov dword ptr [esp + 0x30], edi
// 00a13405  e88644f7ff           call 0x987890
// 00a1340a  50                   push eax
// 00a1340b  8d4c2424             lea ecx, [esp + 0x24]
// 00a1340f  51                   push ecx
// 00a13410  8bcd                 mov ecx, ebp
// 00a13412  e895faf6ff           call 0x982eac
// 00a13417  5f                   pop edi
// 00a13418  5e                   pop esi
// 00a13419  5d                   pop ebp
// 00a1341a  5b                   pop ebx
// 00a1341b  83c420               add esp, 0x20
// 00a1341e  c21800               ret 0x18
// library xtp-15.2.1/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawPopupResizeGripper@CXTPOfficeTheme@@UAEXPAVCDC@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPOfficeTheme.cpp
