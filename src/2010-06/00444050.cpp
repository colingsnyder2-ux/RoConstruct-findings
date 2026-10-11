// roc 2010-06 00444050  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00444050
//
// 00444050  53                   push ebx
// 00444051  55                   push ebp
// 00444052  8b2d0ca99e00         mov ebp, dword ptr [0x9ea90c]
// 00444058  56                   push esi
// 00444059  57                   push edi
// 0044405a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0044405e  8bf1                 mov esi, ecx
// 00444060  c70700000000         mov dword ptr [edi], 0
// 00444066  85f6                 test esi, esi
// 00444068  740e                 je 0x444078
// 0044406a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0044406e  39460c               cmp dword ptr [esi + 0xc], eax
// 00444071  7705                 ja 0x444078
// 00444073  3b4610               cmp eax, dword ptr [esi + 0x10]
// 00444076  7606                 jbe 0x44407e
// 00444078  ffd5                 call ebp
// 0044407a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0044407e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00444082  8b0e                 mov ecx, dword ptr [esi]
// 00444084  890f                 mov dword ptr [edi], ecx
// 00444086  894704               mov dword ptr [edi + 4], eax
// 00444089  395e0c               cmp dword ptr [esi + 0xc], ebx
// 0044408c  7705                 ja 0x444093
// 0044408e  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 00444091  7606                 jbe 0x444099
// 00444093  ffd5                 call ebp
// 00444095  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00444099  8b07                 mov eax, dword ptr [edi]
// 0044409b  8b0e                 mov ecx, dword ptr [esi]
// 0044409d  85c0                 test eax, eax
// 0044409f  7404                 je 0x4440a5
// 004440a1  3bc1                 cmp eax, ecx
// 004440a3  7402                 je 0x4440a7
// 004440a5  ffd5                 call ebp
// 004440a7  8b4704               mov eax, dword ptr [edi + 4]
// 004440aa  3bc3                 cmp eax, ebx
// 004440ac  7426                 je 0x4440d4
// 004440ae  8b5610               mov edx, dword ptr [esi + 0x10]
// 004440b1  50                   push eax
// 004440b2  52                   push edx
// 004440b3  53                   push ebx
// 004440b4  e897faffff           call 0x443b50
// 004440b9  8b5610               mov edx, dword ptr [esi + 0x10]
// 004440bc  8bd8                 mov ebx, eax
// 004440be  8b442420             mov eax, dword ptr [esp + 0x20]
// 004440c2  50                   push eax
// 004440c3  8d4e08               lea ecx, [esi + 8]
// 004440c6  51                   push ecx
// 004440c7  52                   push edx
// 004440c8  53                   push ebx
// 004440c9  e852fdffff           call 0x443e20
// 004440ce  83c41c               add esp, 0x1c
// 004440d1  895e10               mov dword ptr [esi + 0x10], ebx
// 004440d4  8bc7                 mov eax, edi
// 004440d6  5f                   pop edi
// 004440d7  5e                   pop esi
// 004440d8  5d                   pop ebp
// 004440d9  5b                   pop ebx
// 004440da  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$vector@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@V?$_Vector_const_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
