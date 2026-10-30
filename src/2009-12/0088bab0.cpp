// roc 2009-12 0088bab0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088bab0
//
// 0088bab0  8b442404             mov eax, dword ptr [esp + 4]
// 0088bab4  56                   push esi
// 0088bab5  8bf1                 mov esi, ecx
// 0088bab7  3986d0000000         cmp dword ptr [esi + 0xd0], eax
// 0088babd  7412                 je 0x88bad1
// 0088babf  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0088bac5  e8a6fcffff           call 0x88b770
// 0088baca  8bce                 mov ecx, esi
// 0088bacc  e8efa1f6ff           call 0x7f5cc0
// 0088bad1  5e                   pop esi
// 0088bad2  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetHideFlags@CXTPControlComboBox@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
