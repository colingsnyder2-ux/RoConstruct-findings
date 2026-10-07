// roc 2007-08 006e54d0  unit: CXTPDockingPaneSplitterContainer  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e54d0
//
// 006e54d0  56                   push esi
// 006e54d1  8b742408             mov esi, dword ptr [esp + 8]
// 006e54d5  85f6                 test esi, esi
// 006e54d7  7e22                 jle 0x6e54fb
// 006e54d9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006e54dd  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e54e1  53                   push ebx
// 006e54e2  2bd0                 sub edx, eax
// 006e54e4  57                   push edi
// 006e54e5  8b38                 mov edi, dword ptr [eax]
// 006e54e7  8b1c02               mov ebx, dword ptr [edx + eax]
// 006e54ea  83c004               add eax, 4
// 006e54ed  83ee01               sub esi, 1
// 006e54f0  899cb9a4000000       mov dword ptr [ecx + edi*4 + 0xa4], ebx
// 006e54f7  75ec                 jne 0x6e54e5
// 006e54f9  5f                   pop edi
// 006e54fa  5b                   pop ebx
// 006e54fb  5e                   pop esi
// 006e54fc  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?SetColors@CXTPDockingPanePaintManager@@QAEXHPBHPBK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
