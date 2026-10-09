// roc 2009-06 007129e0  unit: W4_D3DFORMAT::?$EnumDesc  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007129e0
//
// 007129e0  83ec08               sub esp, 8
// 007129e3  56                   push esi
// 007129e4  8bf1                 mov esi, ecx
// 007129e6  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007129e9  57                   push edi
// 007129ea  85c9                 test ecx, ecx
// 007129ec  7504                 jne 0x7129f2
// 007129ee  33c0                 xor eax, eax
// 007129f0  eb08                 jmp 0x7129fa
// 007129f2  8b4614               mov eax, dword ptr [esi + 0x14]
// 007129f5  2bc1                 sub eax, ecx
// 007129f7  c1f802               sar eax, 2
// 007129fa  8b7e10               mov edi, dword ptr [esi + 0x10]
// 007129fd  8bd7                 mov edx, edi
// 007129ff  2bd1                 sub edx, ecx
// 00712a01  c1fa02               sar edx, 2
// 00712a04  3bd0                 cmp edx, eax
// 00712a06  7331                 jae 0x712a39
// 00712a08  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00712a0c  c644240800           mov byte ptr [esp + 8], 0
// 00712a11  8b442408             mov eax, dword ptr [esp + 8]
// 00712a15  50                   push eax
// 00712a16  8b442418             mov eax, dword ptr [esp + 0x18]
// 00712a1a  51                   push ecx
// 00712a1b  8d5608               lea edx, [esi + 8]
// 00712a1e  52                   push edx
// 00712a1f  50                   push eax
// 00712a20  6a01                 push 1
// 00712a22  57                   push edi
// 00712a23  e818dbd2ff           call 0x440540
// 00712a28  83c418               add esp, 0x18
// 00712a2b  83c704               add edi, 4
// 00712a2e  897e10               mov dword ptr [esi + 0x10], edi
// 00712a31  5f                   pop edi
// 00712a32  5e                   pop esi
// 00712a33  83c408               add esp, 8
// 00712a36  c20400               ret 4
// 00712a39  3bcf                 cmp ecx, edi
// 00712a3b  7606                 jbe 0x712a43
// 00712a3d  ff15ace98900         call dword ptr [0x89e9ac]
// 00712a43  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00712a47  8b06                 mov eax, dword ptr [esi]
// 00712a49  51                   push ecx
// 00712a4a  57                   push edi
// 00712a4b  50                   push eax
// 00712a4c  8d542414             lea edx, [esp + 0x14]
// 00712a50  52                   push edx
// 00712a51  8bce                 mov ecx, esi
// 00712a53  e8c8feffff           call 0x712920
// 00712a58  5f                   pop edi
// 00712a59  5e                   pop esi
// 00712a5a  83c408               add esp, 8
// 00712a5d  c20400               ret 4
// library openrbx-client/App\v8datamodel\Enums.cpp (function ?push_back@?$vector@W4PartType@Part@RBX@@V?$allocator@W4PartType@Part@RBX@@@std@@@std@@QAEXABW4PartType@Part@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
