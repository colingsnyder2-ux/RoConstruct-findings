// roc 2008-06 004a38d0  unit: RBX::VMessage::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a38d0
//
// 004a38d0  6aff                 push -1
// 004a38d2  68a9677c00           push 0x7c67a9
// 004a38d7  64a100000000         mov eax, dword ptr fs:[0]
// 004a38dd  50                   push eax
// 004a38de  64892500000000       mov dword ptr fs:[0], esp
// 004a38e5  83ec0c               sub esp, 0xc
// 004a38e8  8d442404             lea eax, [esp + 4]
// 004a38ec  50                   push eax
// 004a38ed  c744240400000000     mov dword ptr [esp + 4], 0
// 004a38f5  e856ffffff           call 0x4a3850
// 004a38fa  8b08                 mov ecx, dword ptr [eax]
// 004a38fc  83c404               add esp, 4
// 004a38ff  85c9                 test ecx, ecx
// 004a3901  7405                 je 0x4a3908
// 004a3903  83c110               add ecx, 0x10
// 004a3906  eb02                 jmp 0x4a390a
// 004a3908  33c9                 xor ecx, ecx
// 004a390a  56                   push esi
// 004a390b  57                   push edi
// 004a390c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004a3910  890f                 mov dword ptr [edi], ecx
// 004a3912  8b4004               mov eax, dword ptr [eax + 4]
// 004a3915  894704               mov dword ptr [edi + 4], eax
// 004a3918  85c0                 test eax, eax
// 004a391a  740c                 je 0x4a3928
// 004a391c  83c004               add eax, 4
// 004a391f  b901000000           mov ecx, 1
// 004a3924  f00fc108             lock xadd dword ptr [eax], ecx
// 004a3928  8b742410             mov esi, dword ptr [esp + 0x10]
// 004a392c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004a3934  c744240801000000     mov dword ptr [esp + 8], 1
// 004a393c  85f6                 test esi, esi
// 004a393e  742a                 je 0x4a396a
// 004a3940  8d5604               lea edx, [esi + 4]
// 004a3943  83c8ff               or eax, 0xffffffff
// 004a3946  f00fc102             lock xadd dword ptr [edx], eax
// 004a394a  751e                 jne 0x4a396a
// 004a394c  8b16                 mov edx, dword ptr [esi]
// 004a394e  8b4204               mov eax, dword ptr [edx + 4]
// 004a3951  8bce                 mov ecx, esi
// 004a3953  ffd0                 call eax
// 004a3955  8d4e08               lea ecx, [esi + 8]
// 004a3958  83caff               or edx, 0xffffffff
// 004a395b  f00fc111             lock xadd dword ptr [ecx], edx
// 004a395f  7509                 jne 0x4a396a
// 004a3961  8b06                 mov eax, dword ptr [esi]
// 004a3963  8b5008               mov edx, dword ptr [eax + 8]
// 004a3966  8bce                 mov ecx, esi
// 004a3968  ffd2                 call edx
// 004a396a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a396e  8bc7                 mov eax, edi
// 004a3970  5f                   pop edi
// 004a3971  5e                   pop esi
// 004a3972  64890d00000000       mov dword ptr fs:[0], ecx
// 004a3979  83c418               add esp, 0x18
// 004a397c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
