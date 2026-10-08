// from server: 100% by auto
// roc 2012-06 00654870  unit: seg_00650000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00654870
//
// 00654870  56                   push esi
// 00654871  57                   push edi
// 00654872  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00654876  be01000000           mov esi, 1
// 0065487b  eb03                 jmp 0x654880
// 0065487d  8d4900               lea ecx, [ecx]
// 00654880  56                   push esi
// 00654881  57                   push edi
// 00654882  e8d9feffff           call 0x654760
// 00654887  83c408               add esp, 8
// 0065488a  83ee01               sub esi, 1
// 0065488d  79f1                 jns 0x654880
// 0065488f  8b4704               mov eax, dword ptr [edi + 4]
// 00654892  6a54                 push 0x54
// 00654894  50                   push eax
// 00654895  57                   push edi
// 00654896  e8f5b60000           call 0x65ff90
// 0065489b  57                   push edi
// 0065489c  c7470400000000       mov dword ptr [edi + 4], 0
// 006548a3  e8e85ef4ff           call 0x59a790
// 006548a8  83c410               add esp, 0x10
// 006548ab  5f                   pop edi
// 006548ac  5e                   pop esi
// 006548ad  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _self_destruct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
