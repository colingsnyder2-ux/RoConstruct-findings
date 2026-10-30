// roc 2009-12 008b5920  unit: CXTPDockingPaneSplitterContainer  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b5920
//
// 008b5920  56                   push esi
// 008b5921  8b742408             mov esi, dword ptr [esp + 8]
// 008b5925  85f6                 test esi, esi
// 008b5927  7e22                 jle 0x8b594b
// 008b5929  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008b592d  8b542410             mov edx, dword ptr [esp + 0x10]
// 008b5931  53                   push ebx
// 008b5932  2bd0                 sub edx, eax
// 008b5934  57                   push edi
// 008b5935  8b38                 mov edi, dword ptr [eax]
// 008b5937  8b1c02               mov ebx, dword ptr [edx + eax]
// 008b593a  83c004               add eax, 4
// 008b593d  83ee01               sub esi, 1
// 008b5940  899cb9a4000000       mov dword ptr [ecx + edi*4 + 0xa4], ebx
// 008b5947  75ec                 jne 0x8b5935
// 008b5949  5f                   pop edi
// 008b594a  5b                   pop ebx
// 008b594b  5e                   pop esi
// 008b594c  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?SetColors@CXTPDockingPanePaintManager@@QAEXHPBHPBK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
