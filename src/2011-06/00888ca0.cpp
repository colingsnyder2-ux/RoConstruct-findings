// roc 2011-06 00888ca0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 490 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00888ca0
//
// 00888ca0  8b442408             mov eax, dword ptr [esp + 8]
// 00888ca4  83ec20               sub esp, 0x20
// 00888ca7  53                   push ebx
// 00888ca8  55                   push ebp
// 00888ca9  56                   push esi
// 00888caa  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00888cae  03c6                 add eax, esi
// 00888cb0  99                   cdq 
// 00888cb1  2bc2                 sub eax, edx
// 00888cb3  d1f8                 sar eax, 1
// 00888cb5  837c244402           cmp dword ptr [esp + 0x44], 2
// 00888cba  57                   push edi
// 00888cbb  8bd9                 mov ebx, ecx
// 00888cbd  0f858c000000         jne 0x888d4f
// 00888cc3  8d70f8               lea esi, [eax - 8]
// 00888cc6  8d6808               lea ebp, [eax + 8]
// 00888cc9  3bf5                 cmp esi, ebp
// 00888ccb  0f8daf010000         jge 0x888e80
// 00888cd1  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00888cd5  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00888cd9  8d4e01               lea ecx, [esi + 1]
// 00888cdc  894c2410             mov dword ptr [esp + 0x10], ecx
// 00888ce0  8d5004               lea edx, [eax + 4]
// 00888ce3  8d4e03               lea ecx, [esi + 3]
// 00888ce6  894c2418             mov dword ptr [esp + 0x18], ecx
// 00888cea  83c006               add eax, 6
// 00888ced  6a05                 push 5
// 00888cef  8bcb                 mov ecx, ebx
// 00888cf1  89542418             mov dword ptr [esp + 0x18], edx
// 00888cf5  89442420             mov dword ptr [esp + 0x20], eax
// 00888cf9  e8b268f8ff           call 0x80f5b0
// 00888cfe  50                   push eax
// 00888cff  8d542414             lea edx, [esp + 0x14]
// 00888d03  52                   push edx
// 00888d04  8bcf                 mov ecx, edi
// 00888d06  e81521f8ff           call 0x80ae20
// 00888d0b  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00888d0f  8d4803               lea ecx, [eax + 3]
// 00888d12  894c2424             mov dword ptr [esp + 0x24], ecx
// 00888d16  8d5602               lea edx, [esi + 2]
// 00888d19  83c005               add eax, 5
// 00888d1c  6a26                 push 0x26
// 00888d1e  8bcb                 mov ecx, ebx
// 00888d20  89742424             mov dword ptr [esp + 0x24], esi
// 00888d24  8954242c             mov dword ptr [esp + 0x2c], edx
// 00888d28  89442430             mov dword ptr [esp + 0x30], eax
// 00888d2c  e87f68f8ff           call 0x80f5b0
// 00888d31  50                   push eax
// 00888d32  8d442424             lea eax, [esp + 0x24]
// 00888d36  50                   push eax
// 00888d37  8bcf                 mov ecx, edi
// 00888d39  e8e220f8ff           call 0x80ae20
// 00888d3e  83c604               add esi, 4
// 00888d41  3bf5                 cmp esi, ebp
// 00888d43  7c90                 jl 0x888cd5
// 00888d45  5f                   pop edi
// 00888d46  5e                   pop esi
// 00888d47  5d                   pop ebp
// 00888d48  5b                   pop ebx
// 00888d49  83c420               add esp, 0x20
// 00888d4c  c21800               ret 0x18
// 00888d4f  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00888d53  83c7fc               add edi, -4
// 00888d56  83c6fc               add esi, -4
// 00888d59  8d4701               lea eax, [edi + 1]
// 00888d5c  8d4e01               lea ecx, [esi + 1]
// 00888d5f  89442424             mov dword ptr [esp + 0x24], eax
// 00888d63  894c2420             mov dword ptr [esp + 0x20], ecx
// 00888d67  8d5603               lea edx, [esi + 3]
// 00888d6a  8d4703               lea eax, [edi + 3]
// 00888d6d  6a05                 push 5
// 00888d6f  8bcb                 mov ecx, ebx
// 00888d71  8954242c             mov dword ptr [esp + 0x2c], edx
// 00888d75  89442430             mov dword ptr [esp + 0x30], eax
// 00888d79  e83268f8ff           call 0x80f5b0
// 00888d7e  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00888d82  50                   push eax
// 00888d83  8d442424             lea eax, [esp + 0x24]
// 00888d87  50                   push eax
// 00888d88  8bcd                 mov ecx, ebp
// 00888d8a  e89120f8ff           call 0x80ae20
// 00888d8f  8d4e02               lea ecx, [esi + 2]
// 00888d92  894c2428             mov dword ptr [esp + 0x28], ecx
// 00888d96  8d4702               lea eax, [edi + 2]
// 00888d99  6a26                 push 0x26
// 00888d9b  8bcb                 mov ecx, ebx
// 00888d9d  89742424             mov dword ptr [esp + 0x24], esi
// 00888da1  897c2428             mov dword ptr [esp + 0x28], edi
// 00888da5  89442430             mov dword ptr [esp + 0x30], eax
// 00888da9  e80268f8ff           call 0x80f5b0
// 00888dae  50                   push eax
// 00888daf  8d542424             lea edx, [esp + 0x24]
// 00888db3  52                   push edx
// 00888db4  8bcd                 mov ecx, ebp
// 00888db6  e86520f8ff           call 0x80ae20
// 00888dbb  83ee04               sub esi, 4
// 00888dbe  8d4601               lea eax, [esi + 1]
// 00888dc1  89442420             mov dword ptr [esp + 0x20], eax
// 00888dc5  8d4701               lea eax, [edi + 1]
// 00888dc8  8d4e03               lea ecx, [esi + 3]
// 00888dcb  89442424             mov dword ptr [esp + 0x24], eax
// 00888dcf  894c2428             mov dword ptr [esp + 0x28], ecx
// 00888dd3  8d4703               lea eax, [edi + 3]
// 00888dd6  6a05                 push 5
// 00888dd8  8bcb                 mov ecx, ebx
// 00888dda  89442430             mov dword ptr [esp + 0x30], eax
// 00888dde  e8cd67f8ff           call 0x80f5b0
// 00888de3  50                   push eax
// 00888de4  8d542424             lea edx, [esp + 0x24]
// 00888de8  52                   push edx
// 00888de9  8bcd                 mov ecx, ebp
// 00888deb  e83020f8ff           call 0x80ae20
// 00888df0  8d4602               lea eax, [esi + 2]
// 00888df3  89442428             mov dword ptr [esp + 0x28], eax
// 00888df7  8d4702               lea eax, [edi + 2]
// 00888dfa  6a26                 push 0x26
// 00888dfc  8bcb                 mov ecx, ebx
// 00888dfe  89742424             mov dword ptr [esp + 0x24], esi
// 00888e02  897c2428             mov dword ptr [esp + 0x28], edi
// 00888e06  89442430             mov dword ptr [esp + 0x30], eax
// 00888e0a  e8a167f8ff           call 0x80f5b0
// 00888e0f  50                   push eax
// 00888e10  8d4c2424             lea ecx, [esp + 0x24]
// 00888e14  51                   push ecx
// 00888e15  8bcd                 mov ecx, ebp
// 00888e17  e80420f8ff           call 0x80ae20
// 00888e1c  83c604               add esi, 4
// 00888e1f  83ef04               sub edi, 4
// 00888e22  8d5601               lea edx, [esi + 1]
// 00888e25  8d4e03               lea ecx, [esi + 3]
// 00888e28  89542420             mov dword ptr [esp + 0x20], edx
// 00888e2c  8d4701               lea eax, [edi + 1]
// 00888e2f  894c2428             mov dword ptr [esp + 0x28], ecx
// 00888e33  8d5703               lea edx, [edi + 3]
// 00888e36  6a05                 push 5
// 00888e38  8bcb                 mov ecx, ebx
// 00888e3a  89442428             mov dword ptr [esp + 0x28], eax
// 00888e3e  89542430             mov dword ptr [esp + 0x30], edx
// 00888e42  e86967f8ff           call 0x80f5b0
// 00888e47  50                   push eax
// 00888e48  8d442424             lea eax, [esp + 0x24]
// 00888e4c  50                   push eax
// 00888e4d  8bcd                 mov ecx, ebp
// 00888e4f  e8cc1ff8ff           call 0x80ae20
// 00888e54  89742420             mov dword ptr [esp + 0x20], esi
// 00888e58  897c2424             mov dword ptr [esp + 0x24], edi
// 00888e5c  83c602               add esi, 2
// 00888e5f  83c702               add edi, 2
// 00888e62  6a26                 push 0x26
// 00888e64  8bcb                 mov ecx, ebx
// 00888e66  8974242c             mov dword ptr [esp + 0x2c], esi
// 00888e6a  897c2430             mov dword ptr [esp + 0x30], edi
// 00888e6e  e83d67f8ff           call 0x80f5b0
// 00888e73  50                   push eax
// 00888e74  8d4c2424             lea ecx, [esp + 0x24]
// 00888e78  51                   push ecx
// 00888e79  8bcd                 mov ecx, ebp
// 00888e7b  e8a01ff8ff           call 0x80ae20
// 00888e80  5f                   pop edi
// 00888e81  5e                   pop esi
// 00888e82  5d                   pop ebp
// 00888e83  5b                   pop ebx
// 00888e84  83c420               add esp, 0x20
// 00888e87  c21800               ret 0x18
// library xtp-15.2.1/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawPopupResizeGripper@CXTPDefaultTheme@@UAEXPAVCDC@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDefaultTheme.cpp
