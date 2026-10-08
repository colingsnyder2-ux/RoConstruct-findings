// roc 2007-08 005713d0  unit: RBX::Reflection::ClassDescriptor  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005713d0
//
// 005713d0  6aff                 push -1
// 005713d2  689b4e7500           push 0x754e9b
// 005713d7  64a100000000         mov eax, dword ptr fs:[0]
// 005713dd  50                   push eax
// 005713de  64892500000000       mov dword ptr fs:[0], esp
// 005713e5  83ec0c               sub esp, 0xc
// 005713e8  53                   push ebx
// 005713e9  56                   push esi
// 005713ea  8bf1                 mov esi, ecx
// 005713ec  57                   push edi
// 005713ed  8974240c             mov dword ptr [esp + 0xc], esi
// 005713f1  8b3e                 mov edi, dword ptr [esi]
// 005713f3  bb01000000           mov ebx, 1
// 005713f8  8bcf                 mov ecx, edi
// 005713fa  895c2420             mov dword ptr [esp + 0x20], ebx
// 005713fe  897c2410             mov dword ptr [esp + 0x10], edi
// 00571402  e849431b00           call 0x725750
// 00571407  885c2414             mov byte ptr [esp + 0x14], bl
// 0057140b  8b06                 mov eax, dword ptr [esi]
// 0057140d  885820               mov byte ptr [eax + 0x20], bl
// 00571410  8b06                 mov eax, dword ptr [esi]
// 00571412  8d4808               lea ecx, [eax + 8]
// 00571415  c644242002           mov byte ptr [esp + 0x20], 2
// 0057141a  e831551b00           call 0x726950
// 0057141f  8bcf                 mov ecx, edi
// 00571421  885c2420             mov byte ptr [esp + 0x20], bl
// 00571425  e846431b00           call 0x725770
// 0057142a  8d4e08               lea ecx, [esi + 8]
// 0057142d  c644242000           mov byte ptr [esp + 0x20], 0
// 00571432  e809501b00           call 0x726440
// 00571437  8b7604               mov esi, dword ptr [esi + 4]
// 0057143a  85f6                 test esi, esi
// 0057143c  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00571444  742a                 je 0x571470
// 00571446  8d4604               lea eax, [esi + 4]
// 00571449  83c9ff               or ecx, 0xffffffff
// 0057144c  f00fc108             lock xadd dword ptr [eax], ecx
// 00571450  751e                 jne 0x571470
// 00571452  8b16                 mov edx, dword ptr [esi]
// 00571454  8b4204               mov eax, dword ptr [edx + 4]
// 00571457  8bce                 mov ecx, esi
// 00571459  ffd0                 call eax
// 0057145b  8d4e08               lea ecx, [esi + 8]
// 0057145e  83caff               or edx, 0xffffffff
// 00571461  f00fc111             lock xadd dword ptr [ecx], edx
// 00571465  7509                 jne 0x571470
// 00571467  8b06                 mov eax, dword ptr [esi]
// 00571469  8b5008               mov edx, dword ptr [eax + 8]
// 0057146c  8bce                 mov ecx, esi
// 0057146e  ffd2                 call edx
// 00571470  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00571474  5f                   pop edi
// 00571475  5e                   pop esi
// 00571476  5b                   pop ebx
// 00571477  64890d00000000       mov dword ptr fs:[0], ecx
// 0057147e  83c418               add esp, 0x18
// 00571481  c3                   ret 
// library rbxgs/util\boost.cpp (function ??1worker_thread@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
