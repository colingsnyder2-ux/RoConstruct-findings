// roc 2007-03 0048d5f0  unit: seg_00480000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048d5f0
//
// 0048d5f0  56                   push esi
// 0048d5f1  57                   push edi
// 0048d5f2  8bf9                 mov edi, ecx
// 0048d5f4  8b4704               mov eax, dword ptr [edi + 4]
// 0048d5f7  8b30                 mov esi, dword ptr [eax]
// 0048d5f9  8900                 mov dword ptr [eax], eax
// 0048d5fb  8b4704               mov eax, dword ptr [edi + 4]
// 0048d5fe  894004               mov dword ptr [eax + 4], eax
// 0048d601  3b7704               cmp esi, dword ptr [edi + 4]
// 0048d604  c7470800000000       mov dword ptr [edi + 8], 0
// 0048d60b  741e                 je 0x48d62b
// 0048d60d  53                   push ebx
// 0048d60e  8bff                 mov edi, edi
// 0048d610  8b1e                 mov ebx, dword ptr [esi]
// 0048d612  8d4e08               lea ecx, [esi + 8]
// 0048d615  e8a6e3ffff           call 0x48b9c0
// 0048d61a  56                   push esi
// 0048d61b  e8d00a1900           call 0x61e0f0
// 0048d620  83c404               add esp, 4
// 0048d623  3b5f04               cmp ebx, dword ptr [edi + 4]
// 0048d626  8bf3                 mov esi, ebx
// 0048d628  75e6                 jne 0x48d610
// 0048d62a  5b                   pop ebx
// 0048d62b  5f                   pop edi
// 0048d62c  5e                   pop esi
// 0048d62d  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ?clear@?$list@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
