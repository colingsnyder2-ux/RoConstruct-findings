// roc 2009-12 007ee0e0  unit: W4_D3DFORMAT::?$EnumDesc  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ee0e0
//
// 007ee0e0  83ec08               sub esp, 8
// 007ee0e3  56                   push esi
// 007ee0e4  8bf1                 mov esi, ecx
// 007ee0e6  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007ee0e9  57                   push edi
// 007ee0ea  85c9                 test ecx, ecx
// 007ee0ec  7504                 jne 0x7ee0f2
// 007ee0ee  33c0                 xor eax, eax
// 007ee0f0  eb08                 jmp 0x7ee0fa
// 007ee0f2  8b4614               mov eax, dword ptr [esi + 0x14]
// 007ee0f5  2bc1                 sub eax, ecx
// 007ee0f7  c1f802               sar eax, 2
// 007ee0fa  8b7e10               mov edi, dword ptr [esi + 0x10]
// 007ee0fd  8bd7                 mov edx, edi
// 007ee0ff  2bd1                 sub edx, ecx
// 007ee101  c1fa02               sar edx, 2
// 007ee104  3bd0                 cmp edx, eax
// 007ee106  7331                 jae 0x7ee139
// 007ee108  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007ee10c  c644240800           mov byte ptr [esp + 8], 0
// 007ee111  8b442408             mov eax, dword ptr [esp + 8]
// 007ee115  50                   push eax
// 007ee116  8b442418             mov eax, dword ptr [esp + 0x18]
// 007ee11a  51                   push ecx
// 007ee11b  8d5608               lea edx, [esi + 8]
// 007ee11e  52                   push edx
// 007ee11f  50                   push eax
// 007ee120  6a01                 push 1
// 007ee122  57                   push edi
// 007ee123  e8086cc5ff           call 0x444d30
// 007ee128  83c418               add esp, 0x18
// 007ee12b  83c704               add edi, 4
// 007ee12e  897e10               mov dword ptr [esi + 0x10], edi
// 007ee131  5f                   pop edi
// 007ee132  5e                   pop esi
// 007ee133  83c408               add esp, 8
// 007ee136  c20400               ret 4
// 007ee139  3bcf                 cmp ecx, edi
// 007ee13b  7606                 jbe 0x7ee143
// 007ee13d  ff1560b79800         call dword ptr [0x98b760]
// 007ee143  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007ee147  8b06                 mov eax, dword ptr [esi]
// 007ee149  51                   push ecx
// 007ee14a  57                   push edi
// 007ee14b  50                   push eax
// 007ee14c  8d542414             lea edx, [esp + 0x14]
// 007ee150  52                   push edx
// 007ee151  8bce                 mov ecx, esi
// 007ee153  e8c8feffff           call 0x7ee020
// 007ee158  5f                   pop edi
// 007ee159  5e                   pop esi
// 007ee15a  83c408               add esp, 8
// 007ee15d  c20400               ret 4
// library openrbx-client/App\v8datamodel\Enums.cpp (function ?push_back@?$vector@W4PartType@Part@RBX@@V?$allocator@W4PartType@Part@RBX@@@std@@@std@@QAEXABW4PartType@Part@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
