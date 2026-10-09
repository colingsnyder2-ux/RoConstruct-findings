// roc 2008-06 00446f20  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00446f20
//
// 00446f20  83ec08               sub esp, 8
// 00446f23  56                   push esi
// 00446f24  8bf1                 mov esi, ecx
// 00446f26  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00446f29  57                   push edi
// 00446f2a  85c9                 test ecx, ecx
// 00446f2c  7504                 jne 0x446f32
// 00446f2e  33c0                 xor eax, eax
// 00446f30  eb08                 jmp 0x446f3a
// 00446f32  8b4614               mov eax, dword ptr [esi + 0x14]
// 00446f35  2bc1                 sub eax, ecx
// 00446f37  c1f802               sar eax, 2
// 00446f3a  8b7e10               mov edi, dword ptr [esi + 0x10]
// 00446f3d  8bd7                 mov edx, edi
// 00446f3f  2bd1                 sub edx, ecx
// 00446f41  c1fa02               sar edx, 2
// 00446f44  3bd0                 cmp edx, eax
// 00446f46  7331                 jae 0x446f79
// 00446f48  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00446f4c  c644240800           mov byte ptr [esp + 8], 0
// 00446f51  8b442408             mov eax, dword ptr [esp + 8]
// 00446f55  50                   push eax
// 00446f56  8b442418             mov eax, dword ptr [esp + 0x18]
// 00446f5a  51                   push ecx
// 00446f5b  8d5608               lea edx, [esi + 8]
// 00446f5e  52                   push edx
// 00446f5f  50                   push eax
// 00446f60  6a01                 push 1
// 00446f62  57                   push edi
// 00446f63  e868611800           call 0x5cd0d0
// 00446f68  83c418               add esp, 0x18
// 00446f6b  83c704               add edi, 4
// 00446f6e  897e10               mov dword ptr [esi + 0x10], edi
// 00446f71  5f                   pop edi
// 00446f72  5e                   pop esi
// 00446f73  83c408               add esp, 8
// 00446f76  c20400               ret 4
// 00446f79  3bcf                 cmp ecx, edi
// 00446f7b  7606                 jbe 0x446f83
// 00446f7d  ff1590288000         call dword ptr [0x802890]
// 00446f83  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00446f87  8b06                 mov eax, dword ptr [esi]
// 00446f89  51                   push ecx
// 00446f8a  57                   push edi
// 00446f8b  50                   push eax
// 00446f8c  8d542414             lea edx, [esp + 0x14]
// 00446f90  52                   push edx
// 00446f91  8bce                 mov ecx, esi
// 00446f93  e818f5ffff           call 0x4464b0
// 00446f98  5f                   pop edi
// 00446f99  5e                   pop esi
// 00446f9a  83c408               add esp, 8
// 00446f9d  c20400               ret 4
// library openrbx-client/App\v8datamodel\Enums.cpp (function ?push_back@?$vector@W4PartType@Part@RBX@@V?$allocator@W4PartType@Part@RBX@@@std@@@std@@QAEXABW4PartType@Part@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
