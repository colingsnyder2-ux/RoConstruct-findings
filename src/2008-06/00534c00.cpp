// roc 2008-06 00534c00  unit: seg_00530000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00534c00
//
// 00534c00  8b442404             mov eax, dword ptr [esp + 4]
// 00534c04  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 00534c0a  56                   push esi
// 00534c0b  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00534c0f  8b16                 mov edx, dword ptr [esi]
// 00534c11  57                   push edi
// 00534c12  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00534c16  8d1497               lea edx, [edi + edx*4]
// 00534c19  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00534c1d  52                   push edx
// 00534c1e  8b17                 mov edx, dword ptr [edi]
// 00534c20  52                   push edx
// 00534c21  8b542418             mov edx, dword ptr [esp + 0x18]
// 00534c25  52                   push edx
// 00534c26  50                   push eax
// 00534c27  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00534c2a  ffd0                 call eax
// 00534c2c  ff06                 inc dword ptr [esi]
// 00534c2e  ff07                 inc dword ptr [edi]
// 00534c30  83c410               add esp, 0x10
// 00534c33  5f                   pop edi
// 00534c34  5e                   pop esi
// 00534c35  c3                   ret 
// library jpeg-6b/jdmerge.c (function _merged_1v_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
