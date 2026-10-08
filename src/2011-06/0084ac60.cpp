// roc 2011-06 0084ac60  unit: CXTPControls  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084ac60
//
// 0084ac60  56                   push esi
// 0084ac61  57                   push edi
// 0084ac62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0084ac66  8bf1                 mov esi, ecx
// 0084ac68  6a00                 push 0
// 0084ac6a  8d462c               lea eax, [esi + 0x2c]
// 0084ac6d  50                   push eax
// 0084ac6e  680c79ac00           push 0xac790c
// 0084ac73  57                   push edi
// 0084ac74  e8d7520100           call 0x85ff50
// 0084ac79  6a00                 push 0
// 0084ac7b  8d4e30               lea ecx, [esi + 0x30]
// 0084ac7e  51                   push ecx
// 0084ac7f  680479ac00           push 0xac7904
// 0084ac84  57                   push edi
// 0084ac85  e8c6520100           call 0x85ff50
// 0084ac8a  68cabea500           push 0xa5beca
// 0084ac8f  8d5640               lea edx, [esi + 0x40]
// 0084ac92  52                   push edx
// 0084ac93  680058ac00           push 0xac5800
// 0084ac98  57                   push edi
// 0084ac99  e872530100           call 0x860010
// 0084ac9e  68cabea500           push 0xa5beca
// 0084aca3  8d4650               lea eax, [esi + 0x50]
// 0084aca6  50                   push eax
// 0084aca7  68f478ac00           push 0xac78f4
// 0084acac  57                   push edi
// 0084acad  e85e530100           call 0x860010
// 0084acb2  83c440               add esp, 0x40
// 0084acb5  68cabea500           push 0xa5beca
// 0084acba  8d4e44               lea ecx, [esi + 0x44]
// 0084acbd  51                   push ecx
// 0084acbe  68e878ac00           push 0xac78e8
// 0084acc3  57                   push edi
// 0084acc4  e847530100           call 0x860010
// 0084acc9  68cabea500           push 0xa5beca
// 0084acce  8d5648               lea edx, [esi + 0x48]
// 0084acd1  52                   push edx
// 0084acd2  68d878ac00           push 0xac78d8
// 0084acd7  57                   push edi
// 0084acd8  e833530100           call 0x860010
// 0084acdd  68cabea500           push 0xa5beca
// 0084ace2  83c64c               add esi, 0x4c
// 0084ace5  56                   push esi
// 0084ace6  68cc78ac00           push 0xac78cc
// 0084aceb  57                   push edi
// 0084acec  e81f530100           call 0x860010
// 0084acf1  83c430               add esp, 0x30
// 0084acf4  5f                   pop edi
// 0084acf5  5e                   pop esi
// 0084acf6  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlAction@@QAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
