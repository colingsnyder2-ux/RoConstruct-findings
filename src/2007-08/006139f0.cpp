// from server: 100% by auto
// roc 2007-08 006139f0  unit: seg_00610000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006139f0
//
// 006139f0  8b442404             mov eax, dword ptr [esp + 4]
// 006139f4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006139f8  53                   push ebx
// 006139f9  55                   push ebp
// 006139fa  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006139fe  56                   push esi
// 006139ff  8b7010               mov esi, dword ptr [eax + 0x10]
// 00613a02  8b5610               mov edx, dword ptr [esi + 0x10]
// 00613a05  8b460c               mov eax, dword ptr [esi + 0xc]
// 00613a08  57                   push edi
// 00613a09  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00613a0d  57                   push edi
// 00613a0e  55                   push ebp
// 00613a0f  51                   push ecx
// 00613a10  52                   push edx
// 00613a11  ffd0                 call eax
// 00613a13  8bd8                 mov ebx, eax
// 00613a15  83c410               add esp, 0x10
// 00613a18  85db                 test ebx, ebx
// 00613a1a  7513                 jne 0x613a2f
// 00613a1c  85ff                 test edi, edi
// 00613a1e  760f                 jbe 0x613a2f
// 00613a20  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00613a24  6a04                 push 4
// 00613a26  51                   push ecx
// 00613a27  e8f425fbff           call 0x5c6020
// 00613a2c  83c408               add esp, 8
// 00613a2f  2bfd                 sub edi, ebp
// 00613a31  017e44               add dword ptr [esi + 0x44], edi
// 00613a34  5f                   pop edi
// 00613a35  5e                   pop esi
// 00613a36  5d                   pop ebp
// 00613a37  8bc3                 mov eax, ebx
// 00613a39  5b                   pop ebx
// 00613a3a  c3                   ret 
// library lua-5.1.4/lmem.c (function _luaM_realloc_)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmem.c
