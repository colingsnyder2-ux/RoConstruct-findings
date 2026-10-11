// roc 2010-06 00742620  unit: RBX::VHttp::?$sp_counted_impl_p  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00742620
//
// 00742620  53                   push ebx
// 00742621  55                   push ebp
// 00742622  8b2d0ca99e00         mov ebp, dword ptr [0x9ea90c]
// 00742628  56                   push esi
// 00742629  57                   push edi
// 0074262a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0074262e  8bf1                 mov esi, ecx
// 00742630  c70700000000         mov dword ptr [edi], 0
// 00742636  85f6                 test esi, esi
// 00742638  740e                 je 0x742648
// 0074263a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0074263e  39460c               cmp dword ptr [esi + 0xc], eax
// 00742641  7705                 ja 0x742648
// 00742643  3b4610               cmp eax, dword ptr [esi + 0x10]
// 00742646  7606                 jbe 0x74264e
// 00742648  ffd5                 call ebp
// 0074264a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0074264e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00742652  8b0e                 mov ecx, dword ptr [esi]
// 00742654  890f                 mov dword ptr [edi], ecx
// 00742656  894704               mov dword ptr [edi + 4], eax
// 00742659  395e0c               cmp dword ptr [esi + 0xc], ebx
// 0074265c  7705                 ja 0x742663
// 0074265e  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 00742661  7606                 jbe 0x742669
// 00742663  ffd5                 call ebp
// 00742665  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00742669  8b07                 mov eax, dword ptr [edi]
// 0074266b  8b0e                 mov ecx, dword ptr [esi]
// 0074266d  85c0                 test eax, eax
// 0074266f  7404                 je 0x742675
// 00742671  3bc1                 cmp eax, ecx
// 00742673  7402                 je 0x742677
// 00742675  ffd5                 call ebp
// 00742677  8b4704               mov eax, dword ptr [edi + 4]
// 0074267a  3bc3                 cmp eax, ebx
// 0074267c  7426                 je 0x7426a4
// 0074267e  8b5610               mov edx, dword ptr [esi + 0x10]
// 00742681  50                   push eax
// 00742682  52                   push edx
// 00742683  53                   push ebx
// 00742684  e8f7f5ffff           call 0x741c80
// 00742689  8b5610               mov edx, dword ptr [esi + 0x10]
// 0074268c  8bd8                 mov ebx, eax
// 0074268e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00742692  50                   push eax
// 00742693  8d4e08               lea ecx, [esi + 8]
// 00742696  51                   push ecx
// 00742697  52                   push edx
// 00742698  53                   push ebx
// 00742699  e8828df6ff           call 0x6ab420
// 0074269e  83c41c               add esp, 0x1c
// 007426a1  895e10               mov dword ptr [esi + 0x10], ebx
// 007426a4  8bc7                 mov eax, edi
// 007426a6  5f                   pop edi
// 007426a7  5e                   pop esi
// 007426a8  5d                   pop ebp
// 007426a9  5b                   pop ebx
// 007426aa  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$vector@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@V?$_Vector_const_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
