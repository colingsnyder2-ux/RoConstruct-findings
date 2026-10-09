// roc 2007-03 006ce370  unit: seg_006c0000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ce370
//
// 006ce370  56                   push esi
// 006ce371  8b742408             mov esi, dword ptr [esp + 8]
// 006ce375  85f6                 test esi, esi
// 006ce377  7e22                 jle 0x6ce39b
// 006ce379  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ce37d  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ce381  53                   push ebx
// 006ce382  2bd0                 sub edx, eax
// 006ce384  57                   push edi
// 006ce385  8b38                 mov edi, dword ptr [eax]
// 006ce387  8b1c02               mov ebx, dword ptr [edx + eax]
// 006ce38a  83c004               add eax, 4
// 006ce38d  83ee01               sub esi, 1
// 006ce390  899cb9a4000000       mov dword ptr [ecx + edi*4 + 0xa4], ebx
// 006ce397  75ec                 jne 0x6ce385
// 006ce399  5f                   pop edi
// 006ce39a  5b                   pop ebx
// 006ce39b  5e                   pop esi
// 006ce39c  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?SetColors@CXTPDockingPanePaintManager@@QAEXHPBHPBK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
