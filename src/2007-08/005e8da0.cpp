// roc 2007-08 005e8da0  unit: RBX::VExplosion::?$FactoryProduct  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e8da0
//
// 005e8da0  64a100000000         mov eax, dword ptr fs:[0]
// 005e8da6  6aff                 push -1
// 005e8da8  68880a7500           push 0x750a88
// 005e8dad  50                   push eax
// 005e8dae  64892500000000       mov dword ptr fs:[0], esp
// 005e8db5  56                   push esi
// 005e8db6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e8dba  50                   push eax
// 005e8dbb  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e8dc3  e8a874f8ff           call 0x570270
// 005e8dc8  85c0                 test eax, eax
// 005e8dca  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005e8dce  7437                 je 0x5e8e07
// 005e8dd0  8b542418             mov edx, dword ptr [esp + 0x18]
// 005e8dd4  d9442420             fld dword ptr [esp + 0x20]
// 005e8dd8  83ec0c               sub esp, 0xc
// 005e8ddb  85f6                 test esi, esi
// 005e8ddd  d95c2408             fstp dword ptr [esp + 8]
// 005e8de1  8bcc                 mov ecx, esp
// 005e8de3  8911                 mov dword ptr [ecx], edx
// 005e8de5  89642420             mov dword ptr [esp + 0x20], esp
// 005e8de9  897104               mov dword ptr [ecx + 4], esi
// 005e8dec  740c                 je 0x5e8dfa
// 005e8dee  8d4e04               lea ecx, [esi + 4]
// 005e8df1  ba01000000           mov edx, 1
// 005e8df6  f00fc111             lock xadd dword ptr [ecx], edx
// 005e8dfa  8d4c2420             lea ecx, [esp + 0x20]
// 005e8dfe  51                   push ecx
// 005e8dff  8d4810               lea ecx, [eax + 0x10]
// 005e8e02  e879fbffff           call 0x5e8980
// 005e8e07  85f6                 test esi, esi
// 005e8e09  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 005e8e11  742a                 je 0x5e8e3d
// 005e8e13  8d5604               lea edx, [esi + 4]
// 005e8e16  83c8ff               or eax, 0xffffffff
// 005e8e19  f00fc102             lock xadd dword ptr [edx], eax
// 005e8e1d  751e                 jne 0x5e8e3d
// 005e8e1f  8b16                 mov edx, dword ptr [esi]
// 005e8e21  8b4204               mov eax, dword ptr [edx + 4]
// 005e8e24  8bce                 mov ecx, esi
// 005e8e26  ffd0                 call eax
// 005e8e28  8d4e08               lea ecx, [esi + 8]
// 005e8e2b  83caff               or edx, 0xffffffff
// 005e8e2e  f00fc111             lock xadd dword ptr [ecx], edx
// 005e8e32  7509                 jne 0x5e8e3d
// 005e8e34  8b06                 mov eax, dword ptr [esi]
// 005e8e36  8b5008               mov edx, dword ptr [eax + 8]
// 005e8e39  8bce                 mov ecx, esi
// 005e8e3b  ffd2                 call edx
// 005e8e3d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e8e41  64890d00000000       mov dword ptr fs:[0], ecx
// 005e8e48  5e                   pop esi
// 005e8e49  83c40c               add esp, 0xc
// 005e8e4c  c21000               ret 0x10
// library rbxgs/v8datamodel\Explosion.cpp (function ?fire@?$SignalDescImpl@$01$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@M@Z@Reflection@RBX@@QAEXPAVSignalSource@23@V?$shared_ptr@VInstance@RBX@@@boost@@M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Explosion.cpp
