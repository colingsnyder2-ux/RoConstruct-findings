// from server: 100% by auto
// roc 2008-06 007625f0  unit: CXTPDockingPaneSplitterContainer  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007625f0
//
// 007625f0  56                   push esi
// 007625f1  8b742408             mov esi, dword ptr [esp + 8]
// 007625f5  85f6                 test esi, esi
// 007625f7  7e22                 jle 0x76261b
// 007625f9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007625fd  8b542410             mov edx, dword ptr [esp + 0x10]
// 00762601  53                   push ebx
// 00762602  2bd0                 sub edx, eax
// 00762604  57                   push edi
// 00762605  8b38                 mov edi, dword ptr [eax]
// 00762607  8b1c02               mov ebx, dword ptr [edx + eax]
// 0076260a  83c004               add eax, 4
// 0076260d  83ee01               sub esi, 1
// 00762610  899cb9a4000000       mov dword ptr [ecx + edi*4 + 0xa4], ebx
// 00762617  75ec                 jne 0x762605
// 00762619  5f                   pop edi
// 0076261a  5b                   pop ebx
// 0076261b  5e                   pop esi
// 0076261c  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?SetColors@CXTPDockingPanePaintManager@@QAEXHPBHPBK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
