// roc 2007-03 004187f0  unit: seg_00410000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004187f0
//
// 004187f0  56                   push esi
// 004187f1  57                   push edi
// 004187f2  8bf9                 mov edi, ecx
// 004187f4  8b4704               mov eax, dword ptr [edi + 4]
// 004187f7  8b30                 mov esi, dword ptr [eax]
// 004187f9  8900                 mov dword ptr [eax], eax
// 004187fb  8b4704               mov eax, dword ptr [edi + 4]
// 004187fe  894004               mov dword ptr [eax + 4], eax
// 00418801  3b7704               cmp esi, dword ptr [edi + 4]
// 00418804  c7470800000000       mov dword ptr [edi + 8], 0
// 0041880b  741e                 je 0x41882b
// 0041880d  53                   push ebx
// 0041880e  8bff                 mov edi, edi
// 00418810  8b1e                 mov ebx, dword ptr [esi]
// 00418812  8d4e08               lea ecx, [esi + 8]
// 00418815  e846023100           call 0x728a60
// 0041881a  56                   push esi
// 0041881b  e8d0582000           call 0x61e0f0
// 00418820  83c404               add esp, 4
// 00418823  3b5f04               cmp ebx, dword ptr [edi + 4]
// 00418826  8bf3                 mov esi, ebx
// 00418828  75e6                 jne 0x418810
// 0041882a  5b                   pop ebx
// 0041882b  5f                   pop edi
// 0041882c  5e                   pop esi
// 0041882d  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ?clear@?$list@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
