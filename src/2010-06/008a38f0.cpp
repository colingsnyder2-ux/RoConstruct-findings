// roc 2010-06 008a38f0  unit: CXTPRibbonTabPopupToolBar  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a38f0
//
// 008a38f0  8b442408             mov eax, dword ptr [esp + 8]
// 008a38f4  56                   push esi
// 008a38f5  8bf1                 mov esi, ecx
// 008a38f7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008a38fb  50                   push eax
// 008a38fc  51                   push ecx
// 008a38fd  8d5620               lea edx, [esi + 0x20]
// 008a3900  52                   push edx
// 008a3901  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 008a3907  85c0                 test eax, eax
// 008a3909  7504                 jne 0x8a390f
// 008a390b  5e                   pop esi
// 008a390c  c20800               ret 8
// 008a390f  8b4618               mov eax, dword ptr [esi + 0x18]
// 008a3912  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008a3916  8b8884000000         mov ecx, dword ptr [eax + 0x84]
// 008a391c  8b442408             mov eax, dword ptr [esp + 8]
// 008a3920  52                   push edx
// 008a3921  50                   push eax
// 008a3922  e869d7ffff           call 0x8a1090
// 008a3927  5e                   pop esi
// 008a3928  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?HitTestGroup@CXTPRibbonTabPopupToolBar@@UBEPAVCXTPRibbonGroup@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
