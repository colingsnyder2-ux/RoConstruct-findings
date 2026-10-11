// roc 2009-06 0069e4b0  unit: RBX::VLocalBackpack::?$FactoryProduct  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0069e4b0
//
// 0069e4b0  83ec08               sub esp, 8
// 0069e4b3  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0069e4b7  56                   push esi
// 0069e4b8  57                   push edi
// 0069e4b9  8bf1                 mov esi, ecx
// 0069e4bb  c644240800           mov byte ptr [esp + 8], 0
// 0069e4c0  8b442408             mov eax, dword ptr [esp + 8]
// 0069e4c4  50                   push eax
// 0069e4c5  8b442420             mov eax, dword ptr [esp + 0x20]
// 0069e4c9  c644241000           mov byte ptr [esp + 0x10], 0
// 0069e4ce  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0069e4d2  51                   push ecx
// 0069e4d3  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0069e4d6  52                   push edx
// 0069e4d7  50                   push eax
// 0069e4d8  51                   push ecx
// 0069e4d9  83c008               add eax, 8
// 0069e4dc  50                   push eax
// 0069e4dd  e8ae18d7ff           call 0x40fd90
// 0069e4e2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0069e4e6  8b4610               mov eax, dword ptr [esi + 0x10]
// 0069e4e9  52                   push edx
// 0069e4ea  8d4e08               lea ecx, [esi + 8]
// 0069e4ed  51                   push ecx
// 0069e4ee  50                   push eax
// 0069e4ef  83c0f8               add eax, -8
// 0069e4f2  50                   push eax
// 0069e4f3  e8a887f9ff           call 0x636ca0
// 0069e4f8  834610f8             add dword ptr [esi + 0x10], -8
// 0069e4fc  8b442444             mov eax, dword ptr [esp + 0x44]
// 0069e500  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0069e504  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0069e507  83c428               add esp, 0x28
// 0069e50a  c70700000000         mov dword ptr [edi], 0
// 0069e510  39460c               cmp dword ptr [esi + 0xc], eax
// 0069e513  7704                 ja 0x69e519
// 0069e515  3bc1                 cmp eax, ecx
// 0069e517  760a                 jbe 0x69e523
// 0069e519  ff15ace98900         call dword ptr [0x89e9ac]
// 0069e51f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0069e523  8b16                 mov edx, dword ptr [esi]
// 0069e525  894704               mov dword ptr [edi + 4], eax
// 0069e528  8917                 mov dword ptr [edi], edx
// 0069e52a  8bc7                 mov eax, edi
// 0069e52c  5f                   pop edi
// 0069e52d  5e                   pop esi
// 0069e52e  83c408               add esp, 8
// 0069e531  c20c00               ret 0xc
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?erase@?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Selection.cpp
