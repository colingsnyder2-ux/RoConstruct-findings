// roc 2008-06 004b2910  unit: RBX::VGlue::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b2910
//
// 004b2910  6aff                 push -1
// 004b2912  68a9677c00           push 0x7c67a9
// 004b2917  64a100000000         mov eax, dword ptr fs:[0]
// 004b291d  50                   push eax
// 004b291e  64892500000000       mov dword ptr fs:[0], esp
// 004b2925  83ec0c               sub esp, 0xc
// 004b2928  8d442404             lea eax, [esp + 4]
// 004b292c  50                   push eax
// 004b292d  c744240400000000     mov dword ptr [esp + 4], 0
// 004b2935  e856ffffff           call 0x4b2890
// 004b293a  8b08                 mov ecx, dword ptr [eax]
// 004b293c  83c404               add esp, 4
// 004b293f  85c9                 test ecx, ecx
// 004b2941  7405                 je 0x4b2948
// 004b2943  83c110               add ecx, 0x10
// 004b2946  eb02                 jmp 0x4b294a
// 004b2948  33c9                 xor ecx, ecx
// 004b294a  56                   push esi
// 004b294b  57                   push edi
// 004b294c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004b2950  890f                 mov dword ptr [edi], ecx
// 004b2952  8b4004               mov eax, dword ptr [eax + 4]
// 004b2955  894704               mov dword ptr [edi + 4], eax
// 004b2958  85c0                 test eax, eax
// 004b295a  740c                 je 0x4b2968
// 004b295c  83c004               add eax, 4
// 004b295f  b901000000           mov ecx, 1
// 004b2964  f00fc108             lock xadd dword ptr [eax], ecx
// 004b2968  8b742410             mov esi, dword ptr [esp + 0x10]
// 004b296c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004b2974  c744240801000000     mov dword ptr [esp + 8], 1
// 004b297c  85f6                 test esi, esi
// 004b297e  742a                 je 0x4b29aa
// 004b2980  8d5604               lea edx, [esi + 4]
// 004b2983  83c8ff               or eax, 0xffffffff
// 004b2986  f00fc102             lock xadd dword ptr [edx], eax
// 004b298a  751e                 jne 0x4b29aa
// 004b298c  8b16                 mov edx, dword ptr [esi]
// 004b298e  8b4204               mov eax, dword ptr [edx + 4]
// 004b2991  8bce                 mov ecx, esi
// 004b2993  ffd0                 call eax
// 004b2995  8d4e08               lea ecx, [esi + 8]
// 004b2998  83caff               or edx, 0xffffffff
// 004b299b  f00fc111             lock xadd dword ptr [ecx], edx
// 004b299f  7509                 jne 0x4b29aa
// 004b29a1  8b06                 mov eax, dword ptr [esi]
// 004b29a3  8b5008               mov edx, dword ptr [eax + 8]
// 004b29a6  8bce                 mov ecx, esi
// 004b29a8  ffd2                 call edx
// 004b29aa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b29ae  8bc7                 mov eax, edi
// 004b29b0  5f                   pop edi
// 004b29b1  5e                   pop esi
// 004b29b2  64890d00000000       mov dword ptr fs:[0], ecx
// 004b29b9  83c418               add esp, 0x18
// 004b29bc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
