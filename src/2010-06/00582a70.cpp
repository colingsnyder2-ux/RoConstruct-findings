// roc 2010-06 00582a70  unit: seg_00580000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00582a70
//
// 00582a70  8b442404             mov eax, dword ptr [esp + 4]
// 00582a74  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 00582a7a  56                   push esi
// 00582a7b  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00582a7f  8b16                 mov edx, dword ptr [esi]
// 00582a81  57                   push edi
// 00582a82  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00582a86  8d1497               lea edx, [edi + edx*4]
// 00582a89  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00582a8d  52                   push edx
// 00582a8e  8b17                 mov edx, dword ptr [edi]
// 00582a90  52                   push edx
// 00582a91  8b542418             mov edx, dword ptr [esp + 0x18]
// 00582a95  52                   push edx
// 00582a96  50                   push eax
// 00582a97  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00582a9a  ffd0                 call eax
// 00582a9c  ff06                 inc dword ptr [esi]
// 00582a9e  ff07                 inc dword ptr [edi]
// 00582aa0  83c410               add esp, 0x10
// 00582aa3  5f                   pop edi
// 00582aa4  5e                   pop esi
// 00582aa5  c3                   ret 
// library jpeg-6b/jdmerge.c (function _merged_1v_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
