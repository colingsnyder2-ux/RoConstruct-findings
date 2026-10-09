// roc 2009-12 007e3ef0  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e3ef0
//
// 007e3ef0  83ec08               sub esp, 8
// 007e3ef3  56                   push esi
// 007e3ef4  8bf1                 mov esi, ecx
// 007e3ef6  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007e3ef9  57                   push edi
// 007e3efa  85c9                 test ecx, ecx
// 007e3efc  7504                 jne 0x7e3f02
// 007e3efe  33c0                 xor eax, eax
// 007e3f00  eb08                 jmp 0x7e3f0a
// 007e3f02  8b4614               mov eax, dword ptr [esi + 0x14]
// 007e3f05  2bc1                 sub eax, ecx
// 007e3f07  c1f802               sar eax, 2
// 007e3f0a  8b7e10               mov edi, dword ptr [esi + 0x10]
// 007e3f0d  8bd7                 mov edx, edi
// 007e3f0f  2bd1                 sub edx, ecx
// 007e3f11  c1fa02               sar edx, 2
// 007e3f14  3bd0                 cmp edx, eax
// 007e3f16  7331                 jae 0x7e3f49
// 007e3f18  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007e3f1c  c644240800           mov byte ptr [esp + 8], 0
// 007e3f21  8b442408             mov eax, dword ptr [esp + 8]
// 007e3f25  50                   push eax
// 007e3f26  8b442418             mov eax, dword ptr [esp + 0x18]
// 007e3f2a  51                   push ecx
// 007e3f2b  8d5608               lea edx, [esi + 8]
// 007e3f2e  52                   push edx
// 007e3f2f  50                   push eax
// 007e3f30  6a01                 push 1
// 007e3f32  57                   push edi
// 007e3f33  e808f0ffff           call 0x7e2f40
// 007e3f38  83c418               add esp, 0x18
// 007e3f3b  83c704               add edi, 4
// 007e3f3e  897e10               mov dword ptr [esi + 0x10], edi
// 007e3f41  5f                   pop edi
// 007e3f42  5e                   pop esi
// 007e3f43  83c408               add esp, 8
// 007e3f46  c20400               ret 4
// 007e3f49  3bcf                 cmp ecx, edi
// 007e3f4b  7606                 jbe 0x7e3f53
// 007e3f4d  ff1560b79800         call dword ptr [0x98b760]
// 007e3f53  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007e3f57  8b06                 mov eax, dword ptr [esi]
// 007e3f59  51                   push ecx
// 007e3f5a  57                   push edi
// 007e3f5b  50                   push eax
// 007e3f5c  8d542414             lea edx, [esp + 0x14]
// 007e3f60  52                   push edx
// 007e3f61  8bce                 mov ecx, esi
// 007e3f63  e8b8fdffff           call 0x7e3d20
// 007e3f68  5f                   pop edi
// 007e3f69  5e                   pop esi
// 007e3f6a  83c408               add esp, 8
// 007e3f6d  c20400               ret 4
// library openrbx-client/App\v8datamodel\Enums.cpp (function ?push_back@?$vector@W4PartType@Part@RBX@@V?$allocator@W4PartType@Part@RBX@@@std@@@std@@QAEXABW4PartType@Part@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
