// from server: 100% by auto
// roc 2012-06 009931d0  unit: CXTPCommandBar  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009931d0
//
// 009931d0  8b01                 mov eax, dword ptr [ecx]
// 009931d2  ffa0f4010000         jmp dword ptr [eax + 0x1f4]
// library xtp-15.2.1/Source\CommandBars\XTPDialogBar.cpp (function ??_9CXTPDialogBar@@$BBPE@AE)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDialogBar.cpp
