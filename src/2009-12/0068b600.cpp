// roc 2009-12 0068b600  unit: ArchiveBinder  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068b600
//
// 0068b600  6a14                 push 0x14
// 0068b602  e859821600           call 0x7f3860
// 0068b607  83c404               add esp, 4
// 0068b60a  85c0                 test eax, eax
// 0068b60c  7406                 je 0x68b614
// 0068b60e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0068b612  8908                 mov dword ptr [eax], ecx
// 0068b614  8d4804               lea ecx, [eax + 4]
// 0068b617  85c9                 test ecx, ecx
// 0068b619  7406                 je 0x68b621
// 0068b61b  8b542408             mov edx, dword ptr [esp + 8]
// 0068b61f  8911                 mov dword ptr [ecx], edx
// 0068b621  8d4808               lea ecx, [eax + 8]
// 0068b624  85c9                 test ecx, ecx
// 0068b626  7416                 je 0x68b63e
// 0068b628  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0068b62c  56                   push esi
// 0068b62d  8b32                 mov esi, dword ptr [edx]
// 0068b62f  8931                 mov dword ptr [ecx], esi
// 0068b631  8b7204               mov esi, dword ptr [edx + 4]
// 0068b634  897104               mov dword ptr [ecx + 4], esi
// 0068b637  8b5208               mov edx, dword ptr [edx + 8]
// 0068b63a  895108               mov dword ptr [ecx + 8], edx
// 0068b63d  5e                   pop esi
// 0068b63e  c20c00               ret 0xc
// library boost-1.34.1/libs\signals\src\connection.cpp (function ?_Buynode@?$list@Ubound_object@detail@signals@boost@@V?$allocator@Ubound_object@detail@signals@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@Ubound_object@detail@signals@boost@@V?$allocator@Ubound_object@detail@signals@boost@@@std@@@2@PAU342@0ABUbound_object@detail@signals@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
