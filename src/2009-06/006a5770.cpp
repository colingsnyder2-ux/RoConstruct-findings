// roc 2009-06 006a5770  unit: RBX::VMouse::?$EventDesc  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a5770
//
// 006a5770  83ec08               sub esp, 8
// 006a5773  56                   push esi
// 006a5774  8bf1                 mov esi, ecx
// 006a5776  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006a5779  57                   push edi
// 006a577a  85c9                 test ecx, ecx
// 006a577c  7504                 jne 0x6a5782
// 006a577e  33c0                 xor eax, eax
// 006a5780  eb08                 jmp 0x6a578a
// 006a5782  8b4614               mov eax, dword ptr [esi + 0x14]
// 006a5785  2bc1                 sub eax, ecx
// 006a5787  c1f802               sar eax, 2
// 006a578a  8b7e10               mov edi, dword ptr [esi + 0x10]
// 006a578d  8bd7                 mov edx, edi
// 006a578f  2bd1                 sub edx, ecx
// 006a5791  c1fa02               sar edx, 2
// 006a5794  3bd0                 cmp edx, eax
// 006a5796  7331                 jae 0x6a57c9
// 006a5798  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006a579c  c644240800           mov byte ptr [esp + 8], 0
// 006a57a1  8b442408             mov eax, dword ptr [esp + 8]
// 006a57a5  50                   push eax
// 006a57a6  8b442418             mov eax, dword ptr [esp + 0x18]
// 006a57aa  51                   push ecx
// 006a57ab  8d5608               lea edx, [esi + 8]
// 006a57ae  52                   push edx
// 006a57af  50                   push eax
// 006a57b0  6a01                 push 1
// 006a57b2  57                   push edi
// 006a57b3  e888add9ff           call 0x440540
// 006a57b8  83c418               add esp, 0x18
// 006a57bb  83c704               add edi, 4
// 006a57be  897e10               mov dword ptr [esi + 0x10], edi
// 006a57c1  5f                   pop edi
// 006a57c2  5e                   pop esi
// 006a57c3  83c408               add esp, 8
// 006a57c6  c20400               ret 4
// 006a57c9  3bcf                 cmp ecx, edi
// 006a57cb  7606                 jbe 0x6a57d3
// 006a57cd  ff15ace98900         call dword ptr [0x89e9ac]
// 006a57d3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006a57d7  8b06                 mov eax, dword ptr [esi]
// 006a57d9  51                   push ecx
// 006a57da  57                   push edi
// 006a57db  50                   push eax
// 006a57dc  8d542414             lea edx, [esp + 0x14]
// 006a57e0  52                   push edx
// 006a57e1  8bce                 mov ecx, esi
// 006a57e3  e8c8feffff           call 0x6a56b0
// 006a57e8  5f                   pop edi
// 006a57e9  5e                   pop esi
// 006a57ea  83c408               add esp, 8
// 006a57ed  c20400               ret 4
// library openrbx-client/App\v8datamodel\Enums.cpp (function ?push_back@?$vector@W4PartType@Part@RBX@@V?$allocator@W4PartType@Part@RBX@@@std@@@std@@QAEXABW4PartType@Part@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
