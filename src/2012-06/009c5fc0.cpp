// roc 2012-06 009c5fc0  unit: CXTPControls  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c5fc0
//
// 009c5fc0  56                   push esi
// 009c5fc1  6a2c                 push 0x2c
// 009c5fc3  8bf1                 mov esi, ecx
// 009c5fc5  6a00                 push 0
// 009c5fc7  56                   push esi
// 009c5fc8  e8a7d3fbff           call 0x983374
// 009c5fcd  83c40c               add esp, 0xc
// 009c5fd0  c7062c000000         mov dword ptr [esi], 0x2c
// 009c5fd6  c7460805000000       mov dword ptr [esi + 8], 5
// 009c5fdd  8bc6                 mov eax, esi
// 009c5fdf  5e                   pop esi
// 009c5fe0  c3                   ret 
// library xtp-15.2.1/Source\Controls\Util\XTPWindowPos.cpp (function ??0CXTPWindowPos@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Util/XTPWindowPos.cpp
