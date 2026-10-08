// roc 2007-03 00523740  unit: seg_00520000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00523740
//
// 00523740  8b442404             mov eax, dword ptr [esp + 4]
// 00523744  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 0052374a  56                   push esi
// 0052374b  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0052374f  8b16                 mov edx, dword ptr [esi]
// 00523751  57                   push edi
// 00523752  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00523756  8d1497               lea edx, [edi + edx*4]
// 00523759  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0052375d  52                   push edx
// 0052375e  8b17                 mov edx, dword ptr [edi]
// 00523760  52                   push edx
// 00523761  8b542418             mov edx, dword ptr [esp + 0x18]
// 00523765  52                   push edx
// 00523766  50                   push eax
// 00523767  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0052376a  ffd0                 call eax
// 0052376c  830601               add dword ptr [esi], 1
// 0052376f  830701               add dword ptr [edi], 1
// 00523772  83c410               add esp, 0x10
// 00523775  5f                   pop edi
// 00523776  5e                   pop esi
// 00523777  c3                   ret 
// library jpeg-6b/jdmerge.c (function _merged_1v_upsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
