// roc 2007-03 00656ce0  unit: seg_00650000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00656ce0
//
// 00656ce0  56                   push esi
// 00656ce1  57                   push edi
// 00656ce2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00656ce6  8bf1                 mov esi, ecx
// 00656ce8  6a00                 push 0
// 00656cea  8d462c               lea eax, [esi + 0x2c]
// 00656ced  50                   push eax
// 00656cee  686c7d7c00           push 0x7c7d6c
// 00656cf3  57                   push edi
// 00656cf4  e847000100           call 0x666d40
// 00656cf9  6a00                 push 0
// 00656cfb  8d4e30               lea ecx, [esi + 0x30]
// 00656cfe  51                   push ecx
// 00656cff  68647d7c00           push 0x7c7d64
// 00656d04  57                   push edi
// 00656d05  e836000100           call 0x666d40
// 00656d0a  68ac497800           push 0x7849ac
// 00656d0f  8d5640               lea edx, [esi + 0x40]
// 00656d12  52                   push edx
// 00656d13  68c8557c00           push 0x7c55c8
// 00656d18  57                   push edi
// 00656d19  e8a2000100           call 0x666dc0
// 00656d1e  68ac497800           push 0x7849ac
// 00656d23  8d4650               lea eax, [esi + 0x50]
// 00656d26  50                   push eax
// 00656d27  68547d7c00           push 0x7c7d54
// 00656d2c  57                   push edi
// 00656d2d  e88e000100           call 0x666dc0
// 00656d32  83c440               add esp, 0x40
// 00656d35  68ac497800           push 0x7849ac
// 00656d3a  8d4e44               lea ecx, [esi + 0x44]
// 00656d3d  51                   push ecx
// 00656d3e  68487d7c00           push 0x7c7d48
// 00656d43  57                   push edi
// 00656d44  e877000100           call 0x666dc0
// 00656d49  68ac497800           push 0x7849ac
// 00656d4e  8d5648               lea edx, [esi + 0x48]
// 00656d51  52                   push edx
// 00656d52  68387d7c00           push 0x7c7d38
// 00656d57  57                   push edi
// 00656d58  e863000100           call 0x666dc0
// 00656d5d  68ac497800           push 0x7849ac
// 00656d62  83c64c               add esi, 0x4c
// 00656d65  56                   push esi
// 00656d66  682c7d7c00           push 0x7c7d2c
// 00656d6b  57                   push edi
// 00656d6c  e84f000100           call 0x666dc0
// 00656d71  83c430               add esp, 0x30
// 00656d74  5f                   pop edi
// 00656d75  5e                   pop esi
// 00656d76  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlAction@@QAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
