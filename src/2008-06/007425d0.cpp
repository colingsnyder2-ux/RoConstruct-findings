// from server: 100% by auto
// roc 2008-06 007425d0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007425d0
//
// 007425d0  8b442404             mov eax, dword ptr [esp + 4]
// 007425d4  56                   push esi
// 007425d5  8bf1                 mov esi, ecx
// 007425d7  3986d0000000         cmp dword ptr [esi + 0xd0], eax
// 007425dd  7412                 je 0x7425f1
// 007425df  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 007425e5  e8a6fcffff           call 0x742290
// 007425ea  8bce                 mov ecx, esi
// 007425ec  e8cf89f6ff           call 0x6aafc0
// 007425f1  5e                   pop esi
// 007425f2  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetHideFlags@CXTPControlComboBox@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
