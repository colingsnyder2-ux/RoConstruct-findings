// roc 2007-03 005ca6c0  unit: seg_005c0000  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ca6c0
//
// 005ca6c0  6aff                 push -1
// 005ca6c2  68f3a77500           push 0x75a7f3
// 005ca6c7  64a100000000         mov eax, dword ptr fs:[0]
// 005ca6cd  50                   push eax
// 005ca6ce  64892500000000       mov dword ptr fs:[0], esp
// 005ca6d5  83ec0c               sub esp, 0xc
// 005ca6d8  56                   push esi
// 005ca6d9  57                   push edi
// 005ca6da  8bf9                 mov edi, ecx
// 005ca6dc  897c2408             mov dword ptr [esp + 8], edi
// 005ca6e0  8b473c               mov eax, dword ptr [edi + 0x3c]
// 005ca6e3  8b08                 mov ecx, dword ptr [eax]
// 005ca6e5  8d7738               lea esi, [edi + 0x38]
// 005ca6e8  50                   push eax
// 005ca6e9  56                   push esi
// 005ca6ea  51                   push ecx
// 005ca6eb  56                   push esi
// 005ca6ec  8d44241c             lea eax, [esp + 0x1c]
// 005ca6f0  50                   push eax
// 005ca6f1  8bce                 mov ecx, esi
// 005ca6f3  c744243001000000     mov dword ptr [esp + 0x30], 1
// 005ca6fb  e8c031feff           call 0x5ad8c0
// 005ca700  8b4604               mov eax, dword ptr [esi + 4]
// 005ca703  50                   push eax
// 005ca704  e8e7390500           call 0x61e0f0
// 005ca709  33c0                 xor eax, eax
// 005ca70b  894604               mov dword ptr [esi + 4], eax
// 005ca70e  894608               mov dword ptr [esi + 8], eax
// 005ca711  8b7728               mov esi, dword ptr [edi + 0x28]
// 005ca714  83c404               add esp, 4
// 005ca717  3bf0                 cmp esi, eax
// 005ca719  8844241c             mov byte ptr [esp + 0x1c], al
// 005ca71d  742a                 je 0x5ca749
// 005ca71f  8d4e04               lea ecx, [esi + 4]
// 005ca722  83caff               or edx, 0xffffffff
// 005ca725  f00fc111             lock xadd dword ptr [ecx], edx
// 005ca729  751e                 jne 0x5ca749
// 005ca72b  8b06                 mov eax, dword ptr [esi]
// 005ca72d  8b5004               mov edx, dword ptr [eax + 4]
// 005ca730  8bce                 mov ecx, esi
// 005ca732  ffd2                 call edx
// 005ca734  8d4608               lea eax, [esi + 8]
// 005ca737  83c9ff               or ecx, 0xffffffff
// 005ca73a  f00fc108             lock xadd dword ptr [eax], ecx
// 005ca73e  7509                 jne 0x5ca749
// 005ca740  8b16                 mov edx, dword ptr [esi]
// 005ca742  8b4208               mov eax, dword ptr [edx + 8]
// 005ca745  8bce                 mov ecx, esi
// 005ca747  ffd0                 call eax
// 005ca749  8bcf                 mov ecx, edi
// 005ca74b  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005ca753  e898e20000           call 0x5d89f0
// 005ca758  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005ca75c  5f                   pop edi
// 005ca75d  5e                   pop esi
// 005ca75e  64890d00000000       mov dword ptr fs:[0], ecx
// 005ca765  83c418               add esp, 0x18
// 005ca768  c3                   ret 
// library rbxgs/tool\ToolsArrow.cpp (function ??1BoxSelectCommand@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
