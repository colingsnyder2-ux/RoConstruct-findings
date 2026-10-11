// roc 2008-06 005929b0  unit: ArchiveBinder  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005929b0
//
// 005929b0  8b442404             mov eax, dword ptr [esp + 4]
// 005929b4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005929b8  53                   push ebx
// 005929b9  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005929bd  56                   push esi
// 005929be  8bf1                 mov esi, ecx
// 005929c0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005929c4  57                   push edi
// 005929c5  894e04               mov dword ptr [esi + 4], ecx
// 005929c8  8d7e0c               lea edi, [esi + 0xc]
// 005929cb  53                   push ebx
// 005929cc  8bcf                 mov ecx, edi
// 005929ce  8906                 mov dword ptr [esi], eax
// 005929d0  895608               mov dword ptr [esi + 8], edx
// 005929d3  ff155c248000         call dword ptr [0x80245c]
// 005929d9  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 005929dc  89471c               mov dword ptr [edi + 0x1c], eax
// 005929df  8b4320               mov eax, dword ptr [ebx + 0x20]
// 005929e2  894720               mov dword ptr [edi + 0x20], eax
// 005929e5  85c0                 test eax, eax
// 005929e7  740c                 je 0x5929f5
// 005929e9  83c004               add eax, 4
// 005929ec  b901000000           mov ecx, 1
// 005929f1  f00fc108             lock xadd dword ptr [eax], ecx
// 005929f5  8a542420             mov dl, byte ptr [esp + 0x20]
// 005929f9  5f                   pop edi
// 005929fa  885630               mov byte ptr [esi + 0x30], dl
// 005929fd  c6463100             mov byte ptr [esi + 0x31], 0
// 00592a01  8bc6                 mov eax, esi
// 00592a03  5e                   pop esi
// 00592a04  5b                   pop ebx
// 00592a05  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@@2@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
