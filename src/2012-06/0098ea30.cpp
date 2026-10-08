// roc 2012-06 0098ea30  unit: CXTPControlComboBoxPopupBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098ea30
//
// 0098ea30  56                   push esi
// 0098ea31  8bf1                 mov esi, ecx
// 0098ea33  e868020400           call 0x9ceca0
// 0098ea38  c7068cd5c000         mov dword ptr [esi], 0xc0d58c
// 0098ea3e  c746547cd5c000       mov dword ptr [esi + 0x54], 0xc0d57c
// 0098ea45  c7465c1cd5c000       mov dword ptr [esi + 0x5c], 0xc0d51c
// 0098ea4c  c786bc00000001000000 mov dword ptr [esi + 0xbc], 1
// 0098ea56  c786c400000000000000 mov dword ptr [esi + 0xc4], 0
// 0098ea60  8bc6                 mov eax, esi
// 0098ea62  5e                   pop esi
// 0098ea63  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ??0CXTPControlComboBoxPopupBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
