// roc 2008-06 0049d200  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049d200
//
// 0049d200  64a100000000         mov eax, dword ptr fs:[0]
// 0049d206  6aff                 push -1
// 0049d208  6818047c00           push 0x7c0418
// 0049d20d  50                   push eax
// 0049d20e  64892500000000       mov dword ptr fs:[0], esp
// 0049d215  56                   push esi
// 0049d216  8b442414             mov eax, dword ptr [esp + 0x14]
// 0049d21a  50                   push eax
// 0049d21b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049d223  e8f8e30c00           call 0x56b620
// 0049d228  85c0                 test eax, eax
// 0049d22a  7437                 je 0x49d263
// 0049d22c  8b542418             mov edx, dword ptr [esp + 0x18]
// 0049d230  83ec08               sub esp, 8
// 0049d233  8bcc                 mov ecx, esp
// 0049d235  8911                 mov dword ptr [ecx], edx
// 0049d237  8b542424             mov edx, dword ptr [esp + 0x24]
// 0049d23b  895104               mov dword ptr [ecx + 4], edx
// 0049d23e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0049d242  8964241c             mov dword ptr [esp + 0x1c], esp
// 0049d246  85c9                 test ecx, ecx
// 0049d248  740c                 je 0x49d256
// 0049d24a  83c104               add ecx, 4
// 0049d24d  ba01000000           mov edx, 1
// 0049d252  f00fc111             lock xadd dword ptr [ecx], edx
// 0049d256  8d4c241c             lea ecx, [esp + 0x1c]
// 0049d25a  51                   push ecx
// 0049d25b  8d4810               lea ecx, [eax + 0x10]
// 0049d25e  e89dfaffff           call 0x49cd00
// 0049d263  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0049d267  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0049d26f  85f6                 test esi, esi
// 0049d271  742a                 je 0x49d29d
// 0049d273  8d5604               lea edx, [esi + 4]
// 0049d276  83c8ff               or eax, 0xffffffff
// 0049d279  f00fc102             lock xadd dword ptr [edx], eax
// 0049d27d  751e                 jne 0x49d29d
// 0049d27f  8b16                 mov edx, dword ptr [esi]
// 0049d281  8b4204               mov eax, dword ptr [edx + 4]
// 0049d284  8bce                 mov ecx, esi
// 0049d286  ffd0                 call eax
// 0049d288  8d4e08               lea ecx, [esi + 8]
// 0049d28b  83caff               or edx, 0xffffffff
// 0049d28e  f00fc111             lock xadd dword ptr [ecx], edx
// 0049d292  7509                 jne 0x49d29d
// 0049d294  8b06                 mov eax, dword ptr [esi]
// 0049d296  8b5008               mov edx, dword ptr [eax + 8]
// 0049d299  8bce                 mov ecx, esi
// 0049d29b  ffd2                 call edx
// 0049d29d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049d2a1  64890d00000000       mov dword ptr fs:[0], ecx
// 0049d2a8  5e                   pop esi
// 0049d2a9  83c40c               add esp, 0xc
// 0049d2ac  c20c00               ret 0xc
// library rbxgs/v8tree\Instance.cpp (function ?fire@?$SignalDescImpl@$00$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@Reflection@RBX@@QAEXPAVSignalSource@23@V?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
