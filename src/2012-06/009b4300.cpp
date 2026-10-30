// roc 2012-06 009b4300  unit: CXTPReportHeader  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b4300
//
// 009b4300  56                   push esi
// 009b4301  57                   push edi
// 009b4302  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009b4306  8bf1                 mov esi, ecx
// 009b4308  6a01                 push 1
// 009b430a  8d467c               lea eax, [esi + 0x7c]
// 009b430d  50                   push eax
// 009b430e  68b00bc100           push 0xc10bb0
// 009b4313  57                   push edi
// 009b4314  e897400200           call 0x9d83b0
// 009b4319  6a01                 push 1
// 009b431b  8d8e80000000         lea ecx, [esi + 0x80]
// 009b4321  51                   push ecx
// 009b4322  689c0bc100           push 0xc10b9c
// 009b4327  57                   push edi
// 009b4328  e883400200           call 0x9d83b0
// 009b432d  6a01                 push 1
// 009b432f  8d9684000000         lea edx, [esi + 0x84]
// 009b4335  52                   push edx
// 009b4336  68880bc100           push 0xc10b88
// 009b433b  57                   push edi
// 009b433c  e86f400200           call 0x9d83b0
// 009b4341  6a01                 push 1
// 009b4343  8d8688000000         lea eax, [esi + 0x88]
// 009b4349  50                   push eax
// 009b434a  68780bc100           push 0xc10b78
// 009b434f  57                   push edi
// 009b4350  e85b400200           call 0x9d83b0
// 009b4355  83c440               add esp, 0x40
// 009b4358  6a01                 push 1
// 009b435a  8d8e8c000000         lea ecx, [esi + 0x8c]
// 009b4360  51                   push ecx
// 009b4361  68640bc100           push 0xc10b64
// 009b4366  57                   push edi
// 009b4367  e844400200           call 0x9d83b0
// 009b436c  8b15c438e000         mov edx, dword ptr [0xe038c4]
// 009b4372  52                   push edx
// 009b4373  81c698000000         add esi, 0x98
// 009b4379  56                   push esi
// 009b437a  68500bc100           push 0xc10b50
// 009b437f  57                   push edi
// 009b4380  e82b400200           call 0x9d83b0
// 009b4385  83c420               add esp, 0x20
// 009b4388  5f                   pop edi
// 009b4389  5e                   pop esi
// 009b438a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?DoPropExchange@CXTPReportHeader@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
