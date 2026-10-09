// roc 2008-06 0049ea80  unit: RBX::VNetworkSettings::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049ea80
//
// 0049ea80  6aff                 push -1
// 0049ea82  68a9677c00           push 0x7c67a9
// 0049ea87  64a100000000         mov eax, dword ptr fs:[0]
// 0049ea8d  50                   push eax
// 0049ea8e  64892500000000       mov dword ptr fs:[0], esp
// 0049ea95  83ec0c               sub esp, 0xc
// 0049ea98  8d442404             lea eax, [esp + 4]
// 0049ea9c  50                   push eax
// 0049ea9d  c744240400000000     mov dword ptr [esp + 4], 0
// 0049eaa5  e866fdffff           call 0x49e810
// 0049eaaa  8b08                 mov ecx, dword ptr [eax]
// 0049eaac  83c404               add esp, 4
// 0049eaaf  85c9                 test ecx, ecx
// 0049eab1  7405                 je 0x49eab8
// 0049eab3  83c110               add ecx, 0x10
// 0049eab6  eb02                 jmp 0x49eaba
// 0049eab8  33c9                 xor ecx, ecx
// 0049eaba  56                   push esi
// 0049eabb  57                   push edi
// 0049eabc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0049eac0  890f                 mov dword ptr [edi], ecx
// 0049eac2  8b4004               mov eax, dword ptr [eax + 4]
// 0049eac5  894704               mov dword ptr [edi + 4], eax
// 0049eac8  85c0                 test eax, eax
// 0049eaca  740c                 je 0x49ead8
// 0049eacc  83c004               add eax, 4
// 0049eacf  b901000000           mov ecx, 1
// 0049ead4  f00fc108             lock xadd dword ptr [eax], ecx
// 0049ead8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0049eadc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0049eae4  c744240801000000     mov dword ptr [esp + 8], 1
// 0049eaec  85f6                 test esi, esi
// 0049eaee  742a                 je 0x49eb1a
// 0049eaf0  8d5604               lea edx, [esi + 4]
// 0049eaf3  83c8ff               or eax, 0xffffffff
// 0049eaf6  f00fc102             lock xadd dword ptr [edx], eax
// 0049eafa  751e                 jne 0x49eb1a
// 0049eafc  8b16                 mov edx, dword ptr [esi]
// 0049eafe  8b4204               mov eax, dword ptr [edx + 4]
// 0049eb01  8bce                 mov ecx, esi
// 0049eb03  ffd0                 call eax
// 0049eb05  8d4e08               lea ecx, [esi + 8]
// 0049eb08  83caff               or edx, 0xffffffff
// 0049eb0b  f00fc111             lock xadd dword ptr [ecx], edx
// 0049eb0f  7509                 jne 0x49eb1a
// 0049eb11  8b06                 mov eax, dword ptr [esi]
// 0049eb13  8b5008               mov edx, dword ptr [eax + 8]
// 0049eb16  8bce                 mov ecx, esi
// 0049eb18  ffd2                 call edx
// 0049eb1a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0049eb1e  8bc7                 mov eax, edi
// 0049eb20  5f                   pop edi
// 0049eb21  5e                   pop esi
// 0049eb22  64890d00000000       mov dword ptr fs:[0], ecx
// 0049eb29  83c418               add esp, 0x18
// 0049eb2c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
