// roc 2012-06 0052be40  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0052be40
//
// 0052be40  64a100000000         mov eax, dword ptr fs:[0]
// 0052be46  6aff                 push -1
// 0052be48  680869ab00           push 0xab6908
// 0052be4d  50                   push eax
// 0052be4e  64892500000000       mov dword ptr fs:[0], esp
// 0052be55  56                   push esi
// 0052be56  8bf1                 mov esi, ecx
// 0052be58  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0052be60  e8fb5a1c00           call 0x6f1960
// 0052be65  6a08                 push 8
// 0052be67  e8ae624500           call 0x98211a
// 0052be6c  83c404               add esp, 4
// 0052be6f  85c0                 test eax, eax
// 0052be71  7423                 je 0x52be96
// 0052be73  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052be77  8908                 mov dword ptr [eax], ecx
// 0052be79  8b542418             mov edx, dword ptr [esp + 0x18]
// 0052be7d  895004               mov dword ptr [eax + 4], edx
// 0052be80  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052be84  85c9                 test ecx, ecx
// 0052be86  7414                 je 0x52be9c
// 0052be88  83c104               add ecx, 4
// 0052be8b  ba01000000           mov edx, 1
// 0052be90  f00fc111             lock xadd dword ptr [ecx], edx
// 0052be94  eb02                 jmp 0x52be98
// 0052be96  33c0                 xor eax, eax
// 0052be98  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052be9c  894608               mov dword ptr [esi + 8], eax
// 0052be9f  c7460408000000       mov dword ptr [esi + 4], 8
// 0052bea6  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0052beae  85c9                 test ecx, ecx
// 0052beb0  742c                 je 0x52bede
// 0052beb2  8bf1                 mov esi, ecx
// 0052beb4  83c104               add ecx, 4
// 0052beb7  83c8ff               or eax, 0xffffffff
// 0052beba  f00fc101             lock xadd dword ptr [ecx], eax
// 0052bebe  751e                 jne 0x52bede
// 0052bec0  8b16                 mov edx, dword ptr [esi]
// 0052bec2  8b4204               mov eax, dword ptr [edx + 4]
// 0052bec5  8bce                 mov ecx, esi
// 0052bec7  ffd0                 call eax
// 0052bec9  8d4e08               lea ecx, [esi + 8]
// 0052becc  83caff               or edx, 0xffffffff
// 0052becf  f00fc111             lock xadd dword ptr [ecx], edx
// 0052bed3  7509                 jne 0x52bede
// 0052bed5  8b06                 mov eax, dword ptr [esi]
// 0052bed7  8b5008               mov edx, dword ptr [eax + 8]
// 0052beda  8bce                 mov ecx, esi
// 0052bedc  ffd2                 call edx
// 0052bede  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0052bee2  64890d00000000       mov dword ptr fs:[0], ecx
// 0052bee9  5e                   pop esi
// 0052beea  83c40c               add esp, 0xc
// 0052beed  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?setValue@XmlNameValuePair@@QAEXVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
