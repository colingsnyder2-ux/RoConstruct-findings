// roc 2009-12 0083c920  unit: CXTPControlPopupColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c920
//
// 0083c920  8b442408             mov eax, dword ptr [esp + 8]
// 0083c924  56                   push esi
// 0083c925  57                   push edi
// 0083c926  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0083c92a  50                   push eax
// 0083c92b  57                   push edi
// 0083c92c  8bf1                 mov esi, ecx
// 0083c92e  e85dedffff           call 0x83b690
// 0083c933  8b8f84010000         mov ecx, dword ptr [edi + 0x184]
// 0083c939  5f                   pop edi
// 0083c93a  898e84010000         mov dword ptr [esi + 0x184], ecx
// 0083c940  5e                   pop esi
// 0083c941  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?Copy@CXTPControlPopupColor@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
