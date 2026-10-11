// roc 2009-12 00750190  unit: RBX::VLocalBackpack::?$FactoryProduct  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00750190
//
// 00750190  83ec08               sub esp, 8
// 00750193  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00750197  56                   push esi
// 00750198  57                   push edi
// 00750199  8bf1                 mov esi, ecx
// 0075019b  c644240800           mov byte ptr [esp + 8], 0
// 007501a0  8b442408             mov eax, dword ptr [esp + 8]
// 007501a4  50                   push eax
// 007501a5  8b442420             mov eax, dword ptr [esp + 0x20]
// 007501a9  c644241000           mov byte ptr [esp + 0x10], 0
// 007501ae  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007501b2  51                   push ecx
// 007501b3  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007501b6  52                   push edx
// 007501b7  50                   push eax
// 007501b8  51                   push ecx
// 007501b9  83c008               add eax, 8
// 007501bc  50                   push eax
// 007501bd  e85e19f5ff           call 0x6a1b20
// 007501c2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007501c6  8b4610               mov eax, dword ptr [esi + 0x10]
// 007501c9  52                   push edx
// 007501ca  8d4e08               lea ecx, [esi + 8]
// 007501cd  51                   push ecx
// 007501ce  50                   push eax
// 007501cf  83c0f8               add eax, -8
// 007501d2  50                   push eax
// 007501d3  e8c834d7ff           call 0x4c36a0
// 007501d8  834610f8             add dword ptr [esi + 0x10], -8
// 007501dc  8b442444             mov eax, dword ptr [esp + 0x44]
// 007501e0  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 007501e4  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007501e7  83c428               add esp, 0x28
// 007501ea  c70700000000         mov dword ptr [edi], 0
// 007501f0  39460c               cmp dword ptr [esi + 0xc], eax
// 007501f3  7704                 ja 0x7501f9
// 007501f5  3bc1                 cmp eax, ecx
// 007501f7  760a                 jbe 0x750203
// 007501f9  ff1560b79800         call dword ptr [0x98b760]
// 007501ff  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00750203  8b16                 mov edx, dword ptr [esi]
// 00750205  894704               mov dword ptr [edi + 4], eax
// 00750208  8917                 mov dword ptr [edi], edx
// 0075020a  8bc7                 mov eax, edi
// 0075020c  5f                   pop edi
// 0075020d  5e                   pop esi
// 0075020e  83c408               add esp, 8
// 00750211  c20c00               ret 0xc
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?erase@?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Selection.cpp
