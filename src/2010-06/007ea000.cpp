// roc 2010-06 007ea000  unit: CXTPToolBar  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ea000
//
// 007ea000  56                   push esi
// 007ea001  8b742408             mov esi, dword ptr [esp + 8]
// 007ea005  57                   push edi
// 007ea006  56                   push esi
// 007ea007  8bf9                 mov edi, ecx
// 007ea009  e812feffff           call 0x7e9e20
// 007ea00e  6a01                 push 1
// 007ea010  8d8788010000         lea eax, [edi + 0x188]
// 007ea016  50                   push eax
// 007ea017  6820bea500           push 0xa5be20
// 007ea01c  56                   push esi
// 007ea01d  e8aeaa0100           call 0x804ad0
// 007ea022  6a00                 push 0
// 007ea024  8d8f8c010000         lea ecx, [edi + 0x18c]
// 007ea02a  51                   push ecx
// 007ea02b  6818bea500           push 0xa5be18
// 007ea030  56                   push esi
// 007ea031  e89aaa0100           call 0x804ad0
// 007ea036  83c420               add esp, 0x20
// 007ea039  837e2c06             cmp dword ptr [esi + 0x2c], 6
// 007ea03d  7617                 jbe 0x7ea056
// 007ea03f  6a01                 push 1
// 007ea041  8d9734010000         lea edx, [edi + 0x134]
// 007ea047  52                   push edx
// 007ea048  680cbea500           push 0xa5be0c
// 007ea04d  56                   push esi
// 007ea04e  e87daa0100           call 0x804ad0
// 007ea053  83c410               add esp, 0x10
// 007ea056  837e2c07             cmp dword ptr [esi + 0x2c], 7
// 007ea05a  7617                 jbe 0x7ea073
// 007ea05c  6a01                 push 1
// 007ea05e  8d87a0010000         lea eax, [edi + 0x1a0]
// 007ea064  50                   push eax
// 007ea065  68f8bda500           push 0xa5bdf8
// 007ea06a  56                   push esi
// 007ea06b  e860aa0100           call 0x804ad0
// 007ea070  83c410               add esp, 0x10
// 007ea073  837e2c10             cmp dword ptr [esi + 0x2c], 0x10
// 007ea077  761d                 jbe 0x7ea096
// 007ea079  6a01                 push 1
// 007ea07b  8d8f58010000         lea ecx, [edi + 0x158]
// 007ea081  51                   push ecx
// 007ea082  68e0bda500           push 0xa5bde0
// 007ea087  56                   push esi
// 007ea088  e843aa0100           call 0x804ad0
// 007ea08d  83c410               add esp, 0x10
// 007ea090  837e2c10             cmp dword ptr [esi + 0x2c], 0x10
// 007ea094  7719                 ja 0x7ea0af
// 007ea096  837e2800             cmp dword ptr [esi + 0x28], 0
// 007ea09a  7413                 je 0x7ea0af
// 007ea09c  83bff800000000       cmp dword ptr [edi + 0xf8], 0
// 007ea0a3  750a                 jne 0x7ea0af
// 007ea0a5  c7873401000000000000 mov dword ptr [edi + 0x134], 0
// 007ea0af  5f                   pop edi
// 007ea0b0  5e                   pop esi
// 007ea0b1  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPToolBar@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
