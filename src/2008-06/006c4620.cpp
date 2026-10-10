// roc 2008-06 006c4620  unit: CXTPToolBar  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c4620
//
// 006c4620  8b442404             mov eax, dword ptr [esp + 4]
// 006c4624  56                   push esi
// 006c4625  8bf1                 mov esi, ecx
// 006c4627  83bed400000000       cmp dword ptr [esi + 0xd4], 0
// 006c462e  750d                 jne 0x6c463d
// 006c4630  85c0                 test eax, eax
// 006c4632  7409                 je 0x6c463d
// 006c4634  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006c4637  898ed4000000         mov dword ptr [esi + 0xd4], ecx
// 006c463d  50                   push eax
// 006c463e  8bce                 mov ecx, esi
// 006c4640  e885cdfdff           call 0x6a13ca
// 006c4645  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 006c464c  7512                 jne 0x6c4660
// 006c464e  8b16                 mov edx, dword ptr [esi]
// 006c4650  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 006c4656  6a00                 push 0
// 006c4658  6a01                 push 1
// 006c465a  6a01                 push 1
// 006c465c  8bce                 mov ecx, esi
// 006c465e  ffd0                 call eax
// 006c4660  5e                   pop esi
// 006c4661  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPToolBar.cpp (function ?OnSetFocus@CXTPToolBar@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp
