// roc 2012-06 00664430  unit: seg_00660000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00664430
//
// 00664430  8b442404             mov eax, dword ptr [esp + 4]
// 00664434  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 0066443a  56                   push esi
// 0066443b  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0066443f  8b16                 mov edx, dword ptr [esi]
// 00664441  57                   push edi
// 00664442  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00664446  8d1497               lea edx, [edi + edx*4]
// 00664449  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0066444d  52                   push edx
// 0066444e  8b17                 mov edx, dword ptr [edi]
// 00664450  52                   push edx
// 00664451  8b542418             mov edx, dword ptr [esp + 0x18]
// 00664455  52                   push edx
// 00664456  50                   push eax
// 00664457  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0066445a  ffd0                 call eax
// 0066445c  ff06                 inc dword ptr [esi]
// 0066445e  ff07                 inc dword ptr [edi]
// 00664460  83c410               add esp, 0x10
// 00664463  5f                   pop edi
// 00664464  5e                   pop esi
// 00664465  c3                   ret 
// library jpeg-6b/jdmerge.c (function _merged_1v_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
