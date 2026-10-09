// roc 2008-06 00414ec0  unit: RBX::VLocalScript::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00414ec0
//
// 00414ec0  6aff                 push -1
// 00414ec2  68a9677c00           push 0x7c67a9
// 00414ec7  64a100000000         mov eax, dword ptr fs:[0]
// 00414ecd  50                   push eax
// 00414ece  64892500000000       mov dword ptr fs:[0], esp
// 00414ed5  83ec0c               sub esp, 0xc
// 00414ed8  8d442404             lea eax, [esp + 4]
// 00414edc  50                   push eax
// 00414edd  c744240400000000     mov dword ptr [esp + 4], 0
// 00414ee5  e856ffffff           call 0x414e40
// 00414eea  8b08                 mov ecx, dword ptr [eax]
// 00414eec  83c404               add esp, 4
// 00414eef  85c9                 test ecx, ecx
// 00414ef1  7405                 je 0x414ef8
// 00414ef3  83c110               add ecx, 0x10
// 00414ef6  eb02                 jmp 0x414efa
// 00414ef8  33c9                 xor ecx, ecx
// 00414efa  56                   push esi
// 00414efb  57                   push edi
// 00414efc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00414f00  890f                 mov dword ptr [edi], ecx
// 00414f02  8b4004               mov eax, dword ptr [eax + 4]
// 00414f05  894704               mov dword ptr [edi + 4], eax
// 00414f08  85c0                 test eax, eax
// 00414f0a  740c                 je 0x414f18
// 00414f0c  83c004               add eax, 4
// 00414f0f  b901000000           mov ecx, 1
// 00414f14  f00fc108             lock xadd dword ptr [eax], ecx
// 00414f18  8b742410             mov esi, dword ptr [esp + 0x10]
// 00414f1c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00414f24  c744240801000000     mov dword ptr [esp + 8], 1
// 00414f2c  85f6                 test esi, esi
// 00414f2e  742a                 je 0x414f5a
// 00414f30  8d5604               lea edx, [esi + 4]
// 00414f33  83c8ff               or eax, 0xffffffff
// 00414f36  f00fc102             lock xadd dword ptr [edx], eax
// 00414f3a  751e                 jne 0x414f5a
// 00414f3c  8b16                 mov edx, dword ptr [esi]
// 00414f3e  8b4204               mov eax, dword ptr [edx + 4]
// 00414f41  8bce                 mov ecx, esi
// 00414f43  ffd0                 call eax
// 00414f45  8d4e08               lea ecx, [esi + 8]
// 00414f48  83caff               or edx, 0xffffffff
// 00414f4b  f00fc111             lock xadd dword ptr [ecx], edx
// 00414f4f  7509                 jne 0x414f5a
// 00414f51  8b06                 mov eax, dword ptr [esi]
// 00414f53  8b5008               mov edx, dword ptr [eax + 8]
// 00414f56  8bce                 mov ecx, esi
// 00414f58  ffd2                 call edx
// 00414f5a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00414f5e  8bc7                 mov eax, edi
// 00414f60  5f                   pop edi
// 00414f61  5e                   pop esi
// 00414f62  64890d00000000       mov dword ptr fs:[0], ecx
// 00414f69  83c418               add esp, 0x18
// 00414f6c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
