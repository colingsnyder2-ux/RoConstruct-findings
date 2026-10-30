// roc 2009-12 0083c370  unit: CXTPAccessible  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c370
//
// 0083c370  56                   push esi
// 0083c371  8bf1                 mov esi, ecx
// 0083c373  c70650839f00         mov dword ptr [esi], 0x9f8350
// 0083c379  e8d2f4ffff           call 0x83b850
// 0083c37e  8d4e04               lea ecx, [esi + 4]
// 0083c381  5e                   pop esi
// 0083c382  ff25c0de9800         jmp dword ptr [0x98dec0]
// copied from an identical function in another client (function ??1CXTPModuleHandle@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPSystemHelpers.cpp