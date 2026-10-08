// from server: 100% by auto
// roc 2008-06 006d4eb0  unit: CXTPReportHeader  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d4eb0
//
// 006d4eb0  56                   push esi
// 006d4eb1  57                   push edi
// 006d4eb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006d4eb6  8bf1                 mov esi, ecx
// 006d4eb8  6a01                 push 1
// 006d4eba  8d467c               lea eax, [esi + 0x7c]
// 006d4ebd  50                   push eax
// 006d4ebe  68bc438500           push 0x8543bc
// 006d4ec3  57                   push edi
// 006d4ec4  e8d7840200           call 0x6fd3a0
// 006d4ec9  6a01                 push 1
// 006d4ecb  8d8e80000000         lea ecx, [esi + 0x80]
// 006d4ed1  51                   push ecx
// 006d4ed2  68a8438500           push 0x8543a8
// 006d4ed7  57                   push edi
// 006d4ed8  e8c3840200           call 0x6fd3a0
// 006d4edd  6a01                 push 1
// 006d4edf  8d9684000000         lea edx, [esi + 0x84]
// 006d4ee5  52                   push edx
// 006d4ee6  6894438500           push 0x854394
// 006d4eeb  57                   push edi
// 006d4eec  e8af840200           call 0x6fd3a0
// 006d4ef1  6a01                 push 1
// 006d4ef3  8d8688000000         lea eax, [esi + 0x88]
// 006d4ef9  50                   push eax
// 006d4efa  6884438500           push 0x854384
// 006d4eff  57                   push edi
// 006d4f00  e89b840200           call 0x6fd3a0
// 006d4f05  83c440               add esp, 0x40
// 006d4f08  6a01                 push 1
// 006d4f0a  8d8e8c000000         lea ecx, [esi + 0x8c]
// 006d4f10  51                   push ecx
// 006d4f11  6870438500           push 0x854370
// 006d4f16  57                   push edi
// 006d4f17  e884840200           call 0x6fd3a0
// 006d4f1c  8b15cc6e9600         mov edx, dword ptr [0x966ecc]
// 006d4f22  52                   push edx
// 006d4f23  81c698000000         add esi, 0x98
// 006d4f29  56                   push esi
// 006d4f2a  685c438500           push 0x85435c
// 006d4f2f  57                   push edi
// 006d4f30  e86b840200           call 0x6fd3a0
// 006d4f35  83c420               add esp, 0x20
// 006d4f38  5f                   pop edi
// 006d4f39  5e                   pop esi
// 006d4f3a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?DoPropExchange@CXTPReportHeader@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
