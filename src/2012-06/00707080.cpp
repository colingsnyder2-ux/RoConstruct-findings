// roc 2012-06 00707080  unit: ArchiveBinder  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00707080
//
// 00707080  6a14                 push 0x14
// 00707082  e893b02700           call 0x98211a
// 00707087  83c404               add esp, 4
// 0070708a  85c0                 test eax, eax
// 0070708c  7406                 je 0x707094
// 0070708e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00707092  8908                 mov dword ptr [eax], ecx
// 00707094  8d4804               lea ecx, [eax + 4]
// 00707097  85c9                 test ecx, ecx
// 00707099  7406                 je 0x7070a1
// 0070709b  8b542408             mov edx, dword ptr [esp + 8]
// 0070709f  8911                 mov dword ptr [ecx], edx
// 007070a1  8d4808               lea ecx, [eax + 8]
// 007070a4  85c9                 test ecx, ecx
// 007070a6  7416                 je 0x7070be
// 007070a8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007070ac  56                   push esi
// 007070ad  8b32                 mov esi, dword ptr [edx]
// 007070af  8931                 mov dword ptr [ecx], esi
// 007070b1  8b7204               mov esi, dword ptr [edx + 4]
// 007070b4  897104               mov dword ptr [ecx + 4], esi
// 007070b7  8b5208               mov edx, dword ptr [edx + 8]
// 007070ba  895108               mov dword ptr [ecx + 8], edx
// 007070bd  5e                   pop esi
// 007070be  c20c00               ret 0xc
// library boost-1.34.1/libs\signals\src\connection.cpp (function ?_Buynode@?$list@Ubound_object@detail@signals@boost@@V?$allocator@Ubound_object@detail@signals@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@Ubound_object@detail@signals@boost@@V?$allocator@Ubound_object@detail@signals@boost@@@std@@@2@PAU342@0ABUbound_object@detail@signals@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
