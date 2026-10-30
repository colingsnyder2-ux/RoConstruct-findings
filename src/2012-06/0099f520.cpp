// roc 2012-06 0099f520  unit: CXTPToolBar::CControlButtonCustomize  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099f520
//
// 0099f520  56                   push esi
// 0099f521  57                   push edi
// 0099f522  8bf9                 mov edi, ecx
// 0099f524  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 0099f52a  33f6                 xor esi, esi
// 0099f52c  e8cf45ffff           call 0x993b00
// 0099f531  85c0                 test eax, eax
// 0099f533  7e30                 jle 0x99f565
// 0099f535  eb09                 jmp 0x99f540
// 0099f537  8da42400000000       lea esp, [esp]
// 0099f53e  8bff                 mov edi, edi
// 0099f540  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 0099f546  56                   push esi
// 0099f547  e8c445ffff           call 0x993b10
// 0099f54c  83b8d000000002       cmp dword ptr [eax + 0xd0], 2
// 0099f553  7415                 je 0x99f56a
// 0099f555  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 0099f55b  46                   inc esi
// 0099f55c  e89f45ffff           call 0x993b00
// 0099f561  3bf0                 cmp esi, eax
// 0099f563  7cdb                 jl 0x99f540
// 0099f565  5f                   pop edi
// 0099f566  33c0                 xor eax, eax
// 0099f568  5e                   pop esi
// 0099f569  c3                   ret 
// 0099f56a  5f                   pop edi
// 0099f56b  b801000000           mov eax, 1
// 0099f570  5e                   pop esi
// 0099f571  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?IsHiddenExists@CControlButtonExpand@CXTPToolBar@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
