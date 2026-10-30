// from server: 100% by auto
// roc 2008-06 006a6850  unit: CXTPEdit  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a6850
//
// 006a6850  56                   push esi
// 006a6851  8bf1                 mov esi, ecx
// 006a6853  6a00                 push 0
// 006a6855  c7465c01000000       mov dword ptr [esi + 0x5c], 1
// 006a685c  e8b9a3ffff           call 0x6a0c1a
// 006a6861  8b442408             mov eax, dword ptr [esp + 8]
// 006a6865  50                   push eax
// 006a6866  8bce                 mov ecx, esi
// 006a6868  c7465c00000000       mov dword ptr [esi + 0x5c], 0
// 006a686f  e8a6a3ffff           call 0x6a0c1a
// 006a6874  5e                   pop esi
// 006a6875  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetWindowTextEx@CXTPEdit@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
