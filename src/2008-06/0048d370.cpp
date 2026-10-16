// roc 2008-06 0048d370  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048d370
//
// 0048d370  6aff                 push -1
// 0048d372  68c1627c00           push 0x7c62c1
// 0048d377  64a100000000         mov eax, dword ptr fs:[0]
// 0048d37d  50                   push eax
// 0048d37e  64892500000000       mov dword ptr fs:[0], esp
// 0048d385  51                   push ecx
// 0048d386  56                   push esi
// 0048d387  57                   push edi
// 0048d388  c744240800000000     mov dword ptr [esp + 8], 0
// 0048d390  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0048d394  8b742424             mov esi, dword ptr [esp + 0x24]
// 0048d398  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0048d3a0  8bf8                 mov edi, eax
// 0048d3a2  3bf0                 cmp esi, eax
// 0048d3a4  7414                 je 0x48d3ba
// 0048d3a6  8d442434             lea eax, [esp + 0x34]
// 0048d3aa  56                   push esi
// 0048d3ab  50                   push eax
// 0048d3ac  ff542438             call dword ptr [esp + 0x38]
// 0048d3b0  83c608               add esi, 8
// 0048d3b3  83c408               add esp, 8
// 0048d3b6  3bf7                 cmp esi, edi
// 0048d3b8  75ec                 jne 0x48d3a6
// 0048d3ba  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0048d3be  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0048d3c2  8b442438             mov eax, dword ptr [esp + 0x38]
// 0048d3c6  8b542434             mov edx, dword ptr [esp + 0x34]
// 0048d3ca  890f                 mov dword ptr [edi], ecx
// 0048d3cc  895704               mov dword ptr [edi + 4], edx
// 0048d3cf  894708               mov dword ptr [edi + 8], eax
// 0048d3d2  85c0                 test eax, eax
// 0048d3d4  7410                 je 0x48d3e6
// 0048d3d6  83c004               add eax, 4
// 0048d3d9  b901000000           mov ecx, 1
// 0048d3de  f00fc108             lock xadd dword ptr [eax], ecx
// 0048d3e2  8b442438             mov eax, dword ptr [esp + 0x38]
// 0048d3e6  c744240801000000     mov dword ptr [esp + 8], 1
// 0048d3ee  c644241400           mov byte ptr [esp + 0x14], 0
// 0048d3f3  85c0                 test eax, eax
// 0048d3f5  742c                 je 0x48d423
// 0048d3f7  8bf0                 mov esi, eax
// 0048d3f9  83c004               add eax, 4
// 0048d3fc  83caff               or edx, 0xffffffff
// 0048d3ff  f00fc110             lock xadd dword ptr [eax], edx
// 0048d403  751e                 jne 0x48d423
// 0048d405  8b06                 mov eax, dword ptr [esi]
// 0048d407  8b5004               mov edx, dword ptr [eax + 4]
// 0048d40a  8bce                 mov ecx, esi
// 0048d40c  ffd2                 call edx
// 0048d40e  8d4608               lea eax, [esi + 8]
// 0048d411  83c9ff               or ecx, 0xffffffff
// 0048d414  f00fc108             lock xadd dword ptr [eax], ecx
// 0048d418  7509                 jne 0x48d423
// 0048d41a  8b16                 mov edx, dword ptr [esi]
// 0048d41c  8b4208               mov eax, dword ptr [edx + 8]
// 0048d41f  8bce                 mov ecx, esi
// 0048d421  ffd0                 call eax
// 0048d423  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048d427  8bc7                 mov eax, edi
// 0048d429  5f                   pop edi
// 0048d42a  5e                   pop esi
// 0048d42b  64890d00000000       mov dword ptr fs:[0], ecx
// 0048d432  83c410               add esp, 0x10
// 0048d435  c3                   ret 
// library rbxgs-net/roc_player_loadcharacter_genuine_c6a41e4db096fd36.cpp (function ??$for_each@V?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@V?$bind_t@XP6AXABV?$shared_ptr@VModelInstance@RBX@@@boost@@ABV?$shared_ptr@VInstance@RBX@@@2@@ZV?$list2@V?$value@V?$shared_ptr@VModelInstance@RBX@@@boost@@@_bi@boost@@V?$arg@$00@3@@_bi@2@@_bi@boost@@@std@@YA?AV?$bind_t@XP6AXABV?$shared_ptr@VModelInstance@RBX@@@boost@@ABV?$shared_ptr@VInstance@RBX@@@2@@ZV?$list2@V?$value@V?$shared_ptr@VModelInstance@RBX@@@boost@@@_bi@boost@@V?$arg@$00@3@@_bi@2@@_bi@boost@@V?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@0@0V123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net roc_player_loadcharacter_genuine_c6a41e4db096fd36.cpp
