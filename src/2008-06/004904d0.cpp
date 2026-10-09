// roc 2008-06 004904d0  unit: RBX::VTeams::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004904d0
//
// 004904d0  6aff                 push -1
// 004904d2  68a9677c00           push 0x7c67a9
// 004904d7  64a100000000         mov eax, dword ptr fs:[0]
// 004904dd  50                   push eax
// 004904de  64892500000000       mov dword ptr fs:[0], esp
// 004904e5  83ec0c               sub esp, 0xc
// 004904e8  8d442404             lea eax, [esp + 4]
// 004904ec  50                   push eax
// 004904ed  c744240400000000     mov dword ptr [esp + 4], 0
// 004904f5  e856ffffff           call 0x490450
// 004904fa  8b08                 mov ecx, dword ptr [eax]
// 004904fc  83c404               add esp, 4
// 004904ff  85c9                 test ecx, ecx
// 00490501  7405                 je 0x490508
// 00490503  83c110               add ecx, 0x10
// 00490506  eb02                 jmp 0x49050a
// 00490508  33c9                 xor ecx, ecx
// 0049050a  56                   push esi
// 0049050b  57                   push edi
// 0049050c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00490510  890f                 mov dword ptr [edi], ecx
// 00490512  8b4004               mov eax, dword ptr [eax + 4]
// 00490515  894704               mov dword ptr [edi + 4], eax
// 00490518  85c0                 test eax, eax
// 0049051a  740c                 je 0x490528
// 0049051c  83c004               add eax, 4
// 0049051f  b901000000           mov ecx, 1
// 00490524  f00fc108             lock xadd dword ptr [eax], ecx
// 00490528  8b742410             mov esi, dword ptr [esp + 0x10]
// 0049052c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00490534  c744240801000000     mov dword ptr [esp + 8], 1
// 0049053c  85f6                 test esi, esi
// 0049053e  742a                 je 0x49056a
// 00490540  8d5604               lea edx, [esi + 4]
// 00490543  83c8ff               or eax, 0xffffffff
// 00490546  f00fc102             lock xadd dword ptr [edx], eax
// 0049054a  751e                 jne 0x49056a
// 0049054c  8b16                 mov edx, dword ptr [esi]
// 0049054e  8b4204               mov eax, dword ptr [edx + 4]
// 00490551  8bce                 mov ecx, esi
// 00490553  ffd0                 call eax
// 00490555  8d4e08               lea ecx, [esi + 8]
// 00490558  83caff               or edx, 0xffffffff
// 0049055b  f00fc111             lock xadd dword ptr [ecx], edx
// 0049055f  7509                 jne 0x49056a
// 00490561  8b06                 mov eax, dword ptr [esi]
// 00490563  8b5008               mov edx, dword ptr [eax + 8]
// 00490566  8bce                 mov ecx, esi
// 00490568  ffd2                 call edx
// 0049056a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0049056e  8bc7                 mov eax, edi
// 00490570  5f                   pop edi
// 00490571  5e                   pop esi
// 00490572  64890d00000000       mov dword ptr fs:[0], ecx
// 00490579  83c418               add esp, 0x18
// 0049057c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
