// roc 2007-08 00532240  unit: RBX::VSelection::?$FactoryProduct  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00532240
//
// 00532240  64a100000000         mov eax, dword ptr fs:[0]
// 00532246  6aff                 push -1
// 00532248  6808087500           push 0x750808
// 0053224d  50                   push eax
// 0053224e  64892500000000       mov dword ptr fs:[0], esp
// 00532255  53                   push ebx
// 00532256  56                   push esi
// 00532257  57                   push edi
// 00532258  8bd9                 mov ebx, ecx
// 0053225a  8b742420             mov esi, dword ptr [esp + 0x20]
// 0053225e  85f6                 test esi, esi
// 00532260  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00532264  8903                 mov dword ptr [ebx], eax
// 00532266  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0053226e  897304               mov dword ptr [ebx + 4], esi
// 00532271  740c                 je 0x53227f
// 00532273  8d4e04               lea ecx, [esi + 4]
// 00532276  ba01000000           mov edx, 1
// 0053227b  f00fc111             lock xadd dword ptr [ecx], edx
// 0053227f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00532283  85ff                 test edi, edi
// 00532285  8b442424             mov eax, dword ptr [esp + 0x24]
// 00532289  894308               mov dword ptr [ebx + 8], eax
// 0053228c  897b0c               mov dword ptr [ebx + 0xc], edi
// 0053228f  740c                 je 0x53229d
// 00532291  8d4f04               lea ecx, [edi + 4]
// 00532294  ba01000000           mov edx, 1
// 00532299  f00fc111             lock xadd dword ptr [ecx], edx
// 0053229d  85f6                 test esi, esi
// 0053229f  742a                 je 0x5322cb
// 005322a1  8d4604               lea eax, [esi + 4]
// 005322a4  83c9ff               or ecx, 0xffffffff
// 005322a7  f00fc108             lock xadd dword ptr [eax], ecx
// 005322ab  751e                 jne 0x5322cb
// 005322ad  8b16                 mov edx, dword ptr [esi]
// 005322af  8b4204               mov eax, dword ptr [edx + 4]
// 005322b2  8bce                 mov ecx, esi
// 005322b4  ffd0                 call eax
// 005322b6  8d4e08               lea ecx, [esi + 8]
// 005322b9  83caff               or edx, 0xffffffff
// 005322bc  f00fc111             lock xadd dword ptr [ecx], edx
// 005322c0  7509                 jne 0x5322cb
// 005322c2  8b06                 mov eax, dword ptr [esi]
// 005322c4  8b5008               mov edx, dword ptr [eax + 8]
// 005322c7  8bce                 mov ecx, esi
// 005322c9  ffd2                 call edx
// 005322cb  85ff                 test edi, edi
// 005322cd  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005322d5  742a                 je 0x532301
// 005322d7  8d4704               lea eax, [edi + 4]
// 005322da  83c9ff               or ecx, 0xffffffff
// 005322dd  f00fc108             lock xadd dword ptr [eax], ecx
// 005322e1  751e                 jne 0x532301
// 005322e3  8b17                 mov edx, dword ptr [edi]
// 005322e5  8b4204               mov eax, dword ptr [edx + 4]
// 005322e8  8bcf                 mov ecx, edi
// 005322ea  ffd0                 call eax
// 005322ec  8d4f08               lea ecx, [edi + 8]
// 005322ef  83caff               or edx, 0xffffffff
// 005322f2  f00fc111             lock xadd dword ptr [ecx], edx
// 005322f6  7509                 jne 0x532301
// 005322f8  8b07                 mov eax, dword ptr [edi]
// 005322fa  8b5008               mov edx, dword ptr [eax + 8]
// 005322fd  8bcf                 mov ecx, edi
// 005322ff  ffd2                 call edx
// 00532301  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00532305  5f                   pop edi
// 00532306  5e                   pop esi
// 00532307  8bc3                 mov eax, ebx
// 00532309  64890d00000000       mov dword ptr fs:[0], ecx
// 00532310  5b                   pop ebx
// 00532311  83c40c               add esp, 0xc
// 00532314  c21000               ret 0x10
// library rbxgs/v8datamodel\Selection.cpp (function ??0SelectionChanged@RBX@@AAE@V?$shared_ptr@VInstance@RBX@@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
