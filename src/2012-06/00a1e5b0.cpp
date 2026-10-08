// roc 2012-06 00a1e5b0  unit: CXTPRibbonBar  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1e5b0
//
// 00a1e5b0  57                   push edi
// 00a1e5b1  8bf9                 mov edi, ecx
// 00a1e5b3  8b8788020000         mov eax, dword ptr [edi + 0x288]
// 00a1e5b9  85c0                 test eax, eax
// 00a1e5bb  7f21                 jg 0xa1e5de
// 00a1e5bd  56                   push esi
// 00a1e5be  e82dfeffff           call 0xa1e3f0
// 00a1e5c3  8bb014010000         mov esi, dword ptr [eax + 0x114]
// 00a1e5c9  8bcf                 mov ecx, edi
// 00a1e5cb  e820feffff           call 0xa1e3f0
// 00a1e5d0  8b9060060000         mov edx, dword ptr [eax + 0x660]
// 00a1e5d6  8d0c76               lea ecx, [esi + esi*2]
// 00a1e5d9  8d440a0a             lea eax, [edx + ecx + 0xa]
// 00a1e5dd  5e                   pop esi
// 00a1e5de  5f                   pop edi
// 00a1e5df  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?CalcGroupsHeight@CXTPRibbonBar@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
