// roc 2009-12 00848820  unit: CXTPControlWorkspaceActions  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00848820
//
// 00848820  56                   push esi
// 00848821  57                   push edi
// 00848822  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00848826  6a00                 push 0
// 00848828  8bf1                 mov esi, ecx
// 0084882a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084882e  57                   push edi
// 0084882f  e83c0d0100           call 0x859570
// 00848834  85c0                 test eax, eax
// 00848836  7421                 je 0x848859
// 00848838  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0084883c  8b01                 mov eax, dword ptr [ecx]
// 0084883e  6a01                 push 1
// 00848840  50                   push eax
// 00848841  6856fd9900           push 0x99fd56
// 00848846  8d5001               lea edx, [eax + 1]
// 00848849  57                   push edi
// 0084884a  8911                 mov dword ptr [ecx], edx
// 0084884c  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 00848852  6a01                 push 1
// 00848854  e807f9ffff           call 0x848160
// 00848859  5f                   pop edi
// 0084885a  5e                   pop esi
// 0084885b  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?AddCommand@CXTPControlWorkspaceActions@@IAEXPAVCXTPTabClientWnd@@IAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
