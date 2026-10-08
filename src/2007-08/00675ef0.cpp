// from server: 100% by auto
// roc 2007-08 00675ef0  unit: CXTPCustomizeOptionsPage  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00675ef0
//
// 00675ef0  56                   push esi
// 00675ef1  57                   push edi
// 00675ef2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00675ef6  8bf1                 mov esi, ecx
// 00675ef8  8d869c000000         lea eax, [esi + 0x9c]
// 00675efe  50                   push eax
// 00675eff  6a6a                 push 0x6a
// 00675f01  57                   push edi
// 00675f02  e813290c00           call 0x73881a
// 00675f07  8d8ef0000000         lea ecx, [esi + 0xf0]
// 00675f0d  51                   push ecx
// 00675f0e  6a6a                 push 0x6a
// 00675f10  57                   push edi
// 00675f11  e8fe280c00           call 0x738814
// 00675f16  8d9688000000         lea edx, [esi + 0x88]
// 00675f1c  52                   push edx
// 00675f1d  6a64                 push 0x64
// 00675f1f  57                   push edi
// 00675f20  e8e9280c00           call 0x73880e
// 00675f25  8d868c000000         lea eax, [esi + 0x8c]
// 00675f2b  50                   push eax
// 00675f2c  6a65                 push 0x65
// 00675f2e  57                   push edi
// 00675f2f  e8da280c00           call 0x73880e
// 00675f34  8d8e90000000         lea ecx, [esi + 0x90]
// 00675f3a  51                   push ecx
// 00675f3b  6a67                 push 0x67
// 00675f3d  57                   push edi
// 00675f3e  e8cb280c00           call 0x73880e
// 00675f43  8d9694000000         lea edx, [esi + 0x94]
// 00675f49  52                   push edx
// 00675f4a  6a68                 push 0x68
// 00675f4c  57                   push edi
// 00675f4d  e8bc280c00           call 0x73880e
// 00675f52  81c698000000         add esi, 0x98
// 00675f58  56                   push esi
// 00675f59  6a69                 push 0x69
// 00675f5b  57                   push edi
// 00675f5c  e8ad280c00           call 0x73880e
// 00675f61  5f                   pop edi
// 00675f62  5e                   pop esi
// 00675f63  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?DoDataExchange@CXTPCustomizeOptionsPage@@MAEXPAVCDataExchange@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCustomizeOptionsPage.cpp
