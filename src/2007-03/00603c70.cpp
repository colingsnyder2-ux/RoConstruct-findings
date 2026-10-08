// roc 2007-03 00603c70  unit: seg_00600000  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00603c70
//
// 00603c70  64a100000000         mov eax, dword ptr fs:[0]
// 00603c76  6aff                 push -1
// 00603c78  68a8d57400           push 0x74d5a8
// 00603c7d  50                   push eax
// 00603c7e  64892500000000       mov dword ptr fs:[0], esp
// 00603c85  56                   push esi
// 00603c86  8b442414             mov eax, dword ptr [esp + 0x14]
// 00603c8a  50                   push eax
// 00603c8b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00603c93  e888c1f6ff           call 0x56fe20
// 00603c98  85c0                 test eax, eax
// 00603c9a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00603c9e  7437                 je 0x603cd7
// 00603ca0  8b542418             mov edx, dword ptr [esp + 0x18]
// 00603ca4  d9442420             fld dword ptr [esp + 0x20]
// 00603ca8  83ec0c               sub esp, 0xc
// 00603cab  85f6                 test esi, esi
// 00603cad  d95c2408             fstp dword ptr [esp + 8]
// 00603cb1  8bcc                 mov ecx, esp
// 00603cb3  8911                 mov dword ptr [ecx], edx
// 00603cb5  89642420             mov dword ptr [esp + 0x20], esp
// 00603cb9  897104               mov dword ptr [ecx + 4], esi
// 00603cbc  740c                 je 0x603cca
// 00603cbe  8d4e04               lea ecx, [esi + 4]
// 00603cc1  ba01000000           mov edx, 1
// 00603cc6  f00fc111             lock xadd dword ptr [ecx], edx
// 00603cca  8d4c2420             lea ecx, [esp + 0x20]
// 00603cce  51                   push ecx
// 00603ccf  8d4810               lea ecx, [eax + 0x10]
// 00603cd2  e869fbffff           call 0x603840
// 00603cd7  85f6                 test esi, esi
// 00603cd9  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00603ce1  742a                 je 0x603d0d
// 00603ce3  8d5604               lea edx, [esi + 4]
// 00603ce6  83c8ff               or eax, 0xffffffff
// 00603ce9  f00fc102             lock xadd dword ptr [edx], eax
// 00603ced  751e                 jne 0x603d0d
// 00603cef  8b16                 mov edx, dword ptr [esi]
// 00603cf1  8b4204               mov eax, dword ptr [edx + 4]
// 00603cf4  8bce                 mov ecx, esi
// 00603cf6  ffd0                 call eax
// 00603cf8  8d4e08               lea ecx, [esi + 8]
// 00603cfb  83caff               or edx, 0xffffffff
// 00603cfe  f00fc111             lock xadd dword ptr [ecx], edx
// 00603d02  7509                 jne 0x603d0d
// 00603d04  8b06                 mov eax, dword ptr [esi]
// 00603d06  8b5008               mov edx, dword ptr [eax + 8]
// 00603d09  8bce                 mov ecx, esi
// 00603d0b  ffd2                 call edx
// 00603d0d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00603d11  64890d00000000       mov dword ptr fs:[0], ecx
// 00603d18  5e                   pop esi
// 00603d19  83c40c               add esp, 0xc
// 00603d1c  c21000               ret 0x10
// library rbxgs/v8datamodel\Explosion.cpp (function ?fire@?$SignalDescImpl@$01$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@M@Z@Reflection@RBX@@QAEXPAVSignalSource@23@V?$shared_ptr@VInstance@RBX@@@boost@@M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Explosion.cpp
