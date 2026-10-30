// roc 2009-12 0061a330  unit: seg_00610000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061a330
//
// 0061a330  56                   push esi
// 0061a331  8b742408             mov esi, dword ptr [esp + 8]
// 0061a335  8b4604               mov eax, dword ptr [esi + 4]
// 0061a338  8b08                 mov ecx, dword ptr [eax]
// 0061a33a  6a20                 push 0x20
// 0061a33c  6a01                 push 1
// 0061a33e  56                   push esi
// 0061a33f  ffd1                 call ecx
// 0061a341  89864c010000         mov dword ptr [esi + 0x14c], eax
// 0061a347  83c40c               add esp, 0xc
// 0061a34a  c70000a06100         mov dword ptr [eax], 0x61a000
// 0061a350  c7400450a06100       mov dword ptr [eax + 4], 0x61a050
// 0061a357  c7400850a16100       mov dword ptr [eax + 8], 0x61a150
// 0061a35e  c7400c30a26100       mov dword ptr [eax + 0xc], 0x61a230
// 0061a365  c7401050a26100       mov dword ptr [eax + 0x10], 0x61a250
// 0061a36c  c74014809f6100       mov dword ptr [eax + 0x14], 0x619f80
// 0061a373  c74018c09f6100       mov dword ptr [eax + 0x18], 0x619fc0
// 0061a37a  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 0061a381  5e                   pop esi
// 0061a382  c3                   ret 
// library jpeg-6b/jcmarker.c (function _jinit_marker_writer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
