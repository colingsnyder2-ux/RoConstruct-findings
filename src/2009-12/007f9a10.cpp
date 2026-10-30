// roc 2009-12 007f9a10  unit: CPatchedControlComboBox  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f9a10
//
// 007f9a10  8b81bc010000         mov eax, dword ptr [ecx + 0x1bc]
// 007f9a16  85c0                 test eax, eax
// 007f9a18  7e2b                 jle 0x7f9a45
// 007f9a1a  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 007f9a20  6a00                 push 0
// 007f9a22  50                   push eax
// 007f9a23  e8e8ab0000           call 0x804610
// 007f9a28  8bc8                 mov ecx, eax
// 007f9a2a  e851610100           call 0x80fb80
// 007f9a2f  85c0                 test eax, eax
// 007f9a31  7412                 je 0x7f9a45
// 007f9a33  8bc8                 mov ecx, eax
// 007f9a35  e846420500           call 0x84dc80
// 007f9a3a  8bc8                 mov ecx, eax
// 007f9a3c  8b442404             mov eax, dword ptr [esp + 4]
// 007f9a40  83c102               add ecx, 2
// 007f9a43  0108                 add dword ptr [eax], ecx
// 007f9a45  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?DeflateEditRect@CXTPControlComboBox@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
