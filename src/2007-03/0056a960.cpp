// roc 2007-03 0056a960  unit: seg_00560000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056a960
//
// 0056a960  6a14                 push 0x14
// 0056a962  e8a1370b00           call 0x61e108
// 0056a967  83c404               add esp, 4
// 0056a96a  85c0                 test eax, eax
// 0056a96c  7406                 je 0x56a974
// 0056a96e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056a972  8908                 mov dword ptr [eax], ecx
// 0056a974  8d4804               lea ecx, [eax + 4]
// 0056a977  85c9                 test ecx, ecx
// 0056a979  7406                 je 0x56a981
// 0056a97b  8b542408             mov edx, dword ptr [esp + 8]
// 0056a97f  8911                 mov dword ptr [ecx], edx
// 0056a981  8d4808               lea ecx, [eax + 8]
// 0056a984  85c9                 test ecx, ecx
// 0056a986  7416                 je 0x56a99e
// 0056a988  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0056a98c  56                   push esi
// 0056a98d  8b32                 mov esi, dword ptr [edx]
// 0056a98f  8931                 mov dword ptr [ecx], esi
// 0056a991  8b7204               mov esi, dword ptr [edx + 4]
// 0056a994  897104               mov dword ptr [ecx + 4], esi
// 0056a997  8b5208               mov edx, dword ptr [edx + 8]
// 0056a99a  895108               mov dword ptr [ecx + 8], edx
// 0056a99d  5e                   pop esi
// 0056a99e  c20c00               ret 0xc
// library rbxgs/v8xml\SerializerV2.cpp (function ?_Buynode@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@std@@IAEPAU_Node@?$_List_nod@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@2@PAU342@0ABUIDREFBinding@ArchiveBinder@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
