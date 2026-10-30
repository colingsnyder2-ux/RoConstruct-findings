// roc 2009-12 00881c60  unit: CXTPOffice2007Theme  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00881c60
//
// 00881c60  83ec20               sub esp, 0x20
// 00881c63  8b442428             mov eax, dword ptr [esp + 0x28]
// 00881c67  56                   push esi
// 00881c68  57                   push edi
// 00881c69  8bf1                 mov esi, ecx
// 00881c6b  50                   push eax
// 00881c6c  8d4c240c             lea ecx, [esp + 0xc]
// 00881c70  e85b96fcff           call 0x84b2d0
// 00881c75  8b8efc050000         mov ecx, dword ptr [esi + 0x5fc]
// 00881c7b  8b442408             mov eax, dword ptr [esp + 8]
// 00881c7f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00881c83  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00881c87  51                   push ecx
// 00881c88  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00881c8c  6a01                 push 1
// 00881c8e  2bd0                 sub edx, eax
// 00881c90  52                   push edx
// 00881c91  51                   push ecx
// 00881c92  50                   push eax
// 00881c93  8bcf                 mov ecx, edi
// 00881c95  e8fc470a00           call 0x926496
// 00881c9a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00881c9e  8b542408             mov edx, dword ptr [esp + 8]
// 00881ca2  8d4801               lea ecx, [eax + 1]
// 00881ca5  83c009               add eax, 9
// 00881ca8  6a00                 push 0
// 00881caa  89442428             mov dword ptr [esp + 0x28], eax
// 00881cae  6a00                 push 0
// 00881cb0  8d8600060000         lea eax, [esi + 0x600]
// 00881cb6  894c2424             mov dword ptr [esp + 0x24], ecx
// 00881cba  50                   push eax
// 00881cbb  8d4c2424             lea ecx, [esp + 0x24]
// 00881cbf  89542424             mov dword ptr [esp + 0x24], edx
// 00881cc3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00881cc7  51                   push ecx
// 00881cc8  57                   push edi
// 00881cc9  89542434             mov dword ptr [esp + 0x34], edx
// 00881ccd  e8ceb5fcff           call 0x84d2a0
// 00881cd2  8bc8                 mov ecx, eax
// 00881cd4  e8e7b8fcff           call 0x84d5c0
// 00881cd9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00881cdd  8b542408             mov edx, dword ptr [esp + 8]
// 00881ce1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00881ce5  6a00                 push 0
// 00881ce7  83c009               add eax, 9
// 00881cea  6a00                 push 0
// 00881cec  89442424             mov dword ptr [esp + 0x24], eax
// 00881cf0  81c620060000         add esi, 0x620
// 00881cf6  56                   push esi
// 00881cf7  8d442424             lea eax, [esp + 0x24]
// 00881cfb  89542424             mov dword ptr [esp + 0x24], edx
// 00881cff  8b542420             mov edx, dword ptr [esp + 0x20]
// 00881d03  50                   push eax
// 00881d04  57                   push edi
// 00881d05  894c2434             mov dword ptr [esp + 0x34], ecx
// 00881d09  89542438             mov dword ptr [esp + 0x38], edx
// 00881d0d  e88eb5fcff           call 0x84d2a0
// 00881d12  8bc8                 mov ecx, eax
// 00881d14  e8a7b8fcff           call 0x84d5c0
// 00881d19  5f                   pop edi
// 00881d1a  5e                   pop esi
// 00881d1b  83c420               add esp, 0x20
// 00881d1e  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007Theme.cpp (function ?FillStatusBar@CXTPOffice2007Theme@@MAEXPAVCDC@@PAVCXTPStatusBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007Theme.cpp
