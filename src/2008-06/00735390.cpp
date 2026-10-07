// roc 2008-06 00735390  unit: XTPPaintThemes::CXTPDefaultTheme  size: 490 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00735390
//
// 00735390  8b442408             mov eax, dword ptr [esp + 8]
// 00735394  83ec20               sub esp, 0x20
// 00735397  53                   push ebx
// 00735398  55                   push ebp
// 00735399  56                   push esi
// 0073539a  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0073539e  03c6                 add eax, esi
// 007353a0  99                   cdq 
// 007353a1  2bc2                 sub eax, edx
// 007353a3  d1f8                 sar eax, 1
// 007353a5  837c244402           cmp dword ptr [esp + 0x44], 2
// 007353aa  57                   push edi
// 007353ab  8bd9                 mov ebx, ecx
// 007353ad  0f858c000000         jne 0x73543f
// 007353b3  8d70f8               lea esi, [eax - 8]
// 007353b6  8d6808               lea ebp, [eax + 8]
// 007353b9  3bf5                 cmp esi, ebp
// 007353bb  0f8daf010000         jge 0x735570
// 007353c1  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 007353c5  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007353c9  8d4e01               lea ecx, [esi + 1]
// 007353cc  894c2410             mov dword ptr [esp + 0x10], ecx
// 007353d0  8d5004               lea edx, [eax + 4]
// 007353d3  8d4e03               lea ecx, [esi + 3]
// 007353d6  894c2418             mov dword ptr [esp + 0x18], ecx
// 007353da  83c006               add eax, 6
// 007353dd  6a05                 push 5
// 007353df  8bcb                 mov ecx, ebx
// 007353e1  89542418             mov dword ptr [esp + 0x18], edx
// 007353e5  89442420             mov dword ptr [esp + 0x20], eax
// 007353e9  e8828cf7ff           call 0x6ae070
// 007353ee  50                   push eax
// 007353ef  8d542414             lea edx, [esp + 0x14]
// 007353f3  52                   push edx
// 007353f4  8bcf                 mov ecx, edi
// 007353f6  e863bff6ff           call 0x6a135e
// 007353fb  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007353ff  8d4803               lea ecx, [eax + 3]
// 00735402  894c2424             mov dword ptr [esp + 0x24], ecx
// 00735406  8d5602               lea edx, [esi + 2]
// 00735409  83c005               add eax, 5
// 0073540c  6a26                 push 0x26
// 0073540e  8bcb                 mov ecx, ebx
// 00735410  89742424             mov dword ptr [esp + 0x24], esi
// 00735414  8954242c             mov dword ptr [esp + 0x2c], edx
// 00735418  89442430             mov dword ptr [esp + 0x30], eax
// 0073541c  e84f8cf7ff           call 0x6ae070
// 00735421  50                   push eax
// 00735422  8d442424             lea eax, [esp + 0x24]
// 00735426  50                   push eax
// 00735427  8bcf                 mov ecx, edi
// 00735429  e830bff6ff           call 0x6a135e
// 0073542e  83c604               add esi, 4
// 00735431  3bf5                 cmp esi, ebp
// 00735433  7c90                 jl 0x7353c5
// 00735435  5f                   pop edi
// 00735436  5e                   pop esi
// 00735437  5d                   pop ebp
// 00735438  5b                   pop ebx
// 00735439  83c420               add esp, 0x20
// 0073543c  c21800               ret 0x18
// 0073543f  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00735443  83c7fc               add edi, -4
// 00735446  83c6fc               add esi, -4
// 00735449  8d4701               lea eax, [edi + 1]
// 0073544c  8d4e01               lea ecx, [esi + 1]
// 0073544f  89442424             mov dword ptr [esp + 0x24], eax
// 00735453  894c2420             mov dword ptr [esp + 0x20], ecx
// 00735457  8d5603               lea edx, [esi + 3]
// 0073545a  8d4703               lea eax, [edi + 3]
// 0073545d  6a05                 push 5
// 0073545f  8bcb                 mov ecx, ebx
// 00735461  8954242c             mov dword ptr [esp + 0x2c], edx
// 00735465  89442430             mov dword ptr [esp + 0x30], eax
// 00735469  e8028cf7ff           call 0x6ae070
// 0073546e  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00735472  50                   push eax
// 00735473  8d442424             lea eax, [esp + 0x24]
// 00735477  50                   push eax
// 00735478  8bcd                 mov ecx, ebp
// 0073547a  e8dfbef6ff           call 0x6a135e
// 0073547f  8d4e02               lea ecx, [esi + 2]
// 00735482  894c2428             mov dword ptr [esp + 0x28], ecx
// 00735486  8d4702               lea eax, [edi + 2]
// 00735489  6a26                 push 0x26
// 0073548b  8bcb                 mov ecx, ebx
// 0073548d  89742424             mov dword ptr [esp + 0x24], esi
// 00735491  897c2428             mov dword ptr [esp + 0x28], edi
// 00735495  89442430             mov dword ptr [esp + 0x30], eax
// 00735499  e8d28bf7ff           call 0x6ae070
// 0073549e  50                   push eax
// 0073549f  8d542424             lea edx, [esp + 0x24]
// 007354a3  52                   push edx
// 007354a4  8bcd                 mov ecx, ebp
// 007354a6  e8b3bef6ff           call 0x6a135e
// 007354ab  83ee04               sub esi, 4
// 007354ae  8d4601               lea eax, [esi + 1]
// 007354b1  89442420             mov dword ptr [esp + 0x20], eax
// 007354b5  8d4701               lea eax, [edi + 1]
// 007354b8  8d4e03               lea ecx, [esi + 3]
// 007354bb  89442424             mov dword ptr [esp + 0x24], eax
// 007354bf  894c2428             mov dword ptr [esp + 0x28], ecx
// 007354c3  8d4703               lea eax, [edi + 3]
// 007354c6  6a05                 push 5
// 007354c8  8bcb                 mov ecx, ebx
// 007354ca  89442430             mov dword ptr [esp + 0x30], eax
// 007354ce  e89d8bf7ff           call 0x6ae070
// 007354d3  50                   push eax
// 007354d4  8d542424             lea edx, [esp + 0x24]
// 007354d8  52                   push edx
// 007354d9  8bcd                 mov ecx, ebp
// 007354db  e87ebef6ff           call 0x6a135e
// 007354e0  8d4602               lea eax, [esi + 2]
// 007354e3  89442428             mov dword ptr [esp + 0x28], eax
// 007354e7  8d4702               lea eax, [edi + 2]
// 007354ea  6a26                 push 0x26
// 007354ec  8bcb                 mov ecx, ebx
// 007354ee  89742424             mov dword ptr [esp + 0x24], esi
// 007354f2  897c2428             mov dword ptr [esp + 0x28], edi
// 007354f6  89442430             mov dword ptr [esp + 0x30], eax
// 007354fa  e8718bf7ff           call 0x6ae070
// 007354ff  50                   push eax
// 00735500  8d4c2424             lea ecx, [esp + 0x24]
// 00735504  51                   push ecx
// 00735505  8bcd                 mov ecx, ebp
// 00735507  e852bef6ff           call 0x6a135e
// 0073550c  83c604               add esi, 4
// 0073550f  83ef04               sub edi, 4
// 00735512  8d5601               lea edx, [esi + 1]
// 00735515  8d4e03               lea ecx, [esi + 3]
// 00735518  89542420             mov dword ptr [esp + 0x20], edx
// 0073551c  8d4701               lea eax, [edi + 1]
// 0073551f  894c2428             mov dword ptr [esp + 0x28], ecx
// 00735523  8d5703               lea edx, [edi + 3]
// 00735526  6a05                 push 5
// 00735528  8bcb                 mov ecx, ebx
// 0073552a  89442428             mov dword ptr [esp + 0x28], eax
// 0073552e  89542430             mov dword ptr [esp + 0x30], edx
// 00735532  e8398bf7ff           call 0x6ae070
// 00735537  50                   push eax
// 00735538  8d442424             lea eax, [esp + 0x24]
// 0073553c  50                   push eax
// 0073553d  8bcd                 mov ecx, ebp
// 0073553f  e81abef6ff           call 0x6a135e
// 00735544  89742420             mov dword ptr [esp + 0x20], esi
// 00735548  897c2424             mov dword ptr [esp + 0x24], edi
// 0073554c  83c602               add esi, 2
// 0073554f  83c702               add edi, 2
// 00735552  6a26                 push 0x26
// 00735554  8bcb                 mov ecx, ebx
// 00735556  8974242c             mov dword ptr [esp + 0x2c], esi
// 0073555a  897c2430             mov dword ptr [esp + 0x30], edi
// 0073555e  e80d8bf7ff           call 0x6ae070
// 00735563  50                   push eax
// 00735564  8d4c2424             lea ecx, [esp + 0x24]
// 00735568  51                   push ecx
// 00735569  8bcd                 mov ecx, ebp
// 0073556b  e8eebdf6ff           call 0x6a135e
// 00735570  5f                   pop edi
// 00735571  5e                   pop esi
// 00735572  5d                   pop ebp
// 00735573  5b                   pop ebx
// 00735574  83c420               add esp, 0x20
// 00735577  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawPopupResizeGripper@CXTPDefaultTheme@XTPPaintThemes@@UAEXPAVCDC@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
