// roc 2010-06 0087a050  unit: CXTPControlCustom  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087a050
//
// 0087a050  8b442404             mov eax, dword ptr [esp + 4]
// 0087a054  56                   push esi
// 0087a055  8bf1                 mov esi, ecx
// 0087a057  3986d0000000         cmp dword ptr [esi + 0xd0], eax
// 0087a05d  7412                 je 0x87a071
// 0087a05f  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0087a065  e826ffffff           call 0x879f90
// 0087a06a  8bce                 mov ecx, esi
// 0087a06c  e88ffdf2ff           call 0x7a9e00
// 0087a071  5e                   pop esi
// 0087a072  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetHideFlags@CXTPControlComboBox@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
