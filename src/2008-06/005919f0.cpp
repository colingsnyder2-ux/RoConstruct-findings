// roc 2008-06 005919f0  unit: RBX::RootInstance  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005919f0
//
// 005919f0  8b442408             mov eax, dword ptr [esp + 8]
// 005919f4  56                   push esi
// 005919f5  33f6                 xor esi, esi
// 005919f7  3b442414             cmp eax, dword ptr [esp + 0x14]
// 005919fb  742f                 je 0x591a2c
// 005919fd  8b5008               mov edx, dword ptr [eax + 8]
// 00591a00  83ec0c               sub esp, 0xc
// 00591a03  8bcc                 mov ecx, esp
// 00591a05  8911                 mov dword ptr [ecx], edx
// 00591a07  8b500c               mov edx, dword ptr [eax + 0xc]
// 00591a0a  8b4010               mov eax, dword ptr [eax + 0x10]
// 00591a0d  895104               mov dword ptr [ecx + 4], edx
// 00591a10  894108               mov dword ptr [ecx + 8], eax
// 00591a13  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00591a17  ff542424             call dword ptr [esp + 0x24]
// 00591a1b  84c0                 test al, al
// 00591a1d  7401                 je 0x591a20
// 00591a1f  46                   inc esi
// 00591a20  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00591a24  8b01                 mov eax, dword ptr [ecx]
// 00591a26  8944240c             mov dword ptr [esp + 0xc], eax
// 00591a2a  ebcb                 jmp 0x5919f7
// 00591a2c  8bc6                 mov eax, esi
// 00591a2e  5e                   pop esi
// 00591a2f  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Count_if@V?$_Iterator@$0A@@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@std@@V?$bind_t@_NV?$mf1@_NVArchiveBinder@@UIDREFBinding@1@@_mfi@boost@@V?$list2@V?$value@PAVArchiveBinder@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@std@@YAHV?$_Iterator@$0A@@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@0@0V?$bind_t@_NV?$mf1@_NVArchiveBinder@@UIDREFBinding@1@@_mfi@boost@@V?$list2@V?$value@PAVArchiveBinder@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
