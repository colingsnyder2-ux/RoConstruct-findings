// roc 2007-08 004a9200  unit: RBX::Network::VClient::?$FactoryProduct  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a9200
//
// 004a9200  8b442408             mov eax, dword ptr [esp + 8]
// 004a9204  53                   push ebx
// 004a9205  55                   push ebp
// 004a9206  56                   push esi
// 004a9207  8b701c               mov esi, dword ptr [eax + 0x1c]
// 004a920a  85f6                 test esi, esi
// 004a920c  57                   push edi
// 004a920d  8b7820               mov edi, dword ptr [eax + 0x20]
// 004a9210  7506                 jne 0x4a9218
// 004a9212  ff15d8e67700         call dword ptr [0x77e6d8]
// 004a9218  3b7e04               cmp edi, dword ptr [esi + 4]
// 004a921b  7506                 jne 0x4a9223
// 004a921d  ff15d8e67700         call dword ptr [0x77e6d8]
// 004a9223  8b1f                 mov ebx, dword ptr [edi]
// 004a9225  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004a9229  3bf7                 cmp esi, edi
// 004a922b  8b6f04               mov ebp, dword ptr [edi + 4]
// 004a922e  7406                 je 0x4a9236
// 004a9230  ff15d8e67700         call dword ptr [0x77e6d8]
// 004a9236  3bdd                 cmp ebx, ebp
// 004a9238  7519                 jne 0x4a9253
// 004a923a  8b4704               mov eax, dword ptr [edi + 4]
// 004a923d  8b30                 mov esi, dword ptr [eax]
// 004a923f  3bf0                 cmp esi, eax
// 004a9241  7506                 jne 0x4a9249
// 004a9243  ff15d8e67700         call dword ptr [0x77e6d8]
// 004a9249  8b4608               mov eax, dword ptr [esi + 8]
// 004a924c  5f                   pop edi
// 004a924d  5e                   pop esi
// 004a924e  5d                   pop ebp
// 004a924f  5b                   pop ebx
// 004a9250  c20800               ret 8
// 004a9253  3b5e04               cmp ebx, dword ptr [esi + 4]
// 004a9256  7506                 jne 0x4a925e
// 004a9258  ff15d8e67700         call dword ptr [0x77e6d8]
// 004a925e  8b4308               mov eax, dword ptr [ebx + 8]
// 004a9261  5f                   pop edi
// 004a9262  5e                   pop esi
// 004a9263  5d                   pop ebp
// 004a9264  5b                   pop ebx
// 004a9265  c20800               ret 8
// library openrbx-client/App\v8world\SimJobStage.cpp (function ?nextMechanism@SimJobStage@RBX@@QAEPAVMechanism@2@AAV?$list@PAVMechanism@RBX@@V?$allocator@PAVMechanism@RBX@@@std@@@std@@PBV32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8world/SimJobStage.cpp
