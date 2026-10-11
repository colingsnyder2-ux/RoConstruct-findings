// roc 2008-06 00620e80  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00620e80
//
// 00620e80  53                   push ebx
// 00620e81  55                   push ebp
// 00620e82  8b2d90288000         mov ebp, dword ptr [0x802890]
// 00620e88  56                   push esi
// 00620e89  57                   push edi
// 00620e8a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00620e8e  8bf1                 mov esi, ecx
// 00620e90  c70700000000         mov dword ptr [edi], 0
// 00620e96  85f6                 test esi, esi
// 00620e98  740e                 je 0x620ea8
// 00620e9a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00620e9e  39460c               cmp dword ptr [esi + 0xc], eax
// 00620ea1  7705                 ja 0x620ea8
// 00620ea3  3b4610               cmp eax, dword ptr [esi + 0x10]
// 00620ea6  7606                 jbe 0x620eae
// 00620ea8  ffd5                 call ebp
// 00620eaa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00620eae  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00620eb2  8b0e                 mov ecx, dword ptr [esi]
// 00620eb4  890f                 mov dword ptr [edi], ecx
// 00620eb6  894704               mov dword ptr [edi + 4], eax
// 00620eb9  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00620ebc  7705                 ja 0x620ec3
// 00620ebe  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 00620ec1  7606                 jbe 0x620ec9
// 00620ec3  ffd5                 call ebp
// 00620ec5  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00620ec9  8b07                 mov eax, dword ptr [edi]
// 00620ecb  8b0e                 mov ecx, dword ptr [esi]
// 00620ecd  85c0                 test eax, eax
// 00620ecf  7404                 je 0x620ed5
// 00620ed1  3bc1                 cmp eax, ecx
// 00620ed3  7402                 je 0x620ed7
// 00620ed5  ffd5                 call ebp
// 00620ed7  8b4704               mov eax, dword ptr [edi + 4]
// 00620eda  3bc3                 cmp eax, ebx
// 00620edc  7426                 je 0x620f04
// 00620ede  8b5610               mov edx, dword ptr [esi + 0x10]
// 00620ee1  50                   push eax
// 00620ee2  52                   push edx
// 00620ee3  53                   push ebx
// 00620ee4  e877feffff           call 0x620d60
// 00620ee9  8b5610               mov edx, dword ptr [esi + 0x10]
// 00620eec  8bd8                 mov ebx, eax
// 00620eee  8b442420             mov eax, dword ptr [esp + 0x20]
// 00620ef2  50                   push eax
// 00620ef3  8d4e08               lea ecx, [esi + 8]
// 00620ef6  51                   push ecx
// 00620ef7  52                   push edx
// 00620ef8  53                   push ebx
// 00620ef9  e802bbf8ff           call 0x5aca00
// 00620efe  83c41c               add esp, 0x1c
// 00620f01  895e10               mov dword ptr [esi + 0x10], ebx
// 00620f04  8bc7                 mov eax, edi
// 00620f06  5f                   pop edi
// 00620f07  5e                   pop esi
// 00620f08  5d                   pop ebp
// 00620f09  5b                   pop ebx
// 00620f0a  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$vector@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@V?$_Vector_const_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
