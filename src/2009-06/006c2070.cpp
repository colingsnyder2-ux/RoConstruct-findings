// roc 2009-06 006c2070  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c2070
//
// 006c2070  53                   push ebx
// 006c2071  55                   push ebp
// 006c2072  8b2dace98900         mov ebp, dword ptr [0x89e9ac]
// 006c2078  56                   push esi
// 006c2079  57                   push edi
// 006c207a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006c207e  8bf1                 mov esi, ecx
// 006c2080  c70700000000         mov dword ptr [edi], 0
// 006c2086  85f6                 test esi, esi
// 006c2088  740e                 je 0x6c2098
// 006c208a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006c208e  39460c               cmp dword ptr [esi + 0xc], eax
// 006c2091  7705                 ja 0x6c2098
// 006c2093  3b4610               cmp eax, dword ptr [esi + 0x10]
// 006c2096  7606                 jbe 0x6c209e
// 006c2098  ffd5                 call ebp
// 006c209a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006c209e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006c20a2  8b0e                 mov ecx, dword ptr [esi]
// 006c20a4  890f                 mov dword ptr [edi], ecx
// 006c20a6  894704               mov dword ptr [edi + 4], eax
// 006c20a9  395e0c               cmp dword ptr [esi + 0xc], ebx
// 006c20ac  7705                 ja 0x6c20b3
// 006c20ae  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 006c20b1  7606                 jbe 0x6c20b9
// 006c20b3  ffd5                 call ebp
// 006c20b5  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006c20b9  8b07                 mov eax, dword ptr [edi]
// 006c20bb  8b0e                 mov ecx, dword ptr [esi]
// 006c20bd  85c0                 test eax, eax
// 006c20bf  7404                 je 0x6c20c5
// 006c20c1  3bc1                 cmp eax, ecx
// 006c20c3  7402                 je 0x6c20c7
// 006c20c5  ffd5                 call ebp
// 006c20c7  8b4704               mov eax, dword ptr [edi + 4]
// 006c20ca  3bc3                 cmp eax, ebx
// 006c20cc  7426                 je 0x6c20f4
// 006c20ce  8b5610               mov edx, dword ptr [esi + 0x10]
// 006c20d1  50                   push eax
// 006c20d2  52                   push edx
// 006c20d3  53                   push ebx
// 006c20d4  e877feffff           call 0x6c1f50
// 006c20d9  8b5610               mov edx, dword ptr [esi + 0x10]
// 006c20dc  8bd8                 mov ebx, eax
// 006c20de  8b442420             mov eax, dword ptr [esp + 0x20]
// 006c20e2  50                   push eax
// 006c20e3  8d4e08               lea ecx, [esi + 8]
// 006c20e6  51                   push ecx
// 006c20e7  52                   push edx
// 006c20e8  53                   push ebx
// 006c20e9  e85250f7ff           call 0x637140
// 006c20ee  83c41c               add esp, 0x1c
// 006c20f1  895e10               mov dword ptr [esi + 0x10], ebx
// 006c20f4  8bc7                 mov eax, edi
// 006c20f6  5f                   pop edi
// 006c20f7  5e                   pop esi
// 006c20f8  5d                   pop ebp
// 006c20f9  5b                   pop ebx
// 006c20fa  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$vector@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@V?$_Vector_const_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
