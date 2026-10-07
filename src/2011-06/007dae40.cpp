// roc 2011-06 007dae40  unit: seg_007d0000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dae40
//
// 007dae40  8b442404             mov eax, dword ptr [esp + 4]
// 007dae44  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007dae48  53                   push ebx
// 007dae49  55                   push ebp
// 007dae4a  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007dae4e  56                   push esi
// 007dae4f  8b7010               mov esi, dword ptr [eax + 0x10]
// 007dae52  8b5610               mov edx, dword ptr [esi + 0x10]
// 007dae55  8b460c               mov eax, dword ptr [esi + 0xc]
// 007dae58  57                   push edi
// 007dae59  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007dae5d  57                   push edi
// 007dae5e  55                   push ebp
// 007dae5f  51                   push ecx
// 007dae60  52                   push edx
// 007dae61  ffd0                 call eax
// 007dae63  8bd8                 mov ebx, eax
// 007dae65  83c410               add esp, 0x10
// 007dae68  85db                 test ebx, ebx
// 007dae6a  7513                 jne 0x7dae7f
// 007dae6c  85ff                 test edi, edi
// 007dae6e  760f                 jbe 0x7dae7f
// 007dae70  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007dae74  6a04                 push 4
// 007dae76  51                   push ecx
// 007dae77  e87439faff           call 0x77e7f0
// 007dae7c  83c408               add esp, 8
// 007dae7f  2bfd                 sub edi, ebp
// 007dae81  017e44               add dword ptr [esi + 0x44], edi
// 007dae84  5f                   pop edi
// 007dae85  5e                   pop esi
// 007dae86  5d                   pop ebp
// 007dae87  8bc3                 mov eax, ebx
// 007dae89  5b                   pop ebx
// 007dae8a  c3                   ret 
// library lua-5.1.4/lmem.c (function _luaM_realloc_)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmem.c
