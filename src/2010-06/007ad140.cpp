// roc 2010-06 007ad140  unit: CRobloxControlColorSelector  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ad140
//
// 007ad140  57                   push edi
// 007ad141  8b7c2408             mov edi, dword ptr [esp + 8]
// 007ad145  85ff                 test edi, edi
// 007ad147  7e24                 jle 0x7ad16d
// 007ad149  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007ad14d  53                   push ebx
// 007ad14e  56                   push esi
// 007ad14f  8b742418             mov esi, dword ptr [esp + 0x18]
// 007ad153  2bf2                 sub esi, edx
// 007ad155  8b02                 mov eax, dword ptr [edx]
// 007ad157  8b1c16               mov ebx, dword ptr [esi + edx]
// 007ad15a  83c01e               add eax, 0x1e
// 007ad15d  8d0440               lea eax, [eax + eax*2]
// 007ad160  83c204               add edx, 4
// 007ad163  83ef01               sub edi, 1
// 007ad166  891c81               mov dword ptr [ecx + eax*4], ebx
// 007ad169  75ea                 jne 0x7ad155
// 007ad16b  5e                   pop esi
// 007ad16c  5b                   pop ebx
// 007ad16d  5f                   pop edi
// 007ad16e  c20c00               ret 0xc
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?SetColors@CXTPPaintManager@@QAEXHPBHPBK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
