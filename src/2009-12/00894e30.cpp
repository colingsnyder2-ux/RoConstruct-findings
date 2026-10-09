// roc 2009-12 00894e30  unit: CXTPRibbonBar  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894e30
//
// 00894e30  57                   push edi
// 00894e31  8bf9                 mov edi, ecx
// 00894e33  8b8788020000         mov eax, dword ptr [edi + 0x288]
// 00894e39  85c0                 test eax, eax
// 00894e3b  7f21                 jg 0x894e5e
// 00894e3d  56                   push esi
// 00894e3e  e82dfeffff           call 0x894c70
// 00894e43  8bb014010000         mov esi, dword ptr [eax + 0x114]
// 00894e49  8bcf                 mov ecx, edi
// 00894e4b  e820feffff           call 0x894c70
// 00894e50  8b9060060000         mov edx, dword ptr [eax + 0x660]
// 00894e56  8d0c76               lea ecx, [esi + esi*2]
// 00894e59  8d440a0a             lea eax, [edx + ecx + 0xa]
// 00894e5d  5e                   pop esi
// 00894e5e  5f                   pop edi
// 00894e5f  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?CalcGroupsHeight@CXTPRibbonBar@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
