// roc 2009-12 006e0bf0  unit: std::istrstream  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e0bf0
//
// 006e0bf0  8b442404             mov eax, dword ptr [esp + 4]
// 006e0bf4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006e0bf8  53                   push ebx
// 006e0bf9  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006e0bfd  56                   push esi
// 006e0bfe  8bf1                 mov esi, ecx
// 006e0c00  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e0c04  57                   push edi
// 006e0c05  894e04               mov dword ptr [esi + 4], ecx
// 006e0c08  8d7e0c               lea edi, [esi + 0xc]
// 006e0c0b  53                   push ebx
// 006e0c0c  8bcf                 mov ecx, edi
// 006e0c0e  8906                 mov dword ptr [esi], eax
// 006e0c10  895608               mov dword ptr [esi + 8], edx
// 006e0c13  ff15f0b69800         call dword ptr [0x98b6f0]
// 006e0c19  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 006e0c1c  89471c               mov dword ptr [edi + 0x1c], eax
// 006e0c1f  8b4320               mov eax, dword ptr [ebx + 0x20]
// 006e0c22  894720               mov dword ptr [edi + 0x20], eax
// 006e0c25  85c0                 test eax, eax
// 006e0c27  740c                 je 0x6e0c35
// 006e0c29  83c004               add eax, 4
// 006e0c2c  b901000000           mov ecx, 1
// 006e0c31  f00fc108             lock xadd dword ptr [eax], ecx
// 006e0c35  8a542420             mov dl, byte ptr [esp + 0x20]
// 006e0c39  5f                   pop edi
// 006e0c3a  885630               mov byte ptr [esi + 0x30], dl
// 006e0c3d  c6463100             mov byte ptr [esi + 0x31], 0
// 006e0c41  8bc6                 mov eax, esi
// 006e0c43  5e                   pop esi
// 006e0c44  5b                   pop ebx
// 006e0c45  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@@2@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
