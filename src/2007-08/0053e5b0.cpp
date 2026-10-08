// roc 2007-08 0053e5b0  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053e5b0
//
// 0053e5b0  64a100000000         mov eax, dword ptr fs:[0]
// 0053e5b6  6aff                 push -1
// 0053e5b8  68880a7500           push 0x750a88
// 0053e5bd  50                   push eax
// 0053e5be  64892500000000       mov dword ptr fs:[0], esp
// 0053e5c5  56                   push esi
// 0053e5c6  57                   push edi
// 0053e5c7  8bf9                 mov edi, ecx
// 0053e5c9  8b442418             mov eax, dword ptr [esp + 0x18]
// 0053e5cd  6a08                 push 8
// 0053e5cf  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0053e5d7  8907                 mov dword ptr [edi], eax
// 0053e5d9  c7470408000000       mov dword ptr [edi + 4], 8
// 0053e5e0  e811190f00           call 0x62fef6
// 0053e5e5  8b742424             mov esi, dword ptr [esp + 0x24]
// 0053e5e9  83c404               add esp, 4
// 0053e5ec  85c0                 test eax, eax
// 0053e5ee  741b                 je 0x53e60b
// 0053e5f0  85f6                 test esi, esi
// 0053e5f2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0053e5f6  8908                 mov dword ptr [eax], ecx
// 0053e5f8  897004               mov dword ptr [eax + 4], esi
// 0053e5fb  7410                 je 0x53e60d
// 0053e5fd  8d5604               lea edx, [esi + 4]
// 0053e600  b901000000           mov ecx, 1
// 0053e605  f00fc10a             lock xadd dword ptr [edx], ecx
// 0053e609  eb02                 jmp 0x53e60d
// 0053e60b  33c0                 xor eax, eax
// 0053e60d  85f6                 test esi, esi
// 0053e60f  894708               mov dword ptr [edi + 8], eax
// 0053e612  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0053e61a  742a                 je 0x53e646
// 0053e61c  8d5604               lea edx, [esi + 4]
// 0053e61f  83c8ff               or eax, 0xffffffff
// 0053e622  f00fc102             lock xadd dword ptr [edx], eax
// 0053e626  751e                 jne 0x53e646
// 0053e628  8b16                 mov edx, dword ptr [esi]
// 0053e62a  8b4204               mov eax, dword ptr [edx + 4]
// 0053e62d  8bce                 mov ecx, esi
// 0053e62f  ffd0                 call eax
// 0053e631  8d4e08               lea ecx, [esi + 8]
// 0053e634  83caff               or edx, 0xffffffff
// 0053e637  f00fc111             lock xadd dword ptr [ecx], edx
// 0053e63b  7509                 jne 0x53e646
// 0053e63d  8b06                 mov eax, dword ptr [esi]
// 0053e63f  8b5008               mov edx, dword ptr [eax + 8]
// 0053e642  8bce                 mov ecx, esi
// 0053e644  ffd2                 call edx
// 0053e646  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053e64a  8bc7                 mov eax, edi
// 0053e64c  5f                   pop edi
// 0053e64d  64890d00000000       mov dword ptr fs:[0], ecx
// 0053e654  5e                   pop esi
// 0053e655  83c40c               add esp, 0xc
// 0053e658  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ??0XmlNameValuePair@@QAE@ABVName@RBX@@VInstanceHandle@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
