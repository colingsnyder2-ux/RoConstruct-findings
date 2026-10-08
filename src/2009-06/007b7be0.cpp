// roc 2009-06 007b7be0  unit: CXTPRibbonBar  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b7be0
//
// 007b7be0  57                   push edi
// 007b7be1  8bf9                 mov edi, ecx
// 007b7be3  8b8788020000         mov eax, dword ptr [edi + 0x288]
// 007b7be9  85c0                 test eax, eax
// 007b7beb  7f21                 jg 0x7b7c0e
// 007b7bed  56                   push esi
// 007b7bee  e82dfeffff           call 0x7b7a20
// 007b7bf3  8bb014010000         mov esi, dword ptr [eax + 0x114]
// 007b7bf9  8bcf                 mov ecx, edi
// 007b7bfb  e820feffff           call 0x7b7a20
// 007b7c00  8b9060060000         mov edx, dword ptr [eax + 0x660]
// 007b7c06  8d0c76               lea ecx, [esi + esi*2]
// 007b7c09  8d440a0a             lea eax, [edx + ecx + 0xa]
// 007b7c0d  5e                   pop esi
// 007b7c0e  5f                   pop edi
// 007b7c0f  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?CalcGroupsHeight@CXTPRibbonBar@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
