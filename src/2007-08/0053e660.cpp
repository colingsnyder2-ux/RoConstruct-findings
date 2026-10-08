// roc 2007-08 0053e660  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053e660
//
// 0053e660  64a100000000         mov eax, dword ptr fs:[0]
// 0053e666  6aff                 push -1
// 0053e668  6898657500           push 0x756598
// 0053e66d  50                   push eax
// 0053e66e  64892500000000       mov dword ptr fs:[0], esp
// 0053e675  53                   push ebx
// 0053e676  56                   push esi
// 0053e677  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 0053e67d  8b442418             mov eax, dword ptr [esp + 0x18]
// 0053e681  3bc1                 cmp eax, ecx
// 0053e683  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0053e68b  7504                 jne 0x53e691
// 0053e68d  b301                 mov bl, 1
// 0053e68f  eb10                 jmp 0x53e6a1
// 0053e691  85c9                 test ecx, ecx
// 0053e693  740a                 je 0x53e69f
// 0053e695  50                   push eax
// 0053e696  e8251aeeff           call 0x4200c0
// 0053e69b  8ad8                 mov bl, al
// 0053e69d  eb02                 jmp 0x53e6a1
// 0053e69f  32db                 xor bl, bl
// 0053e6a1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0053e6a5  85f6                 test esi, esi
// 0053e6a7  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0053e6af  742a                 je 0x53e6db
// 0053e6b1  8d4604               lea eax, [esi + 4]
// 0053e6b4  83c9ff               or ecx, 0xffffffff
// 0053e6b7  f00fc108             lock xadd dword ptr [eax], ecx
// 0053e6bb  751e                 jne 0x53e6db
// 0053e6bd  8b16                 mov edx, dword ptr [esi]
// 0053e6bf  8b4204               mov eax, dword ptr [edx + 4]
// 0053e6c2  8bce                 mov ecx, esi
// 0053e6c4  ffd0                 call eax
// 0053e6c6  8d4e08               lea ecx, [esi + 8]
// 0053e6c9  83caff               or edx, 0xffffffff
// 0053e6cc  f00fc111             lock xadd dword ptr [ecx], edx
// 0053e6d0  7509                 jne 0x53e6db
// 0053e6d2  8b06                 mov eax, dword ptr [esi]
// 0053e6d4  8b5008               mov edx, dword ptr [eax + 8]
// 0053e6d7  8bce                 mov ecx, esi
// 0053e6d9  ffd2                 call edx
// 0053e6db  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053e6df  5e                   pop esi
// 0053e6e0  8ac3                 mov al, bl
// 0053e6e2  64890d00000000       mov dword ptr fs:[0], ecx
// 0053e6e9  5b                   pop ebx
// 0053e6ea  83c40c               add esp, 0xc
// 0053e6ed  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?isDescendentOf2@Instance@RBX@@QAE_NV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
