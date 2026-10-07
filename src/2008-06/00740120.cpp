// roc 2008-06 00740120  unit: XTPPaintThemes::CXTPOfficeTheme  size: 496 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00740120
//
// 00740120  83ec10               sub esp, 0x10
// 00740123  53                   push ebx
// 00740124  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00740128  56                   push esi
// 00740129  57                   push edi
// 0074012a  8d44240c             lea eax, [esp + 0xc]
// 0074012e  8bf9                 mov edi, ecx
// 00740130  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00740133  50                   push eax
// 00740134  51                   push ecx
// 00740135  ff15842d8000         call dword ptr [0x802d84]
// 0074013b  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 00740141  83f804               cmp eax, 4
// 00740144  0f85c6000000         jne 0x740210
// 0074014a  6a3d                 push 0x3d
// 0074014c  8bcf                 mov ecx, edi
// 0074014e  e81ddff6ff           call 0x6ae070
// 00740153  83bbf800000002       cmp dword ptr [ebx + 0xf8], 2
// 0074015a  8bf0                 mov esi, eax
// 0074015c  7507                 jne 0x740165
// 0074015e  b829000000           mov eax, 0x29
// 00740163  eb12                 jmp 0x740177
// 00740165  53                   push ebx
// 00740166  8bcf                 mov ecx, edi
// 00740168  e8f3e8f6ff           call 0x6aea60
// 0074016d  f7d8                 neg eax
// 0074016f  1bc0                 sbb eax, eax
// 00740171  83e0f1               and eax, 0xfffffff1
// 00740174  83c01e               add eax, 0x1e
// 00740177  50                   push eax
// 00740178  8bcf                 mov ecx, edi
// 0074017a  e8f1def6ff           call 0x6ae070
// 0074017f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00740183  56                   push esi
// 00740184  56                   push esi
// 00740185  8d542414             lea edx, [esp + 0x14]
// 00740189  52                   push edx
// 0074018a  8bcf                 mov ecx, edi
// 0074018c  8bd8                 mov ebx, eax
// 0074018e  e8c511f6ff           call 0x6a1358
// 00740193  6aff                 push -1
// 00740195  6aff                 push -1
// 00740197  8d442414             lea eax, [esp + 0x14]
// 0074019b  50                   push eax
// 0074019c  ff15282d8000         call dword ptr [0x802d28]
// 007401a2  53                   push ebx
// 007401a3  8d4c2410             lea ecx, [esp + 0x10]
// 007401a7  51                   push ecx
// 007401a8  8bcf                 mov ecx, edi
// 007401aa  e8af11f6ff           call 0x6a135e
// 007401af  56                   push esi
// 007401b0  56                   push esi
// 007401b1  8d542414             lea edx, [esp + 0x14]
// 007401b5  52                   push edx
// 007401b6  8bcf                 mov ecx, edi
// 007401b8  e89b11f6ff           call 0x6a1358
// 007401bd  8b4704               mov eax, dword ptr [edi + 4]
// 007401c0  8b1db8208000         mov ebx, dword ptr [0x8020b8]
// 007401c6  56                   push esi
// 007401c7  6a02                 push 2
// 007401c9  6a02                 push 2
// 007401cb  50                   push eax
// 007401cc  ffd3                 call ebx
// 007401ce  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007401d2  8b5704               mov edx, dword ptr [edi + 4]
// 007401d5  56                   push esi
// 007401d6  6a02                 push 2
// 007401d8  83c1fe               add ecx, -2
// 007401db  51                   push ecx
// 007401dc  52                   push edx
// 007401dd  ffd3                 call ebx
// 007401df  8b442418             mov eax, dword ptr [esp + 0x18]
// 007401e3  8b4f04               mov ecx, dword ptr [edi + 4]
// 007401e6  56                   push esi
// 007401e7  83c0fe               add eax, -2
// 007401ea  50                   push eax
// 007401eb  6a02                 push 2
// 007401ed  51                   push ecx
// 007401ee  ffd3                 call ebx
// 007401f0  8b542418             mov edx, dword ptr [esp + 0x18]
// 007401f4  8b442414             mov eax, dword ptr [esp + 0x14]
// 007401f8  8b4f04               mov ecx, dword ptr [edi + 4]
// 007401fb  56                   push esi
// 007401fc  83c2fe               add edx, -2
// 007401ff  52                   push edx
// 00740200  83c0fe               add eax, -2
// 00740203  50                   push eax
// 00740204  51                   push ecx
// 00740205  ffd3                 call ebx
// 00740207  5f                   pop edi
// 00740208  5e                   pop esi
// 00740209  5b                   pop ebx
// 0074020a  83c410               add esp, 0x10
// 0074020d  c20800               ret 8
// 00740210  83f805               cmp eax, 5
// 00740213  754c                 jne 0x740261
// 00740215  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00740219  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0074021d  8b742420             mov esi, dword ptr [esp + 0x20]
// 00740221  6a29                 push 0x29
// 00740223  6a2b                 push 0x2b
// 00740225  83ec10               sub esp, 0x10
// 00740228  8bc4                 mov eax, esp
// 0074022a  8910                 mov dword ptr [eax], edx
// 0074022c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00740230  894804               mov dword ptr [eax + 4], ecx
// 00740233  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00740237  895008               mov dword ptr [eax + 8], edx
// 0074023a  89480c               mov dword ptr [eax + 0xc], ecx
// 0074023d  56                   push esi
// 0074023e  8bcf                 mov ecx, edi
// 00740240  e88beef6ff           call 0x6af0d0
// 00740245  6a1e                 push 0x1e
// 00740247  8bcf                 mov ecx, edi
// 00740249  e822def6ff           call 0x6ae070
// 0074024e  50                   push eax
// 0074024f  53                   push ebx
// 00740250  56                   push esi
// 00740251  8bcf                 mov ecx, edi
// 00740253  e8d8fdffff           call 0x740030
// 00740258  5f                   pop edi
// 00740259  5e                   pop esi
// 0074025a  5b                   pop ebx
// 0074025b  83c410               add esp, 0x10
// 0074025e  c20800               ret 8
// 00740261  53                   push ebx
// 00740262  8bcf                 mov ecx, edi
// 00740264  e8f7e7f6ff           call 0x6aea60
// 00740269  6a0f                 push 0xf
// 0074026b  8bcf                 mov ecx, edi
// 0074026d  85c0                 test eax, eax
// 0074026f  741d                 je 0x74028e
// 00740271  e8faddf6ff           call 0x6ae070
// 00740276  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0074027a  50                   push eax
// 0074027b  8d542410             lea edx, [esp + 0x10]
// 0074027f  52                   push edx
// 00740280  e8d910f6ff           call 0x6a135e
// 00740285  5f                   pop edi
// 00740286  5e                   pop esi
// 00740287  5b                   pop ebx
// 00740288  83c410               add esp, 0x10
// 0074028b  c20800               ret 8
// 0074028e  e8ddddf6ff           call 0x6ae070
// 00740293  6a1e                 push 0x1e
// 00740295  8bcf                 mov ecx, edi
// 00740297  8bf0                 mov esi, eax
// 00740299  e8d2ddf6ff           call 0x6ae070
// 0074029e  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007402a2  50                   push eax
// 007402a3  8d442410             lea eax, [esp + 0x10]
// 007402a7  50                   push eax
// 007402a8  8bcf                 mov ecx, edi
// 007402aa  e8af10f6ff           call 0x6a135e
// 007402af  56                   push esi
// 007402b0  56                   push esi
// 007402b1  8d4c2414             lea ecx, [esp + 0x14]
// 007402b5  51                   push ecx
// 007402b6  8bcf                 mov ecx, edi
// 007402b8  e89b10f6ff           call 0x6a1358
// 007402bd  8b5704               mov edx, dword ptr [edi + 4]
// 007402c0  8b1db8208000         mov ebx, dword ptr [0x8020b8]
// 007402c6  56                   push esi
// 007402c7  6a01                 push 1
// 007402c9  6a01                 push 1
// 007402cb  52                   push edx
// 007402cc  ffd3                 call ebx
// 007402ce  8b442414             mov eax, dword ptr [esp + 0x14]
// 007402d2  8b4f04               mov ecx, dword ptr [edi + 4]
// 007402d5  56                   push esi
// 007402d6  6a01                 push 1
// 007402d8  83c0fe               add eax, -2
// 007402db  50                   push eax
// 007402dc  51                   push ecx
// 007402dd  ffd3                 call ebx
// 007402df  8b542418             mov edx, dword ptr [esp + 0x18]
// 007402e3  8b4704               mov eax, dword ptr [edi + 4]
// 007402e6  56                   push esi
// 007402e7  83c2fe               add edx, -2
// 007402ea  52                   push edx
// 007402eb  6a01                 push 1
// 007402ed  50                   push eax
// 007402ee  ffd3                 call ebx
// 007402f0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007402f4  8b542414             mov edx, dword ptr [esp + 0x14]
// 007402f8  8b4704               mov eax, dword ptr [edi + 4]
// 007402fb  56                   push esi
// 007402fc  83c1fe               add ecx, -2
// 007402ff  51                   push ecx
// 00740300  83c2fe               add edx, -2
// 00740303  52                   push edx
// 00740304  50                   push eax
// 00740305  ffd3                 call ebx
// 00740307  5f                   pop edi
// 00740308  5e                   pop esi
// 00740309  5b                   pop ebx
// 0074030a  83c410               add esp, 0x10
// 0074030d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?FillCommandBarEntry@CXTPOfficeTheme@XTPPaintThemes@@UAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
