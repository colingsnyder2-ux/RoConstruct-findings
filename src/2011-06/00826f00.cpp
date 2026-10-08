// roc 2011-06 00826f00  unit: CXTPToolBar::CControlButtonCustomize  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00826f00
//
// 00826f00  56                   push esi
// 00826f01  57                   push edi
// 00826f02  8bf9                 mov edi, ecx
// 00826f04  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 00826f0a  33f6                 xor esi, esi
// 00826f0c  e8ff48ffff           call 0x81b810
// 00826f11  85c0                 test eax, eax
// 00826f13  7e30                 jle 0x826f45
// 00826f15  eb09                 jmp 0x826f20
// 00826f17  8da42400000000       lea esp, [esp]
// 00826f1e  8bff                 mov edi, edi
// 00826f20  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 00826f26  56                   push esi
// 00826f27  e8f448ffff           call 0x81b820
// 00826f2c  83b8d000000002       cmp dword ptr [eax + 0xd0], 2
// 00826f33  7415                 je 0x826f4a
// 00826f35  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 00826f3b  46                   inc esi
// 00826f3c  e8cf48ffff           call 0x81b810
// 00826f41  3bf0                 cmp esi, eax
// 00826f43  7cdb                 jl 0x826f20
// 00826f45  5f                   pop edi
// 00826f46  33c0                 xor eax, eax
// 00826f48  5e                   pop esi
// 00826f49  c3                   ret 
// 00826f4a  5f                   pop edi
// 00826f4b  b801000000           mov eax, 1
// 00826f50  5e                   pop esi
// 00826f51  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?IsHiddenExists@CControlButtonExpand@CXTPToolBar@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
