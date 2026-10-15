// roc 2008-06 0062b440  unit: RBX::Explosion  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062b440
//
// 0062b440  64a100000000         mov eax, dword ptr fs:[0]
// 0062b446  6aff                 push -1
// 0062b448  6818047c00           push 0x7c0418
// 0062b44d  50                   push eax
// 0062b44e  64892500000000       mov dword ptr fs:[0], esp
// 0062b455  56                   push esi
// 0062b456  8b442414             mov eax, dword ptr [esp + 0x14]
// 0062b45a  50                   push eax
// 0062b45b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062b463  e8b801f4ff           call 0x56b620
// 0062b468  85c0                 test eax, eax
// 0062b46a  743f                 je 0x62b4ab
// 0062b46c  8b542418             mov edx, dword ptr [esp + 0x18]
// 0062b470  d9442420             fld dword ptr [esp + 0x20]
// 0062b474  83ec0c               sub esp, 0xc
// 0062b477  8bcc                 mov ecx, esp
// 0062b479  d95c2408             fstp dword ptr [esp + 8]
// 0062b47d  8911                 mov dword ptr [ecx], edx
// 0062b47f  8b542428             mov edx, dword ptr [esp + 0x28]
// 0062b483  895104               mov dword ptr [ecx + 4], edx
// 0062b486  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0062b48a  89642420             mov dword ptr [esp + 0x20], esp
// 0062b48e  85c9                 test ecx, ecx
// 0062b490  740c                 je 0x62b49e
// 0062b492  83c104               add ecx, 4
// 0062b495  ba01000000           mov edx, 1
// 0062b49a  f00fc111             lock xadd dword ptr [ecx], edx
// 0062b49e  8d4c2420             lea ecx, [esp + 0x20]
// 0062b4a2  51                   push ecx
// 0062b4a3  8d4810               lea ecx, [eax + 0x10]
// 0062b4a6  e815fdffff           call 0x62b1c0
// 0062b4ab  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0062b4af  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0062b4b7  85f6                 test esi, esi
// 0062b4b9  742a                 je 0x62b4e5
// 0062b4bb  8d5604               lea edx, [esi + 4]
// 0062b4be  83c8ff               or eax, 0xffffffff
// 0062b4c1  f00fc102             lock xadd dword ptr [edx], eax
// 0062b4c5  751e                 jne 0x62b4e5
// 0062b4c7  8b16                 mov edx, dword ptr [esi]
// 0062b4c9  8b4204               mov eax, dword ptr [edx + 4]
// 0062b4cc  8bce                 mov ecx, esi
// 0062b4ce  ffd0                 call eax
// 0062b4d0  8d4e08               lea ecx, [esi + 8]
// 0062b4d3  83caff               or edx, 0xffffffff
// 0062b4d6  f00fc111             lock xadd dword ptr [ecx], edx
// 0062b4da  7509                 jne 0x62b4e5
// 0062b4dc  8b06                 mov eax, dword ptr [esi]
// 0062b4de  8b5008               mov edx, dword ptr [eax + 8]
// 0062b4e1  8bce                 mov ecx, esi
// 0062b4e3  ffd2                 call edx
// 0062b4e5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062b4e9  64890d00000000       mov dword ptr fs:[0], ecx
// 0062b4f0  5e                   pop esi
// 0062b4f1  83c40c               add esp, 0xc
// 0062b4f4  c21000               ret 0x10
// library rbxgs/roc_unit_5c2d9ebf33ac82fd.cpp (function ?fire@?$SignalDescImpl@$01$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@M@Z@Reflection@RBX@@QAEXPAVSignalSource@23@V?$shared_ptr@VInstance@RBX@@@boost@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_5c2d9ebf33ac82fd.cpp
