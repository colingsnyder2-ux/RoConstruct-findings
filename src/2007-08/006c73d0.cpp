// from server: 100% by auto
// roc 2007-08 006c73d0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c73d0
//
// 006c73d0  8b442404             mov eax, dword ptr [esp + 4]
// 006c73d4  56                   push esi
// 006c73d5  8bf1                 mov esi, ecx
// 006c73d7  3986d0000000         cmp dword ptr [esi + 0xd0], eax
// 006c73dd  7412                 je 0x6c73f1
// 006c73df  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 006c73e5  e886fcffff           call 0x6c7070
// 006c73ea  8bce                 mov ecx, esi
// 006c73ec  e8bf29f7ff           call 0x639db0
// 006c73f1  5e                   pop esi
// 006c73f2  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ?SetHideFlags@CXTPControlComboBox@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
