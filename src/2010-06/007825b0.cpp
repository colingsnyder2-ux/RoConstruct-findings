// roc 2010-06 007825b0  unit: seg_00780000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007825b0
//
// 007825b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007825b4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007825b8  53                   push ebx
// 007825b9  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007825bd  56                   push esi
// 007825be  8b7334               mov esi, dword ptr [ebx + 0x34]
// 007825c1  57                   push edi
// 007825c2  50                   push eax
// 007825c3  51                   push ecx
// 007825c4  56                   push esi
// 007825c5  e816b8ffff           call 0x77dde0
// 007825ca  8b5330               mov edx, dword ptr [ebx + 0x30]
// 007825cd  8bf8                 mov edi, eax
// 007825cf  8b4204               mov eax, dword ptr [edx + 4]
// 007825d2  57                   push edi
// 007825d3  50                   push eax
// 007825d4  56                   push esi
// 007825d5  e856b6ffff           call 0x77dc30
// 007825da  83c418               add esp, 0x18
// 007825dd  83780800             cmp dword ptr [eax + 8], 0
// 007825e1  750d                 jne 0x7825f0
// 007825e3  c70001000000         mov dword ptr [eax], 1
// 007825e9  c7400801000000       mov dword ptr [eax + 8], 1
// 007825f0  8bc7                 mov eax, edi
// 007825f2  5f                   pop edi
// 007825f3  5e                   pop esi
// 007825f4  5b                   pop ebx
// 007825f5  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_newstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
