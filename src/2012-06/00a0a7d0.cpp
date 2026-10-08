// roc 2012-06 00a0a7d0  unit: CXTPOffice2007Theme  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0a7d0
//
// 00a0a7d0  83ec20               sub esp, 0x20
// 00a0a7d3  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a0a7d7  56                   push esi
// 00a0a7d8  57                   push edi
// 00a0a7d9  8bf1                 mov esi, ecx
// 00a0a7db  50                   push eax
// 00a0a7dc  8d4c240c             lea ecx, [esp + 0xc]
// 00a0a7e0  e8bba9fcff           call 0x9d51a0
// 00a0a7e5  8b8efc050000         mov ecx, dword ptr [esi + 0x5fc]
// 00a0a7eb  8b442408             mov eax, dword ptr [esp + 8]
// 00a0a7ef  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a0a7f3  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00a0a7f7  51                   push ecx
// 00a0a7f8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a0a7fc  6a01                 push 1
// 00a0a7fe  2bd0                 sub edx, eax
// 00a0a800  52                   push edx
// 00a0a801  51                   push ecx
// 00a0a802  50                   push eax
// 00a0a803  8bcf                 mov ecx, edi
// 00a0a805  e886ed0800           call 0xa99590
// 00a0a80a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a0a80e  8b542408             mov edx, dword ptr [esp + 8]
// 00a0a812  8d4801               lea ecx, [eax + 1]
// 00a0a815  83c009               add eax, 9
// 00a0a818  6a00                 push 0
// 00a0a81a  89442428             mov dword ptr [esp + 0x28], eax
// 00a0a81e  6a00                 push 0
// 00a0a820  8d8600060000         lea eax, [esi + 0x600]
// 00a0a826  894c2424             mov dword ptr [esp + 0x24], ecx
// 00a0a82a  50                   push eax
// 00a0a82b  8d4c2424             lea ecx, [esp + 0x24]
// 00a0a82f  89542424             mov dword ptr [esp + 0x24], edx
// 00a0a833  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a0a837  51                   push ecx
// 00a0a838  57                   push edi
// 00a0a839  89542434             mov dword ptr [esp + 0x34], edx
// 00a0a83d  e84ec9fcff           call 0x9d7190
// 00a0a842  8bc8                 mov ecx, eax
// 00a0a844  e867ccfcff           call 0x9d74b0
// 00a0a849  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a0a84d  8b542408             mov edx, dword ptr [esp + 8]
// 00a0a851  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a0a855  6a00                 push 0
// 00a0a857  83c009               add eax, 9
// 00a0a85a  6a00                 push 0
// 00a0a85c  89442424             mov dword ptr [esp + 0x24], eax
// 00a0a860  81c620060000         add esi, 0x620
// 00a0a866  56                   push esi
// 00a0a867  8d442424             lea eax, [esp + 0x24]
// 00a0a86b  89542424             mov dword ptr [esp + 0x24], edx
// 00a0a86f  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a0a873  50                   push eax
// 00a0a874  57                   push edi
// 00a0a875  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a0a879  89542438             mov dword ptr [esp + 0x38], edx
// 00a0a87d  e80ec9fcff           call 0x9d7190
// 00a0a882  8bc8                 mov ecx, eax
// 00a0a884  e827ccfcff           call 0x9d74b0
// 00a0a889  5f                   pop edi
// 00a0a88a  5e                   pop esi
// 00a0a88b  83c420               add esp, 0x20
// 00a0a88e  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007Theme.cpp (function ?FillStatusBar@CXTPOffice2007Theme@@MAEXPAVCDC@@PAVCXTPStatusBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007Theme.cpp
