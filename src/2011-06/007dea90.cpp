// roc 2011-06 007dea90  unit: seg_007d0000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dea90
//
// 007dea90  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007dea94  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007dea98  53                   push ebx
// 007dea99  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007dea9d  56                   push esi
// 007dea9e  8b7334               mov esi, dword ptr [ebx + 0x34]
// 007deaa1  57                   push edi
// 007deaa2  50                   push eax
// 007deaa3  51                   push ecx
// 007deaa4  56                   push esi
// 007deaa5  e876b7ffff           call 0x7da220
// 007deaaa  8b5330               mov edx, dword ptr [ebx + 0x30]
// 007deaad  8bf8                 mov edi, eax
// 007deaaf  8b4204               mov eax, dword ptr [edx + 4]
// 007deab2  57                   push edi
// 007deab3  50                   push eax
// 007deab4  56                   push esi
// 007deab5  e8b6b5ffff           call 0x7da070
// 007deaba  83c418               add esp, 0x18
// 007deabd  83780800             cmp dword ptr [eax + 8], 0
// 007deac1  750d                 jne 0x7dead0
// 007deac3  c70001000000         mov dword ptr [eax], 1
// 007deac9  c7400801000000       mov dword ptr [eax + 8], 1
// 007dead0  8bc7                 mov eax, edi
// 007dead2  5f                   pop edi
// 007dead3  5e                   pop esi
// 007dead4  5b                   pop ebx
// 007dead5  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_newstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
