// roc 2009-06 006f1310  unit: seg_006f0000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f1310
//
// 006f1310  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f1314  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f1318  53                   push ebx
// 006f1319  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006f131d  56                   push esi
// 006f131e  8b7334               mov esi, dword ptr [ebx + 0x34]
// 006f1321  57                   push edi
// 006f1322  50                   push eax
// 006f1323  51                   push ecx
// 006f1324  56                   push esi
// 006f1325  e816b8ffff           call 0x6ecb40
// 006f132a  8b5330               mov edx, dword ptr [ebx + 0x30]
// 006f132d  8bf8                 mov edi, eax
// 006f132f  8b4204               mov eax, dword ptr [edx + 4]
// 006f1332  57                   push edi
// 006f1333  50                   push eax
// 006f1334  56                   push esi
// 006f1335  e856b6ffff           call 0x6ec990
// 006f133a  83c418               add esp, 0x18
// 006f133d  83780800             cmp dword ptr [eax + 8], 0
// 006f1341  750d                 jne 0x6f1350
// 006f1343  c70001000000         mov dword ptr [eax], 1
// 006f1349  c7400801000000       mov dword ptr [eax + 8], 1
// 006f1350  8bc7                 mov eax, edi
// 006f1352  5f                   pop edi
// 006f1353  5e                   pop esi
// 006f1354  5b                   pop ebx
// 006f1355  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_newstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
