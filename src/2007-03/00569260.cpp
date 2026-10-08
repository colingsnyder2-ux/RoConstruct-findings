// roc 2007-03 00569260  unit: seg_00560000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00569260
//
// 00569260  51                   push ecx
// 00569261  53                   push ebx
// 00569262  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00569266  55                   push ebp
// 00569267  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0056926b  56                   push esi
// 0056926c  8b742418             mov esi, dword ptr [esp + 0x18]
// 00569270  57                   push edi
// 00569271  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00569275  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056927d  8d4900               lea ecx, [ecx]
// 00569280  3bf5                 cmp esi, ebp
// 00569282  7427                 je 0x5692ab
// 00569284  8b4e08               mov ecx, dword ptr [esi + 8]
// 00569287  8b560c               mov edx, dword ptr [esi + 0xc]
// 0056928a  83ec0c               sub esp, 0xc
// 0056928d  8bc4                 mov eax, esp
// 0056928f  8908                 mov dword ptr [eax], ecx
// 00569291  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00569294  895004               mov dword ptr [eax + 4], edx
// 00569297  894808               mov dword ptr [eax + 8], ecx
// 0056929a  8bcf                 mov ecx, edi
// 0056929c  ffd3                 call ebx
// 0056929e  84c0                 test al, al
// 005692a0  7405                 je 0x5692a7
// 005692a2  8344241001           add dword ptr [esp + 0x10], 1
// 005692a7  8b36                 mov esi, dword ptr [esi]
// 005692a9  ebd5                 jmp 0x569280
// 005692ab  8b442410             mov eax, dword ptr [esp + 0x10]
// 005692af  5f                   pop edi
// 005692b0  5e                   pop esi
// 005692b1  5d                   pop ebp
// 005692b2  5b                   pop ebx
// 005692b3  59                   pop ecx
// 005692b4  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Count_if@V?$_Iterator@$0A@@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@std@@V?$bind_t@_NV?$mf1@_NVArchiveBinder@@UIDREFBinding@1@@_mfi@boost@@V?$list2@V?$value@PAVArchiveBinder@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@std@@YAHV?$_Iterator@$0A@@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@0@0V?$bind_t@_NV?$mf1@_NVArchiveBinder@@UIDREFBinding@1@@_mfi@boost@@V?$list2@V?$value@PAVArchiveBinder@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
