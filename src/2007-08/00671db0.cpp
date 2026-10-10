// from server: 100% by tester
// roc 2008-06 006e8c80  unit: CPatchedControlComboBox  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8c80
//
// 006e8c80  56                   push esi
// 006e8c81  8bf1                 mov esi, ecx
// 006e8c83  c706506e8500         mov dword ptr [esi], 0x856e50
// 006e8c89  e8d2f4ffff           call 0x6e8160
// 006e8c8e  8d4e04               lea ecx, [esi + 4]
// 006e8c91  5e                   pop esi
// 006e8c92  ff25143f8000         jmp dword ptr [0x803f14]
// library xtp-11.2.2-shared-mfc/Source\Common\XTPSystemHelpers.cpp (function ??1CXTPModuleHandle@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPSystemHelpers.cpp
