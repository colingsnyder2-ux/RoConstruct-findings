// roc 2009-06 006ed760  unit: seg_006e0000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ed760
//
// 006ed760  8b442404             mov eax, dword ptr [esp + 4]
// 006ed764  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006ed768  53                   push ebx
// 006ed769  55                   push ebp
// 006ed76a  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006ed76e  56                   push esi
// 006ed76f  8b7010               mov esi, dword ptr [eax + 0x10]
// 006ed772  8b5610               mov edx, dword ptr [esi + 0x10]
// 006ed775  8b460c               mov eax, dword ptr [esi + 0xc]
// 006ed778  57                   push edi
// 006ed779  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006ed77d  57                   push edi
// 006ed77e  55                   push ebp
// 006ed77f  51                   push ecx
// 006ed780  52                   push edx
// 006ed781  ffd0                 call eax
// 006ed783  8bd8                 mov ebx, eax
// 006ed785  83c410               add esp, 0x10
// 006ed788  85db                 test ebx, ebx
// 006ed78a  7513                 jne 0x6ed79f
// 006ed78c  85ff                 test edi, edi
// 006ed78e  760f                 jbe 0x6ed79f
// 006ed790  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ed794  6a04                 push 4
// 006ed796  51                   push ecx
// 006ed797  e8445bfdff           call 0x6c32e0
// 006ed79c  83c408               add esp, 8
// 006ed79f  2bfd                 sub edi, ebp
// 006ed7a1  017e44               add dword ptr [esi + 0x44], edi
// 006ed7a4  5f                   pop edi
// 006ed7a5  5e                   pop esi
// 006ed7a6  5d                   pop ebp
// 006ed7a7  8bc3                 mov eax, ebx
// 006ed7a9  5b                   pop ebx
// 006ed7aa  c3                   ret 
// library lua-5.1.4/lmem.c (function _luaM_realloc_)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmem.c
