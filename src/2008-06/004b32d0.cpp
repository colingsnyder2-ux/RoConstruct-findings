// roc 2008-06 004b32d0  unit: RBX::VMotor::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b32d0
//
// 004b32d0  6aff                 push -1
// 004b32d2  68a9677c00           push 0x7c67a9
// 004b32d7  64a100000000         mov eax, dword ptr fs:[0]
// 004b32dd  50                   push eax
// 004b32de  64892500000000       mov dword ptr fs:[0], esp
// 004b32e5  83ec0c               sub esp, 0xc
// 004b32e8  8d442404             lea eax, [esp + 4]
// 004b32ec  50                   push eax
// 004b32ed  c744240400000000     mov dword ptr [esp + 4], 0
// 004b32f5  e856ffffff           call 0x4b3250
// 004b32fa  8b08                 mov ecx, dword ptr [eax]
// 004b32fc  83c404               add esp, 4
// 004b32ff  85c9                 test ecx, ecx
// 004b3301  7405                 je 0x4b3308
// 004b3303  83c110               add ecx, 0x10
// 004b3306  eb02                 jmp 0x4b330a
// 004b3308  33c9                 xor ecx, ecx
// 004b330a  56                   push esi
// 004b330b  57                   push edi
// 004b330c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004b3310  890f                 mov dword ptr [edi], ecx
// 004b3312  8b4004               mov eax, dword ptr [eax + 4]
// 004b3315  894704               mov dword ptr [edi + 4], eax
// 004b3318  85c0                 test eax, eax
// 004b331a  740c                 je 0x4b3328
// 004b331c  83c004               add eax, 4
// 004b331f  b901000000           mov ecx, 1
// 004b3324  f00fc108             lock xadd dword ptr [eax], ecx
// 004b3328  8b742410             mov esi, dword ptr [esp + 0x10]
// 004b332c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004b3334  c744240801000000     mov dword ptr [esp + 8], 1
// 004b333c  85f6                 test esi, esi
// 004b333e  742a                 je 0x4b336a
// 004b3340  8d5604               lea edx, [esi + 4]
// 004b3343  83c8ff               or eax, 0xffffffff
// 004b3346  f00fc102             lock xadd dword ptr [edx], eax
// 004b334a  751e                 jne 0x4b336a
// 004b334c  8b16                 mov edx, dword ptr [esi]
// 004b334e  8b4204               mov eax, dword ptr [edx + 4]
// 004b3351  8bce                 mov ecx, esi
// 004b3353  ffd0                 call eax
// 004b3355  8d4e08               lea ecx, [esi + 8]
// 004b3358  83caff               or edx, 0xffffffff
// 004b335b  f00fc111             lock xadd dword ptr [ecx], edx
// 004b335f  7509                 jne 0x4b336a
// 004b3361  8b06                 mov eax, dword ptr [esi]
// 004b3363  8b5008               mov edx, dword ptr [eax + 8]
// 004b3366  8bce                 mov ecx, esi
// 004b3368  ffd2                 call edx
// 004b336a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b336e  8bc7                 mov eax, edi
// 004b3370  5f                   pop edi
// 004b3371  5e                   pop esi
// 004b3372  64890d00000000       mov dword ptr fs:[0], ecx
// 004b3379  83c418               add esp, 0x18
// 004b337c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
