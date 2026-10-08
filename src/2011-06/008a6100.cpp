// roc 2011-06 008a6100  unit: CXTPRibbonBar  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a6100
//
// 008a6100  57                   push edi
// 008a6101  8bf9                 mov edi, ecx
// 008a6103  8b8788020000         mov eax, dword ptr [edi + 0x288]
// 008a6109  85c0                 test eax, eax
// 008a610b  7f21                 jg 0x8a612e
// 008a610d  56                   push esi
// 008a610e  e82dfeffff           call 0x8a5f40
// 008a6113  8bb014010000         mov esi, dword ptr [eax + 0x114]
// 008a6119  8bcf                 mov ecx, edi
// 008a611b  e820feffff           call 0x8a5f40
// 008a6120  8b9060060000         mov edx, dword ptr [eax + 0x660]
// 008a6126  8d0c76               lea ecx, [esi + esi*2]
// 008a6129  8d440a0a             lea eax, [edx + ecx + 0xa]
// 008a612d  5e                   pop esi
// 008a612e  5f                   pop edi
// 008a612f  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?CalcGroupsHeight@CXTPRibbonBar@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
