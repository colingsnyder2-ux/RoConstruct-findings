// roc 2009-12 008368b0  unit: CXTPToolBar::CControlButtonExpand  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008368b0
//
// 008368b0  56                   push esi
// 008368b1  8b742408             mov esi, dword ptr [esp + 8]
// 008368b5  57                   push edi
// 008368b6  56                   push esi
// 008368b7  8bf9                 mov edi, ecx
// 008368b9  e8f2fbffff           call 0x8364b0
// 008368be  837e2800             cmp dword ptr [esi + 0x28], 0
// 008368c2  752e                 jne 0x8368f2
// 008368c4  8b8778010000         mov eax, dword ptr [edi + 0x178]
// 008368ca  85c0                 test eax, eax
// 008368cc  7413                 je 0x8368e1
// 008368ce  8b80d8000000         mov eax, dword ptr [eax + 0xd8]
// 008368d4  6a00                 push 0
// 008368d6  8d4c2410             lea ecx, [esp + 0x10]
// 008368da  89442410             mov dword ptr [esp + 0x10], eax
// 008368de  51                   push ecx
// 008368df  eb1a                 jmp 0x8368fb
// 008368e1  6a00                 push 0
// 008368e3  8d4c2410             lea ecx, [esp + 0x10]
// 008368e7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008368ef  51                   push ecx
// 008368f0  eb09                 jmp 0x8368fb
// 008368f2  6a00                 push 0
// 008368f4  8d977c010000         lea edx, [edi + 0x17c]
// 008368fa  52                   push edx
// 008368fb  68b87c9f00           push 0x9f7cb8
// 00836900  56                   push esi
// 00836901  e8faa00100           call 0x850a00
// 00836906  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00836909  83c410               add esp, 0x10
// 0083690c  83f804               cmp eax, 4
// 0083690f  761c                 jbe 0x83692d
// 00836911  83f812               cmp eax, 0x12
// 00836914  7317                 jae 0x83692d
// 00836916  6a00                 push 0
// 00836918  81c748010000         add edi, 0x148
// 0083691e  57                   push edi
// 0083691f  6844a29d00           push 0x9da244
// 00836924  56                   push esi
// 00836925  e8d6a00100           call 0x850a00
// 0083692a  83c410               add esp, 0x10
// 0083692d  5f                   pop edi
// 0083692e  5e                   pop esi
// 0083692f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlPopup@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
