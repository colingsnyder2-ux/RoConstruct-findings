// from server: 100% by auto
// roc 2011-06 00614300  unit: ArchiveBinder  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00614300
//
// 00614300  6a14                 push 0x14
// 00614302  e8575d1f00           call 0x80a05e
// 00614307  83c404               add esp, 4
// 0061430a  85c0                 test eax, eax
// 0061430c  7406                 je 0x614314
// 0061430e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00614312  8908                 mov dword ptr [eax], ecx
// 00614314  8d4804               lea ecx, [eax + 4]
// 00614317  85c9                 test ecx, ecx
// 00614319  7406                 je 0x614321
// 0061431b  8b542408             mov edx, dword ptr [esp + 8]
// 0061431f  8911                 mov dword ptr [ecx], edx
// 00614321  8d4808               lea ecx, [eax + 8]
// 00614324  85c9                 test ecx, ecx
// 00614326  7416                 je 0x61433e
// 00614328  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0061432c  56                   push esi
// 0061432d  8b32                 mov esi, dword ptr [edx]
// 0061432f  8931                 mov dword ptr [ecx], esi
// 00614331  8b7204               mov esi, dword ptr [edx + 4]
// 00614334  897104               mov dword ptr [ecx + 4], esi
// 00614337  8b5208               mov edx, dword ptr [edx + 8]
// 0061433a  895108               mov dword ptr [ecx + 8], edx
// 0061433d  5e                   pop esi
// 0061433e  c20c00               ret 0xc
// library boost-1.34.1/libs\signals\src\connection.cpp (function ?_Buynode@?$list@Ubound_object@detail@signals@boost@@V?$allocator@Ubound_object@detail@signals@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@Ubound_object@detail@signals@boost@@V?$allocator@Ubound_object@detail@signals@boost@@@std@@@2@PAU342@0ABUbound_object@detail@signals@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
