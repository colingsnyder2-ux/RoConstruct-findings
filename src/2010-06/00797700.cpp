// roc 2010-06 00797700  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00797700
//
// 00797700  83ec08               sub esp, 8
// 00797703  56                   push esi
// 00797704  8bf1                 mov esi, ecx
// 00797706  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00797709  57                   push edi
// 0079770a  85c9                 test ecx, ecx
// 0079770c  7504                 jne 0x797712
// 0079770e  33c0                 xor eax, eax
// 00797710  eb08                 jmp 0x79771a
// 00797712  8b4614               mov eax, dword ptr [esi + 0x14]
// 00797715  2bc1                 sub eax, ecx
// 00797717  c1f802               sar eax, 2
// 0079771a  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0079771d  8bd7                 mov edx, edi
// 0079771f  2bd1                 sub edx, ecx
// 00797721  c1fa02               sar edx, 2
// 00797724  3bd0                 cmp edx, eax
// 00797726  7331                 jae 0x797759
// 00797728  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0079772c  c644240800           mov byte ptr [esp + 8], 0
// 00797731  8b442408             mov eax, dword ptr [esp + 8]
// 00797735  50                   push eax
// 00797736  8b442418             mov eax, dword ptr [esp + 0x18]
// 0079773a  51                   push ecx
// 0079773b  8d5608               lea edx, [esi + 8]
// 0079773e  52                   push edx
// 0079773f  50                   push eax
// 00797740  6a01                 push 1
// 00797742  57                   push edi
// 00797743  e8f8eeffff           call 0x796640
// 00797748  83c418               add esp, 0x18
// 0079774b  83c704               add edi, 4
// 0079774e  897e10               mov dword ptr [esi + 0x10], edi
// 00797751  5f                   pop edi
// 00797752  5e                   pop esi
// 00797753  83c408               add esp, 8
// 00797756  c20400               ret 4
// 00797759  3bcf                 cmp ecx, edi
// 0079775b  7606                 jbe 0x797763
// 0079775d  ff150ca99e00         call dword ptr [0x9ea90c]
// 00797763  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00797767  8b06                 mov eax, dword ptr [esi]
// 00797769  51                   push ecx
// 0079776a  57                   push edi
// 0079776b  50                   push eax
// 0079776c  8d542414             lea edx, [esp + 0x14]
// 00797770  52                   push edx
// 00797771  8bce                 mov ecx, esi
// 00797773  e8b8fdffff           call 0x797530
// 00797778  5f                   pop edi
// 00797779  5e                   pop esi
// 0079777a  83c408               add esp, 8
// 0079777d  c20400               ret 4
// library openrbx-client/App\v8datamodel\Enums.cpp (function ?push_back@?$vector@W4PartType@Part@RBX@@V?$allocator@W4PartType@Part@RBX@@@std@@@std@@QAEXABW4PartType@Part@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
