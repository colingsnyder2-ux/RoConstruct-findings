// roc 2008-06 006c20e0  unit: CXTPToolBar  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c20e0
//
// 006c20e0  56                   push esi
// 006c20e1  8bf1                 mov esi, ecx
// 006c20e3  8b06                 mov eax, dword ptr [esi]
// 006c20e5  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 006c20eb  ffd2                 call edx
// 006c20ed  85c0                 test eax, eax
// 006c20ef  7504                 jne 0x6c20f5
// 006c20f1  33c0                 xor eax, eax
// 006c20f3  5e                   pop esi
// 006c20f4  c3                   ret 
// 006c20f5  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 006c20fb  83793c00             cmp dword ptr [ecx + 0x3c], 0
// 006c20ff  7409                 je 0x6c210a
// 006c2101  e82a130300           call 0x6f3430
// 006c2106  85c0                 test eax, eax
// 006c2108  74e7                 je 0x6c20f1
// 006c210a  b801000000           mov eax, 1
// 006c210f  5e                   pop esi
// 006c2110  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPToolBar.cpp (function ?ShouldSerializeBar@CXTPToolBar@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp
