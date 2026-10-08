// roc 2007-08 005e4fb0  unit: RBX::VInstance::?$FilteredSelection  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e4fb0
//
// 005e4fb0  6aff                 push -1
// 005e4fb2  6803ad7500           push 0x75ad03
// 005e4fb7  64a100000000         mov eax, dword ptr fs:[0]
// 005e4fbd  50                   push eax
// 005e4fbe  64892500000000       mov dword ptr fs:[0], esp
// 005e4fc5  83ec0c               sub esp, 0xc
// 005e4fc8  56                   push esi
// 005e4fc9  57                   push edi
// 005e4fca  8bf9                 mov edi, ecx
// 005e4fcc  897c2408             mov dword ptr [esp + 8], edi
// 005e4fd0  8b473c               mov eax, dword ptr [edi + 0x3c]
// 005e4fd3  8b08                 mov ecx, dword ptr [eax]
// 005e4fd5  8d7738               lea esi, [edi + 0x38]
// 005e4fd8  50                   push eax
// 005e4fd9  56                   push esi
// 005e4fda  51                   push ecx
// 005e4fdb  56                   push esi
// 005e4fdc  8d44241c             lea eax, [esp + 0x1c]
// 005e4fe0  50                   push eax
// 005e4fe1  8bce                 mov ecx, esi
// 005e4fe3  c744243001000000     mov dword ptr [esp + 0x30], 1
// 005e4feb  e870eafcff           call 0x5b3a60
// 005e4ff0  8b4604               mov eax, dword ptr [esi + 4]
// 005e4ff3  50                   push eax
// 005e4ff4  e869ac0400           call 0x62fc62
// 005e4ff9  33c0                 xor eax, eax
// 005e4ffb  894604               mov dword ptr [esi + 4], eax
// 005e4ffe  894608               mov dword ptr [esi + 8], eax
// 005e5001  8b7728               mov esi, dword ptr [edi + 0x28]
// 005e5004  83c404               add esp, 4
// 005e5007  3bf0                 cmp esi, eax
// 005e5009  8844241c             mov byte ptr [esp + 0x1c], al
// 005e500d  742a                 je 0x5e5039
// 005e500f  8d4e04               lea ecx, [esi + 4]
// 005e5012  83caff               or edx, 0xffffffff
// 005e5015  f00fc111             lock xadd dword ptr [ecx], edx
// 005e5019  751e                 jne 0x5e5039
// 005e501b  8b06                 mov eax, dword ptr [esi]
// 005e501d  8b5004               mov edx, dword ptr [eax + 4]
// 005e5020  8bce                 mov ecx, esi
// 005e5022  ffd2                 call edx
// 005e5024  8d4608               lea eax, [esi + 8]
// 005e5027  83c9ff               or ecx, 0xffffffff
// 005e502a  f00fc108             lock xadd dword ptr [eax], ecx
// 005e502e  7509                 jne 0x5e5039
// 005e5030  8b16                 mov edx, dword ptr [esi]
// 005e5032  8b4208               mov eax, dword ptr [edx + 8]
// 005e5035  8bce                 mov ecx, esi
// 005e5037  ffd0                 call eax
// 005e5039  8bcf                 mov ecx, edi
// 005e503b  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005e5043  e808edffff           call 0x5e3d50
// 005e5048  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e504c  5f                   pop edi
// 005e504d  5e                   pop esi
// 005e504e  64890d00000000       mov dword ptr fs:[0], ecx
// 005e5055  83c418               add esp, 0x18
// 005e5058  c3                   ret 
// library rbxgs/tool\ToolsArrow.cpp (function ??1BoxSelectCommand@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
