// roc 2011-06 0056a820  unit: seg_00560000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056a820
//
// 0056a820  56                   push esi
// 0056a821  8b742408             mov esi, dword ptr [esp + 8]
// 0056a825  8b4604               mov eax, dword ptr [esi + 4]
// 0056a828  8b08                 mov ecx, dword ptr [eax]
// 0056a82a  6a20                 push 0x20
// 0056a82c  6a01                 push 1
// 0056a82e  56                   push esi
// 0056a82f  ffd1                 call ecx
// 0056a831  89864c010000         mov dword ptr [esi + 0x14c], eax
// 0056a837  83c40c               add esp, 0xc
// 0056a83a  c700f0a45600         mov dword ptr [eax], 0x56a4f0
// 0056a840  c7400440a55600       mov dword ptr [eax + 4], 0x56a540
// 0056a847  c7400840a65600       mov dword ptr [eax + 8], 0x56a640
// 0056a84e  c7400c20a75600       mov dword ptr [eax + 0xc], 0x56a720
// 0056a855  c7401040a75600       mov dword ptr [eax + 0x10], 0x56a740
// 0056a85c  c7401470a45600       mov dword ptr [eax + 0x14], 0x56a470
// 0056a863  c74018b0a45600       mov dword ptr [eax + 0x18], 0x56a4b0
// 0056a86a  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 0056a871  5e                   pop esi
// 0056a872  c3                   ret 
// library jpeg-6b/jcmarker.c (function _jinit_marker_writer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
