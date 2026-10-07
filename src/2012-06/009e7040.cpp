// roc 2012-06 009e7040  unit: CXTPStatusBar  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e7040
//
// 009e7040  56                   push esi
// 009e7041  8bf1                 mov esi, ecx
// 009e7043  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009e7047  57                   push edi
// 009e7048  8bbe84000000         mov edi, dword ptr [esi + 0x84]
// 009e704e  8bc7                 mov eax, edi
// 009e7050  25fff0ffff           and eax, 0xfffff0ff
// 009e7055  51                   push ecx
// 009e7056  8bce                 mov ecx, esi
// 009e7058  898684000000         mov dword ptr [esi + 0x84], eax
// 009e705e  e82d2b0b00           call 0xa99b90
// 009e7063  89be84000000         mov dword ptr [esi + 0x84], edi
// 009e7069  5f                   pop edi
// 009e706a  5e                   pop esi
// 009e706b  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPStatusBar.cpp (function ?OnWindowPosChanging@CXTPStatusBar@@IAEXPAUtagWINDOWPOS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPStatusBar.cpp
