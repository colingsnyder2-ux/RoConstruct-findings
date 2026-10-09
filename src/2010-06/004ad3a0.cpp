// roc 2010-06 004ad3a0  unit: RBX::Reflection::VDescribedBase::V?$shared_ptr::?$holder  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ad3a0
//
// 004ad3a0  64a100000000         mov eax, dword ptr fs:[0]
// 004ad3a6  6aff                 push -1
// 004ad3a8  68a8859a00           push 0x9a85a8
// 004ad3ad  50                   push eax
// 004ad3ae  64892500000000       mov dword ptr fs:[0], esp
// 004ad3b5  56                   push esi
// 004ad3b6  8bf1                 mov esi, ecx
// 004ad3b8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004ad3c0  e86b291300           call 0x5dfd30
// 004ad3c5  6a08                 push 8
// 004ad3c7  e8d4a52f00           call 0x7a79a0
// 004ad3cc  83c404               add esp, 4
// 004ad3cf  85c0                 test eax, eax
// 004ad3d1  7423                 je 0x4ad3f6
// 004ad3d3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ad3d7  8908                 mov dword ptr [eax], ecx
// 004ad3d9  8b542418             mov edx, dword ptr [esp + 0x18]
// 004ad3dd  895004               mov dword ptr [eax + 4], edx
// 004ad3e0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004ad3e4  85c9                 test ecx, ecx
// 004ad3e6  7414                 je 0x4ad3fc
// 004ad3e8  83c104               add ecx, 4
// 004ad3eb  ba01000000           mov edx, 1
// 004ad3f0  f00fc111             lock xadd dword ptr [ecx], edx
// 004ad3f4  eb02                 jmp 0x4ad3f8
// 004ad3f6  33c0                 xor eax, eax
// 004ad3f8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004ad3fc  894608               mov dword ptr [esi + 8], eax
// 004ad3ff  c7460408000000       mov dword ptr [esi + 4], 8
// 004ad406  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 004ad40e  85c9                 test ecx, ecx
// 004ad410  742c                 je 0x4ad43e
// 004ad412  8bf1                 mov esi, ecx
// 004ad414  83c104               add ecx, 4
// 004ad417  83c8ff               or eax, 0xffffffff
// 004ad41a  f00fc101             lock xadd dword ptr [ecx], eax
// 004ad41e  751e                 jne 0x4ad43e
// 004ad420  8b16                 mov edx, dword ptr [esi]
// 004ad422  8b4204               mov eax, dword ptr [edx + 4]
// 004ad425  8bce                 mov ecx, esi
// 004ad427  ffd0                 call eax
// 004ad429  8d4e08               lea ecx, [esi + 8]
// 004ad42c  83caff               or edx, 0xffffffff
// 004ad42f  f00fc111             lock xadd dword ptr [ecx], edx
// 004ad433  7509                 jne 0x4ad43e
// 004ad435  8b06                 mov eax, dword ptr [esi]
// 004ad437  8b5008               mov edx, dword ptr [eax + 8]
// 004ad43a  8bce                 mov ecx, esi
// 004ad43c  ffd2                 call edx
// 004ad43e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ad442  64890d00000000       mov dword ptr fs:[0], ecx
// 004ad449  5e                   pop esi
// 004ad44a  83c40c               add esp, 0xc
// 004ad44d  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?setValue@XmlNameValuePair@@QAEXVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
