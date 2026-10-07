// roc 2007-08 006175e0  unit: seg_00610000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006175e0
//
// 006175e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006175e4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006175e8  53                   push ebx
// 006175e9  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006175ed  56                   push esi
// 006175ee  8b7334               mov esi, dword ptr [ebx + 0x34]
// 006175f1  57                   push edi
// 006175f2  50                   push eax
// 006175f3  51                   push ecx
// 006175f4  56                   push esi
// 006175f5  e876b7ffff           call 0x612d70
// 006175fa  8b5330               mov edx, dword ptr [ebx + 0x30]
// 006175fd  8bf8                 mov edi, eax
// 006175ff  8b4204               mov eax, dword ptr [edx + 4]
// 00617602  57                   push edi
// 00617603  50                   push eax
// 00617604  56                   push esi
// 00617605  e8b6b5ffff           call 0x612bc0
// 0061760a  83c418               add esp, 0x18
// 0061760d  83780800             cmp dword ptr [eax + 8], 0
// 00617611  750d                 jne 0x617620
// 00617613  c70001000000         mov dword ptr [eax], 1
// 00617619  c7400801000000       mov dword ptr [eax + 8], 1
// 00617620  8bc7                 mov eax, edi
// 00617622  5f                   pop edi
// 00617623  5e                   pop esi
// 00617624  5b                   pop ebx
// 00617625  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_newstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
