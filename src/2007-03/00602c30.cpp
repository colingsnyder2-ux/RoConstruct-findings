// roc 2007-03 00602c30  unit: seg_00600000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00602c30
//
// 00602c30  8b442404             mov eax, dword ptr [esp + 4]
// 00602c34  56                   push esi
// 00602c35  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00602c39  85f6                 test esi, esi
// 00602c3b  57                   push edi
// 00602c3c  8bf9                 mov edi, ecx
// 00602c3e  8907                 mov dword ptr [edi], eax
// 00602c40  897704               mov dword ptr [edi + 4], esi
// 00602c43  740c                 je 0x602c51
// 00602c45  8d4e04               lea ecx, [esi + 4]
// 00602c48  ba01000000           mov edx, 1
// 00602c4d  f00fc111             lock xadd dword ptr [ecx], edx
// 00602c51  85f6                 test esi, esi
// 00602c53  d9442414             fld dword ptr [esp + 0x14]
// 00602c57  d95f08               fstp dword ptr [edi + 8]
// 00602c5a  742a                 je 0x602c86
// 00602c5c  8d4604               lea eax, [esi + 4]
// 00602c5f  83c9ff               or ecx, 0xffffffff
// 00602c62  f00fc108             lock xadd dword ptr [eax], ecx
// 00602c66  751e                 jne 0x602c86
// 00602c68  8b16                 mov edx, dword ptr [esi]
// 00602c6a  8b4204               mov eax, dword ptr [edx + 4]
// 00602c6d  8bce                 mov ecx, esi
// 00602c6f  ffd0                 call eax
// 00602c71  8d4e08               lea ecx, [esi + 8]
// 00602c74  83caff               or edx, 0xffffffff
// 00602c77  f00fc111             lock xadd dword ptr [ecx], edx
// 00602c7b  7509                 jne 0x602c86
// 00602c7d  8b06                 mov eax, dword ptr [esi]
// 00602c7f  8b5008               mov edx, dword ptr [eax + 8]
// 00602c82  8bce                 mov ecx, esi
// 00602c84  ffd2                 call edx
// 00602c86  8bc7                 mov eax, edi
// 00602c88  5f                   pop edi
// 00602c89  5e                   pop esi
// 00602c8a  c20c00               ret 0xc
// library rbxgs/v8datamodel\Explosion.cpp (function ??0?$args2@V?$shared_ptr@VInstance@RBX@@@boost@@MH@detail@signals@boost@@QAE@V?$shared_ptr@VInstance@RBX@@@3@M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Explosion.cpp
