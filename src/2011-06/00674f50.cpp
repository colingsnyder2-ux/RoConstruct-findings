// roc 2011-06 00674f50  unit: RBX::VVisit::?$BoundFuncDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00674f50
//
// 00674f50  8b442404             mov eax, dword ptr [esp + 4]
// 00674f54  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00674f58  53                   push ebx
// 00674f59  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00674f5d  56                   push esi
// 00674f5e  8bf1                 mov esi, ecx
// 00674f60  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00674f64  57                   push edi
// 00674f65  894e04               mov dword ptr [esi + 4], ecx
// 00674f68  8d7e0c               lea edi, [esi + 0xc]
// 00674f6b  53                   push ebx
// 00674f6c  8bcf                 mov ecx, edi
// 00674f6e  8906                 mov dword ptr [esi], eax
// 00674f70  895608               mov dword ptr [esi + 8], edx
// 00674f73  ff15c804a400         call dword ptr [0xa404c8]
// 00674f79  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00674f7c  89471c               mov dword ptr [edi + 0x1c], eax
// 00674f7f  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00674f82  894720               mov dword ptr [edi + 0x20], eax
// 00674f85  85c0                 test eax, eax
// 00674f87  740c                 je 0x674f95
// 00674f89  83c004               add eax, 4
// 00674f8c  b901000000           mov ecx, 1
// 00674f91  f00fc108             lock xadd dword ptr [eax], ecx
// 00674f95  8a542420             mov dl, byte ptr [esp + 0x20]
// 00674f99  5f                   pop edi
// 00674f9a  885630               mov byte ptr [esi + 0x30], dl
// 00674f9d  c6463100             mov byte ptr [esi + 0x31], 0
// 00674fa1  8bc6                 mov eax, esi
// 00674fa3  5e                   pop esi
// 00674fa4  5b                   pop ebx
// 00674fa5  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@@2@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
