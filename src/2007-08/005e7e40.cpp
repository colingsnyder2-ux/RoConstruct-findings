// roc 2007-08 005e7e40  unit: RBX::Explosion  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e7e40
//
// 005e7e40  8b442404             mov eax, dword ptr [esp + 4]
// 005e7e44  56                   push esi
// 005e7e45  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e7e49  85f6                 test esi, esi
// 005e7e4b  57                   push edi
// 005e7e4c  8bf9                 mov edi, ecx
// 005e7e4e  8907                 mov dword ptr [edi], eax
// 005e7e50  897704               mov dword ptr [edi + 4], esi
// 005e7e53  740c                 je 0x5e7e61
// 005e7e55  8d4e04               lea ecx, [esi + 4]
// 005e7e58  ba01000000           mov edx, 1
// 005e7e5d  f00fc111             lock xadd dword ptr [ecx], edx
// 005e7e61  85f6                 test esi, esi
// 005e7e63  d9442414             fld dword ptr [esp + 0x14]
// 005e7e67  d95f08               fstp dword ptr [edi + 8]
// 005e7e6a  742a                 je 0x5e7e96
// 005e7e6c  8d4604               lea eax, [esi + 4]
// 005e7e6f  83c9ff               or ecx, 0xffffffff
// 005e7e72  f00fc108             lock xadd dword ptr [eax], ecx
// 005e7e76  751e                 jne 0x5e7e96
// 005e7e78  8b16                 mov edx, dword ptr [esi]
// 005e7e7a  8b4204               mov eax, dword ptr [edx + 4]
// 005e7e7d  8bce                 mov ecx, esi
// 005e7e7f  ffd0                 call eax
// 005e7e81  8d4e08               lea ecx, [esi + 8]
// 005e7e84  83caff               or edx, 0xffffffff
// 005e7e87  f00fc111             lock xadd dword ptr [ecx], edx
// 005e7e8b  7509                 jne 0x5e7e96
// 005e7e8d  8b06                 mov eax, dword ptr [esi]
// 005e7e8f  8b5008               mov edx, dword ptr [eax + 8]
// 005e7e92  8bce                 mov ecx, esi
// 005e7e94  ffd2                 call edx
// 005e7e96  8bc7                 mov eax, edi
// 005e7e98  5f                   pop edi
// 005e7e99  5e                   pop esi
// 005e7e9a  c20c00               ret 0xc
// library rbxgs/v8datamodel\Explosion.cpp (function ??0?$args2@V?$shared_ptr@VInstance@RBX@@@boost@@MH@detail@signals@boost@@QAE@V?$shared_ptr@VInstance@RBX@@@3@M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Explosion.cpp
