// roc 2007-08 00598900  unit: RBX::VControllerService::?$FactoryProduct  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00598900
//
// 00598900  6aff                 push -1
// 00598902  6843777500           push 0x757743
// 00598907  64a100000000         mov eax, dword ptr fs:[0]
// 0059890d  50                   push eax
// 0059890e  64892500000000       mov dword ptr fs:[0], esp
// 00598915  83ec0c               sub esp, 0xc
// 00598918  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059891c  53                   push ebx
// 0059891d  56                   push esi
// 0059891e  57                   push edi
// 0059891f  8bf1                 mov esi, ecx
// 00598921  50                   push eax
// 00598922  89742410             mov dword ptr [esp + 0x10], esi
// 00598926  e8d5feffff           call 0x598800
// 0059892b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0059892f  51                   push ecx
// 00598930  8d542414             lea edx, [esp + 0x14]
// 00598934  33db                 xor ebx, ebx
// 00598936  52                   push edx
// 00598937  895c2428             mov dword ptr [esp + 0x28], ebx
// 0059893b  c70648137b00         mov dword ptr [esi], 0x7b1348
// 00598941  c7460c3c137b00       mov dword ptr [esi + 0xc], 0x7b133c
// 00598948  e893c00400           call 0x5e49e0
// 0059894d  8b08                 mov ecx, dword ptr [eax]
// 0059894f  894e20               mov dword ptr [esi + 0x20], ecx
// 00598952  8b4004               mov eax, dword ptr [eax + 4]
// 00598955  83c408               add esp, 8
// 00598958  3bc3                 cmp eax, ebx
// 0059895a  894624               mov dword ptr [esi + 0x24], eax
// 0059895d  740c                 je 0x59896b
// 0059895f  83c008               add eax, 8
// 00598962  ba01000000           mov edx, 1
// 00598967  f00fc110             lock xadd dword ptr [eax], edx
// 0059896b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0059896f  3bfb                 cmp edi, ebx
// 00598971  c644242001           mov byte ptr [esp + 0x20], 1
// 00598976  742a                 je 0x5989a2
// 00598978  8d4704               lea eax, [edi + 4]
// 0059897b  83c9ff               or ecx, 0xffffffff
// 0059897e  f00fc108             lock xadd dword ptr [eax], ecx
// 00598982  751e                 jne 0x5989a2
// 00598984  8b17                 mov edx, dword ptr [edi]
// 00598986  8b4204               mov eax, dword ptr [edx + 4]
// 00598989  8bcf                 mov ecx, edi
// 0059898b  ffd0                 call eax
// 0059898d  8d4f08               lea ecx, [edi + 8]
// 00598990  83caff               or edx, 0xffffffff
// 00598993  f00fc111             lock xadd dword ptr [ecx], edx
// 00598997  7509                 jne 0x5989a2
// 00598999  8b07                 mov eax, dword ptr [edi]
// 0059899b  8b5008               mov edx, dword ptr [eax + 8]
// 0059899e  8bcf                 mov ecx, edi
// 005989a0  ffd2                 call edx
// 005989a2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005989a6  895e28               mov dword ptr [esi + 0x28], ebx
// 005989a9  5f                   pop edi
// 005989aa  8bc6                 mov eax, esi
// 005989ac  5e                   pop esi
// 005989ad  5b                   pop ebx
// 005989ae  64890d00000000       mov dword ptr fs:[0], ecx
// 005989b5  83c418               add esp, 0x18
// 005989b8  c20800               ret 8
// library rbxgs/v8datamodel\UserController.cpp (function ??0PlayerController@RBX@@QAE@PAVControllerService@1@PBVPVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
