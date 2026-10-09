// roc 2010-06 00446ed0  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00446ed0
//
// 00446ed0  83ec08               sub esp, 8
// 00446ed3  56                   push esi
// 00446ed4  8bf1                 mov esi, ecx
// 00446ed6  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00446ed9  57                   push edi
// 00446eda  85c9                 test ecx, ecx
// 00446edc  7504                 jne 0x446ee2
// 00446ede  33c0                 xor eax, eax
// 00446ee0  eb08                 jmp 0x446eea
// 00446ee2  8b4614               mov eax, dword ptr [esi + 0x14]
// 00446ee5  2bc1                 sub eax, ecx
// 00446ee7  c1f802               sar eax, 2
// 00446eea  8b7e10               mov edi, dword ptr [esi + 0x10]
// 00446eed  8bd7                 mov edx, edi
// 00446eef  2bd1                 sub edx, ecx
// 00446ef1  c1fa02               sar edx, 2
// 00446ef4  3bd0                 cmp edx, eax
// 00446ef6  7331                 jae 0x446f29
// 00446ef8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00446efc  c644240800           mov byte ptr [esp + 8], 0
// 00446f01  8b442408             mov eax, dword ptr [esp + 8]
// 00446f05  50                   push eax
// 00446f06  8b442418             mov eax, dword ptr [esp + 0x18]
// 00446f0a  51                   push ecx
// 00446f0b  8d5608               lea edx, [esi + 8]
// 00446f0e  52                   push edx
// 00446f0f  50                   push eax
// 00446f10  6a01                 push 1
// 00446f12  57                   push edi
// 00446f13  e8f8322c00           call 0x70a210
// 00446f18  83c418               add esp, 0x18
// 00446f1b  83c704               add edi, 4
// 00446f1e  897e10               mov dword ptr [esi + 0x10], edi
// 00446f21  5f                   pop edi
// 00446f22  5e                   pop esi
// 00446f23  83c408               add esp, 8
// 00446f26  c20400               ret 4
// 00446f29  3bcf                 cmp ecx, edi
// 00446f2b  7606                 jbe 0x446f33
// 00446f2d  ff150ca99e00         call dword ptr [0x9ea90c]
// 00446f33  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00446f37  8b06                 mov eax, dword ptr [esi]
// 00446f39  51                   push ecx
// 00446f3a  57                   push edi
// 00446f3b  50                   push eax
// 00446f3c  8d542414             lea edx, [esp + 0x14]
// 00446f40  52                   push edx
// 00446f41  8bce                 mov ecx, esi
// 00446f43  e888fcffff           call 0x446bd0
// 00446f48  5f                   pop edi
// 00446f49  5e                   pop esi
// 00446f4a  83c408               add esp, 8
// 00446f4d  c20400               ret 4
// library openrbx-client/App\v8datamodel\Enums.cpp (function ?push_back@?$vector@W4PartType@Part@RBX@@V?$allocator@W4PartType@Part@RBX@@@std@@@std@@QAEXABW4PartType@Part@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
