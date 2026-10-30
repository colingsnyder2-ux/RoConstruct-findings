// from server: 100% by auto
// roc 2012-06 009878c0  unit: CRobloxControlColorSelector  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009878c0
//
// 009878c0  57                   push edi
// 009878c1  8b7c2408             mov edi, dword ptr [esp + 8]
// 009878c5  85ff                 test edi, edi
// 009878c7  7e24                 jle 0x9878ed
// 009878c9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009878cd  53                   push ebx
// 009878ce  56                   push esi
// 009878cf  8b742418             mov esi, dword ptr [esp + 0x18]
// 009878d3  2bf2                 sub esi, edx
// 009878d5  8b02                 mov eax, dword ptr [edx]
// 009878d7  8b1c16               mov ebx, dword ptr [esi + edx]
// 009878da  83c01e               add eax, 0x1e
// 009878dd  8d0440               lea eax, [eax + eax*2]
// 009878e0  83c204               add edx, 4
// 009878e3  83ef01               sub edi, 1
// 009878e6  891c81               mov dword ptr [ecx + eax*4], ebx
// 009878e9  75ea                 jne 0x9878d5
// 009878eb  5e                   pop esi
// 009878ec  5b                   pop ebx
// 009878ed  5f                   pop edi
// 009878ee  c20c00               ret 0xc
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?SetColors@CXTPPaintManager@@QAEXHPBHPBK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
