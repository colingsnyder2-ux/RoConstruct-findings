// roc 2012-06 0098e430  unit: CXTPEdit  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098e430
//
// 0098e430  56                   push esi
// 0098e431  8bf1                 mov esi, ecx
// 0098e433  6a00                 push 0
// 0098e435  c7465c01000000       mov dword ptr [esi + 0x5c], 1
// 0098e43c  e87b40ffff           call 0x9824bc
// 0098e441  8b442408             mov eax, dword ptr [esp + 8]
// 0098e445  50                   push eax
// 0098e446  8bce                 mov ecx, esi
// 0098e448  c7465c00000000       mov dword ptr [esi + 0x5c], 0
// 0098e44f  e86840ffff           call 0x9824bc
// 0098e454  5e                   pop esi
// 0098e455  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ?SetWindowTextEx@CXTPCommandBarEditCtrl@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp
