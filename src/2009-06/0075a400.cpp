// roc 2009-06 0075a400  unit: CXTPControls  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075a400
//
// 0075a400  56                   push esi
// 0075a401  57                   push edi
// 0075a402  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0075a406  8bf1                 mov esi, ecx
// 0075a408  6a00                 push 0
// 0075a40a  8d462c               lea eax, [esi + 0x2c]
// 0075a40d  50                   push eax
// 0075a40e  6834758f00           push 0x8f7534
// 0075a413  57                   push edi
// 0075a414  e887b80100           call 0x775ca0
// 0075a419  6a00                 push 0
// 0075a41b  8d4e30               lea ecx, [esi + 0x30]
// 0075a41e  51                   push ecx
// 0075a41f  682c758f00           push 0x8f752c
// 0075a424  57                   push edi
// 0075a425  e876b80100           call 0x775ca0
// 0075a42a  6816d28a00           push 0x8ad216
// 0075a42f  8d5640               lea edx, [esi + 0x40]
// 0075a432  52                   push edx
// 0075a433  68f0458f00           push 0x8f45f0
// 0075a438  57                   push edi
// 0075a439  e822b90100           call 0x775d60
// 0075a43e  6816d28a00           push 0x8ad216
// 0075a443  8d4650               lea eax, [esi + 0x50]
// 0075a446  50                   push eax
// 0075a447  681c758f00           push 0x8f751c
// 0075a44c  57                   push edi
// 0075a44d  e80eb90100           call 0x775d60
// 0075a452  83c440               add esp, 0x40
// 0075a455  6816d28a00           push 0x8ad216
// 0075a45a  8d4e44               lea ecx, [esi + 0x44]
// 0075a45d  51                   push ecx
// 0075a45e  6810758f00           push 0x8f7510
// 0075a463  57                   push edi
// 0075a464  e8f7b80100           call 0x775d60
// 0075a469  6816d28a00           push 0x8ad216
// 0075a46e  8d5648               lea edx, [esi + 0x48]
// 0075a471  52                   push edx
// 0075a472  6800758f00           push 0x8f7500
// 0075a477  57                   push edi
// 0075a478  e8e3b80100           call 0x775d60
// 0075a47d  6816d28a00           push 0x8ad216
// 0075a482  83c64c               add esi, 0x4c
// 0075a485  56                   push esi
// 0075a486  68f4748f00           push 0x8f74f4
// 0075a48b  57                   push edi
// 0075a48c  e8cfb80100           call 0x775d60
// 0075a491  83c430               add esp, 0x30
// 0075a494  5f                   pop edi
// 0075a495  5e                   pop esi
// 0075a496  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlAction@@QAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
