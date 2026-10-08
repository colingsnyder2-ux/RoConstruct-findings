// from server: 100% by auto
// roc 2008-06 00530470  unit: seg_00530000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530470
//
// 00530470  56                   push esi
// 00530471  8b742408             mov esi, dword ptr [esp + 8]
// 00530475  8b4604               mov eax, dword ptr [esi + 4]
// 00530478  8b08                 mov ecx, dword ptr [eax]
// 0053047a  6a20                 push 0x20
// 0053047c  6a01                 push 1
// 0053047e  56                   push esi
// 0053047f  ffd1                 call ecx
// 00530481  89864c010000         mov dword ptr [esi + 0x14c], eax
// 00530487  83c40c               add esp, 0xc
// 0053048a  c70040015300         mov dword ptr [eax], 0x530140
// 00530490  c7400490015300       mov dword ptr [eax + 4], 0x530190
// 00530497  c7400890025300       mov dword ptr [eax + 8], 0x530290
// 0053049e  c7400c70035300       mov dword ptr [eax + 0xc], 0x530370
// 005304a5  c7401090035300       mov dword ptr [eax + 0x10], 0x530390
// 005304ac  c74014c0005300       mov dword ptr [eax + 0x14], 0x5300c0
// 005304b3  c7401800015300       mov dword ptr [eax + 0x18], 0x530100
// 005304ba  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 005304c1  5e                   pop esi
// 005304c2  c3                   ret 
// library jpeg-6b/jcmarker.c (function _jinit_marker_writer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
