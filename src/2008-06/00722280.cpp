// from server: 100% by auto
// roc 2008-06 00722280  unit: CXTPRibbonBar  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722280
//
// 00722280  57                   push edi
// 00722281  8bf9                 mov edi, ecx
// 00722283  8b8788020000         mov eax, dword ptr [edi + 0x288]
// 00722289  85c0                 test eax, eax
// 0072228b  7f21                 jg 0x7222ae
// 0072228d  56                   push esi
// 0072228e  e82dfeffff           call 0x7220c0
// 00722293  8bb014010000         mov esi, dword ptr [eax + 0x114]
// 00722299  8bcf                 mov ecx, edi
// 0072229b  e820feffff           call 0x7220c0
// 007222a0  8b9060060000         mov edx, dword ptr [eax + 0x660]
// 007222a6  8d0c76               lea ecx, [esi + esi*2]
// 007222a9  8d440a0a             lea eax, [edx + ecx + 0xa]
// 007222ad  5e                   pop esi
// 007222ae  5f                   pop edi
// 007222af  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?CalcGroupsHeight@CXTPRibbonBar@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
