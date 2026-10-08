// roc 2010-06 00869a10  unit: CXTPDockingPaneSplitterContainer  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00869a10
//
// 00869a10  56                   push esi
// 00869a11  8b742408             mov esi, dword ptr [esp + 8]
// 00869a15  85f6                 test esi, esi
// 00869a17  7e22                 jle 0x869a3b
// 00869a19  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00869a1d  8b542410             mov edx, dword ptr [esp + 0x10]
// 00869a21  53                   push ebx
// 00869a22  2bd0                 sub edx, eax
// 00869a24  57                   push edi
// 00869a25  8b38                 mov edi, dword ptr [eax]
// 00869a27  8b1c02               mov ebx, dword ptr [edx + eax]
// 00869a2a  83c004               add eax, 4
// 00869a2d  83ee01               sub esi, 1
// 00869a30  899cb9a4000000       mov dword ptr [ecx + edi*4 + 0xa4], ebx
// 00869a37  75ec                 jne 0x869a25
// 00869a39  5f                   pop edi
// 00869a3a  5b                   pop ebx
// 00869a3b  5e                   pop esi
// 00869a3c  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?SetColors@CXTPDockingPanePaintManager@@QAEXHPBHPBK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
