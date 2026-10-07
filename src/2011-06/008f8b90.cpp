// roc 2011-06 008f8b90  unit: CXTPDialogBar  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f8b90
//
// 008f8b90  8b01                 mov eax, dword ptr [ecx]
// 008f8b92  ffa0f4010000         jmp dword ptr [eax + 0x1f4]
// library xtp-15.2.1/Source\CommandBars\XTPDialogBar.cpp (function ??_9CXTPDialogBar@@$BBPE@AE)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDialogBar.cpp
