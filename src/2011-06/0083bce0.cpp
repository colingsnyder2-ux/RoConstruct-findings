// roc 2011-06 0083bce0  unit: CXTPReportHeader  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083bce0
//
// 0083bce0  56                   push esi
// 0083bce1  57                   push edi
// 0083bce2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0083bce6  8bf1                 mov esi, ecx
// 0083bce8  6a01                 push 1
// 0083bcea  8d467c               lea eax, [esi + 0x7c]
// 0083bced  50                   push eax
// 0083bcee  68c854ac00           push 0xac54c8
// 0083bcf3  57                   push edi
// 0083bcf4  e8b7420200           call 0x85ffb0
// 0083bcf9  6a01                 push 1
// 0083bcfb  8d8e80000000         lea ecx, [esi + 0x80]
// 0083bd01  51                   push ecx
// 0083bd02  68b454ac00           push 0xac54b4
// 0083bd07  57                   push edi
// 0083bd08  e8a3420200           call 0x85ffb0
// 0083bd0d  6a01                 push 1
// 0083bd0f  8d9684000000         lea edx, [esi + 0x84]
// 0083bd15  52                   push edx
// 0083bd16  68a054ac00           push 0xac54a0
// 0083bd1b  57                   push edi
// 0083bd1c  e88f420200           call 0x85ffb0
// 0083bd21  6a01                 push 1
// 0083bd23  8d8688000000         lea eax, [esi + 0x88]
// 0083bd29  50                   push eax
// 0083bd2a  689054ac00           push 0xac5490
// 0083bd2f  57                   push edi
// 0083bd30  e87b420200           call 0x85ffb0
// 0083bd35  83c440               add esp, 0x40
// 0083bd38  6a01                 push 1
// 0083bd3a  8d8e8c000000         lea ecx, [esi + 0x8c]
// 0083bd40  51                   push ecx
// 0083bd41  687c54ac00           push 0xac547c
// 0083bd46  57                   push edi
// 0083bd47  e864420200           call 0x85ffb0
// 0083bd4c  8b15ec68c900         mov edx, dword ptr [0xc968ec]
// 0083bd52  52                   push edx
// 0083bd53  81c698000000         add esi, 0x98
// 0083bd59  56                   push esi
// 0083bd5a  686854ac00           push 0xac5468
// 0083bd5f  57                   push edi
// 0083bd60  e84b420200           call 0x85ffb0
// 0083bd65  83c420               add esp, 0x20
// 0083bd68  5f                   pop edi
// 0083bd69  5e                   pop esi
// 0083bd6a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?DoPropExchange@CXTPReportHeader@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
