// roc 2008-06 006e9230  unit: CXTPControlPopupColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e9230
//
// 006e9230  8b442408             mov eax, dword ptr [esp + 8]
// 006e9234  56                   push esi
// 006e9235  57                   push edi
// 006e9236  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e923a  50                   push eax
// 006e923b  57                   push edi
// 006e923c  8bf1                 mov esi, ecx
// 006e923e  e85dedffff           call 0x6e7fa0
// 006e9243  8b8f84010000         mov ecx, dword ptr [edi + 0x184]
// 006e9249  5f                   pop edi
// 006e924a  898e84010000         mov dword ptr [esi + 0x184], ecx
// 006e9250  5e                   pop esi
// 006e9251  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?Copy@CXTPControlPopupColor@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
