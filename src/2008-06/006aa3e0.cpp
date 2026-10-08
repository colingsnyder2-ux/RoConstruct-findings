// from server: 100% by auto
// roc 2008-06 006aa3e0  unit: CXTPControlComboBoxList  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006aa3e0
//
// 006aa3e0  56                   push esi
// 006aa3e1  8bf1                 mov esi, ecx
// 006aa3e3  e858fdffff           call 0x6aa140
// 006aa3e8  85c0                 test eax, eax
// 006aa3ea  740e                 je 0x6aa3fa
// 006aa3ec  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 006aa3f2  8b805c020000         mov eax, dword ptr [eax + 0x25c]
// 006aa3f8  5e                   pop esi
// 006aa3f9  c3                   ret 
// 006aa3fa  83c8ff               or eax, 0xffffffff
// 006aa3fd  5e                   pop esi
// 006aa3fe  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?GetListIconId@CXTPControlComboBox@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
