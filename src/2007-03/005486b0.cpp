// roc 2007-03 005486b0  unit: seg_00540000  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005486b0
//
// 005486b0  6aff                 push -1
// 005486b2  68cb2c7500           push 0x752ccb
// 005486b7  64a100000000         mov eax, dword ptr fs:[0]
// 005486bd  50                   push eax
// 005486be  64892500000000       mov dword ptr fs:[0], esp
// 005486c5  83ec0c               sub esp, 0xc
// 005486c8  53                   push ebx
// 005486c9  56                   push esi
// 005486ca  8bf1                 mov esi, ecx
// 005486cc  57                   push edi
// 005486cd  8974240c             mov dword ptr [esp + 0xc], esi
// 005486d1  8b3e                 mov edi, dword ptr [esi]
// 005486d3  bb01000000           mov ebx, 1
// 005486d8  8bcf                 mov ecx, edi
// 005486da  895c2420             mov dword ptr [esp + 0x20], ebx
// 005486de  897c2410             mov dword ptr [esp + 0x10], edi
// 005486e2  e899e31d00           call 0x726a80
// 005486e7  885c2414             mov byte ptr [esp + 0x14], bl
// 005486eb  8b06                 mov eax, dword ptr [esi]
// 005486ed  885820               mov byte ptr [eax + 0x20], bl
// 005486f0  8b06                 mov eax, dword ptr [esi]
// 005486f2  8d4808               lea ecx, [eax + 8]
// 005486f5  c644242002           mov byte ptr [esp + 0x20], 2
// 005486fa  e811eb1d00           call 0x727210
// 005486ff  8bcf                 mov ecx, edi
// 00548701  885c2420             mov byte ptr [esp + 0x20], bl
// 00548705  e896e31d00           call 0x726aa0
// 0054870a  8d4e08               lea ecx, [esi + 8]
// 0054870d  c644242000           mov byte ptr [esp + 0x20], 0
// 00548712  e849e51d00           call 0x726c60
// 00548717  8b7604               mov esi, dword ptr [esi + 4]
// 0054871a  85f6                 test esi, esi
// 0054871c  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00548724  742a                 je 0x548750
// 00548726  8d4604               lea eax, [esi + 4]
// 00548729  83c9ff               or ecx, 0xffffffff
// 0054872c  f00fc108             lock xadd dword ptr [eax], ecx
// 00548730  751e                 jne 0x548750
// 00548732  8b16                 mov edx, dword ptr [esi]
// 00548734  8b4204               mov eax, dword ptr [edx + 4]
// 00548737  8bce                 mov ecx, esi
// 00548739  ffd0                 call eax
// 0054873b  8d4e08               lea ecx, [esi + 8]
// 0054873e  83caff               or edx, 0xffffffff
// 00548741  f00fc111             lock xadd dword ptr [ecx], edx
// 00548745  7509                 jne 0x548750
// 00548747  8b06                 mov eax, dword ptr [esi]
// 00548749  8b5008               mov edx, dword ptr [eax + 8]
// 0054874c  8bce                 mov ecx, esi
// 0054874e  ffd2                 call edx
// 00548750  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00548754  5f                   pop edi
// 00548755  5e                   pop esi
// 00548756  5b                   pop ebx
// 00548757  64890d00000000       mov dword ptr fs:[0], ecx
// 0054875e  83c418               add esp, 0x18
// 00548761  c3                   ret 
// library rbxgs/util\boost.cpp (function ??1worker_thread@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
