// from server: 100% by auto
// roc 2011-06 0084db10  unit: CXTPControls  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084db10
//
// 0084db10  56                   push esi
// 0084db11  6a2c                 push 0x2c
// 0084db13  8bf1                 mov esi, ecx
// 0084db15  6a00                 push 0
// 0084db17  56                   push esi
// 0084db18  e8c7d7fbff           call 0x80b2e4
// 0084db1d  83c40c               add esp, 0xc
// 0084db20  c7062c000000         mov dword ptr [esi], 0x2c
// 0084db26  c7460805000000       mov dword ptr [esi + 8], 5
// 0084db2d  8bc6                 mov eax, esi
// 0084db2f  5e                   pop esi
// 0084db30  c3                   ret 
// library xtp-15.2.1/Source\Controls\Util\XTPWindowPos.cpp (function ??0CXTPWindowPos@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Util/XTPWindowPos.cpp
