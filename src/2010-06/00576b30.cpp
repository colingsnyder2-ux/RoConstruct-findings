// from server: 100% by auto
// roc 2010-06 00576b30  unit: seg_00570000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00576b30
//
// 00576b30  56                   push esi
// 00576b31  57                   push edi
// 00576b32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00576b36  be01000000           mov esi, 1
// 00576b3b  eb03                 jmp 0x576b40
// 00576b3d  8d4900               lea ecx, [ecx]
// 00576b40  56                   push esi
// 00576b41  57                   push edi
// 00576b42  e8d9feffff           call 0x576a20
// 00576b47  83c408               add esp, 8
// 00576b4a  83ee01               sub esi, 1
// 00576b4d  79f1                 jns 0x576b40
// 00576b4f  8b4704               mov eax, dword ptr [edi + 4]
// 00576b52  6a54                 push 0x54
// 00576b54  50                   push eax
// 00576b55  57                   push edi
// 00576b56  e8857a0000           call 0x57e5e0
// 00576b5b  57                   push edi
// 00576b5c  c7470400000000       mov dword ptr [edi + 4], 0
// 00576b63  e848daedff           call 0x4545b0
// 00576b68  83c410               add esp, 0x10
// 00576b6b  5f                   pop edi
// 00576b6c  5e                   pop esi
// 00576b6d  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _self_destruct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
