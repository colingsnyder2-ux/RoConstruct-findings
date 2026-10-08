// roc 2012-06 009ca780  unit: CXTPControlPopupColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ca780
//
// 009ca780  8b442408             mov eax, dword ptr [esp + 8]
// 009ca784  56                   push esi
// 009ca785  57                   push edi
// 009ca786  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009ca78a  50                   push eax
// 009ca78b  57                   push edi
// 009ca78c  8bf1                 mov esi, ecx
// 009ca78e  e86dedffff           call 0x9c9500
// 009ca793  8b8f84010000         mov ecx, dword ptr [edi + 0x184]
// 009ca799  5f                   pop edi
// 009ca79a  898e84010000         mov dword ptr [esi + 0x184], ecx
// 009ca7a0  5e                   pop esi
// 009ca7a1  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?Copy@CXTPControlPopupColor@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
