// roc 2009-06 005da380  unit: RBX::ContentProvider::HashApprovalDictionary::VValue::?$sp_counted_impl_p  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005da380
//
// 005da380  8b442404             mov eax, dword ptr [esp + 4]
// 005da384  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005da388  53                   push ebx
// 005da389  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005da38d  56                   push esi
// 005da38e  8bf1                 mov esi, ecx
// 005da390  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005da394  57                   push edi
// 005da395  894e04               mov dword ptr [esi + 4], ecx
// 005da398  8d7e0c               lea edi, [esi + 0xc]
// 005da39b  53                   push ebx
// 005da39c  8bcf                 mov ecx, edi
// 005da39e  8906                 mov dword ptr [esi], eax
// 005da3a0  895608               mov dword ptr [esi + 8], edx
// 005da3a3  ff15b8e48900         call dword ptr [0x89e4b8]
// 005da3a9  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 005da3ac  89471c               mov dword ptr [edi + 0x1c], eax
// 005da3af  8b4320               mov eax, dword ptr [ebx + 0x20]
// 005da3b2  894720               mov dword ptr [edi + 0x20], eax
// 005da3b5  85c0                 test eax, eax
// 005da3b7  740c                 je 0x5da3c5
// 005da3b9  83c004               add eax, 4
// 005da3bc  b901000000           mov ecx, 1
// 005da3c1  f00fc108             lock xadd dword ptr [eax], ecx
// 005da3c5  8a542420             mov dl, byte ptr [esp + 0x20]
// 005da3c9  5f                   pop edi
// 005da3ca  885630               mov byte ptr [esi + 0x30], dl
// 005da3cd  c6463100             mov byte ptr [esi + 0x31], 0
// 005da3d1  8bc6                 mov eax, esi
// 005da3d3  5e                   pop esi
// 005da3d4  5b                   pop ebx
// 005da3d5  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@@2@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
