// roc 2009-12 00835220  unit: CXTPControls  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00835220
//
// 00835220  56                   push esi
// 00835221  57                   push edi
// 00835222  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00835226  8bf1                 mov esi, ecx
// 00835228  6a00                 push 0
// 0083522a  8d462c               lea eax, [esi + 0x2c]
// 0083522d  50                   push eax
// 0083522e  68dc799f00           push 0x9f79dc
// 00835233  57                   push edi
// 00835234  e8c7b70100           call 0x850a00
// 00835239  6a00                 push 0
// 0083523b  8d4e30               lea ecx, [esi + 0x30]
// 0083523e  51                   push ecx
// 0083523f  68d4799f00           push 0x9f79d4
// 00835244  57                   push edi
// 00835245  e8b6b70100           call 0x850a00
// 0083524a  6856fd9900           push 0x99fd56
// 0083524f  8d5640               lea edx, [esi + 0x40]
// 00835252  52                   push edx
// 00835253  68b04a9f00           push 0x9f4ab0
// 00835258  57                   push edi
// 00835259  e862b80100           call 0x850ac0
// 0083525e  6856fd9900           push 0x99fd56
// 00835263  8d4650               lea eax, [esi + 0x50]
// 00835266  50                   push eax
// 00835267  68c4799f00           push 0x9f79c4
// 0083526c  57                   push edi
// 0083526d  e84eb80100           call 0x850ac0
// 00835272  83c440               add esp, 0x40
// 00835275  6856fd9900           push 0x99fd56
// 0083527a  8d4e44               lea ecx, [esi + 0x44]
// 0083527d  51                   push ecx
// 0083527e  68b8799f00           push 0x9f79b8
// 00835283  57                   push edi
// 00835284  e837b80100           call 0x850ac0
// 00835289  6856fd9900           push 0x99fd56
// 0083528e  8d5648               lea edx, [esi + 0x48]
// 00835291  52                   push edx
// 00835292  68a8799f00           push 0x9f79a8
// 00835297  57                   push edi
// 00835298  e823b80100           call 0x850ac0
// 0083529d  6856fd9900           push 0x99fd56
// 008352a2  83c64c               add esi, 0x4c
// 008352a5  56                   push esi
// 008352a6  689c799f00           push 0x9f799c
// 008352ab  57                   push edi
// 008352ac  e80fb80100           call 0x850ac0
// 008352b1  83c430               add esp, 0x30
// 008352b4  5f                   pop edi
// 008352b5  5e                   pop esi
// 008352b6  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlAction@@QAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
