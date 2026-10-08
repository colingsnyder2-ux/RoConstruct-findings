// from server: 100% by auto
// roc 2007-08 005205e0  unit: seg_00520000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005205e0
//
// 005205e0  8b442404             mov eax, dword ptr [esp + 4]
// 005205e4  80784a00             cmp byte ptr [eax + 0x4a], 0
// 005205e8  56                   push esi
// 005205e9  8bb080010000         mov esi, dword ptr [eax + 0x180]
// 005205ef  740f                 je 0x520600
// 005205f1  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 005205f7  8b5108               mov edx, dword ptr [ecx + 8]
// 005205fa  50                   push eax
// 005205fb  ffd2                 call edx
// 005205fd  83c404               add esp, 4
// 00520600  83460c01             add dword ptr [esi + 0xc], 1
// 00520604  5e                   pop esi
// 00520605  c3                   ret 
// library jpeg-6b/jdmaster.c (function _finish_output_pass)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
