// from server: 100% by auto
// roc 2008-06 00664230  unit: RBX::FilterStairs  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00664230
//
// 00664230  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00664234  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00664238  53                   push ebx
// 00664239  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0066423d  56                   push esi
// 0066423e  8b7334               mov esi, dword ptr [ebx + 0x34]
// 00664241  57                   push edi
// 00664242  50                   push eax
// 00664243  51                   push ecx
// 00664244  56                   push esi
// 00664245  e8b6b0ffff           call 0x65f300
// 0066424a  8b5330               mov edx, dword ptr [ebx + 0x30]
// 0066424d  8bf8                 mov edi, eax
// 0066424f  8b4204               mov eax, dword ptr [edx + 4]
// 00664252  57                   push edi
// 00664253  50                   push eax
// 00664254  56                   push esi
// 00664255  e8f6aeffff           call 0x65f150
// 0066425a  83c418               add esp, 0x18
// 0066425d  83780800             cmp dword ptr [eax + 8], 0
// 00664261  750d                 jne 0x664270
// 00664263  c70001000000         mov dword ptr [eax], 1
// 00664269  c7400801000000       mov dword ptr [eax + 8], 1
// 00664270  8bc7                 mov eax, edi
// 00664272  5f                   pop edi
// 00664273  5e                   pop esi
// 00664274  5b                   pop ebx
// 00664275  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_newstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
