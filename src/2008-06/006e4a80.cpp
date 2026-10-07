// roc 2008-06 006e4a80  unit: CXTPControls  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e4a80
//
// 006e4a80  56                   push esi
// 006e4a81  6a2c                 push 0x2c
// 006e4a83  8bf1                 mov esi, ecx
// 006e4a85  6a00                 push 0
// 006e4a87  56                   push esi
// 006e4a88  e877ccfbff           call 0x6a1704
// 006e4a8d  83c40c               add esp, 0xc
// 006e4a90  c7062c000000         mov dword ptr [esi], 0x2c
// 006e4a96  c7460805000000       mov dword ptr [esi + 8], 5
// 006e4a9d  8bc6                 mov eax, esi
// 006e4a9f  5e                   pop esi
// 006e4aa0  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWindowPos.cpp (function ??0CXTWindowPos@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWindowPos.cpp
