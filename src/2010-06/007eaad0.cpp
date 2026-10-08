// roc 2010-06 007eaad0  unit: CXTPToolBar::CControlButtonExpand  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007eaad0
//
// 007eaad0  56                   push esi
// 007eaad1  8b742408             mov esi, dword ptr [esp + 8]
// 007eaad5  57                   push edi
// 007eaad6  56                   push esi
// 007eaad7  8bf9                 mov edi, ecx
// 007eaad9  e8f2fbffff           call 0x7ea6d0
// 007eaade  837e2800             cmp dword ptr [esi + 0x28], 0
// 007eaae2  752e                 jne 0x7eab12
// 007eaae4  8b8778010000         mov eax, dword ptr [edi + 0x178]
// 007eaaea  85c0                 test eax, eax
// 007eaaec  7413                 je 0x7eab01
// 007eaaee  8b80d8000000         mov eax, dword ptr [eax + 0xd8]
// 007eaaf4  6a00                 push 0
// 007eaaf6  8d4c2410             lea ecx, [esp + 0x10]
// 007eaafa  89442410             mov dword ptr [esp + 0x10], eax
// 007eaafe  51                   push ecx
// 007eaaff  eb1a                 jmp 0x7eab1b
// 007eab01  6a00                 push 0
// 007eab03  8d4c2410             lea ecx, [esp + 0x10]
// 007eab07  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007eab0f  51                   push ecx
// 007eab10  eb09                 jmp 0x7eab1b
// 007eab12  6a00                 push 0
// 007eab14  8d977c010000         lea edx, [edi + 0x17c]
// 007eab1a  52                   push edx
// 007eab1b  6898bfa500           push 0xa5bf98
// 007eab20  56                   push esi
// 007eab21  e81a9f0100           call 0x804a40
// 007eab26  8b462c               mov eax, dword ptr [esi + 0x2c]
// 007eab29  83c410               add esp, 0x10
// 007eab2c  83f804               cmp eax, 4
// 007eab2f  761c                 jbe 0x7eab4d
// 007eab31  83f812               cmp eax, 0x12
// 007eab34  7317                 jae 0x7eab4d
// 007eab36  6a00                 push 0
// 007eab38  81c748010000         add edi, 0x148
// 007eab3e  57                   push edi
// 007eab3f  68849ba300           push 0xa39b84
// 007eab44  56                   push esi
// 007eab45  e8f69e0100           call 0x804a40
// 007eab4a  83c410               add esp, 0x10
// 007eab4d  5f                   pop edi
// 007eab4e  5e                   pop esi
// 007eab4f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlPopup@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
