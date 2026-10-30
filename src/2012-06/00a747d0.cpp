// roc 2012-06 00a747d0  unit: CXTPRibbonTabPopupToolBar  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a747d0
//
// 00a747d0  8b442408             mov eax, dword ptr [esp + 8]
// 00a747d4  56                   push esi
// 00a747d5  8bf1                 mov esi, ecx
// 00a747d7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a747db  50                   push eax
// 00a747dc  51                   push ecx
// 00a747dd  8d5620               lea edx, [esi + 0x20]
// 00a747e0  52                   push edx
// 00a747e1  ff15483bb200         call dword ptr [0xb23b48]
// 00a747e7  85c0                 test eax, eax
// 00a747e9  7504                 jne 0xa747ef
// 00a747eb  5e                   pop esi
// 00a747ec  c20800               ret 8
// 00a747ef  8b4618               mov eax, dword ptr [esi + 0x18]
// 00a747f2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a747f6  8b8884000000         mov ecx, dword ptr [eax + 0x84]
// 00a747fc  8b442408             mov eax, dword ptr [esp + 8]
// 00a74800  52                   push edx
// 00a74801  50                   push eax
// 00a74802  e839d7ffff           call 0xa71f40
// 00a74807  5e                   pop esi
// 00a74808  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?HitTestGroup@CXTPRibbonTabPopupToolBar@@UBEPAVCXTPRibbonGroup@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
