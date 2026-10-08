// roc 2010-06 00540c60  unit: RBX::AggregatingSceneManager  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00540c60
//
// 00540c60  83ec08               sub esp, 8
// 00540c63  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00540c67  56                   push esi
// 00540c68  57                   push edi
// 00540c69  8bf1                 mov esi, ecx
// 00540c6b  c644240800           mov byte ptr [esp + 8], 0
// 00540c70  8b442408             mov eax, dword ptr [esp + 8]
// 00540c74  50                   push eax
// 00540c75  8b442420             mov eax, dword ptr [esp + 0x20]
// 00540c79  c644241000           mov byte ptr [esp + 0x10], 0
// 00540c7e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00540c82  51                   push ecx
// 00540c83  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00540c86  52                   push edx
// 00540c87  50                   push eax
// 00540c88  51                   push ecx
// 00540c89  83c004               add eax, 4
// 00540c8c  50                   push eax
// 00540c8d  e8deebffff           call 0x53f870
// 00540c92  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00540c96  8b4610               mov eax, dword ptr [esi + 0x10]
// 00540c99  52                   push edx
// 00540c9a  8d4e08               lea ecx, [esi + 8]
// 00540c9d  51                   push ecx
// 00540c9e  50                   push eax
// 00540c9f  83c0fc               add eax, -4
// 00540ca2  50                   push eax
// 00540ca3  e878f6ffff           call 0x540320
// 00540ca8  834610fc             add dword ptr [esi + 0x10], -4
// 00540cac  8b442444             mov eax, dword ptr [esp + 0x44]
// 00540cb0  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00540cb4  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00540cb7  83c428               add esp, 0x28
// 00540cba  c70700000000         mov dword ptr [edi], 0
// 00540cc0  39460c               cmp dword ptr [esi + 0xc], eax
// 00540cc3  7704                 ja 0x540cc9
// 00540cc5  3bc1                 cmp eax, ecx
// 00540cc7  760a                 jbe 0x540cd3
// 00540cc9  ff150ca99e00         call dword ptr [0x9ea90c]
// 00540ccf  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00540cd3  8b16                 mov edx, dword ptr [esi]
// 00540cd5  894704               mov dword ptr [edi + 4], eax
// 00540cd8  8917                 mov dword ptr [edi], edx
// 00540cda  8bc7                 mov eax, edi
// 00540cdc  5f                   pop edi
// 00540cdd  5e                   pop esi
// 00540cde  83c408               add esp, 8
// 00540ce1  c20c00               ret 0xc
// library rbxgs-render/AggregatingSceneManager.cpp (function ?erase@?$vector@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@2@V?$_Vector_const_iterator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
