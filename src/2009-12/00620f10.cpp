// roc 2009-12 00620f10  unit: seg_00620000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00620f10
//
// 00620f10  8b442404             mov eax, dword ptr [esp + 4]
// 00620f14  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 00620f1a  56                   push esi
// 00620f1b  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00620f1f  8b16                 mov edx, dword ptr [esi]
// 00620f21  57                   push edi
// 00620f22  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00620f26  8d1497               lea edx, [edi + edx*4]
// 00620f29  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00620f2d  52                   push edx
// 00620f2e  8b17                 mov edx, dword ptr [edi]
// 00620f30  52                   push edx
// 00620f31  8b542418             mov edx, dword ptr [esp + 0x18]
// 00620f35  52                   push edx
// 00620f36  50                   push eax
// 00620f37  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00620f3a  ffd0                 call eax
// 00620f3c  ff06                 inc dword ptr [esi]
// 00620f3e  ff07                 inc dword ptr [edi]
// 00620f40  83c410               add esp, 0x10
// 00620f43  5f                   pop edi
// 00620f44  5e                   pop esi
// 00620f45  c3                   ret 
// library jpeg-6b/jdmerge.c (function _merged_1v_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
