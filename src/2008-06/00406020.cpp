// roc 2008-06 00406020  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00406020
//
// 00406020  6aff                 push -1
// 00406022  68a9677c00           push 0x7c67a9
// 00406027  64a100000000         mov eax, dword ptr fs:[0]
// 0040602d  50                   push eax
// 0040602e  64892500000000       mov dword ptr fs:[0], esp
// 00406035  83ec0c               sub esp, 0xc
// 00406038  8d442404             lea eax, [esp + 4]
// 0040603c  50                   push eax
// 0040603d  c744240400000000     mov dword ptr [esp + 4], 0
// 00406045  e856ffffff           call 0x405fa0
// 0040604a  8b08                 mov ecx, dword ptr [eax]
// 0040604c  83c404               add esp, 4
// 0040604f  85c9                 test ecx, ecx
// 00406051  7405                 je 0x406058
// 00406053  83c110               add ecx, 0x10
// 00406056  eb02                 jmp 0x40605a
// 00406058  33c9                 xor ecx, ecx
// 0040605a  56                   push esi
// 0040605b  57                   push edi
// 0040605c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00406060  890f                 mov dword ptr [edi], ecx
// 00406062  8b4004               mov eax, dword ptr [eax + 4]
// 00406065  894704               mov dword ptr [edi + 4], eax
// 00406068  85c0                 test eax, eax
// 0040606a  740c                 je 0x406078
// 0040606c  83c004               add eax, 4
// 0040606f  b901000000           mov ecx, 1
// 00406074  f00fc108             lock xadd dword ptr [eax], ecx
// 00406078  8b742410             mov esi, dword ptr [esp + 0x10]
// 0040607c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00406084  c744240801000000     mov dword ptr [esp + 8], 1
// 0040608c  85f6                 test esi, esi
// 0040608e  742a                 je 0x4060ba
// 00406090  8d5604               lea edx, [esi + 4]
// 00406093  83c8ff               or eax, 0xffffffff
// 00406096  f00fc102             lock xadd dword ptr [edx], eax
// 0040609a  751e                 jne 0x4060ba
// 0040609c  8b16                 mov edx, dword ptr [esi]
// 0040609e  8b4204               mov eax, dword ptr [edx + 4]
// 004060a1  8bce                 mov ecx, esi
// 004060a3  ffd0                 call eax
// 004060a5  8d4e08               lea ecx, [esi + 8]
// 004060a8  83caff               or edx, 0xffffffff
// 004060ab  f00fc111             lock xadd dword ptr [ecx], edx
// 004060af  7509                 jne 0x4060ba
// 004060b1  8b06                 mov eax, dword ptr [esi]
// 004060b3  8b5008               mov edx, dword ptr [eax + 8]
// 004060b6  8bce                 mov ecx, esi
// 004060b8  ffd2                 call edx
// 004060ba  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004060be  8bc7                 mov eax, edi
// 004060c0  5f                   pop edi
// 004060c1  5e                   pop esi
// 004060c2  64890d00000000       mov dword ptr fs:[0], ecx
// 004060c9  83c418               add esp, 0x18
// 004060cc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
