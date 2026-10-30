// roc 2011-06 0089c0f0  unit: CXTPControlEdit  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089c0f0
//
// 0089c0f0  8b442404             mov eax, dword ptr [esp + 4]
// 0089c0f4  56                   push esi
// 0089c0f5  8bf1                 mov esi, ecx
// 0089c0f7  3986d0000000         cmp dword ptr [esi + 0xd0], eax
// 0089c0fd  7412                 je 0x89c111
// 0089c0ff  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0089c105  e8a6fcffff           call 0x89bdb0
// 0089c10a  8bce                 mov ecx, esi
// 0089c10c  e8df03f7ff           call 0x80c4f0
// 0089c111  5e                   pop esi
// 0089c112  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetHideFlags@CXTPControlComboBox@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
