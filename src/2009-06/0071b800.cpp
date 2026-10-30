// roc 2009-06 0071b800  unit: CPatchedControlComboBox  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071b800
//
// 0071b800  8b81bc010000         mov eax, dword ptr [ecx + 0x1bc]
// 0071b806  85c0                 test eax, eax
// 0071b808  7e2b                 jle 0x71b835
// 0071b80a  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0071b810  6a00                 push 0
// 0071b812  50                   push eax
// 0071b813  e8b81c0100           call 0x72d4d0
// 0071b818  8bc8                 mov ecx, eax
// 0071b81a  e871d20100           call 0x738a90
// 0071b81f  85c0                 test eax, eax
// 0071b821  7412                 je 0x71b835
// 0071b823  8bc8                 mov ecx, eax
// 0071b825  e8f6c90a00           call 0x7c8220
// 0071b82a  8bc8                 mov ecx, eax
// 0071b82c  8b442404             mov eax, dword ptr [esp + 4]
// 0071b830  83c102               add ecx, 2
// 0071b833  0108                 add dword ptr [eax], ecx
// 0071b835  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?DeflateEditRect@CXTPControlComboBox@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
