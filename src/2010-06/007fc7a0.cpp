// roc 2010-06 007fc7a0  unit: CXTPControlToolbars::CXTPControlToolbar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fc7a0
//
// 007fc7a0  56                   push esi
// 007fc7a1  57                   push edi
// 007fc7a2  8bf9                 mov edi, ecx
// 007fc7a4  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 007fc7aa  e821befbff           call 0x7b85d0
// 007fc7af  8bf0                 mov esi, eax
// 007fc7b1  8bce                 mov ecx, esi
// 007fc7b3  e8f8d7fcff           call 0x7c9fb0
// 007fc7b8  85f6                 test esi, esi
// 007fc7ba  740b                 je 0x7fc7c7
// 007fc7bc  8b477c               mov eax, dword ptr [edi + 0x7c]
// 007fc7bf  50                   push eax
// 007fc7c0  8bce                 mov ecx, esi
// 007fc7c2  e819c6fcff           call 0x7c8de0
// 007fc7c7  5f                   pop edi
// 007fc7c8  5e                   pop esi
// 007fc7c9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?OnExecute@CXTPControlToolbar@CXTPControlToolbars@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
