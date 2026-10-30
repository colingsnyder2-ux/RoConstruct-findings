// roc 2009-06 0073a230  unit: CXTPToolBar::CControlButtonCustomize  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073a230
//
// 0073a230  56                   push esi
// 0073a231  57                   push edi
// 0073a232  8bf9                 mov edi, ecx
// 0073a234  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 0073a23a  33f6                 xor esi, esi
// 0073a23c  e8cf3effff           call 0x72e110
// 0073a241  85c0                 test eax, eax
// 0073a243  7e30                 jle 0x73a275
// 0073a245  eb09                 jmp 0x73a250
// 0073a247  8da42400000000       lea esp, [esp]
// 0073a24e  8bff                 mov edi, edi
// 0073a250  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 0073a256  56                   push esi
// 0073a257  e8c43effff           call 0x72e120
// 0073a25c  83b8d000000002       cmp dword ptr [eax + 0xd0], 2
// 0073a263  7415                 je 0x73a27a
// 0073a265  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 0073a26b  46                   inc esi
// 0073a26c  e89f3effff           call 0x72e110
// 0073a271  3bf0                 cmp esi, eax
// 0073a273  7cdb                 jl 0x73a250
// 0073a275  5f                   pop edi
// 0073a276  33c0                 xor eax, eax
// 0073a278  5e                   pop esi
// 0073a279  c3                   ret 
// 0073a27a  5f                   pop edi
// 0073a27b  b801000000           mov eax, 1
// 0073a280  5e                   pop esi
// 0073a281  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?IsHiddenExists@CControlButtonExpand@CXTPToolBar@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
