// from server: 100% by auto
// roc 2009-06 0059eee0  unit: seg_00590000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059eee0
//
// 0059eee0  8b442404             mov eax, dword ptr [esp + 4]
// 0059eee4  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 0059eeea  56                   push esi
// 0059eeeb  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0059eeef  8b16                 mov edx, dword ptr [esi]
// 0059eef1  57                   push edi
// 0059eef2  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0059eef6  8d1497               lea edx, [edi + edx*4]
// 0059eef9  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0059eefd  52                   push edx
// 0059eefe  8b17                 mov edx, dword ptr [edi]
// 0059ef00  52                   push edx
// 0059ef01  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059ef05  52                   push edx
// 0059ef06  50                   push eax
// 0059ef07  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0059ef0a  ffd0                 call eax
// 0059ef0c  ff06                 inc dword ptr [esi]
// 0059ef0e  ff07                 inc dword ptr [edi]
// 0059ef10  83c410               add esp, 0x10
// 0059ef13  5f                   pop edi
// 0059ef14  5e                   pop esi
// 0059ef15  c3                   ret 
// library jpeg-6b/jdmerge.c (function _merged_1v_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
