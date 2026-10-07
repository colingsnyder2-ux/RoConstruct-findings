// roc 2012-06 00937230  unit: seg_00930000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00937230
//
// 00937230  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00937234  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00937238  53                   push ebx
// 00937239  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0093723d  56                   push esi
// 0093723e  8b7334               mov esi, dword ptr [ebx + 0x34]
// 00937241  57                   push edi
// 00937242  50                   push eax
// 00937243  51                   push ecx
// 00937244  56                   push esi
// 00937245  e8e6f0ffff           call 0x936330
// 0093724a  8b5330               mov edx, dword ptr [ebx + 0x30]
// 0093724d  8bf8                 mov edi, eax
// 0093724f  8b4204               mov eax, dword ptr [edx + 4]
// 00937252  57                   push edi
// 00937253  50                   push eax
// 00937254  56                   push esi
// 00937255  e826efffff           call 0x936180
// 0093725a  83c418               add esp, 0x18
// 0093725d  83780800             cmp dword ptr [eax + 8], 0
// 00937261  750d                 jne 0x937270
// 00937263  c70001000000         mov dword ptr [eax], 1
// 00937269  c7400801000000       mov dword ptr [eax + 8], 1
// 00937270  8bc7                 mov eax, edi
// 00937272  5f                   pop edi
// 00937273  5e                   pop esi
// 00937274  5b                   pop ebx
// 00937275  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_newstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
