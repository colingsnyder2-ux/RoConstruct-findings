// roc 2007-08 0066dbb0  unit: CXTPControls  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066dbb0
//
// 0066dbb0  56                   push esi
// 0066dbb1  6a2c                 push 0x2c
// 0066dbb3  8bf1                 mov esi, ecx
// 0066dbb5  6a00                 push 0
// 0066dbb7  56                   push esi
// 0066dbb8  e8cf2ffcff           call 0x630b8c
// 0066dbbd  83c40c               add esp, 0xc
// 0066dbc0  c7062c000000         mov dword ptr [esi], 0x2c
// 0066dbc6  c7460805000000       mov dword ptr [esi + 8], 5
// 0066dbcd  8bc6                 mov eax, esi
// 0066dbcf  5e                   pop esi
// 0066dbd0  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTWindowPos.cpp (function ??0CXTWindowPos@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTWindowPos.cpp
