// roc 2011-06 00578d20  unit: seg_00570000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00578d20
//
// 00578d20  8b442404             mov eax, dword ptr [esp + 4]
// 00578d24  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 00578d2a  56                   push esi
// 00578d2b  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00578d2f  8b16                 mov edx, dword ptr [esi]
// 00578d31  57                   push edi
// 00578d32  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00578d36  8d1497               lea edx, [edi + edx*4]
// 00578d39  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00578d3d  52                   push edx
// 00578d3e  8b17                 mov edx, dword ptr [edi]
// 00578d40  52                   push edx
// 00578d41  8b542418             mov edx, dword ptr [esp + 0x18]
// 00578d45  52                   push edx
// 00578d46  50                   push eax
// 00578d47  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00578d4a  ffd0                 call eax
// 00578d4c  ff06                 inc dword ptr [esi]
// 00578d4e  ff07                 inc dword ptr [edi]
// 00578d50  83c410               add esp, 0x10
// 00578d53  5f                   pop edi
// 00578d54  5e                   pop esi
// 00578d55  c3                   ret 
// library jpeg-6b/jdmerge.c (function _merged_1v_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
