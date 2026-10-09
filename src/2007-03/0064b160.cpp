// roc 2007-03 0064b160  unit: seg_00640000  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064b160
//
// 0064b160  56                   push esi
// 0064b161  57                   push edi
// 0064b162  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0064b166  8bf1                 mov esi, ecx
// 0064b168  6a01                 push 1
// 0064b16a  8d467c               lea eax, [esi + 0x7c]
// 0064b16d  50                   push eax
// 0064b16e  68685f7c00           push 0x7c5f68
// 0064b173  57                   push edi
// 0064b174  e807bc0100           call 0x666d80
// 0064b179  6a01                 push 1
// 0064b17b  8d8e80000000         lea ecx, [esi + 0x80]
// 0064b181  51                   push ecx
// 0064b182  68545f7c00           push 0x7c5f54
// 0064b187  57                   push edi
// 0064b188  e8f3bb0100           call 0x666d80
// 0064b18d  6a01                 push 1
// 0064b18f  8d9684000000         lea edx, [esi + 0x84]
// 0064b195  52                   push edx
// 0064b196  68405f7c00           push 0x7c5f40
// 0064b19b  57                   push edi
// 0064b19c  e8dfbb0100           call 0x666d80
// 0064b1a1  6a01                 push 1
// 0064b1a3  8d8688000000         lea eax, [esi + 0x88]
// 0064b1a9  50                   push eax
// 0064b1aa  68305f7c00           push 0x7c5f30
// 0064b1af  57                   push edi
// 0064b1b0  e8cbbb0100           call 0x666d80
// 0064b1b5  83c440               add esp, 0x40
// 0064b1b8  6a01                 push 1
// 0064b1ba  8d8e8c000000         lea ecx, [esi + 0x8c]
// 0064b1c0  51                   push ecx
// 0064b1c1  681c5f7c00           push 0x7c5f1c
// 0064b1c6  57                   push edi
// 0064b1c7  e8b4bb0100           call 0x666d80
// 0064b1cc  8b15d4008b00         mov edx, dword ptr [0x8b00d4]
// 0064b1d2  52                   push edx
// 0064b1d3  81c698000000         add esi, 0x98
// 0064b1d9  56                   push esi
// 0064b1da  68085f7c00           push 0x7c5f08
// 0064b1df  57                   push edi
// 0064b1e0  e89bbb0100           call 0x666d80
// 0064b1e5  83c420               add esp, 0x20
// 0064b1e8  5f                   pop edi
// 0064b1e9  5e                   pop esi
// 0064b1ea  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?DoPropExchange@CXTPReportHeader@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
