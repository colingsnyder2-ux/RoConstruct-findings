// roc 2008-06 00738660  unit: CXTPOffice2007Theme  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00738660
//
// 00738660  83ec20               sub esp, 0x20
// 00738663  8b442428             mov eax, dword ptr [esp + 0x28]
// 00738667  56                   push esi
// 00738668  57                   push edi
// 00738669  8bf1                 mov esi, ecx
// 0073866b  50                   push eax
// 0073866c  8d4c240c             lea ecx, [esp + 0xc]
// 00738670  e8bbf4fbff           call 0x6f7b30
// 00738675  8b8efc050000         mov ecx, dword ptr [esi + 0x5fc]
// 0073867b  8b442408             mov eax, dword ptr [esp + 8]
// 0073867f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00738683  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00738687  51                   push ecx
// 00738688  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0073868c  6a01                 push 1
// 0073868e  2bd0                 sub edx, eax
// 00738690  52                   push edx
// 00738691  51                   push ecx
// 00738692  50                   push eax
// 00738693  8bcf                 mov ecx, edi
// 00738695  e8a6390800           call 0x7bc040
// 0073869a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0073869e  8b542408             mov edx, dword ptr [esp + 8]
// 007386a2  8d4801               lea ecx, [eax + 1]
// 007386a5  83c009               add eax, 9
// 007386a8  6a00                 push 0
// 007386aa  89442428             mov dword ptr [esp + 0x28], eax
// 007386ae  6a00                 push 0
// 007386b0  8d8600060000         lea eax, [esi + 0x600]
// 007386b6  894c2424             mov dword ptr [esp + 0x24], ecx
// 007386ba  50                   push eax
// 007386bb  8d4c2424             lea ecx, [esp + 0x24]
// 007386bf  89542424             mov dword ptr [esp + 0x24], edx
// 007386c3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007386c7  51                   push ecx
// 007386c8  57                   push edi
// 007386c9  89542434             mov dword ptr [esp + 0x34], edx
// 007386cd  e8fe14fcff           call 0x6f9bd0
// 007386d2  8bc8                 mov ecx, eax
// 007386d4  e81718fcff           call 0x6f9ef0
// 007386d9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007386dd  8b542408             mov edx, dword ptr [esp + 8]
// 007386e1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007386e5  6a00                 push 0
// 007386e7  83c009               add eax, 9
// 007386ea  6a00                 push 0
// 007386ec  89442424             mov dword ptr [esp + 0x24], eax
// 007386f0  81c620060000         add esi, 0x620
// 007386f6  56                   push esi
// 007386f7  8d442424             lea eax, [esp + 0x24]
// 007386fb  89542424             mov dword ptr [esp + 0x24], edx
// 007386ff  8b542420             mov edx, dword ptr [esp + 0x20]
// 00738703  50                   push eax
// 00738704  57                   push edi
// 00738705  894c2434             mov dword ptr [esp + 0x34], ecx
// 00738709  89542438             mov dword ptr [esp + 0x38], edx
// 0073870d  e8be14fcff           call 0x6f9bd0
// 00738712  8bc8                 mov ecx, eax
// 00738714  e8d717fcff           call 0x6f9ef0
// 00738719  5f                   pop edi
// 0073871a  5e                   pop esi
// 0073871b  83c420               add esp, 0x20
// 0073871e  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007Theme.cpp (function ?FillStatusBar@CXTPOffice2007Theme@@MAEXPAVCDC@@PAVCXTPStatusBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007Theme.cpp
