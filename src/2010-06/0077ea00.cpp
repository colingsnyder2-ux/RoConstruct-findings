// roc 2010-06 0077ea00  unit: seg_00770000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077ea00
//
// 0077ea00  8b442404             mov eax, dword ptr [esp + 4]
// 0077ea04  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0077ea08  53                   push ebx
// 0077ea09  55                   push ebp
// 0077ea0a  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0077ea0e  56                   push esi
// 0077ea0f  8b7010               mov esi, dword ptr [eax + 0x10]
// 0077ea12  8b5610               mov edx, dword ptr [esi + 0x10]
// 0077ea15  8b460c               mov eax, dword ptr [esi + 0xc]
// 0077ea18  57                   push edi
// 0077ea19  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0077ea1d  57                   push edi
// 0077ea1e  55                   push ebp
// 0077ea1f  51                   push ecx
// 0077ea20  52                   push edx
// 0077ea21  ffd0                 call eax
// 0077ea23  8bd8                 mov ebx, eax
// 0077ea25  83c410               add esp, 0x10
// 0077ea28  85db                 test ebx, ebx
// 0077ea2a  7513                 jne 0x77ea3f
// 0077ea2c  85ff                 test edi, edi
// 0077ea2e  760f                 jbe 0x77ea3f
// 0077ea30  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0077ea34  6a04                 push 4
// 0077ea36  51                   push ecx
// 0077ea37  e87416fbff           call 0x7300b0
// 0077ea3c  83c408               add esp, 8
// 0077ea3f  2bfd                 sub edi, ebp
// 0077ea41  017e44               add dword ptr [esi + 0x44], edi
// 0077ea44  5f                   pop edi
// 0077ea45  5e                   pop esi
// 0077ea46  5d                   pop ebp
// 0077ea47  8bc3                 mov eax, ebx
// 0077ea49  5b                   pop ebx
// 0077ea4a  c3                   ret 
// library lua-5.1.4/lmem.c (function _luaM_realloc_)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmem.c
