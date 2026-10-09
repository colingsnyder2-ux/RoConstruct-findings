// roc 2008-06 005c2920  unit: RBX::VRocket::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c2920
//
// 005c2920  6aff                 push -1
// 005c2922  68a9677c00           push 0x7c67a9
// 005c2927  64a100000000         mov eax, dword ptr fs:[0]
// 005c292d  50                   push eax
// 005c292e  64892500000000       mov dword ptr fs:[0], esp
// 005c2935  83ec0c               sub esp, 0xc
// 005c2938  8d442404             lea eax, [esp + 4]
// 005c293c  50                   push eax
// 005c293d  c744240400000000     mov dword ptr [esp + 4], 0
// 005c2945  e856ffffff           call 0x5c28a0
// 005c294a  8b08                 mov ecx, dword ptr [eax]
// 005c294c  83c404               add esp, 4
// 005c294f  85c9                 test ecx, ecx
// 005c2951  7405                 je 0x5c2958
// 005c2953  83c110               add ecx, 0x10
// 005c2956  eb02                 jmp 0x5c295a
// 005c2958  33c9                 xor ecx, ecx
// 005c295a  56                   push esi
// 005c295b  57                   push edi
// 005c295c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005c2960  890f                 mov dword ptr [edi], ecx
// 005c2962  8b4004               mov eax, dword ptr [eax + 4]
// 005c2965  894704               mov dword ptr [edi + 4], eax
// 005c2968  85c0                 test eax, eax
// 005c296a  740c                 je 0x5c2978
// 005c296c  83c004               add eax, 4
// 005c296f  b901000000           mov ecx, 1
// 005c2974  f00fc108             lock xadd dword ptr [eax], ecx
// 005c2978  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c297c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005c2984  c744240801000000     mov dword ptr [esp + 8], 1
// 005c298c  85f6                 test esi, esi
// 005c298e  742a                 je 0x5c29ba
// 005c2990  8d5604               lea edx, [esi + 4]
// 005c2993  83c8ff               or eax, 0xffffffff
// 005c2996  f00fc102             lock xadd dword ptr [edx], eax
// 005c299a  751e                 jne 0x5c29ba
// 005c299c  8b16                 mov edx, dword ptr [esi]
// 005c299e  8b4204               mov eax, dword ptr [edx + 4]
// 005c29a1  8bce                 mov ecx, esi
// 005c29a3  ffd0                 call eax
// 005c29a5  8d4e08               lea ecx, [esi + 8]
// 005c29a8  83caff               or edx, 0xffffffff
// 005c29ab  f00fc111             lock xadd dword ptr [ecx], edx
// 005c29af  7509                 jne 0x5c29ba
// 005c29b1  8b06                 mov eax, dword ptr [esi]
// 005c29b3  8b5008               mov edx, dword ptr [eax + 8]
// 005c29b6  8bce                 mov ecx, esi
// 005c29b8  ffd2                 call edx
// 005c29ba  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c29be  8bc7                 mov eax, edi
// 005c29c0  5f                   pop edi
// 005c29c1  5e                   pop esi
// 005c29c2  64890d00000000       mov dword ptr fs:[0], ecx
// 005c29c9  83c418               add esp, 0x18
// 005c29cc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
