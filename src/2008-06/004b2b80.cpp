// roc 2008-06 004b2b80  unit: RBX::VRotate::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b2b80
//
// 004b2b80  6aff                 push -1
// 004b2b82  68a9677c00           push 0x7c67a9
// 004b2b87  64a100000000         mov eax, dword ptr fs:[0]
// 004b2b8d  50                   push eax
// 004b2b8e  64892500000000       mov dword ptr fs:[0], esp
// 004b2b95  83ec0c               sub esp, 0xc
// 004b2b98  8d442404             lea eax, [esp + 4]
// 004b2b9c  50                   push eax
// 004b2b9d  c744240400000000     mov dword ptr [esp + 4], 0
// 004b2ba5  e856ffffff           call 0x4b2b00
// 004b2baa  8b08                 mov ecx, dword ptr [eax]
// 004b2bac  83c404               add esp, 4
// 004b2baf  85c9                 test ecx, ecx
// 004b2bb1  7405                 je 0x4b2bb8
// 004b2bb3  83c110               add ecx, 0x10
// 004b2bb6  eb02                 jmp 0x4b2bba
// 004b2bb8  33c9                 xor ecx, ecx
// 004b2bba  56                   push esi
// 004b2bbb  57                   push edi
// 004b2bbc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004b2bc0  890f                 mov dword ptr [edi], ecx
// 004b2bc2  8b4004               mov eax, dword ptr [eax + 4]
// 004b2bc5  894704               mov dword ptr [edi + 4], eax
// 004b2bc8  85c0                 test eax, eax
// 004b2bca  740c                 je 0x4b2bd8
// 004b2bcc  83c004               add eax, 4
// 004b2bcf  b901000000           mov ecx, 1
// 004b2bd4  f00fc108             lock xadd dword ptr [eax], ecx
// 004b2bd8  8b742410             mov esi, dword ptr [esp + 0x10]
// 004b2bdc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004b2be4  c744240801000000     mov dword ptr [esp + 8], 1
// 004b2bec  85f6                 test esi, esi
// 004b2bee  742a                 je 0x4b2c1a
// 004b2bf0  8d5604               lea edx, [esi + 4]
// 004b2bf3  83c8ff               or eax, 0xffffffff
// 004b2bf6  f00fc102             lock xadd dword ptr [edx], eax
// 004b2bfa  751e                 jne 0x4b2c1a
// 004b2bfc  8b16                 mov edx, dword ptr [esi]
// 004b2bfe  8b4204               mov eax, dword ptr [edx + 4]
// 004b2c01  8bce                 mov ecx, esi
// 004b2c03  ffd0                 call eax
// 004b2c05  8d4e08               lea ecx, [esi + 8]
// 004b2c08  83caff               or edx, 0xffffffff
// 004b2c0b  f00fc111             lock xadd dword ptr [ecx], edx
// 004b2c0f  7509                 jne 0x4b2c1a
// 004b2c11  8b06                 mov eax, dword ptr [esi]
// 004b2c13  8b5008               mov edx, dword ptr [eax + 8]
// 004b2c16  8bce                 mov ecx, esi
// 004b2c18  ffd2                 call edx
// 004b2c1a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b2c1e  8bc7                 mov eax, edi
// 004b2c20  5f                   pop edi
// 004b2c21  5e                   pop esi
// 004b2c22  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2c29  83c418               add esp, 0x18
// 004b2c2c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
