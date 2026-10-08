// from server: 100% by auto
// roc 2007-08 00528a70  unit: seg_00520000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00528a70
//
// 00528a70  8b442404             mov eax, dword ptr [esp + 4]
// 00528a74  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 00528a7a  56                   push esi
// 00528a7b  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00528a7f  8b16                 mov edx, dword ptr [esi]
// 00528a81  57                   push edi
// 00528a82  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00528a86  8d1497               lea edx, [edi + edx*4]
// 00528a89  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00528a8d  52                   push edx
// 00528a8e  8b17                 mov edx, dword ptr [edi]
// 00528a90  52                   push edx
// 00528a91  8b542418             mov edx, dword ptr [esp + 0x18]
// 00528a95  52                   push edx
// 00528a96  50                   push eax
// 00528a97  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00528a9a  ffd0                 call eax
// 00528a9c  830601               add dword ptr [esi], 1
// 00528a9f  830701               add dword ptr [edi], 1
// 00528aa2  83c410               add esp, 0x10
// 00528aa5  5f                   pop edi
// 00528aa6  5e                   pop esi
// 00528aa7  c3                   ret 
// library jpeg-6b/jdmerge.c (function _merged_1v_upsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
