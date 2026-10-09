// roc 2008-06 0048ea80  unit: RBX::VStarterPackService::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048ea80
//
// 0048ea80  6aff                 push -1
// 0048ea82  68a9677c00           push 0x7c67a9
// 0048ea87  64a100000000         mov eax, dword ptr fs:[0]
// 0048ea8d  50                   push eax
// 0048ea8e  64892500000000       mov dword ptr fs:[0], esp
// 0048ea95  83ec0c               sub esp, 0xc
// 0048ea98  8d442404             lea eax, [esp + 4]
// 0048ea9c  50                   push eax
// 0048ea9d  c744240400000000     mov dword ptr [esp + 4], 0
// 0048eaa5  e856ffffff           call 0x48ea00
// 0048eaaa  8b08                 mov ecx, dword ptr [eax]
// 0048eaac  83c404               add esp, 4
// 0048eaaf  85c9                 test ecx, ecx
// 0048eab1  7405                 je 0x48eab8
// 0048eab3  83c110               add ecx, 0x10
// 0048eab6  eb02                 jmp 0x48eaba
// 0048eab8  33c9                 xor ecx, ecx
// 0048eaba  56                   push esi
// 0048eabb  57                   push edi
// 0048eabc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0048eac0  890f                 mov dword ptr [edi], ecx
// 0048eac2  8b4004               mov eax, dword ptr [eax + 4]
// 0048eac5  894704               mov dword ptr [edi + 4], eax
// 0048eac8  85c0                 test eax, eax
// 0048eaca  740c                 je 0x48ead8
// 0048eacc  83c004               add eax, 4
// 0048eacf  b901000000           mov ecx, 1
// 0048ead4  f00fc108             lock xadd dword ptr [eax], ecx
// 0048ead8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0048eadc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0048eae4  c744240801000000     mov dword ptr [esp + 8], 1
// 0048eaec  85f6                 test esi, esi
// 0048eaee  742a                 je 0x48eb1a
// 0048eaf0  8d5604               lea edx, [esi + 4]
// 0048eaf3  83c8ff               or eax, 0xffffffff
// 0048eaf6  f00fc102             lock xadd dword ptr [edx], eax
// 0048eafa  751e                 jne 0x48eb1a
// 0048eafc  8b16                 mov edx, dword ptr [esi]
// 0048eafe  8b4204               mov eax, dword ptr [edx + 4]
// 0048eb01  8bce                 mov ecx, esi
// 0048eb03  ffd0                 call eax
// 0048eb05  8d4e08               lea ecx, [esi + 8]
// 0048eb08  83caff               or edx, 0xffffffff
// 0048eb0b  f00fc111             lock xadd dword ptr [ecx], edx
// 0048eb0f  7509                 jne 0x48eb1a
// 0048eb11  8b06                 mov eax, dword ptr [esi]
// 0048eb13  8b5008               mov edx, dword ptr [eax + 8]
// 0048eb16  8bce                 mov ecx, esi
// 0048eb18  ffd2                 call edx
// 0048eb1a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048eb1e  8bc7                 mov eax, edi
// 0048eb20  5f                   pop edi
// 0048eb21  5e                   pop esi
// 0048eb22  64890d00000000       mov dword ptr fs:[0], ecx
// 0048eb29  83c418               add esp, 0x18
// 0048eb2c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
