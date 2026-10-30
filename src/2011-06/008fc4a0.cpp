// roc 2011-06 008fc4a0  unit: CXTPRibbonTabPopupToolBar  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fc4a0
//
// 008fc4a0  8b442408             mov eax, dword ptr [esp + 8]
// 008fc4a4  56                   push esi
// 008fc4a5  8bf1                 mov esi, ecx
// 008fc4a7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008fc4ab  50                   push eax
// 008fc4ac  51                   push ecx
// 008fc4ad  8d5620               lea edx, [esi + 0x20]
// 008fc4b0  52                   push edx
// 008fc4b1  ff15101ca400         call dword ptr [0xa41c10]
// 008fc4b7  85c0                 test eax, eax
// 008fc4b9  7504                 jne 0x8fc4bf
// 008fc4bb  5e                   pop esi
// 008fc4bc  c20800               ret 8
// 008fc4bf  8b4618               mov eax, dword ptr [esi + 0x18]
// 008fc4c2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008fc4c6  8b8884000000         mov ecx, dword ptr [eax + 0x84]
// 008fc4cc  8b442408             mov eax, dword ptr [esp + 8]
// 008fc4d0  52                   push edx
// 008fc4d1  50                   push eax
// 008fc4d2  e839d7ffff           call 0x8f9c10
// 008fc4d7  5e                   pop esi
// 008fc4d8  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?HitTestGroup@CXTPRibbonTabPopupToolBar@@UBEPAVCXTPRibbonGroup@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
