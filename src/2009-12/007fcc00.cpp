// roc 2009-12 007fcc00  unit: CXTPControlComboBoxList  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fcc00
//
// 007fcc00  56                   push esi
// 007fcc01  8bf1                 mov esi, ecx
// 007fcc03  e858fdffff           call 0x7fc960
// 007fcc08  85c0                 test eax, eax
// 007fcc0a  740e                 je 0x7fcc1a
// 007fcc0c  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 007fcc12  8b805c020000         mov eax, dword ptr [eax + 0x25c]
// 007fcc18  5e                   pop esi
// 007fcc19  c3                   ret 
// 007fcc1a  83c8ff               or eax, 0xffffffff
// 007fcc1d  5e                   pop esi
// 007fcc1e  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?GetListIconId@CXTPControlComboBox@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
