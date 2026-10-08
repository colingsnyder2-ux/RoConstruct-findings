// roc 2010-06 005cde50  unit: RBX::DataModel::PAVGenericJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005cde50
//
// 005cde50  6aff                 push -1
// 005cde52  68a8859a00           push 0x9a85a8
// 005cde57  64a100000000         mov eax, dword ptr fs:[0]
// 005cde5d  50                   push eax
// 005cde5e  64892500000000       mov dword ptr fs:[0], esp
// 005cde65  51                   push ecx
// 005cde66  56                   push esi
// 005cde67  57                   push edi
// 005cde68  8bf9                 mov edi, ecx
// 005cde6a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005cde6e  83ec08               sub esp, 8
// 005cde71  8bc4                 mov eax, esp
// 005cde73  8908                 mov dword ptr [eax], ecx
// 005cde75  8b542428             mov edx, dword ptr [esp + 0x28]
// 005cde79  895004               mov dword ptr [eax + 4], edx
// 005cde7c  8b442428             mov eax, dword ptr [esp + 0x28]
// 005cde80  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005cde88  89642410             mov dword ptr [esp + 0x10], esp
// 005cde8c  85c0                 test eax, eax
// 005cde8e  740c                 je 0x5cde9c
// 005cde90  83c004               add eax, 4
// 005cde93  b901000000           mov ecx, 1
// 005cde98  f00fc108             lock xadd dword ptr [eax], ecx
// 005cde9c  8bcf                 mov ecx, edi
// 005cde9e  e89d571500           call 0x723640
// 005cdea3  8b742420             mov esi, dword ptr [esp + 0x20]
// 005cdea7  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005cdeaf  85f6                 test esi, esi
// 005cdeb1  742a                 je 0x5cdedd
// 005cdeb3  8d5604               lea edx, [esi + 4]
// 005cdeb6  83c8ff               or eax, 0xffffffff
// 005cdeb9  f00fc102             lock xadd dword ptr [edx], eax
// 005cdebd  751e                 jne 0x5cdedd
// 005cdebf  8b16                 mov edx, dword ptr [esi]
// 005cdec1  8b4204               mov eax, dword ptr [edx + 4]
// 005cdec4  8bce                 mov ecx, esi
// 005cdec6  ffd0                 call eax
// 005cdec8  8d4e08               lea ecx, [esi + 8]
// 005cdecb  83caff               or edx, 0xffffffff
// 005cdece  f00fc111             lock xadd dword ptr [ecx], edx
// 005cded2  7509                 jne 0x5cdedd
// 005cded4  8b06                 mov eax, dword ptr [esi]
// 005cded6  8b5008               mov edx, dword ptr [eax + 8]
// 005cded9  8bce                 mov ecx, esi
// 005cdedb  ffd2                 call edx
// 005cdedd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005cdee1  8bc7                 mov eax, edi
// 005cdee3  5f                   pop edi
// 005cdee4  64890d00000000       mov dword ptr fs:[0], ecx
// 005cdeeb  5e                   pop esi
// 005cdeec  83c410               add esp, 0x10
// 005cdeef  c20800               ret 8
// library rbxgs/v8datamodel\DebrisService.cpp (function ??0?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
