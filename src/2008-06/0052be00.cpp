// from server: 100% by auto
// roc 2008-06 0052be00  unit: seg_00520000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052be00
//
// 0052be00  8b442404             mov eax, dword ptr [esp + 4]
// 0052be04  80784a00             cmp byte ptr [eax + 0x4a], 0
// 0052be08  56                   push esi
// 0052be09  8bb080010000         mov esi, dword ptr [eax + 0x180]
// 0052be0f  740f                 je 0x52be20
// 0052be11  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 0052be17  8b5108               mov edx, dword ptr [ecx + 8]
// 0052be1a  50                   push eax
// 0052be1b  ffd2                 call edx
// 0052be1d  83c404               add esp, 4
// 0052be20  ff460c               inc dword ptr [esi + 0xc]
// 0052be23  5e                   pop esi
// 0052be24  c3                   ret 
// library jpeg-6b/jdmaster.c (function _finish_output_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
