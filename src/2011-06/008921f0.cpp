// roc 2011-06 008921f0  unit: CXTPOffice2007Theme  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008921f0
//
// 008921f0  83ec20               sub esp, 0x20
// 008921f3  8b442428             mov eax, dword ptr [esp + 0x28]
// 008921f7  56                   push esi
// 008921f8  57                   push edi
// 008921f9  8bf1                 mov esi, ecx
// 008921fb  50                   push eax
// 008921fc  8d4c240c             lea ecx, [esp + 0xc]
// 00892200  e88babfcff           call 0x85cd90
// 00892205  8b8efc050000         mov ecx, dword ptr [esi + 0x5fc]
// 0089220b  8b442408             mov eax, dword ptr [esp + 8]
// 0089220f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00892213  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00892217  51                   push ecx
// 00892218  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0089221c  6a01                 push 1
// 0089221e  2bd0                 sub edx, eax
// 00892220  52                   push edx
// 00892221  51                   push ecx
// 00892222  50                   push eax
// 00892223  8bcf                 mov ecx, edi
// 00892225  e8aca31300           call 0x9cc5d6
// 0089222a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0089222e  8b542408             mov edx, dword ptr [esp + 8]
// 00892232  8d4801               lea ecx, [eax + 1]
// 00892235  83c009               add eax, 9
// 00892238  6a00                 push 0
// 0089223a  89442428             mov dword ptr [esp + 0x28], eax
// 0089223e  6a00                 push 0
// 00892240  8d8600060000         lea eax, [esi + 0x600]
// 00892246  894c2424             mov dword ptr [esp + 0x24], ecx
// 0089224a  50                   push eax
// 0089224b  8d4c2424             lea ecx, [esp + 0x24]
// 0089224f  89542424             mov dword ptr [esp + 0x24], edx
// 00892253  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00892257  51                   push ecx
// 00892258  57                   push edi
// 00892259  89542434             mov dword ptr [esp + 0x34], edx
// 0089225d  e81ecbfcff           call 0x85ed80
// 00892262  8bc8                 mov ecx, eax
// 00892264  e837cefcff           call 0x85f0a0
// 00892269  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0089226d  8b542408             mov edx, dword ptr [esp + 8]
// 00892271  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00892275  6a00                 push 0
// 00892277  83c009               add eax, 9
// 0089227a  6a00                 push 0
// 0089227c  89442424             mov dword ptr [esp + 0x24], eax
// 00892280  81c620060000         add esi, 0x620
// 00892286  56                   push esi
// 00892287  8d442424             lea eax, [esp + 0x24]
// 0089228b  89542424             mov dword ptr [esp + 0x24], edx
// 0089228f  8b542420             mov edx, dword ptr [esp + 0x20]
// 00892293  50                   push eax
// 00892294  57                   push edi
// 00892295  894c2434             mov dword ptr [esp + 0x34], ecx
// 00892299  89542438             mov dword ptr [esp + 0x38], edx
// 0089229d  e8decafcff           call 0x85ed80
// 008922a2  8bc8                 mov ecx, eax
// 008922a4  e8f7cdfcff           call 0x85f0a0
// 008922a9  5f                   pop edi
// 008922aa  5e                   pop esi
// 008922ab  83c420               add esp, 0x20
// 008922ae  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007Theme.cpp (function ?FillStatusBar@CXTPOffice2007Theme@@MAEXPAVCDC@@PAVCXTPStatusBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007Theme.cpp
