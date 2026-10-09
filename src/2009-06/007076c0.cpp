// roc 2009-06 007076c0  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007076c0
//
// 007076c0  83ec08               sub esp, 8
// 007076c3  56                   push esi
// 007076c4  8bf1                 mov esi, ecx
// 007076c6  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007076c9  57                   push edi
// 007076ca  85c9                 test ecx, ecx
// 007076cc  7504                 jne 0x7076d2
// 007076ce  33c0                 xor eax, eax
// 007076d0  eb08                 jmp 0x7076da
// 007076d2  8b4614               mov eax, dword ptr [esi + 0x14]
// 007076d5  2bc1                 sub eax, ecx
// 007076d7  c1f802               sar eax, 2
// 007076da  8b7e10               mov edi, dword ptr [esi + 0x10]
// 007076dd  8bd7                 mov edx, edi
// 007076df  2bd1                 sub edx, ecx
// 007076e1  c1fa02               sar edx, 2
// 007076e4  3bd0                 cmp edx, eax
// 007076e6  7331                 jae 0x707719
// 007076e8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007076ec  c644240800           mov byte ptr [esp + 8], 0
// 007076f1  8b442408             mov eax, dword ptr [esp + 8]
// 007076f5  50                   push eax
// 007076f6  8b442418             mov eax, dword ptr [esp + 0x18]
// 007076fa  51                   push ecx
// 007076fb  8d5608               lea edx, [esi + 8]
// 007076fe  52                   push edx
// 007076ff  50                   push eax
// 00707700  6a01                 push 1
// 00707702  57                   push edi
// 00707703  e808eeffff           call 0x706510
// 00707708  83c418               add esp, 0x18
// 0070770b  83c704               add edi, 4
// 0070770e  897e10               mov dword ptr [esi + 0x10], edi
// 00707711  5f                   pop edi
// 00707712  5e                   pop esi
// 00707713  83c408               add esp, 8
// 00707716  c20400               ret 4
// 00707719  3bcf                 cmp ecx, edi
// 0070771b  7606                 jbe 0x707723
// 0070771d  ff15ace98900         call dword ptr [0x89e9ac]
// 00707723  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00707727  8b06                 mov eax, dword ptr [esi]
// 00707729  51                   push ecx
// 0070772a  57                   push edi
// 0070772b  50                   push eax
// 0070772c  8d542414             lea edx, [esp + 0x14]
// 00707730  52                   push edx
// 00707731  8bce                 mov ecx, esi
// 00707733  e868fdffff           call 0x7074a0
// 00707738  5f                   pop edi
// 00707739  5e                   pop esi
// 0070773a  83c408               add esp, 8
// 0070773d  c20400               ret 4
// library openrbx-client/App\v8datamodel\Enums.cpp (function ?push_back@?$vector@W4PartType@Part@RBX@@V?$allocator@W4PartType@Part@RBX@@@std@@@std@@QAEXABW4PartType@Part@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
