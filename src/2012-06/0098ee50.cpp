// roc 2012-06 0098ee50  unit: CPatchedControlComboBox  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098ee50
//
// 0098ee50  8b81bc010000         mov eax, dword ptr [ecx + 0x1bc]
// 0098ee56  85c0                 test eax, eax
// 0098ee58  7e2b                 jle 0x98ee85
// 0098ee5a  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0098ee60  6a00                 push 0
// 0098ee62  50                   push eax
// 0098ee63  e8c83f0000           call 0x992e30
// 0098ee68  8bc8                 mov ecx, eax
// 0098ee6a  e851f20000           call 0x99e0c0
// 0098ee6f  85c0                 test eax, eax
// 0098ee71  7412                 je 0x98ee85
// 0098ee73  8bc8                 mov ecx, eax
// 0098ee75  e8e6c70900           call 0xa2b660
// 0098ee7a  8bc8                 mov ecx, eax
// 0098ee7c  8b442404             mov eax, dword ptr [esp + 4]
// 0098ee80  83c102               add ecx, 2
// 0098ee83  0108                 add dword ptr [eax], ecx
// 0098ee85  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?DeflateEditRect@CXTPControlComboBox@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
