// roc 2010-06 005f2e00  unit: ArchiveBinder  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f2e00
//
// 005f2e00  8b442404             mov eax, dword ptr [esp + 4]
// 005f2e04  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005f2e08  53                   push ebx
// 005f2e09  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005f2e0d  56                   push esi
// 005f2e0e  8bf1                 mov esi, ecx
// 005f2e10  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f2e14  57                   push edi
// 005f2e15  894e04               mov dword ptr [esi + 4], ecx
// 005f2e18  8d7e0c               lea edi, [esi + 0xc]
// 005f2e1b  53                   push ebx
// 005f2e1c  8bcf                 mov ecx, edi
// 005f2e1e  8906                 mov dword ptr [esi], eax
// 005f2e20  895608               mov dword ptr [esi + 8], edx
// 005f2e23  ff150ca49e00         call dword ptr [0x9ea40c]
// 005f2e29  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 005f2e2c  89471c               mov dword ptr [edi + 0x1c], eax
// 005f2e2f  8b4320               mov eax, dword ptr [ebx + 0x20]
// 005f2e32  894720               mov dword ptr [edi + 0x20], eax
// 005f2e35  85c0                 test eax, eax
// 005f2e37  740c                 je 0x5f2e45
// 005f2e39  83c004               add eax, 4
// 005f2e3c  b901000000           mov ecx, 1
// 005f2e41  f00fc108             lock xadd dword ptr [eax], ecx
// 005f2e45  8a542420             mov dl, byte ptr [esp + 0x20]
// 005f2e49  5f                   pop edi
// 005f2e4a  885630               mov byte ptr [esi + 0x30], dl
// 005f2e4d  c6463100             mov byte ptr [esi + 0x31], 0
// 005f2e51  8bc6                 mov eax, esi
// 005f2e53  5e                   pop esi
// 005f2e54  5b                   pop ebx
// 005f2e55  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@@2@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
