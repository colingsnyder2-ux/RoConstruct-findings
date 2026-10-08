// roc 2009-06 00622350  unit: RBX::RootInstance  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00622350
//
// 00622350  8b442408             mov eax, dword ptr [esp + 8]
// 00622354  56                   push esi
// 00622355  33f6                 xor esi, esi
// 00622357  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0062235b  742f                 je 0x62238c
// 0062235d  8b5008               mov edx, dword ptr [eax + 8]
// 00622360  83ec0c               sub esp, 0xc
// 00622363  8bcc                 mov ecx, esp
// 00622365  8911                 mov dword ptr [ecx], edx
// 00622367  8b500c               mov edx, dword ptr [eax + 0xc]
// 0062236a  8b4010               mov eax, dword ptr [eax + 0x10]
// 0062236d  895104               mov dword ptr [ecx + 4], edx
// 00622370  894108               mov dword ptr [ecx + 8], eax
// 00622373  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00622377  ff542424             call dword ptr [esp + 0x24]
// 0062237b  84c0                 test al, al
// 0062237d  7401                 je 0x622380
// 0062237f  46                   inc esi
// 00622380  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00622384  8b01                 mov eax, dword ptr [ecx]
// 00622386  8944240c             mov dword ptr [esp + 0xc], eax
// 0062238a  ebcb                 jmp 0x622357
// 0062238c  8bc6                 mov eax, esi
// 0062238e  5e                   pop esi
// 0062238f  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Count_if@V?$_Iterator@$0A@@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@std@@V?$bind_t@_NV?$mf1@_NVArchiveBinder@@UIDREFBinding@1@@_mfi@boost@@V?$list2@V?$value@PAVArchiveBinder@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@std@@YAHV?$_Iterator@$0A@@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@0@0V?$bind_t@_NV?$mf1@_NVArchiveBinder@@UIDREFBinding@1@@_mfi@boost@@V?$list2@V?$value@PAVArchiveBinder@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
