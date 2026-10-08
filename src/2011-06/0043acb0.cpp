// roc 2011-06 0043acb0  unit: AsyncResult  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043acb0
//
// 0043acb0  6aff                 push -1
// 0043acb2  6850489f00           push 0x9f4850
// 0043acb7  64a100000000         mov eax, dword ptr fs:[0]
// 0043acbd  50                   push eax
// 0043acbe  64892500000000       mov dword ptr fs:[0], esp
// 0043acc5  51                   push ecx
// 0043acc6  56                   push esi
// 0043acc7  57                   push edi
// 0043acc8  8bf9                 mov edi, ecx
// 0043acca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0043acce  83ec08               sub esp, 8
// 0043acd1  8bc4                 mov eax, esp
// 0043acd3  8908                 mov dword ptr [eax], ecx
// 0043acd5  8b542428             mov edx, dword ptr [esp + 0x28]
// 0043acd9  895004               mov dword ptr [eax + 4], edx
// 0043acdc  8b442428             mov eax, dword ptr [esp + 0x28]
// 0043ace0  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0043ace8  89642410             mov dword ptr [esp + 0x10], esp
// 0043acec  85c0                 test eax, eax
// 0043acee  740c                 je 0x43acfc
// 0043acf0  83c004               add eax, 4
// 0043acf3  b901000000           mov ecx, 1
// 0043acf8  f00fc108             lock xadd dword ptr [eax], ecx
// 0043acfc  8bcf                 mov ecx, edi
// 0043acfe  e81da80600           call 0x4a5520
// 0043ad03  8b442428             mov eax, dword ptr [esp + 0x28]
// 0043ad07  8b542424             mov edx, dword ptr [esp + 0x24]
// 0043ad0b  895708               mov dword ptr [edi + 8], edx
// 0043ad0e  89470c               mov dword ptr [edi + 0xc], eax
// 0043ad11  85c0                 test eax, eax
// 0043ad13  7410                 je 0x43ad25
// 0043ad15  83c004               add eax, 4
// 0043ad18  b901000000           mov ecx, 1
// 0043ad1d  f00fc108             lock xadd dword ptr [eax], ecx
// 0043ad21  8b442428             mov eax, dword ptr [esp + 0x28]
// 0043ad25  8b742420             mov esi, dword ptr [esp + 0x20]
// 0043ad29  c644241400           mov byte ptr [esp + 0x14], 0
// 0043ad2e  85f6                 test esi, esi
// 0043ad30  742e                 je 0x43ad60
// 0043ad32  8d5604               lea edx, [esi + 4]
// 0043ad35  83c8ff               or eax, 0xffffffff
// 0043ad38  f00fc102             lock xadd dword ptr [edx], eax
// 0043ad3c  751e                 jne 0x43ad5c
// 0043ad3e  8b16                 mov edx, dword ptr [esi]
// 0043ad40  8b4204               mov eax, dword ptr [edx + 4]
// 0043ad43  8bce                 mov ecx, esi
// 0043ad45  ffd0                 call eax
// 0043ad47  8d4e08               lea ecx, [esi + 8]
// 0043ad4a  83caff               or edx, 0xffffffff
// 0043ad4d  f00fc111             lock xadd dword ptr [ecx], edx
// 0043ad51  7509                 jne 0x43ad5c
// 0043ad53  8b06                 mov eax, dword ptr [esi]
// 0043ad55  8b5008               mov edx, dword ptr [eax + 8]
// 0043ad58  8bce                 mov ecx, esi
// 0043ad5a  ffd2                 call edx
// 0043ad5c  8b442428             mov eax, dword ptr [esp + 0x28]
// 0043ad60  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0043ad68  85c0                 test eax, eax
// 0043ad6a  742c                 je 0x43ad98
// 0043ad6c  8bf0                 mov esi, eax
// 0043ad6e  83c004               add eax, 4
// 0043ad71  83c9ff               or ecx, 0xffffffff
// 0043ad74  f00fc108             lock xadd dword ptr [eax], ecx
// 0043ad78  751e                 jne 0x43ad98
// 0043ad7a  8b16                 mov edx, dword ptr [esi]
// 0043ad7c  8b4204               mov eax, dword ptr [edx + 4]
// 0043ad7f  8bce                 mov ecx, esi
// 0043ad81  ffd0                 call eax
// 0043ad83  8d4e08               lea ecx, [esi + 8]
// 0043ad86  83caff               or edx, 0xffffffff
// 0043ad89  f00fc111             lock xadd dword ptr [ecx], edx
// 0043ad8d  7509                 jne 0x43ad98
// 0043ad8f  8b06                 mov eax, dword ptr [esi]
// 0043ad91  8b5008               mov edx, dword ptr [eax + 8]
// 0043ad94  8bce                 mov ecx, esi
// 0043ad96  ffd2                 call edx
// 0043ad98  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0043ad9c  8bc7                 mov eax, edi
// 0043ad9e  5f                   pop edi
// 0043ad9f  64890d00000000       mov dword ptr fs:[0], ecx
// 0043ada6  5e                   pop esi
// 0043ada7  83c410               add esp, 0x10
// 0043adaa  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$storage2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@12@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
