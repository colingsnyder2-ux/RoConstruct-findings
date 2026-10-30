// from server: 100% by auto
// roc 2007-08 00682910  unit: CXTPPropertyGridToolBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00682910
//
// 00682910  e82bf9ffff           call 0x682240
// 00682915  8b442404             mov eax, dword ptr [esp + 4]
// 00682919  6a00                 push 0
// 0068291b  6a00                 push 0
// 0068291d  68a4ed7c00           push 0x7ceda4
// 00682922  50                   push eax
// 00682923  e878e8ffff           call 0x6811a0
// 00682928  83c410               add esp, 0x10
// 0068292b  c20400               ret 4
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?RegisterWindowClass@CXTPPropertyGrid@@QAEHPAUHINSTANCE__@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGrid.cpp
