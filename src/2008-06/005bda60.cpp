// roc 2008-06 005bda60  unit: VStockSound::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bda60
//
// 005bda60  6aff                 push -1
// 005bda62  68a9677c00           push 0x7c67a9
// 005bda67  64a100000000         mov eax, dword ptr fs:[0]
// 005bda6d  50                   push eax
// 005bda6e  64892500000000       mov dword ptr fs:[0], esp
// 005bda75  83ec0c               sub esp, 0xc
// 005bda78  8d442404             lea eax, [esp + 4]
// 005bda7c  50                   push eax
// 005bda7d  c744240400000000     mov dword ptr [esp + 4], 0
// 005bda85  e876fbffff           call 0x5bd600
// 005bda8a  8b08                 mov ecx, dword ptr [eax]
// 005bda8c  83c404               add esp, 4
// 005bda8f  85c9                 test ecx, ecx
// 005bda91  7405                 je 0x5bda98
// 005bda93  83c110               add ecx, 0x10
// 005bda96  eb02                 jmp 0x5bda9a
// 005bda98  33c9                 xor ecx, ecx
// 005bda9a  56                   push esi
// 005bda9b  57                   push edi
// 005bda9c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005bdaa0  890f                 mov dword ptr [edi], ecx
// 005bdaa2  8b4004               mov eax, dword ptr [eax + 4]
// 005bdaa5  894704               mov dword ptr [edi + 4], eax
// 005bdaa8  85c0                 test eax, eax
// 005bdaaa  740c                 je 0x5bdab8
// 005bdaac  83c004               add eax, 4
// 005bdaaf  b901000000           mov ecx, 1
// 005bdab4  f00fc108             lock xadd dword ptr [eax], ecx
// 005bdab8  8b742410             mov esi, dword ptr [esp + 0x10]
// 005bdabc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005bdac4  c744240801000000     mov dword ptr [esp + 8], 1
// 005bdacc  85f6                 test esi, esi
// 005bdace  742a                 je 0x5bdafa
// 005bdad0  8d5604               lea edx, [esi + 4]
// 005bdad3  83c8ff               or eax, 0xffffffff
// 005bdad6  f00fc102             lock xadd dword ptr [edx], eax
// 005bdada  751e                 jne 0x5bdafa
// 005bdadc  8b16                 mov edx, dword ptr [esi]
// 005bdade  8b4204               mov eax, dword ptr [edx + 4]
// 005bdae1  8bce                 mov ecx, esi
// 005bdae3  ffd0                 call eax
// 005bdae5  8d4e08               lea ecx, [esi + 8]
// 005bdae8  83caff               or edx, 0xffffffff
// 005bdaeb  f00fc111             lock xadd dword ptr [ecx], edx
// 005bdaef  7509                 jne 0x5bdafa
// 005bdaf1  8b06                 mov eax, dword ptr [esi]
// 005bdaf3  8b5008               mov edx, dword ptr [eax + 8]
// 005bdaf6  8bce                 mov ecx, esi
// 005bdaf8  ffd2                 call edx
// 005bdafa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005bdafe  8bc7                 mov eax, edi
// 005bdb00  5f                   pop edi
// 005bdb01  5e                   pop esi
// 005bdb02  64890d00000000       mov dword ptr fs:[0], ecx
// 005bdb09  83c418               add esp, 0x18
// 005bdb0c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
