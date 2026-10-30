// roc 2011-06 008c6eb0  unit: CXTPDockingPaneSplitterContainer  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c6eb0
//
// 008c6eb0  56                   push esi
// 008c6eb1  8b742408             mov esi, dword ptr [esp + 8]
// 008c6eb5  85f6                 test esi, esi
// 008c6eb7  7e22                 jle 0x8c6edb
// 008c6eb9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008c6ebd  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c6ec1  53                   push ebx
// 008c6ec2  2bd0                 sub edx, eax
// 008c6ec4  57                   push edi
// 008c6ec5  8b38                 mov edi, dword ptr [eax]
// 008c6ec7  8b1c02               mov ebx, dword ptr [edx + eax]
// 008c6eca  83c004               add eax, 4
// 008c6ecd  83ee01               sub esi, 1
// 008c6ed0  899cb9a4000000       mov dword ptr [ecx + edi*4 + 0xa4], ebx
// 008c6ed7  75ec                 jne 0x8c6ec5
// 008c6ed9  5f                   pop edi
// 008c6eda  5b                   pop ebx
// 008c6edb  5e                   pop esi
// 008c6edc  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?SetColors@CXTPDockingPanePaintManager@@QAEXHPBHPBK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
