// roc 2008-06 005c3370  unit: RBX::VSparkles::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3370
//
// 005c3370  6aff                 push -1
// 005c3372  68a9677c00           push 0x7c67a9
// 005c3377  64a100000000         mov eax, dword ptr fs:[0]
// 005c337d  50                   push eax
// 005c337e  64892500000000       mov dword ptr fs:[0], esp
// 005c3385  83ec0c               sub esp, 0xc
// 005c3388  8d442404             lea eax, [esp + 4]
// 005c338c  50                   push eax
// 005c338d  c744240400000000     mov dword ptr [esp + 4], 0
// 005c3395  e856ffffff           call 0x5c32f0
// 005c339a  8b08                 mov ecx, dword ptr [eax]
// 005c339c  83c404               add esp, 4
// 005c339f  85c9                 test ecx, ecx
// 005c33a1  7405                 je 0x5c33a8
// 005c33a3  83c110               add ecx, 0x10
// 005c33a6  eb02                 jmp 0x5c33aa
// 005c33a8  33c9                 xor ecx, ecx
// 005c33aa  56                   push esi
// 005c33ab  57                   push edi
// 005c33ac  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005c33b0  890f                 mov dword ptr [edi], ecx
// 005c33b2  8b4004               mov eax, dword ptr [eax + 4]
// 005c33b5  894704               mov dword ptr [edi + 4], eax
// 005c33b8  85c0                 test eax, eax
// 005c33ba  740c                 je 0x5c33c8
// 005c33bc  83c004               add eax, 4
// 005c33bf  b901000000           mov ecx, 1
// 005c33c4  f00fc108             lock xadd dword ptr [eax], ecx
// 005c33c8  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c33cc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005c33d4  c744240801000000     mov dword ptr [esp + 8], 1
// 005c33dc  85f6                 test esi, esi
// 005c33de  742a                 je 0x5c340a
// 005c33e0  8d5604               lea edx, [esi + 4]
// 005c33e3  83c8ff               or eax, 0xffffffff
// 005c33e6  f00fc102             lock xadd dword ptr [edx], eax
// 005c33ea  751e                 jne 0x5c340a
// 005c33ec  8b16                 mov edx, dword ptr [esi]
// 005c33ee  8b4204               mov eax, dword ptr [edx + 4]
// 005c33f1  8bce                 mov ecx, esi
// 005c33f3  ffd0                 call eax
// 005c33f5  8d4e08               lea ecx, [esi + 8]
// 005c33f8  83caff               or edx, 0xffffffff
// 005c33fb  f00fc111             lock xadd dword ptr [ecx], edx
// 005c33ff  7509                 jne 0x5c340a
// 005c3401  8b06                 mov eax, dword ptr [esi]
// 005c3403  8b5008               mov edx, dword ptr [eax + 8]
// 005c3406  8bce                 mov ecx, esi
// 005c3408  ffd2                 call edx
// 005c340a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c340e  8bc7                 mov eax, edi
// 005c3410  5f                   pop edi
// 005c3411  5e                   pop esi
// 005c3412  64890d00000000       mov dword ptr fs:[0], ecx
// 005c3419  83c418               add esp, 0x18
// 005c341c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
