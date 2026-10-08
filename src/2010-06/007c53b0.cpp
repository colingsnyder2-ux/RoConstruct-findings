// roc 2010-06 007c53b0  unit: CXTPToolBar::CControlButtonCustomize  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c53b0
//
// 007c53b0  56                   push esi
// 007c53b1  57                   push edi
// 007c53b2  8bf9                 mov edi, ecx
// 007c53b4  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 007c53ba  33f6                 xor esi, esi
// 007c53bc  e8ff3fffff           call 0x7b93c0
// 007c53c1  85c0                 test eax, eax
// 007c53c3  7e30                 jle 0x7c53f5
// 007c53c5  eb09                 jmp 0x7c53d0
// 007c53c7  8da42400000000       lea esp, [esp]
// 007c53ce  8bff                 mov edi, edi
// 007c53d0  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 007c53d6  56                   push esi
// 007c53d7  e8f43fffff           call 0x7b93d0
// 007c53dc  83b8d000000002       cmp dword ptr [eax + 0xd0], 2
// 007c53e3  7415                 je 0x7c53fa
// 007c53e5  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 007c53eb  46                   inc esi
// 007c53ec  e8cf3fffff           call 0x7b93c0
// 007c53f1  3bf0                 cmp esi, eax
// 007c53f3  7cdb                 jl 0x7c53d0
// 007c53f5  5f                   pop edi
// 007c53f6  33c0                 xor eax, eax
// 007c53f8  5e                   pop esi
// 007c53f9  c3                   ret 
// 007c53fa  5f                   pop edi
// 007c53fb  b801000000           mov eax, 1
// 007c5400  5e                   pop esi
// 007c5401  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?IsHiddenExists@CControlButtonExpand@CXTPToolBar@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
