// roc 2010-06 005e0990  unit: RBX::GlobalSettings  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e0990
//
// 005e0990  6aff                 push -1
// 005e0992  68a8859a00           push 0x9a85a8
// 005e0997  64a100000000         mov eax, dword ptr fs:[0]
// 005e099d  50                   push eax
// 005e099e  64892500000000       mov dword ptr fs:[0], esp
// 005e09a5  83ec08               sub esp, 8
// 005e09a8  53                   push ebx
// 005e09a9  55                   push ebp
// 005e09aa  56                   push esi
// 005e09ab  57                   push edi
// 005e09ac  8bf9                 mov edi, ecx
// 005e09ae  8d442428             lea eax, [esp + 0x28]
// 005e09b2  50                   push eax
// 005e09b3  8d4c2414             lea ecx, [esp + 0x14]
// 005e09b7  8d7704               lea esi, [edi + 4]
// 005e09ba  51                   push ecx
// 005e09bb  8bce                 mov ecx, esi
// 005e09bd  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005e09c5  e826f9ffff           call 0x5e02f0
// 005e09ca  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005e09ce  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 005e09d1  8b06                 mov eax, dword ptr [esi]
// 005e09d3  85db                 test ebx, ebx
// 005e09d5  7404                 je 0x5e09db
// 005e09d7  3bd8                 cmp ebx, eax
// 005e09d9  7406                 je 0x5e09e1
// 005e09db  ff150ca99e00         call dword ptr [0x9ea90c]
// 005e09e1  396c2414             cmp dword ptr [esp + 0x14], ebp
// 005e09e5  752f                 jne 0x5e0a16
// 005e09e7  8b7f20               mov edi, dword ptr [edi + 0x20]
// 005e09ea  8d542428             lea edx, [esp + 0x28]
// 005e09ee  52                   push edx
// 005e09ef  8bce                 mov ecx, esi
// 005e09f1  e88afeffff           call 0x5e0880
// 005e09f6  8938                 mov dword ptr [eax], edi
// 005e09f8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e09fc  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 005e0a04  85c0                 test eax, eax
// 005e0a06  7468                 je 0x5e0a70
// 005e0a08  8bf0                 mov esi, eax
// 005e0a0a  83c004               add eax, 4
// 005e0a0d  83c9ff               or ecx, 0xffffffff
// 005e0a10  f00fc108             lock xadd dword ptr [eax], ecx
// 005e0a14  eb3a                 jmp 0x5e0a50
// 005e0a16  85db                 test ebx, ebx
// 005e0a18  756d                 jne 0x5e0a87
// 005e0a1a  ff150ca99e00         call dword ptr [0x9ea90c]
// 005e0a20  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e0a24  3b4318               cmp eax, dword ptr [ebx + 0x18]
// 005e0a27  7506                 jne 0x5e0a2f
// 005e0a29  ff150ca99e00         call dword ptr [0x9ea90c]
// 005e0a2f  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005e0a33  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e0a37  8b7914               mov edi, dword ptr [ecx + 0x14]
// 005e0a3a  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 005e0a42  85f6                 test esi, esi
// 005e0a44  742a                 je 0x5e0a70
// 005e0a46  8d5604               lea edx, [esi + 4]
// 005e0a49  83c8ff               or eax, 0xffffffff
// 005e0a4c  f00fc102             lock xadd dword ptr [edx], eax
// 005e0a50  751e                 jne 0x5e0a70
// 005e0a52  8b16                 mov edx, dword ptr [esi]
// 005e0a54  8b4204               mov eax, dword ptr [edx + 4]
// 005e0a57  8bce                 mov ecx, esi
// 005e0a59  ffd0                 call eax
// 005e0a5b  83caff               or edx, 0xffffffff
// 005e0a5e  8d4e08               lea ecx, [esi + 8]
// 005e0a61  f00fc111             lock xadd dword ptr [ecx], edx
// 005e0a65  7509                 jne 0x5e0a70
// 005e0a67  8b06                 mov eax, dword ptr [esi]
// 005e0a69  8b5008               mov edx, dword ptr [eax + 8]
// 005e0a6c  8bce                 mov ecx, esi
// 005e0a6e  ffd2                 call edx
// 005e0a70  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005e0a74  8bc7                 mov eax, edi
// 005e0a76  5f                   pop edi
// 005e0a77  5e                   pop esi
// 005e0a78  5d                   pop ebp
// 005e0a79  5b                   pop ebx
// 005e0a7a  64890d00000000       mov dword ptr fs:[0], ecx
// 005e0a81  83c414               add esp, 0x14
// 005e0a84  c20800               ret 8
// 005e0a87  8b1b                 mov ebx, dword ptr [ebx]
// 005e0a89  eb95                 jmp 0x5e0a20
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?getHandleIndex@XmlWriter@@QAEHVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
