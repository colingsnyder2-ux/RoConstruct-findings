// roc 2009-12 00677ba0  unit: RBX::GlobalSettings  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00677ba0
//
// 00677ba0  6aff                 push -1
// 00677ba2  68089a9400           push 0x949a08
// 00677ba7  64a100000000         mov eax, dword ptr fs:[0]
// 00677bad  50                   push eax
// 00677bae  64892500000000       mov dword ptr fs:[0], esp
// 00677bb5  83ec08               sub esp, 8
// 00677bb8  53                   push ebx
// 00677bb9  55                   push ebp
// 00677bba  56                   push esi
// 00677bbb  57                   push edi
// 00677bbc  8bf9                 mov edi, ecx
// 00677bbe  8d442428             lea eax, [esp + 0x28]
// 00677bc2  50                   push eax
// 00677bc3  8d4c2414             lea ecx, [esp + 0x14]
// 00677bc7  8d7704               lea esi, [edi + 4]
// 00677bca  51                   push ecx
// 00677bcb  8bce                 mov ecx, esi
// 00677bcd  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00677bd5  e826f9ffff           call 0x677500
// 00677bda  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00677bde  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00677be1  8b06                 mov eax, dword ptr [esi]
// 00677be3  85db                 test ebx, ebx
// 00677be5  7404                 je 0x677beb
// 00677be7  3bd8                 cmp ebx, eax
// 00677be9  7406                 je 0x677bf1
// 00677beb  ff1560b79800         call dword ptr [0x98b760]
// 00677bf1  396c2414             cmp dword ptr [esp + 0x14], ebp
// 00677bf5  752f                 jne 0x677c26
// 00677bf7  8b7f20               mov edi, dword ptr [edi + 0x20]
// 00677bfa  8d542428             lea edx, [esp + 0x28]
// 00677bfe  52                   push edx
// 00677bff  8bce                 mov ecx, esi
// 00677c01  e88afeffff           call 0x677a90
// 00677c06  8938                 mov dword ptr [eax], edi
// 00677c08  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00677c0c  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00677c14  85c0                 test eax, eax
// 00677c16  7468                 je 0x677c80
// 00677c18  8bf0                 mov esi, eax
// 00677c1a  83c004               add eax, 4
// 00677c1d  83c9ff               or ecx, 0xffffffff
// 00677c20  f00fc108             lock xadd dword ptr [eax], ecx
// 00677c24  eb3a                 jmp 0x677c60
// 00677c26  85db                 test ebx, ebx
// 00677c28  756d                 jne 0x677c97
// 00677c2a  ff1560b79800         call dword ptr [0x98b760]
// 00677c30  8b442414             mov eax, dword ptr [esp + 0x14]
// 00677c34  3b4318               cmp eax, dword ptr [ebx + 0x18]
// 00677c37  7506                 jne 0x677c3f
// 00677c39  ff1560b79800         call dword ptr [0x98b760]
// 00677c3f  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00677c43  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00677c47  8b7914               mov edi, dword ptr [ecx + 0x14]
// 00677c4a  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00677c52  85f6                 test esi, esi
// 00677c54  742a                 je 0x677c80
// 00677c56  8d5604               lea edx, [esi + 4]
// 00677c59  83c8ff               or eax, 0xffffffff
// 00677c5c  f00fc102             lock xadd dword ptr [edx], eax
// 00677c60  751e                 jne 0x677c80
// 00677c62  8b16                 mov edx, dword ptr [esi]
// 00677c64  8b4204               mov eax, dword ptr [edx + 4]
// 00677c67  8bce                 mov ecx, esi
// 00677c69  ffd0                 call eax
// 00677c6b  83caff               or edx, 0xffffffff
// 00677c6e  8d4e08               lea ecx, [esi + 8]
// 00677c71  f00fc111             lock xadd dword ptr [ecx], edx
// 00677c75  7509                 jne 0x677c80
// 00677c77  8b06                 mov eax, dword ptr [esi]
// 00677c79  8b5008               mov edx, dword ptr [eax + 8]
// 00677c7c  8bce                 mov ecx, esi
// 00677c7e  ffd2                 call edx
// 00677c80  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00677c84  8bc7                 mov eax, edi
// 00677c86  5f                   pop edi
// 00677c87  5e                   pop esi
// 00677c88  5d                   pop ebp
// 00677c89  5b                   pop ebx
// 00677c8a  64890d00000000       mov dword ptr fs:[0], ecx
// 00677c91  83c414               add esp, 0x14
// 00677c94  c20800               ret 8
// 00677c97  8b1b                 mov ebx, dword ptr [ebx]
// 00677c99  eb95                 jmp 0x677c30
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?getHandleIndex@XmlWriter@@QAEHVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
