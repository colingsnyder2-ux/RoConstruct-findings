// roc 2007-08 004d1c60  unit: RBX::Render::TextureProxy  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d1c60
//
// 004d1c60  64a100000000         mov eax, dword ptr fs:[0]
// 004d1c66  6aff                 push -1
// 004d1c68  6898657500           push 0x756598
// 004d1c6d  50                   push eax
// 004d1c6e  64892500000000       mov dword ptr fs:[0], esp
// 004d1c75  56                   push esi
// 004d1c76  8bf1                 mov esi, ecx
// 004d1c78  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d1c7c  3b86c8000000         cmp eax, dword ptr [esi + 0xc8]
// 004d1c82  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004d1c8a  751c                 jne 0x4d1ca8
// 004d1c8c  8d8e9c000000         lea ecx, [esi + 0x9c]
// 004d1c92  e8b9662500           call 0x728350
// 004d1c97  8bce                 mov ecx, esi
// 004d1c99  c786c800000000000000 mov dword ptr [esi + 0xc8], 0
// 004d1ca3  e8b8f4ffff           call 0x4d1160
// 004d1ca8  8b742418             mov esi, dword ptr [esp + 0x18]
// 004d1cac  85f6                 test esi, esi
// 004d1cae  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 004d1cb6  742a                 je 0x4d1ce2
// 004d1cb8  8d4e04               lea ecx, [esi + 4]
// 004d1cbb  83caff               or edx, 0xffffffff
// 004d1cbe  f00fc111             lock xadd dword ptr [ecx], edx
// 004d1cc2  751e                 jne 0x4d1ce2
// 004d1cc4  8b06                 mov eax, dword ptr [esi]
// 004d1cc6  8b5004               mov edx, dword ptr [eax + 4]
// 004d1cc9  8bce                 mov ecx, esi
// 004d1ccb  ffd2                 call edx
// 004d1ccd  8d4608               lea eax, [esi + 8]
// 004d1cd0  83c9ff               or ecx, 0xffffffff
// 004d1cd3  f00fc108             lock xadd dword ptr [eax], ecx
// 004d1cd7  7509                 jne 0x4d1ce2
// 004d1cd9  8b16                 mov edx, dword ptr [esi]
// 004d1cdb  8b4208               mov eax, dword ptr [edx + 8]
// 004d1cde  8bce                 mov ecx, esi
// 004d1ce0  ffd0                 call eax
// 004d1ce2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d1ce6  64890d00000000       mov dword ptr fs:[0], ecx
// 004d1ced  5e                   pop esi
// 004d1cee  83c40c               add esp, 0xc
// 004d1cf1  c20800               ret 8
// library rbxgs-view/Part.cpp (function ?onChildRemoved@PartChunk@View@RBX@@AAEXV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view Part.cpp
