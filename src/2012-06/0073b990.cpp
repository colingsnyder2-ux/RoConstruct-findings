// roc 2012-06 0073b990  unit: RBX::VButton::?$FactoryProduct  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0073b990
//
// 0073b990  8b442404             mov eax, dword ptr [esp + 4]
// 0073b994  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0073b998  53                   push ebx
// 0073b999  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0073b99d  56                   push esi
// 0073b99e  8bf1                 mov esi, ecx
// 0073b9a0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0073b9a4  57                   push edi
// 0073b9a5  894e04               mov dword ptr [esi + 4], ecx
// 0073b9a8  8d7e0c               lea edi, [esi + 0xc]
// 0073b9ab  53                   push ebx
// 0073b9ac  8bcf                 mov ecx, edi
// 0073b9ae  8906                 mov dword ptr [esi], eax
// 0073b9b0  895608               mov dword ptr [esi + 8], edx
// 0073b9b3  ff154426b200         call dword ptr [0xb22644]
// 0073b9b9  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 0073b9bc  89471c               mov dword ptr [edi + 0x1c], eax
// 0073b9bf  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0073b9c2  894720               mov dword ptr [edi + 0x20], eax
// 0073b9c5  85c0                 test eax, eax
// 0073b9c7  740c                 je 0x73b9d5
// 0073b9c9  83c004               add eax, 4
// 0073b9cc  b901000000           mov ecx, 1
// 0073b9d1  f00fc108             lock xadd dword ptr [eax], ecx
// 0073b9d5  8a542420             mov dl, byte ptr [esp + 0x20]
// 0073b9d9  5f                   pop edi
// 0073b9da  885630               mov byte ptr [esi + 0x30], dl
// 0073b9dd  c6463100             mov byte ptr [esi + 0x31], 0
// 0073b9e1  8bc6                 mov eax, esi
// 0073b9e3  5e                   pop esi
// 0073b9e4  5b                   pop ebx
// 0073b9e5  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@@2@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
