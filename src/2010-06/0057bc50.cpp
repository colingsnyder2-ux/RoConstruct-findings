// from server: 100% by auto
// roc 2010-06 0057bc50  unit: seg_00570000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057bc50
//
// 0057bc50  56                   push esi
// 0057bc51  8b742408             mov esi, dword ptr [esp + 8]
// 0057bc55  8b4604               mov eax, dword ptr [esi + 4]
// 0057bc58  8b08                 mov ecx, dword ptr [eax]
// 0057bc5a  6a20                 push 0x20
// 0057bc5c  6a01                 push 1
// 0057bc5e  56                   push esi
// 0057bc5f  ffd1                 call ecx
// 0057bc61  89864c010000         mov dword ptr [esi + 0x14c], eax
// 0057bc67  83c40c               add esp, 0xc
// 0057bc6a  c70020b95700         mov dword ptr [eax], 0x57b920
// 0057bc70  c7400470b95700       mov dword ptr [eax + 4], 0x57b970
// 0057bc77  c7400870ba5700       mov dword ptr [eax + 8], 0x57ba70
// 0057bc7e  c7400c50bb5700       mov dword ptr [eax + 0xc], 0x57bb50
// 0057bc85  c7401070bb5700       mov dword ptr [eax + 0x10], 0x57bb70
// 0057bc8c  c74014a0b85700       mov dword ptr [eax + 0x14], 0x57b8a0
// 0057bc93  c74018e0b85700       mov dword ptr [eax + 0x18], 0x57b8e0
// 0057bc9a  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 0057bca1  5e                   pop esi
// 0057bca2  c3                   ret 
// library jpeg-6b/jcmarker.c (function _jinit_marker_writer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
