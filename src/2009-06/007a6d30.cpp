// roc 2009-06 007a6d30  unit: CXTPOffice2007Theme  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a6d30
//
// 007a6d30  83ec20               sub esp, 0x20
// 007a6d33  8b442428             mov eax, dword ptr [esp + 0x28]
// 007a6d37  56                   push esi
// 007a6d38  57                   push edi
// 007a6d39  8bf1                 mov esi, ecx
// 007a6d3b  50                   push eax
// 007a6d3c  8d4c240c             lea ecx, [esp + 0xc]
// 007a6d40  e88b97fcff           call 0x7704d0
// 007a6d45  8b8efc050000         mov ecx, dword ptr [esi + 0x5fc]
// 007a6d4b  8b442408             mov eax, dword ptr [esp + 8]
// 007a6d4f  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a6d53  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 007a6d57  51                   push ecx
// 007a6d58  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007a6d5c  6a01                 push 1
// 007a6d5e  2bd0                 sub edx, eax
// 007a6d60  52                   push edx
// 007a6d61  51                   push ecx
// 007a6d62  50                   push eax
// 007a6d63  8bcf                 mov ecx, edi
// 007a6d65  e8c6510a00           call 0x84bf30
// 007a6d6a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007a6d6e  8b542408             mov edx, dword ptr [esp + 8]
// 007a6d72  8d4801               lea ecx, [eax + 1]
// 007a6d75  83c009               add eax, 9
// 007a6d78  6a00                 push 0
// 007a6d7a  89442428             mov dword ptr [esp + 0x28], eax
// 007a6d7e  6a00                 push 0
// 007a6d80  8d8600060000         lea eax, [esi + 0x600]
// 007a6d86  894c2424             mov dword ptr [esp + 0x24], ecx
// 007a6d8a  50                   push eax
// 007a6d8b  8d4c2424             lea ecx, [esp + 0x24]
// 007a6d8f  89542424             mov dword ptr [esp + 0x24], edx
// 007a6d93  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007a6d97  51                   push ecx
// 007a6d98  57                   push edi
// 007a6d99  89542434             mov dword ptr [esp + 0x34], edx
// 007a6d9d  e8ceb7fcff           call 0x772570
// 007a6da2  8bc8                 mov ecx, eax
// 007a6da4  e8e7bafcff           call 0x772890
// 007a6da9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007a6dad  8b542408             mov edx, dword ptr [esp + 8]
// 007a6db1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007a6db5  6a00                 push 0
// 007a6db7  83c009               add eax, 9
// 007a6dba  6a00                 push 0
// 007a6dbc  89442424             mov dword ptr [esp + 0x24], eax
// 007a6dc0  81c620060000         add esi, 0x620
// 007a6dc6  56                   push esi
// 007a6dc7  8d442424             lea eax, [esp + 0x24]
// 007a6dcb  89542424             mov dword ptr [esp + 0x24], edx
// 007a6dcf  8b542420             mov edx, dword ptr [esp + 0x20]
// 007a6dd3  50                   push eax
// 007a6dd4  57                   push edi
// 007a6dd5  894c2434             mov dword ptr [esp + 0x34], ecx
// 007a6dd9  89542438             mov dword ptr [esp + 0x38], edx
// 007a6ddd  e88eb7fcff           call 0x772570
// 007a6de2  8bc8                 mov ecx, eax
// 007a6de4  e8a7bafcff           call 0x772890
// 007a6de9  5f                   pop edi
// 007a6dea  5e                   pop esi
// 007a6deb  83c420               add esp, 0x20
// 007a6dee  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007Theme.cpp (function ?FillStatusBar@CXTPOffice2007Theme@@MAEXPAVCDC@@PAVCXTPStatusBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007Theme.cpp
