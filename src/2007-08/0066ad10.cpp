// from server: 100% by auto
// roc 2007-08 0066ad10  unit: CXTPToolBar::CControlButtonExpand  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066ad10
//
// 0066ad10  56                   push esi
// 0066ad11  57                   push edi
// 0066ad12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0066ad16  8bf1                 mov esi, ecx
// 0066ad18  6a00                 push 0
// 0066ad1a  8d462c               lea eax, [esi + 0x2c]
// 0066ad1d  50                   push eax
// 0066ad1e  680cad7c00           push 0x7cad0c
// 0066ad23  57                   push edi
// 0066ad24  e8f7a90100           call 0x685720
// 0066ad29  6a00                 push 0
// 0066ad2b  8d4e30               lea ecx, [esi + 0x30]
// 0066ad2e  51                   push ecx
// 0066ad2f  6804ad7c00           push 0x7cad04
// 0066ad34  57                   push edi
// 0066ad35  e8e6a90100           call 0x685720
// 0066ad3a  6854597800           push 0x785954
// 0066ad3f  8d5640               lea edx, [esi + 0x40]
// 0066ad42  52                   push edx
// 0066ad43  6890807c00           push 0x7c8090
// 0066ad48  57                   push edi
// 0066ad49  e872aa0100           call 0x6857c0
// 0066ad4e  6854597800           push 0x785954
// 0066ad53  8d4650               lea eax, [esi + 0x50]
// 0066ad56  50                   push eax
// 0066ad57  68f4ac7c00           push 0x7cacf4
// 0066ad5c  57                   push edi
// 0066ad5d  e85eaa0100           call 0x6857c0
// 0066ad62  83c440               add esp, 0x40
// 0066ad65  6854597800           push 0x785954
// 0066ad6a  8d4e44               lea ecx, [esi + 0x44]
// 0066ad6d  51                   push ecx
// 0066ad6e  68e8ac7c00           push 0x7cace8
// 0066ad73  57                   push edi
// 0066ad74  e847aa0100           call 0x6857c0
// 0066ad79  6854597800           push 0x785954
// 0066ad7e  8d5648               lea edx, [esi + 0x48]
// 0066ad81  52                   push edx
// 0066ad82  68d8ac7c00           push 0x7cacd8
// 0066ad87  57                   push edi
// 0066ad88  e833aa0100           call 0x6857c0
// 0066ad8d  6854597800           push 0x785954
// 0066ad92  83c64c               add esi, 0x4c
// 0066ad95  56                   push esi
// 0066ad96  68ccac7c00           push 0x7caccc
// 0066ad9b  57                   push edi
// 0066ad9c  e81faa0100           call 0x6857c0
// 0066ada1  83c430               add esp, 0x30
// 0066ada4  5f                   pop edi
// 0066ada5  5e                   pop esi
// 0066ada6  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlAction@@QAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockState.cpp
