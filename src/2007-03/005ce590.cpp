// roc 2007-03 005ce590  unit: seg_005c0000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ce590
//
// 005ce590  6aff                 push -1
// 005ce592  68e8397500           push 0x7539e8
// 005ce597  64a100000000         mov eax, dword ptr fs:[0]
// 005ce59d  50                   push eax
// 005ce59e  64892500000000       mov dword ptr fs:[0], esp
// 005ce5a5  83ec08               sub esp, 8
// 005ce5a8  8b442418             mov eax, dword ptr [esp + 0x18]
// 005ce5ac  56                   push esi
// 005ce5ad  8bf1                 mov esi, ecx
// 005ce5af  50                   push eax
// 005ce5b0  8d4c2408             lea ecx, [esp + 8]
// 005ce5b4  51                   push ecx
// 005ce5b5  e8f6e8fbff           call 0x58ceb0
// 005ce5ba  83c408               add esp, 8
// 005ce5bd  8b10                 mov edx, dword ptr [eax]
// 005ce5bf  83c004               add eax, 4
// 005ce5c2  50                   push eax
// 005ce5c3  8d8e0c010000         lea ecx, [esi + 0x10c]
// 005ce5c9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005ce5d1  899608010000         mov dword ptr [esi + 0x108], edx
// 005ce5d7  e894f9e3ff           call 0x40df70
// 005ce5dc  8b742408             mov esi, dword ptr [esp + 8]
// 005ce5e0  85f6                 test esi, esi
// 005ce5e2  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005ce5ea  742a                 je 0x5ce616
// 005ce5ec  8d4604               lea eax, [esi + 4]
// 005ce5ef  83c9ff               or ecx, 0xffffffff
// 005ce5f2  f00fc108             lock xadd dword ptr [eax], ecx
// 005ce5f6  751e                 jne 0x5ce616
// 005ce5f8  8b16                 mov edx, dword ptr [esi]
// 005ce5fa  8b4204               mov eax, dword ptr [edx + 4]
// 005ce5fd  8bce                 mov ecx, esi
// 005ce5ff  ffd0                 call eax
// 005ce601  8d4e08               lea ecx, [esi + 8]
// 005ce604  83caff               or edx, 0xffffffff
// 005ce607  f00fc111             lock xadd dword ptr [ecx], edx
// 005ce60b  7509                 jne 0x5ce616
// 005ce60d  8b06                 mov eax, dword ptr [esi]
// 005ce60f  8b5008               mov edx, dword ptr [eax + 8]
// 005ce612  8bce                 mov ecx, esi
// 005ce614  ffd2                 call edx
// 005ce616  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ce61a  5e                   pop esi
// 005ce61b  64890d00000000       mov dword ptr fs:[0], ecx
// 005ce622  83c414               add esp, 0x14
// 005ce625  c20400               ret 4
// library rbxgs/v8datamodel\LocakBackpack.cpp (function ?setItem@LocalBackpackItem@RBX@@QAEXPAVBackpackItem@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/LocakBackpack.cpp
