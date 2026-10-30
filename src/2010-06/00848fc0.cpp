// roc 2010-06 00848fc0  unit: CXTPRibbonBar  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00848fc0
//
// 00848fc0  57                   push edi
// 00848fc1  8bf9                 mov edi, ecx
// 00848fc3  8b8788020000         mov eax, dword ptr [edi + 0x288]
// 00848fc9  85c0                 test eax, eax
// 00848fcb  7f21                 jg 0x848fee
// 00848fcd  56                   push esi
// 00848fce  e82dfeffff           call 0x848e00
// 00848fd3  8bb014010000         mov esi, dword ptr [eax + 0x114]
// 00848fd9  8bcf                 mov ecx, edi
// 00848fdb  e820feffff           call 0x848e00
// 00848fe0  8b9060060000         mov edx, dword ptr [eax + 0x660]
// 00848fe6  8d0c76               lea ecx, [esi + esi*2]
// 00848fe9  8d440a0a             lea eax, [edx + ecx + 0xa]
// 00848fed  5e                   pop esi
// 00848fee  5f                   pop edi
// 00848fef  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?CalcGroupsHeight@CXTPRibbonBar@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
