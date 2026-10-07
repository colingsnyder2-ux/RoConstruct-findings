// roc 2011-06 0080f5e0  unit: CRobloxControlColorSelector  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080f5e0
//
// 0080f5e0  57                   push edi
// 0080f5e1  8b7c2408             mov edi, dword ptr [esp + 8]
// 0080f5e5  85ff                 test edi, edi
// 0080f5e7  7e24                 jle 0x80f60d
// 0080f5e9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0080f5ed  53                   push ebx
// 0080f5ee  56                   push esi
// 0080f5ef  8b742418             mov esi, dword ptr [esp + 0x18]
// 0080f5f3  2bf2                 sub esi, edx
// 0080f5f5  8b02                 mov eax, dword ptr [edx]
// 0080f5f7  8b1c16               mov ebx, dword ptr [esi + edx]
// 0080f5fa  83c01e               add eax, 0x1e
// 0080f5fd  8d0440               lea eax, [eax + eax*2]
// 0080f600  83c204               add edx, 4
// 0080f603  83ef01               sub edi, 1
// 0080f606  891c81               mov dword ptr [ecx + eax*4], ebx
// 0080f609  75ea                 jne 0x80f5f5
// 0080f60b  5e                   pop esi
// 0080f60c  5b                   pop ebx
// 0080f60d  5f                   pop edi
// 0080f60e  c20c00               ret 0xc
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?SetColors@CXTPPaintManager@@QAEXHPBHPBK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
