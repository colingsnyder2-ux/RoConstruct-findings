// roc 2008-06 0040dd60  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040dd60
//
// 0040dd60  6aff                 push -1
// 0040dd62  68a9677c00           push 0x7c67a9
// 0040dd67  64a100000000         mov eax, dword ptr fs:[0]
// 0040dd6d  50                   push eax
// 0040dd6e  64892500000000       mov dword ptr fs:[0], esp
// 0040dd75  83ec0c               sub esp, 0xc
// 0040dd78  8d442404             lea eax, [esp + 4]
// 0040dd7c  50                   push eax
// 0040dd7d  c744240400000000     mov dword ptr [esp + 4], 0
// 0040dd85  e8e6feffff           call 0x40dc70
// 0040dd8a  8b08                 mov ecx, dword ptr [eax]
// 0040dd8c  83c404               add esp, 4
// 0040dd8f  85c9                 test ecx, ecx
// 0040dd91  7405                 je 0x40dd98
// 0040dd93  83c110               add ecx, 0x10
// 0040dd96  eb02                 jmp 0x40dd9a
// 0040dd98  33c9                 xor ecx, ecx
// 0040dd9a  56                   push esi
// 0040dd9b  57                   push edi
// 0040dd9c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0040dda0  890f                 mov dword ptr [edi], ecx
// 0040dda2  8b4004               mov eax, dword ptr [eax + 4]
// 0040dda5  894704               mov dword ptr [edi + 4], eax
// 0040dda8  85c0                 test eax, eax
// 0040ddaa  740c                 je 0x40ddb8
// 0040ddac  83c004               add eax, 4
// 0040ddaf  b901000000           mov ecx, 1
// 0040ddb4  f00fc108             lock xadd dword ptr [eax], ecx
// 0040ddb8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0040ddbc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0040ddc4  c744240801000000     mov dword ptr [esp + 8], 1
// 0040ddcc  85f6                 test esi, esi
// 0040ddce  742a                 je 0x40ddfa
// 0040ddd0  8d5604               lea edx, [esi + 4]
// 0040ddd3  83c8ff               or eax, 0xffffffff
// 0040ddd6  f00fc102             lock xadd dword ptr [edx], eax
// 0040ddda  751e                 jne 0x40ddfa
// 0040dddc  8b16                 mov edx, dword ptr [esi]
// 0040ddde  8b4204               mov eax, dword ptr [edx + 4]
// 0040dde1  8bce                 mov ecx, esi
// 0040dde3  ffd0                 call eax
// 0040dde5  8d4e08               lea ecx, [esi + 8]
// 0040dde8  83caff               or edx, 0xffffffff
// 0040ddeb  f00fc111             lock xadd dword ptr [ecx], edx
// 0040ddef  7509                 jne 0x40ddfa
// 0040ddf1  8b06                 mov eax, dword ptr [esi]
// 0040ddf3  8b5008               mov edx, dword ptr [eax + 8]
// 0040ddf6  8bce                 mov ecx, esi
// 0040ddf8  ffd2                 call edx
// 0040ddfa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040ddfe  8bc7                 mov eax, edi
// 0040de00  5f                   pop edi
// 0040de01  5e                   pop esi
// 0040de02  64890d00000000       mov dword ptr fs:[0], ecx
// 0040de09  83c418               add esp, 0x18
// 0040de0c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
