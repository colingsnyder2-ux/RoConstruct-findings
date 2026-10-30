// from server: 100% by auto
// roc 2008-06 006ae0a0  unit: CRobloxControlColorSelector  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ae0a0
//
// 006ae0a0  57                   push edi
// 006ae0a1  8b7c2408             mov edi, dword ptr [esp + 8]
// 006ae0a5  85ff                 test edi, edi
// 006ae0a7  7e24                 jle 0x6ae0cd
// 006ae0a9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006ae0ad  53                   push ebx
// 006ae0ae  56                   push esi
// 006ae0af  8b742418             mov esi, dword ptr [esp + 0x18]
// 006ae0b3  2bf2                 sub esi, edx
// 006ae0b5  8b02                 mov eax, dword ptr [edx]
// 006ae0b7  8b1c16               mov ebx, dword ptr [esi + edx]
// 006ae0ba  83c01e               add eax, 0x1e
// 006ae0bd  8d0440               lea eax, [eax + eax*2]
// 006ae0c0  83c204               add edx, 4
// 006ae0c3  83ef01               sub edi, 1
// 006ae0c6  891c81               mov dword ptr [ecx + eax*4], ebx
// 006ae0c9  75ea                 jne 0x6ae0b5
// 006ae0cb  5e                   pop esi
// 006ae0cc  5b                   pop ebx
// 006ae0cd  5f                   pop edi
// 006ae0ce  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?SetColors@CXTPPaintManager@@QAEXHPBHPBK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
