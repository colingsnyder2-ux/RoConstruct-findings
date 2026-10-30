// from server: 100% by auto
// roc 2008-06 006c1cf0  unit: CXTPToolBar::CControlButtonCustomize  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c1cf0
//
// 006c1cf0  56                   push esi
// 006c1cf1  57                   push edi
// 006c1cf2  8bf9                 mov edi, ecx
// 006c1cf4  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 006c1cfa  33f6                 xor esi, esi
// 006c1cfc  e89f3effff           call 0x6b5ba0
// 006c1d01  85c0                 test eax, eax
// 006c1d03  7e30                 jle 0x6c1d35
// 006c1d05  eb09                 jmp 0x6c1d10
// 006c1d07  8da42400000000       lea esp, [esp]
// 006c1d0e  8bff                 mov edi, edi
// 006c1d10  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 006c1d16  56                   push esi
// 006c1d17  e8943effff           call 0x6b5bb0
// 006c1d1c  83b8d000000002       cmp dword ptr [eax + 0xd0], 2
// 006c1d23  7415                 je 0x6c1d3a
// 006c1d25  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 006c1d2b  46                   inc esi
// 006c1d2c  e86f3effff           call 0x6b5ba0
// 006c1d31  3bf0                 cmp esi, eax
// 006c1d33  7cdb                 jl 0x6c1d10
// 006c1d35  5f                   pop edi
// 006c1d36  33c0                 xor eax, eax
// 006c1d38  5e                   pop esi
// 006c1d39  c3                   ret 
// 006c1d3a  5f                   pop edi
// 006c1d3b  b801000000           mov eax, 1
// 006c1d40  5e                   pop esi
// 006c1d41  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?IsHiddenExists@CControlButtonExpand@CXTPToolBar@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
