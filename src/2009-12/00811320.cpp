// roc 2009-12 00811320  unit: CXTPToolBar::CControlButtonCustomize  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00811320
//
// 00811320  56                   push esi
// 00811321  57                   push edi
// 00811322  8bf9                 mov edi, ecx
// 00811324  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 0081132a  33f6                 xor esi, esi
// 0081132c  e81f3fffff           call 0x805250
// 00811331  85c0                 test eax, eax
// 00811333  7e30                 jle 0x811365
// 00811335  eb09                 jmp 0x811340
// 00811337  8da42400000000       lea esp, [esp]
// 0081133e  8bff                 mov edi, edi
// 00811340  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 00811346  56                   push esi
// 00811347  e8143fffff           call 0x805260
// 0081134c  83b8d000000002       cmp dword ptr [eax + 0xd0], 2
// 00811353  7415                 je 0x81136a
// 00811355  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 0081135b  46                   inc esi
// 0081135c  e8ef3effff           call 0x805250
// 00811361  3bf0                 cmp esi, eax
// 00811363  7cdb                 jl 0x811340
// 00811365  5f                   pop edi
// 00811366  33c0                 xor eax, eax
// 00811368  5e                   pop esi
// 00811369  c3                   ret 
// 0081136a  5f                   pop edi
// 0081136b  b801000000           mov eax, 1
// 00811370  5e                   pop esi
// 00811371  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?IsHiddenExists@CControlButtonExpand@CXTPToolBar@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
