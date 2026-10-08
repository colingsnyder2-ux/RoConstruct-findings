// roc 2012-06 0097a020  unit: RBX::Limits::VCounter::V?$shared_ptr::?$thread_specific_ptr::delete_data  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0097a020
//
// 0097a020  6aff                 push -1
// 0097a022  680869ab00           push 0xab6908
// 0097a027  64a100000000         mov eax, dword ptr fs:[0]
// 0097a02d  50                   push eax
// 0097a02e  64892500000000       mov dword ptr fs:[0], esp
// 0097a035  51                   push ecx
// 0097a036  56                   push esi
// 0097a037  57                   push edi
// 0097a038  8bf9                 mov edi, ecx
// 0097a03a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0097a03e  83ec08               sub esp, 8
// 0097a041  8bc4                 mov eax, esp
// 0097a043  8908                 mov dword ptr [eax], ecx
// 0097a045  8b542428             mov edx, dword ptr [esp + 0x28]
// 0097a049  895004               mov dword ptr [eax + 4], edx
// 0097a04c  8b442428             mov eax, dword ptr [esp + 0x28]
// 0097a050  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0097a058  89642410             mov dword ptr [esp + 0x10], esp
// 0097a05c  85c0                 test eax, eax
// 0097a05e  740c                 je 0x97a06c
// 0097a060  83c004               add eax, 4
// 0097a063  b901000000           mov ecx, 1
// 0097a068  f00fc108             lock xadd dword ptr [eax], ecx
// 0097a06c  8bcf                 mov ecx, edi
// 0097a06e  e8fd8ac1ff           call 0x592b70
// 0097a073  8b742420             mov esi, dword ptr [esp + 0x20]
// 0097a077  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0097a07f  85f6                 test esi, esi
// 0097a081  742a                 je 0x97a0ad
// 0097a083  8d5604               lea edx, [esi + 4]
// 0097a086  83c8ff               or eax, 0xffffffff
// 0097a089  f00fc102             lock xadd dword ptr [edx], eax
// 0097a08d  751e                 jne 0x97a0ad
// 0097a08f  8b16                 mov edx, dword ptr [esi]
// 0097a091  8b4204               mov eax, dword ptr [edx + 4]
// 0097a094  8bce                 mov ecx, esi
// 0097a096  ffd0                 call eax
// 0097a098  8d4e08               lea ecx, [esi + 8]
// 0097a09b  83caff               or edx, 0xffffffff
// 0097a09e  f00fc111             lock xadd dword ptr [ecx], edx
// 0097a0a2  7509                 jne 0x97a0ad
// 0097a0a4  8b06                 mov eax, dword ptr [esi]
// 0097a0a6  8b5008               mov edx, dword ptr [eax + 8]
// 0097a0a9  8bce                 mov ecx, esi
// 0097a0ab  ffd2                 call edx
// 0097a0ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0097a0b1  8bc7                 mov eax, edi
// 0097a0b3  5f                   pop edi
// 0097a0b4  64890d00000000       mov dword ptr fs:[0], ecx
// 0097a0bb  5e                   pop esi
// 0097a0bc  83c410               add esp, 0x10
// 0097a0bf  c20800               ret 8
// library rbxgs/v8datamodel\DebrisService.cpp (function ??0?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
