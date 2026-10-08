// roc 2011-06 0065ba10  unit: RBX::ContentProvider::UCachedContent::?$AsyncHttpCache  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0065ba10
//
// 0065ba10  64a100000000         mov eax, dword ptr fs:[0]
// 0065ba16  6aff                 push -1
// 0065ba18  68585f9d00           push 0x9d5f58
// 0065ba1d  50                   push eax
// 0065ba1e  64892500000000       mov dword ptr fs:[0], esp
// 0065ba25  56                   push esi
// 0065ba26  8b442414             mov eax, dword ptr [esp + 0x14]
// 0065ba2a  8d542418             lea edx, [esp + 0x18]
// 0065ba2e  8901                 mov dword ptr [ecx], eax
// 0065ba30  52                   push edx
// 0065ba31  83c104               add ecx, 4
// 0065ba34  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0065ba3c  e81f6bdaff           call 0x402560
// 0065ba41  8b742418             mov esi, dword ptr [esp + 0x18]
// 0065ba45  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0065ba4d  85f6                 test esi, esi
// 0065ba4f  742a                 je 0x65ba7b
// 0065ba51  8d4604               lea eax, [esi + 4]
// 0065ba54  83c9ff               or ecx, 0xffffffff
// 0065ba57  f00fc108             lock xadd dword ptr [eax], ecx
// 0065ba5b  751e                 jne 0x65ba7b
// 0065ba5d  8b16                 mov edx, dword ptr [esi]
// 0065ba5f  8b4204               mov eax, dword ptr [edx + 4]
// 0065ba62  8bce                 mov ecx, esi
// 0065ba64  ffd0                 call eax
// 0065ba66  8d4e08               lea ecx, [esi + 8]
// 0065ba69  83caff               or edx, 0xffffffff
// 0065ba6c  f00fc111             lock xadd dword ptr [ecx], edx
// 0065ba70  7509                 jne 0x65ba7b
// 0065ba72  8b06                 mov eax, dword ptr [esi]
// 0065ba74  8b5008               mov edx, dword ptr [eax + 8]
// 0065ba77  8bce                 mov ecx, esi
// 0065ba79  ffd2                 call edx
// 0065ba7b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0065ba7f  64890d00000000       mov dword ptr fs:[0], ecx
// 0065ba86  5e                   pop esi
// 0065ba87  83c40c               add esp, 0xc
// 0065ba8a  c20800               ret 8
// library rbxgs/util\Handle.cpp (function ?linkTo@InstanceHandle@RBX@@QAEXV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Handle.cpp
