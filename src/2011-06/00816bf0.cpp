// roc 2011-06 00816bf0  unit: CPatchedControlComboBox  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816bf0
//
// 00816bf0  8b81bc010000         mov eax, dword ptr [ecx + 0x1bc]
// 00816bf6  85c0                 test eax, eax
// 00816bf8  7e2b                 jle 0x816c25
// 00816bfa  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00816c00  6a00                 push 0
// 00816c02  50                   push eax
// 00816c03  e8c83f0000           call 0x81abd0
// 00816c08  8bc8                 mov ecx, eax
// 00816c0a  e881ee0000           call 0x825a90
// 00816c0f  85c0                 test eax, eax
// 00816c11  7412                 je 0x816c25
// 00816c13  8bc8                 mov ecx, eax
// 00816c15  e876270500           call 0x869390
// 00816c1a  8bc8                 mov ecx, eax
// 00816c1c  8b442404             mov eax, dword ptr [esp + 4]
// 00816c20  83c102               add ecx, 2
// 00816c23  0108                 add dword ptr [eax], ecx
// 00816c25  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?DeflateEditRect@CXTPControlComboBox@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
