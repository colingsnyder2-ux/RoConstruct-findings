// roc 2009-06 007dadf0  unit: CXTPDockingPaneSplitterContainer  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007dadf0
//
// 007dadf0  56                   push esi
// 007dadf1  8b742408             mov esi, dword ptr [esp + 8]
// 007dadf5  85f6                 test esi, esi
// 007dadf7  7e22                 jle 0x7dae1b
// 007dadf9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007dadfd  8b542410             mov edx, dword ptr [esp + 0x10]
// 007dae01  53                   push ebx
// 007dae02  2bd0                 sub edx, eax
// 007dae04  57                   push edi
// 007dae05  8b38                 mov edi, dword ptr [eax]
// 007dae07  8b1c02               mov ebx, dword ptr [edx + eax]
// 007dae0a  83c004               add eax, 4
// 007dae0d  83ee01               sub esi, 1
// 007dae10  899cb9a4000000       mov dword ptr [ecx + edi*4 + 0xa4], ebx
// 007dae17  75ec                 jne 0x7dae05
// 007dae19  5f                   pop edi
// 007dae1a  5b                   pop ebx
// 007dae1b  5e                   pop esi
// 007dae1c  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?SetColors@CXTPDockingPanePaintManager@@QAEXHPBHPBK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
