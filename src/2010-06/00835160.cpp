// roc 2010-06 00835160  unit: CXTPOffice2007Theme  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00835160
//
// 00835160  83ec20               sub esp, 0x20
// 00835163  8b442428             mov eax, dword ptr [esp + 0x28]
// 00835167  56                   push esi
// 00835168  57                   push edi
// 00835169  8bf1                 mov esi, ecx
// 0083516b  50                   push eax
// 0083516c  8d4c240c             lea ecx, [esp + 0xc]
// 00835170  e89ba1fcff           call 0x7ff310
// 00835175  8b8efc050000         mov ecx, dword ptr [esi + 0x5fc]
// 0083517b  8b442408             mov eax, dword ptr [esp + 8]
// 0083517f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00835183  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00835187  51                   push ecx
// 00835188  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0083518c  6a01                 push 1
// 0083518e  2bd0                 sub edx, eax
// 00835190  52                   push edx
// 00835191  51                   push ecx
// 00835192  50                   push eax
// 00835193  8bcf                 mov ecx, edi
// 00835195  e8f07b1400           call 0x97cd8a
// 0083519a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0083519e  8b542408             mov edx, dword ptr [esp + 8]
// 008351a2  8d4801               lea ecx, [eax + 1]
// 008351a5  83c009               add eax, 9
// 008351a8  6a00                 push 0
// 008351aa  89442428             mov dword ptr [esp + 0x28], eax
// 008351ae  6a00                 push 0
// 008351b0  8d8600060000         lea eax, [esi + 0x600]
// 008351b6  894c2424             mov dword ptr [esp + 0x24], ecx
// 008351ba  50                   push eax
// 008351bb  8d4c2424             lea ecx, [esp + 0x24]
// 008351bf  89542424             mov dword ptr [esp + 0x24], edx
// 008351c3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008351c7  51                   push ecx
// 008351c8  57                   push edi
// 008351c9  89542434             mov dword ptr [esp + 0x34], edx
// 008351cd  e82ec1fcff           call 0x801300
// 008351d2  8bc8                 mov ecx, eax
// 008351d4  e847c4fcff           call 0x801620
// 008351d9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008351dd  8b542408             mov edx, dword ptr [esp + 8]
// 008351e1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008351e5  6a00                 push 0
// 008351e7  83c009               add eax, 9
// 008351ea  6a00                 push 0
// 008351ec  89442424             mov dword ptr [esp + 0x24], eax
// 008351f0  81c620060000         add esi, 0x620
// 008351f6  56                   push esi
// 008351f7  8d442424             lea eax, [esp + 0x24]
// 008351fb  89542424             mov dword ptr [esp + 0x24], edx
// 008351ff  8b542420             mov edx, dword ptr [esp + 0x20]
// 00835203  50                   push eax
// 00835204  57                   push edi
// 00835205  894c2434             mov dword ptr [esp + 0x34], ecx
// 00835209  89542438             mov dword ptr [esp + 0x38], edx
// 0083520d  e8eec0fcff           call 0x801300
// 00835212  8bc8                 mov ecx, eax
// 00835214  e807c4fcff           call 0x801620
// 00835219  5f                   pop edi
// 0083521a  5e                   pop esi
// 0083521b  83c420               add esp, 0x20
// 0083521e  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007Theme.cpp (function ?FillStatusBar@CXTPOffice2007Theme@@MAEXPAVCDC@@PAVCXTPStatusBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007Theme.cpp
