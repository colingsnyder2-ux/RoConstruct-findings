// roc 2010-06 00542730  unit: RBX::AggregatingSceneManager  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00542730
//
// 00542730  83ec08               sub esp, 8
// 00542733  56                   push esi
// 00542734  8bf1                 mov esi, ecx
// 00542736  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00542739  57                   push edi
// 0054273a  85c9                 test ecx, ecx
// 0054273c  7504                 jne 0x542742
// 0054273e  33c0                 xor eax, eax
// 00542740  eb08                 jmp 0x54274a
// 00542742  8b4614               mov eax, dword ptr [esi + 0x14]
// 00542745  2bc1                 sub eax, ecx
// 00542747  c1f802               sar eax, 2
// 0054274a  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0054274d  8bd7                 mov edx, edi
// 0054274f  2bd1                 sub edx, ecx
// 00542751  c1fa02               sar edx, 2
// 00542754  3bd0                 cmp edx, eax
// 00542756  7331                 jae 0x542789
// 00542758  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0054275c  c644240800           mov byte ptr [esp + 8], 0
// 00542761  8b442408             mov eax, dword ptr [esp + 8]
// 00542765  50                   push eax
// 00542766  8b442418             mov eax, dword ptr [esp + 0x18]
// 0054276a  51                   push ecx
// 0054276b  8d5608               lea edx, [esi + 8]
// 0054276e  52                   push edx
// 0054276f  50                   push eax
// 00542770  6a01                 push 1
// 00542772  57                   push edi
// 00542773  e818dcffff           call 0x540390
// 00542778  83c418               add esp, 0x18
// 0054277b  83c704               add edi, 4
// 0054277e  897e10               mov dword ptr [esi + 0x10], edi
// 00542781  5f                   pop edi
// 00542782  5e                   pop esi
// 00542783  83c408               add esp, 8
// 00542786  c20400               ret 4
// 00542789  3bcf                 cmp ecx, edi
// 0054278b  7606                 jbe 0x542793
// 0054278d  ff150ca99e00         call dword ptr [0x9ea90c]
// 00542793  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00542797  8b06                 mov eax, dword ptr [esi]
// 00542799  51                   push ecx
// 0054279a  57                   push edi
// 0054279b  50                   push eax
// 0054279c  8d542414             lea edx, [esp + 0x14]
// 005427a0  52                   push edx
// 005427a1  8bce                 mov ecx, esi
// 005427a3  e8a8fcffff           call 0x542450
// 005427a8  5f                   pop edi
// 005427a9  5e                   pop esi
// 005427aa  83c408               add esp, 8
// 005427ad  c20400               ret 4
// library openrbx-client/App\v8datamodel\Enums.cpp (function ?push_back@?$vector@W4PartType@Part@RBX@@V?$allocator@W4PartType@Part@RBX@@@std@@@std@@QAEXABW4PartType@Part@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
