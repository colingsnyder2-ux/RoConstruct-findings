// roc 2009-06 0060a730  unit: RBX::GlobalSettings  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0060a730
//
// 0060a730  6aff                 push -1
// 0060a732  6838938500           push 0x859338
// 0060a737  64a100000000         mov eax, dword ptr fs:[0]
// 0060a73d  50                   push eax
// 0060a73e  64892500000000       mov dword ptr fs:[0], esp
// 0060a745  83ec08               sub esp, 8
// 0060a748  53                   push ebx
// 0060a749  55                   push ebp
// 0060a74a  56                   push esi
// 0060a74b  57                   push edi
// 0060a74c  8bf9                 mov edi, ecx
// 0060a74e  8d442428             lea eax, [esp + 0x28]
// 0060a752  50                   push eax
// 0060a753  8d4c2414             lea ecx, [esp + 0x14]
// 0060a757  8d7704               lea esi, [edi + 4]
// 0060a75a  51                   push ecx
// 0060a75b  8bce                 mov ecx, esi
// 0060a75d  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0060a765  e826f9ffff           call 0x60a090
// 0060a76a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0060a76e  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0060a771  8b06                 mov eax, dword ptr [esi]
// 0060a773  85db                 test ebx, ebx
// 0060a775  7404                 je 0x60a77b
// 0060a777  3bd8                 cmp ebx, eax
// 0060a779  7406                 je 0x60a781
// 0060a77b  ff15ace98900         call dword ptr [0x89e9ac]
// 0060a781  396c2414             cmp dword ptr [esp + 0x14], ebp
// 0060a785  752f                 jne 0x60a7b6
// 0060a787  8b7f20               mov edi, dword ptr [edi + 0x20]
// 0060a78a  8d542428             lea edx, [esp + 0x28]
// 0060a78e  52                   push edx
// 0060a78f  8bce                 mov ecx, esi
// 0060a791  e88afeffff           call 0x60a620
// 0060a796  8938                 mov dword ptr [eax], edi
// 0060a798  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060a79c  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0060a7a4  85c0                 test eax, eax
// 0060a7a6  7468                 je 0x60a810
// 0060a7a8  8bf0                 mov esi, eax
// 0060a7aa  83c004               add eax, 4
// 0060a7ad  83c9ff               or ecx, 0xffffffff
// 0060a7b0  f00fc108             lock xadd dword ptr [eax], ecx
// 0060a7b4  eb3a                 jmp 0x60a7f0
// 0060a7b6  85db                 test ebx, ebx
// 0060a7b8  756d                 jne 0x60a827
// 0060a7ba  ff15ace98900         call dword ptr [0x89e9ac]
// 0060a7c0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0060a7c4  3b4318               cmp eax, dword ptr [ebx + 0x18]
// 0060a7c7  7506                 jne 0x60a7cf
// 0060a7c9  ff15ace98900         call dword ptr [0x89e9ac]
// 0060a7cf  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0060a7d3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060a7d7  8b7914               mov edi, dword ptr [ecx + 0x14]
// 0060a7da  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0060a7e2  85f6                 test esi, esi
// 0060a7e4  742a                 je 0x60a810
// 0060a7e6  8d5604               lea edx, [esi + 4]
// 0060a7e9  83c8ff               or eax, 0xffffffff
// 0060a7ec  f00fc102             lock xadd dword ptr [edx], eax
// 0060a7f0  751e                 jne 0x60a810
// 0060a7f2  8b16                 mov edx, dword ptr [esi]
// 0060a7f4  8b4204               mov eax, dword ptr [edx + 4]
// 0060a7f7  8bce                 mov ecx, esi
// 0060a7f9  ffd0                 call eax
// 0060a7fb  83caff               or edx, 0xffffffff
// 0060a7fe  8d4e08               lea ecx, [esi + 8]
// 0060a801  f00fc111             lock xadd dword ptr [ecx], edx
// 0060a805  7509                 jne 0x60a810
// 0060a807  8b06                 mov eax, dword ptr [esi]
// 0060a809  8b5008               mov edx, dword ptr [eax + 8]
// 0060a80c  8bce                 mov ecx, esi
// 0060a80e  ffd2                 call edx
// 0060a810  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0060a814  8bc7                 mov eax, edi
// 0060a816  5f                   pop edi
// 0060a817  5e                   pop esi
// 0060a818  5d                   pop ebp
// 0060a819  5b                   pop ebx
// 0060a81a  64890d00000000       mov dword ptr fs:[0], ecx
// 0060a821  83c414               add esp, 0x14
// 0060a824  c20800               ret 8
// 0060a827  8b1b                 mov ebx, dword ptr [ebx]
// 0060a829  eb95                 jmp 0x60a7c0
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?getHandleIndex@XmlWriter@@QAEHVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
