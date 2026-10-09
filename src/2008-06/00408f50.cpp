// roc 2008-06 00408f50  unit: VCRenderSettings::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00408f50
//
// 00408f50  6aff                 push -1
// 00408f52  68a9677c00           push 0x7c67a9
// 00408f57  64a100000000         mov eax, dword ptr fs:[0]
// 00408f5d  50                   push eax
// 00408f5e  64892500000000       mov dword ptr fs:[0], esp
// 00408f65  83ec0c               sub esp, 0xc
// 00408f68  8d442404             lea eax, [esp + 4]
// 00408f6c  50                   push eax
// 00408f6d  c744240400000000     mov dword ptr [esp + 4], 0
// 00408f75  e856ffffff           call 0x408ed0
// 00408f7a  8b08                 mov ecx, dword ptr [eax]
// 00408f7c  83c404               add esp, 4
// 00408f7f  85c9                 test ecx, ecx
// 00408f81  7405                 je 0x408f88
// 00408f83  83c110               add ecx, 0x10
// 00408f86  eb02                 jmp 0x408f8a
// 00408f88  33c9                 xor ecx, ecx
// 00408f8a  56                   push esi
// 00408f8b  57                   push edi
// 00408f8c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00408f90  890f                 mov dword ptr [edi], ecx
// 00408f92  8b4004               mov eax, dword ptr [eax + 4]
// 00408f95  894704               mov dword ptr [edi + 4], eax
// 00408f98  85c0                 test eax, eax
// 00408f9a  740c                 je 0x408fa8
// 00408f9c  83c004               add eax, 4
// 00408f9f  b901000000           mov ecx, 1
// 00408fa4  f00fc108             lock xadd dword ptr [eax], ecx
// 00408fa8  8b742410             mov esi, dword ptr [esp + 0x10]
// 00408fac  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00408fb4  c744240801000000     mov dword ptr [esp + 8], 1
// 00408fbc  85f6                 test esi, esi
// 00408fbe  742a                 je 0x408fea
// 00408fc0  8d5604               lea edx, [esi + 4]
// 00408fc3  83c8ff               or eax, 0xffffffff
// 00408fc6  f00fc102             lock xadd dword ptr [edx], eax
// 00408fca  751e                 jne 0x408fea
// 00408fcc  8b16                 mov edx, dword ptr [esi]
// 00408fce  8b4204               mov eax, dword ptr [edx + 4]
// 00408fd1  8bce                 mov ecx, esi
// 00408fd3  ffd0                 call eax
// 00408fd5  8d4e08               lea ecx, [esi + 8]
// 00408fd8  83caff               or edx, 0xffffffff
// 00408fdb  f00fc111             lock xadd dword ptr [ecx], edx
// 00408fdf  7509                 jne 0x408fea
// 00408fe1  8b06                 mov eax, dword ptr [esi]
// 00408fe3  8b5008               mov edx, dword ptr [eax + 8]
// 00408fe6  8bce                 mov ecx, esi
// 00408fe8  ffd2                 call edx
// 00408fea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00408fee  8bc7                 mov eax, edi
// 00408ff0  5f                   pop edi
// 00408ff1  5e                   pop esi
// 00408ff2  64890d00000000       mov dword ptr fs:[0], ecx
// 00408ff9  83c418               add esp, 0x18
// 00408ffc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
