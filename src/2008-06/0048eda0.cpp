// roc 2008-06 0048eda0  unit: RBX::VBackpack::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048eda0
//
// 0048eda0  6aff                 push -1
// 0048eda2  68a9677c00           push 0x7c67a9
// 0048eda7  64a100000000         mov eax, dword ptr fs:[0]
// 0048edad  50                   push eax
// 0048edae  64892500000000       mov dword ptr fs:[0], esp
// 0048edb5  83ec0c               sub esp, 0xc
// 0048edb8  8d442404             lea eax, [esp + 4]
// 0048edbc  50                   push eax
// 0048edbd  c744240400000000     mov dword ptr [esp + 4], 0
// 0048edc5  e856ceffff           call 0x48bc20
// 0048edca  8b08                 mov ecx, dword ptr [eax]
// 0048edcc  83c404               add esp, 4
// 0048edcf  85c9                 test ecx, ecx
// 0048edd1  7405                 je 0x48edd8
// 0048edd3  83c110               add ecx, 0x10
// 0048edd6  eb02                 jmp 0x48edda
// 0048edd8  33c9                 xor ecx, ecx
// 0048edda  56                   push esi
// 0048eddb  57                   push edi
// 0048eddc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0048ede0  890f                 mov dword ptr [edi], ecx
// 0048ede2  8b4004               mov eax, dword ptr [eax + 4]
// 0048ede5  894704               mov dword ptr [edi + 4], eax
// 0048ede8  85c0                 test eax, eax
// 0048edea  740c                 je 0x48edf8
// 0048edec  83c004               add eax, 4
// 0048edef  b901000000           mov ecx, 1
// 0048edf4  f00fc108             lock xadd dword ptr [eax], ecx
// 0048edf8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0048edfc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0048ee04  c744240801000000     mov dword ptr [esp + 8], 1
// 0048ee0c  85f6                 test esi, esi
// 0048ee0e  742a                 je 0x48ee3a
// 0048ee10  8d5604               lea edx, [esi + 4]
// 0048ee13  83c8ff               or eax, 0xffffffff
// 0048ee16  f00fc102             lock xadd dword ptr [edx], eax
// 0048ee1a  751e                 jne 0x48ee3a
// 0048ee1c  8b16                 mov edx, dword ptr [esi]
// 0048ee1e  8b4204               mov eax, dword ptr [edx + 4]
// 0048ee21  8bce                 mov ecx, esi
// 0048ee23  ffd0                 call eax
// 0048ee25  8d4e08               lea ecx, [esi + 8]
// 0048ee28  83caff               or edx, 0xffffffff
// 0048ee2b  f00fc111             lock xadd dword ptr [ecx], edx
// 0048ee2f  7509                 jne 0x48ee3a
// 0048ee31  8b06                 mov eax, dword ptr [esi]
// 0048ee33  8b5008               mov edx, dword ptr [eax + 8]
// 0048ee36  8bce                 mov ecx, esi
// 0048ee38  ffd2                 call edx
// 0048ee3a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048ee3e  8bc7                 mov eax, edi
// 0048ee40  5f                   pop edi
// 0048ee41  5e                   pop esi
// 0048ee42  64890d00000000       mov dword ptr fs:[0], ecx
// 0048ee49  83c418               add esp, 0x18
// 0048ee4c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
