// roc 2007-08 0058d690  unit: RBX::SoundService  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058d690
//
// 0058d690  64a100000000         mov eax, dword ptr fs:[0]
// 0058d696  6aff                 push -1
// 0058d698  6898657500           push 0x756598
// 0058d69d  50                   push eax
// 0058d69e  64892500000000       mov dword ptr fs:[0], esp
// 0058d6a5  56                   push esi
// 0058d6a6  8b442414             mov eax, dword ptr [esp + 0x14]
// 0058d6aa  8d542418             lea edx, [esp + 0x18]
// 0058d6ae  8901                 mov dword ptr [ecx], eax
// 0058d6b0  52                   push edx
// 0058d6b1  83c104               add ecx, 4
// 0058d6b4  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058d6bc  e89f53e7ff           call 0x402a60
// 0058d6c1  8b742418             mov esi, dword ptr [esp + 0x18]
// 0058d6c5  85f6                 test esi, esi
// 0058d6c7  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0058d6cf  742a                 je 0x58d6fb
// 0058d6d1  8d4604               lea eax, [esi + 4]
// 0058d6d4  83c9ff               or ecx, 0xffffffff
// 0058d6d7  f00fc108             lock xadd dword ptr [eax], ecx
// 0058d6db  751e                 jne 0x58d6fb
// 0058d6dd  8b16                 mov edx, dword ptr [esi]
// 0058d6df  8b4204               mov eax, dword ptr [edx + 4]
// 0058d6e2  8bce                 mov ecx, esi
// 0058d6e4  ffd0                 call eax
// 0058d6e6  8d4e08               lea ecx, [esi + 8]
// 0058d6e9  83caff               or edx, 0xffffffff
// 0058d6ec  f00fc111             lock xadd dword ptr [ecx], edx
// 0058d6f0  7509                 jne 0x58d6fb
// 0058d6f2  8b06                 mov eax, dword ptr [esi]
// 0058d6f4  8b5008               mov edx, dword ptr [eax + 8]
// 0058d6f7  8bce                 mov ecx, esi
// 0058d6f9  ffd2                 call edx
// 0058d6fb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0058d6ff  64890d00000000       mov dword ptr fs:[0], ecx
// 0058d706  5e                   pop esi
// 0058d707  83c40c               add esp, 0xc
// 0058d70a  c20800               ret 8
// library rbxgs/util\Handle.cpp (function ?linkTo@InstanceHandle@RBX@@QAEXV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Handle.cpp
