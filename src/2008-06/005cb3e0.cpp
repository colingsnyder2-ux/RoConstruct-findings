// roc 2008-06 005cb3e0  unit: RBX::AIController  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cb3e0
//
// 005cb3e0  6aff                 push -1
// 005cb3e2  6833537d00           push 0x7d5333
// 005cb3e7  64a100000000         mov eax, dword ptr fs:[0]
// 005cb3ed  50                   push eax
// 005cb3ee  64892500000000       mov dword ptr fs:[0], esp
// 005cb3f5  83ec0c               sub esp, 0xc
// 005cb3f8  8b442420             mov eax, dword ptr [esp + 0x20]
// 005cb3fc  53                   push ebx
// 005cb3fd  56                   push esi
// 005cb3fe  57                   push edi
// 005cb3ff  8bf1                 mov esi, ecx
// 005cb401  50                   push eax
// 005cb402  89742410             mov dword ptr [esp + 0x10], esi
// 005cb406  e8e5feffff           call 0x5cb2f0
// 005cb40b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cb40f  51                   push ecx
// 005cb410  8d542414             lea edx, [esp + 0x14]
// 005cb414  33db                 xor ebx, ebx
// 005cb416  52                   push edx
// 005cb417  895c2428             mov dword ptr [esp + 0x28], ebx
// 005cb41b  c70614a18300         mov dword ptr [esi], 0x83a114
// 005cb421  c7460c08a18300       mov dword ptr [esi + 0xc], 0x83a108
// 005cb428  e813d60400           call 0x618a40
// 005cb42d  8b08                 mov ecx, dword ptr [eax]
// 005cb42f  894e20               mov dword ptr [esi + 0x20], ecx
// 005cb432  8b4004               mov eax, dword ptr [eax + 4]
// 005cb435  83c408               add esp, 8
// 005cb438  894624               mov dword ptr [esi + 0x24], eax
// 005cb43b  3bc3                 cmp eax, ebx
// 005cb43d  740c                 je 0x5cb44b
// 005cb43f  83c008               add eax, 8
// 005cb442  ba01000000           mov edx, 1
// 005cb447  f00fc110             lock xadd dword ptr [eax], edx
// 005cb44b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005cb44f  c644242001           mov byte ptr [esp + 0x20], 1
// 005cb454  3bfb                 cmp edi, ebx
// 005cb456  742a                 je 0x5cb482
// 005cb458  8d4704               lea eax, [edi + 4]
// 005cb45b  83c9ff               or ecx, 0xffffffff
// 005cb45e  f00fc108             lock xadd dword ptr [eax], ecx
// 005cb462  751e                 jne 0x5cb482
// 005cb464  8b17                 mov edx, dword ptr [edi]
// 005cb466  8b4204               mov eax, dword ptr [edx + 4]
// 005cb469  8bcf                 mov ecx, edi
// 005cb46b  ffd0                 call eax
// 005cb46d  8d4f08               lea ecx, [edi + 8]
// 005cb470  83caff               or edx, 0xffffffff
// 005cb473  f00fc111             lock xadd dword ptr [ecx], edx
// 005cb477  7509                 jne 0x5cb482
// 005cb479  8b07                 mov eax, dword ptr [edi]
// 005cb47b  8b5008               mov edx, dword ptr [eax + 8]
// 005cb47e  8bcf                 mov ecx, edi
// 005cb480  ffd2                 call edx
// 005cb482  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005cb486  895e28               mov dword ptr [esi + 0x28], ebx
// 005cb489  5f                   pop edi
// 005cb48a  8bc6                 mov eax, esi
// 005cb48c  5e                   pop esi
// 005cb48d  5b                   pop ebx
// 005cb48e  64890d00000000       mov dword ptr fs:[0], ecx
// 005cb495  83c418               add esp, 0x18
// 005cb498  c20800               ret 8
// library rbxgs/v8datamodel\UserController.cpp (function ??0PlayerController@RBX@@QAE@PAVControllerService@1@PBVPVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
