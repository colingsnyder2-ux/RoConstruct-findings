// roc 2010-06 005f2650  unit: TextXmlParser  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f2650
//
// 005f2650  8b442408             mov eax, dword ptr [esp + 8]
// 005f2654  56                   push esi
// 005f2655  33f6                 xor esi, esi
// 005f2657  3b442414             cmp eax, dword ptr [esp + 0x14]
// 005f265b  742f                 je 0x5f268c
// 005f265d  8b5008               mov edx, dword ptr [eax + 8]
// 005f2660  83ec0c               sub esp, 0xc
// 005f2663  8bcc                 mov ecx, esp
// 005f2665  8911                 mov dword ptr [ecx], edx
// 005f2667  8b500c               mov edx, dword ptr [eax + 0xc]
// 005f266a  8b4010               mov eax, dword ptr [eax + 0x10]
// 005f266d  895104               mov dword ptr [ecx + 4], edx
// 005f2670  894108               mov dword ptr [ecx + 8], eax
// 005f2673  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005f2677  ff542424             call dword ptr [esp + 0x24]
// 005f267b  84c0                 test al, al
// 005f267d  7401                 je 0x5f2680
// 005f267f  46                   inc esi
// 005f2680  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f2684  8b01                 mov eax, dword ptr [ecx]
// 005f2686  8944240c             mov dword ptr [esp + 0xc], eax
// 005f268a  ebcb                 jmp 0x5f2657
// 005f268c  8bc6                 mov eax, esi
// 005f268e  5e                   pop esi
// 005f268f  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Count_if@V?$_Iterator@$0A@@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@std@@V?$bind_t@_NV?$mf1@_NVArchiveBinder@@UIDREFBinding@1@@_mfi@boost@@V?$list2@V?$value@PAVArchiveBinder@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@std@@YAHV?$_Iterator@$0A@@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@0@0V?$bind_t@_NV?$mf1@_NVArchiveBinder@@UIDREFBinding@1@@_mfi@boost@@V?$list2@V?$value@PAVArchiveBinder@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
