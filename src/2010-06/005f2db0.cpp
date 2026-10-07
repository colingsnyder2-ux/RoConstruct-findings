// roc 2010-06 005f2db0  unit: ArchiveBinder  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f2db0
//
// 005f2db0  6a14                 push 0x14
// 005f2db2  e8e94b1b00           call 0x7a79a0
// 005f2db7  83c404               add esp, 4
// 005f2dba  85c0                 test eax, eax
// 005f2dbc  7406                 je 0x5f2dc4
// 005f2dbe  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f2dc2  8908                 mov dword ptr [eax], ecx
// 005f2dc4  8d4804               lea ecx, [eax + 4]
// 005f2dc7  85c9                 test ecx, ecx
// 005f2dc9  7406                 je 0x5f2dd1
// 005f2dcb  8b542408             mov edx, dword ptr [esp + 8]
// 005f2dcf  8911                 mov dword ptr [ecx], edx
// 005f2dd1  8d4808               lea ecx, [eax + 8]
// 005f2dd4  85c9                 test ecx, ecx
// 005f2dd6  7416                 je 0x5f2dee
// 005f2dd8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005f2ddc  56                   push esi
// 005f2ddd  8b32                 mov esi, dword ptr [edx]
// 005f2ddf  8931                 mov dword ptr [ecx], esi
// 005f2de1  8b7204               mov esi, dword ptr [edx + 4]
// 005f2de4  897104               mov dword ptr [ecx + 4], esi
// 005f2de7  8b5208               mov edx, dword ptr [edx + 8]
// 005f2dea  895108               mov dword ptr [ecx + 8], edx
// 005f2ded  5e                   pop esi
// 005f2dee  c20c00               ret 0xc
// library boost-1.34.1/libs\signals\src\connection.cpp (function ?_Buynode@?$list@Ubound_object@detail@signals@boost@@V?$allocator@Ubound_object@detail@signals@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@Ubound_object@detail@signals@boost@@V?$allocator@Ubound_object@detail@signals@boost@@@std@@@2@PAU342@0ABUbound_object@detail@signals@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
