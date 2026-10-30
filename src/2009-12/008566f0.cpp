// roc 2009-12 008566f0  unit: CXTPTabClientWnd  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008566f0
//
// 008566f0  56                   push esi
// 008566f1  8bf1                 mov esi, ecx
// 008566f3  8b06                 mov eax, dword ptr [esi]
// 008566f5  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 008566fb  ffd2                 call edx
// 008566fd  85c0                 test eax, eax
// 008566ff  7448                 je 0x856749
// 00856701  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 00856708  751c                 jne 0x856726
// 0085670a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0085670e  8b5104               mov edx, dword ptr [ecx + 4]
// 00856711  8b06                 mov eax, dword ptr [esi]
// 00856713  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 00856719  6a00                 push 0
// 0085671b  52                   push edx
// 0085671c  6a0f                 push 0xf
// 0085671e  8bce                 mov ecx, esi
// 00856720  ffd0                 call eax
// 00856722  5e                   pop esi
// 00856723  c21400               ret 0x14
// 00856726  6a0c                 push 0xc
// 00856728  8bc8                 mov ecx, eax
// 0085672a  e8b1dffbff           call 0x8146e0
// 0085672f  8bc8                 mov ecx, eax
// 00856731  e80a6ffaff           call 0x7fd640
// 00856736  50                   push eax
// 00856737  8d4c2410             lea ecx, [esp + 0x10]
// 0085673b  51                   push ecx
// 0085673c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00856740  e8b9def9ff           call 0x7f45fe
// 00856745  5e                   pop esi
// 00856746  c21400               ret 0x14
// 00856749  6a0c                 push 0xc
// 0085674b  ff15d8ca9800         call dword ptr [0x98cad8]
// 00856751  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00856755  50                   push eax
// 00856756  8d542410             lea edx, [esp + 0x10]
// 0085675a  52                   push edx
// 0085675b  e89edef9ff           call 0x7f45fe
// 00856760  5e                   pop esi
// 00856761  c21400               ret 0x14
// copied from an identical function in another client (function ?OnFillBackground@CXTPTabClientWnd@@UAEXPAVCDC@@VCRect@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp