// from server: 100% by auto
// roc 2007-08 0065edc0  unit: CXTPReportHeader  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065edc0
//
// 0065edc0  56                   push esi
// 0065edc1  57                   push edi
// 0065edc2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0065edc6  8bf1                 mov esi, ecx
// 0065edc8  6a01                 push 1
// 0065edca  8d467c               lea eax, [esi + 0x7c]
// 0065edcd  50                   push eax
// 0065edce  68f88c7c00           push 0x7c8cf8
// 0065edd3  57                   push edi
// 0065edd4  e8a7690200           call 0x685780
// 0065edd9  6a01                 push 1
// 0065eddb  8d8e80000000         lea ecx, [esi + 0x80]
// 0065ede1  51                   push ecx
// 0065ede2  68e48c7c00           push 0x7c8ce4
// 0065ede7  57                   push edi
// 0065ede8  e893690200           call 0x685780
// 0065eded  6a01                 push 1
// 0065edef  8d9684000000         lea edx, [esi + 0x84]
// 0065edf5  52                   push edx
// 0065edf6  68d08c7c00           push 0x7c8cd0
// 0065edfb  57                   push edi
// 0065edfc  e87f690200           call 0x685780
// 0065ee01  6a01                 push 1
// 0065ee03  8d8688000000         lea eax, [esi + 0x88]
// 0065ee09  50                   push eax
// 0065ee0a  68c08c7c00           push 0x7c8cc0
// 0065ee0f  57                   push edi
// 0065ee10  e86b690200           call 0x685780
// 0065ee15  83c440               add esp, 0x40
// 0065ee18  6a01                 push 1
// 0065ee1a  8d8e8c000000         lea ecx, [esi + 0x8c]
// 0065ee20  51                   push ecx
// 0065ee21  68ac8c7c00           push 0x7c8cac
// 0065ee26  57                   push edi
// 0065ee27  e854690200           call 0x685780
// 0065ee2c  8b15a4628b00         mov edx, dword ptr [0x8b62a4]
// 0065ee32  52                   push edx
// 0065ee33  81c698000000         add esi, 0x98
// 0065ee39  56                   push esi
// 0065ee3a  68988c7c00           push 0x7c8c98
// 0065ee3f  57                   push edi
// 0065ee40  e83b690200           call 0x685780
// 0065ee45  83c420               add esp, 0x20
// 0065ee48  5f                   pop edi
// 0065ee49  5e                   pop esi
// 0065ee4a  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportHeader.cpp (function ?DoPropExchange@CXTPReportHeader@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportHeader.cpp
