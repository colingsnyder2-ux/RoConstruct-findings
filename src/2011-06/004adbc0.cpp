// roc 2011-06 004adbc0  unit: RBX::Network::Player::W4ChatMode::?$EnumDesc  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004adbc0
//
// 004adbc0  64a100000000         mov eax, dword ptr fs:[0]
// 004adbc6  6aff                 push -1
// 004adbc8  68585f9d00           push 0x9d5f58
// 004adbcd  50                   push eax
// 004adbce  64892500000000       mov dword ptr fs:[0], esp
// 004adbd5  56                   push esi
// 004adbd6  8bf1                 mov esi, ecx
// 004adbd8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004adbe0  e8cb4e1500           call 0x602ab0
// 004adbe5  6a08                 push 8
// 004adbe7  e872c43500           call 0x80a05e
// 004adbec  83c404               add esp, 4
// 004adbef  85c0                 test eax, eax
// 004adbf1  7423                 je 0x4adc16
// 004adbf3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004adbf7  8908                 mov dword ptr [eax], ecx
// 004adbf9  8b542418             mov edx, dword ptr [esp + 0x18]
// 004adbfd  895004               mov dword ptr [eax + 4], edx
// 004adc00  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004adc04  85c9                 test ecx, ecx
// 004adc06  7414                 je 0x4adc1c
// 004adc08  83c104               add ecx, 4
// 004adc0b  ba01000000           mov edx, 1
// 004adc10  f00fc111             lock xadd dword ptr [ecx], edx
// 004adc14  eb02                 jmp 0x4adc18
// 004adc16  33c0                 xor eax, eax
// 004adc18  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004adc1c  894608               mov dword ptr [esi + 8], eax
// 004adc1f  c7460408000000       mov dword ptr [esi + 4], 8
// 004adc26  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 004adc2e  85c9                 test ecx, ecx
// 004adc30  742c                 je 0x4adc5e
// 004adc32  8bf1                 mov esi, ecx
// 004adc34  83c104               add ecx, 4
// 004adc37  83c8ff               or eax, 0xffffffff
// 004adc3a  f00fc101             lock xadd dword ptr [ecx], eax
// 004adc3e  751e                 jne 0x4adc5e
// 004adc40  8b16                 mov edx, dword ptr [esi]
// 004adc42  8b4204               mov eax, dword ptr [edx + 4]
// 004adc45  8bce                 mov ecx, esi
// 004adc47  ffd0                 call eax
// 004adc49  8d4e08               lea ecx, [esi + 8]
// 004adc4c  83caff               or edx, 0xffffffff
// 004adc4f  f00fc111             lock xadd dword ptr [ecx], edx
// 004adc53  7509                 jne 0x4adc5e
// 004adc55  8b06                 mov eax, dword ptr [esi]
// 004adc57  8b5008               mov edx, dword ptr [eax + 8]
// 004adc5a  8bce                 mov ecx, esi
// 004adc5c  ffd2                 call edx
// 004adc5e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004adc62  64890d00000000       mov dword ptr fs:[0], ecx
// 004adc69  5e                   pop esi
// 004adc6a  83c40c               add esp, 0xc
// 004adc6d  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?setValue@XmlNameValuePair@@QAEXVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
