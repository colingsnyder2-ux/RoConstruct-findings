// roc 2008-06 006a7270  unit: CPatchedControlComboBox  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a7270
//
// 006a7270  8b81bc010000         mov eax, dword ptr [ecx + 0x1bc]
// 006a7276  85c0                 test eax, eax
// 006a7278  7e2b                 jle 0x6a72a5
// 006a727a  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 006a7280  6a00                 push 0
// 006a7282  50                   push eax
// 006a7283  e8c8dc0000           call 0x6b4f50
// 006a7288  8bc8                 mov ecx, eax
// 006a728a  e8c1920100           call 0x6c0550
// 006a728f  85c0                 test eax, eax
// 006a7291  7412                 je 0x6a72a5
// 006a7293  8bc8                 mov ecx, eax
// 006a7295  e806330500           call 0x6fa5a0
// 006a729a  8bc8                 mov ecx, eax
// 006a729c  8b442404             mov eax, dword ptr [esp + 4]
// 006a72a0  83c102               add ecx, 2
// 006a72a3  0108                 add dword ptr [eax], ecx
// 006a72a5  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?DeflateEditRect@CXTPControlComboBox@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
