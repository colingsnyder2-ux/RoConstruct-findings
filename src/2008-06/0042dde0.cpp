// roc 2008-06 0042dde0  unit: RBX::VScriptContext::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042dde0
//
// 0042dde0  6aff                 push -1
// 0042dde2  68a9677c00           push 0x7c67a9
// 0042dde7  64a100000000         mov eax, dword ptr fs:[0]
// 0042dded  50                   push eax
// 0042ddee  64892500000000       mov dword ptr fs:[0], esp
// 0042ddf5  83ec0c               sub esp, 0xc
// 0042ddf8  8d442404             lea eax, [esp + 4]
// 0042ddfc  50                   push eax
// 0042ddfd  c744240400000000     mov dword ptr [esp + 4], 0
// 0042de05  e8e6f5ffff           call 0x42d3f0
// 0042de0a  8b08                 mov ecx, dword ptr [eax]
// 0042de0c  83c404               add esp, 4
// 0042de0f  85c9                 test ecx, ecx
// 0042de11  7405                 je 0x42de18
// 0042de13  83c110               add ecx, 0x10
// 0042de16  eb02                 jmp 0x42de1a
// 0042de18  33c9                 xor ecx, ecx
// 0042de1a  56                   push esi
// 0042de1b  57                   push edi
// 0042de1c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0042de20  890f                 mov dword ptr [edi], ecx
// 0042de22  8b4004               mov eax, dword ptr [eax + 4]
// 0042de25  894704               mov dword ptr [edi + 4], eax
// 0042de28  85c0                 test eax, eax
// 0042de2a  740c                 je 0x42de38
// 0042de2c  83c004               add eax, 4
// 0042de2f  b901000000           mov ecx, 1
// 0042de34  f00fc108             lock xadd dword ptr [eax], ecx
// 0042de38  8b742410             mov esi, dword ptr [esp + 0x10]
// 0042de3c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0042de44  c744240801000000     mov dword ptr [esp + 8], 1
// 0042de4c  85f6                 test esi, esi
// 0042de4e  742a                 je 0x42de7a
// 0042de50  8d5604               lea edx, [esi + 4]
// 0042de53  83c8ff               or eax, 0xffffffff
// 0042de56  f00fc102             lock xadd dword ptr [edx], eax
// 0042de5a  751e                 jne 0x42de7a
// 0042de5c  8b16                 mov edx, dword ptr [esi]
// 0042de5e  8b4204               mov eax, dword ptr [edx + 4]
// 0042de61  8bce                 mov ecx, esi
// 0042de63  ffd0                 call eax
// 0042de65  8d4e08               lea ecx, [esi + 8]
// 0042de68  83caff               or edx, 0xffffffff
// 0042de6b  f00fc111             lock xadd dword ptr [ecx], edx
// 0042de6f  7509                 jne 0x42de7a
// 0042de71  8b06                 mov eax, dword ptr [esi]
// 0042de73  8b5008               mov edx, dword ptr [eax + 8]
// 0042de76  8bce                 mov ecx, esi
// 0042de78  ffd2                 call edx
// 0042de7a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0042de7e  8bc7                 mov eax, edi
// 0042de80  5f                   pop edi
// 0042de81  5e                   pop esi
// 0042de82  64890d00000000       mov dword ptr fs:[0], ecx
// 0042de89  83c418               add esp, 0x18
// 0042de8c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
