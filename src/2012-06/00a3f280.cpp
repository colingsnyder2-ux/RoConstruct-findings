// roc 2012-06 00a3f280  unit: CXTPDockingPaneSplitterContainer  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3f280
//
// 00a3f280  56                   push esi
// 00a3f281  8b742408             mov esi, dword ptr [esp + 8]
// 00a3f285  85f6                 test esi, esi
// 00a3f287  7e22                 jle 0xa3f2ab
// 00a3f289  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a3f28d  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a3f291  53                   push ebx
// 00a3f292  2bd0                 sub edx, eax
// 00a3f294  57                   push edi
// 00a3f295  8b38                 mov edi, dword ptr [eax]
// 00a3f297  8b1c02               mov ebx, dword ptr [edx + eax]
// 00a3f29a  83c004               add eax, 4
// 00a3f29d  83ee01               sub esi, 1
// 00a3f2a0  899cb9a4000000       mov dword ptr [ecx + edi*4 + 0xa4], ebx
// 00a3f2a7  75ec                 jne 0xa3f295
// 00a3f2a9  5f                   pop edi
// 00a3f2aa  5b                   pop ebx
// 00a3f2ab  5e                   pop esi
// 00a3f2ac  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?SetColors@CXTPDockingPanePaintManager@@QAEXHPBHPBK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
