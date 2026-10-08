// roc 2011-06 0069d880  unit: RBX::VObjectValue::?$EventDesc  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0069d880
//
// 0069d880  6aff                 push -1
// 0069d882  68585f9d00           push 0x9d5f58
// 0069d887  64a100000000         mov eax, dword ptr fs:[0]
// 0069d88d  50                   push eax
// 0069d88e  64892500000000       mov dword ptr fs:[0], esp
// 0069d895  51                   push ecx
// 0069d896  56                   push esi
// 0069d897  57                   push edi
// 0069d898  8bf9                 mov edi, ecx
// 0069d89a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0069d89e  83ec08               sub esp, 8
// 0069d8a1  8bc4                 mov eax, esp
// 0069d8a3  8908                 mov dword ptr [eax], ecx
// 0069d8a5  8b542428             mov edx, dword ptr [esp + 0x28]
// 0069d8a9  895004               mov dword ptr [eax + 4], edx
// 0069d8ac  8b442428             mov eax, dword ptr [esp + 0x28]
// 0069d8b0  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0069d8b8  89642410             mov dword ptr [esp + 0x10], esp
// 0069d8bc  85c0                 test eax, eax
// 0069d8be  740c                 je 0x69d8cc
// 0069d8c0  83c004               add eax, 4
// 0069d8c3  b901000000           mov ecx, 1
// 0069d8c8  f00fc108             lock xadd dword ptr [eax], ecx
// 0069d8cc  8bcf                 mov ecx, edi
// 0069d8ce  e84d7ce0ff           call 0x4a5520
// 0069d8d3  8b742420             mov esi, dword ptr [esp + 0x20]
// 0069d8d7  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0069d8df  85f6                 test esi, esi
// 0069d8e1  742a                 je 0x69d90d
// 0069d8e3  8d5604               lea edx, [esi + 4]
// 0069d8e6  83c8ff               or eax, 0xffffffff
// 0069d8e9  f00fc102             lock xadd dword ptr [edx], eax
// 0069d8ed  751e                 jne 0x69d90d
// 0069d8ef  8b16                 mov edx, dword ptr [esi]
// 0069d8f1  8b4204               mov eax, dword ptr [edx + 4]
// 0069d8f4  8bce                 mov ecx, esi
// 0069d8f6  ffd0                 call eax
// 0069d8f8  8d4e08               lea ecx, [esi + 8]
// 0069d8fb  83caff               or edx, 0xffffffff
// 0069d8fe  f00fc111             lock xadd dword ptr [ecx], edx
// 0069d902  7509                 jne 0x69d90d
// 0069d904  8b06                 mov eax, dword ptr [esi]
// 0069d906  8b5008               mov edx, dword ptr [eax + 8]
// 0069d909  8bce                 mov ecx, esi
// 0069d90b  ffd2                 call edx
// 0069d90d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069d911  8bc7                 mov eax, edi
// 0069d913  5f                   pop edi
// 0069d914  64890d00000000       mov dword ptr fs:[0], ecx
// 0069d91b  5e                   pop esi
// 0069d91c  83c410               add esp, 0x10
// 0069d91f  c20800               ret 8
// library rbxgs/v8datamodel\DebrisService.cpp (function ??0?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
