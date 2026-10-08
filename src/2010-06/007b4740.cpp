// roc 2010-06 007b4740  unit: CPatchedControlComboBox  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b4740
//
// 007b4740  8b81bc010000         mov eax, dword ptr [ecx + 0x1bc]
// 007b4746  85c0                 test eax, eax
// 007b4748  7e2b                 jle 0x7b4775
// 007b474a  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 007b4750  6a00                 push 0
// 007b4752  50                   push eax
// 007b4753  e8b83f0000           call 0x7b8710
// 007b4758  8bc8                 mov ecx, eax
// 007b475a  e8c1f40000           call 0x7c3c20
// 007b475f  85c0                 test eax, eax
// 007b4761  7412                 je 0x7b4775
// 007b4763  8bc8                 mov ecx, eax
// 007b4765  e8369a0100           call 0x7ce1a0
// 007b476a  8bc8                 mov ecx, eax
// 007b476c  8b442404             mov eax, dword ptr [esp + 4]
// 007b4770  83c102               add ecx, 2
// 007b4773  0108                 add dword ptr [eax], ecx
// 007b4775  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?DeflateEditRect@CXTPControlComboBox@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
