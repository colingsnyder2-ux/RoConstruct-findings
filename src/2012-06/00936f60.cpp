// from server: 100% by auto
// roc 2012-06 00936f60  unit: seg_00930000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00936f60
//
// 00936f60  8b442404             mov eax, dword ptr [esp + 4]
// 00936f64  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00936f68  53                   push ebx
// 00936f69  55                   push ebp
// 00936f6a  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00936f6e  56                   push esi
// 00936f6f  8b7010               mov esi, dword ptr [eax + 0x10]
// 00936f72  8b5610               mov edx, dword ptr [esi + 0x10]
// 00936f75  8b460c               mov eax, dword ptr [esi + 0xc]
// 00936f78  57                   push edi
// 00936f79  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00936f7d  57                   push edi
// 00936f7e  55                   push ebp
// 00936f7f  51                   push ecx
// 00936f80  52                   push edx
// 00936f81  ffd0                 call eax
// 00936f83  8bd8                 mov ebx, eax
// 00936f85  83c410               add esp, 0x10
// 00936f88  85db                 test ebx, ebx
// 00936f8a  7513                 jne 0x936f9f
// 00936f8c  85ff                 test edi, edi
// 00936f8e  760f                 jbe 0x936f9f
// 00936f90  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00936f94  6a04                 push 4
// 00936f96  51                   push ecx
// 00936f97  e8e4dcf1ff           call 0x854c80
// 00936f9c  83c408               add esp, 8
// 00936f9f  2bfd                 sub edi, ebp
// 00936fa1  017e44               add dword ptr [esi + 0x44], edi
// 00936fa4  5f                   pop edi
// 00936fa5  5e                   pop esi
// 00936fa6  5d                   pop ebp
// 00936fa7  8bc3                 mov eax, ebx
// 00936fa9  5b                   pop ebx
// 00936faa  c3                   ret 
// library lua-5.1.4/lmem.c (function _luaM_realloc_)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmem.c
