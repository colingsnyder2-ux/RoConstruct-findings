// roc 2009-12 0068ae50  unit: TextXmlParser  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068ae50
//
// 0068ae50  8b442408             mov eax, dword ptr [esp + 8]
// 0068ae54  56                   push esi
// 0068ae55  33f6                 xor esi, esi
// 0068ae57  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0068ae5b  742f                 je 0x68ae8c
// 0068ae5d  8b5008               mov edx, dword ptr [eax + 8]
// 0068ae60  83ec0c               sub esp, 0xc
// 0068ae63  8bcc                 mov ecx, esp
// 0068ae65  8911                 mov dword ptr [ecx], edx
// 0068ae67  8b500c               mov edx, dword ptr [eax + 0xc]
// 0068ae6a  8b4010               mov eax, dword ptr [eax + 0x10]
// 0068ae6d  895104               mov dword ptr [ecx + 4], edx
// 0068ae70  894108               mov dword ptr [ecx + 8], eax
// 0068ae73  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0068ae77  ff542424             call dword ptr [esp + 0x24]
// 0068ae7b  84c0                 test al, al
// 0068ae7d  7401                 je 0x68ae80
// 0068ae7f  46                   inc esi
// 0068ae80  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068ae84  8b01                 mov eax, dword ptr [ecx]
// 0068ae86  8944240c             mov dword ptr [esp + 0xc], eax
// 0068ae8a  ebcb                 jmp 0x68ae57
// 0068ae8c  8bc6                 mov eax, esi
// 0068ae8e  5e                   pop esi
// 0068ae8f  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Count_if@V?$_Iterator@$0A@@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@std@@V?$bind_t@_NV?$mf1@_NVArchiveBinder@@UIDREFBinding@1@@_mfi@boost@@V?$list2@V?$value@PAVArchiveBinder@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@std@@YAHV?$_Iterator@$0A@@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@0@0V?$bind_t@_NV?$mf1@_NVArchiveBinder@@UIDREFBinding@1@@_mfi@boost@@V?$list2@V?$value@PAVArchiveBinder@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
