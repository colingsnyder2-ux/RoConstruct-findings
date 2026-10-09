// roc 2008-06 00578480  unit: RBX::VTool::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00578480
//
// 00578480  6aff                 push -1
// 00578482  68a9677c00           push 0x7c67a9
// 00578487  64a100000000         mov eax, dword ptr fs:[0]
// 0057848d  50                   push eax
// 0057848e  64892500000000       mov dword ptr fs:[0], esp
// 00578495  83ec0c               sub esp, 0xc
// 00578498  8d442404             lea eax, [esp + 4]
// 0057849c  50                   push eax
// 0057849d  c744240400000000     mov dword ptr [esp + 4], 0
// 005784a5  e856ffffff           call 0x578400
// 005784aa  8b08                 mov ecx, dword ptr [eax]
// 005784ac  83c404               add esp, 4
// 005784af  85c9                 test ecx, ecx
// 005784b1  7405                 je 0x5784b8
// 005784b3  83c110               add ecx, 0x10
// 005784b6  eb02                 jmp 0x5784ba
// 005784b8  33c9                 xor ecx, ecx
// 005784ba  56                   push esi
// 005784bb  57                   push edi
// 005784bc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005784c0  890f                 mov dword ptr [edi], ecx
// 005784c2  8b4004               mov eax, dword ptr [eax + 4]
// 005784c5  894704               mov dword ptr [edi + 4], eax
// 005784c8  85c0                 test eax, eax
// 005784ca  740c                 je 0x5784d8
// 005784cc  83c004               add eax, 4
// 005784cf  b901000000           mov ecx, 1
// 005784d4  f00fc108             lock xadd dword ptr [eax], ecx
// 005784d8  8b742410             mov esi, dword ptr [esp + 0x10]
// 005784dc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005784e4  c744240801000000     mov dword ptr [esp + 8], 1
// 005784ec  85f6                 test esi, esi
// 005784ee  742a                 je 0x57851a
// 005784f0  8d5604               lea edx, [esi + 4]
// 005784f3  83c8ff               or eax, 0xffffffff
// 005784f6  f00fc102             lock xadd dword ptr [edx], eax
// 005784fa  751e                 jne 0x57851a
// 005784fc  8b16                 mov edx, dword ptr [esi]
// 005784fe  8b4204               mov eax, dword ptr [edx + 4]
// 00578501  8bce                 mov ecx, esi
// 00578503  ffd0                 call eax
// 00578505  8d4e08               lea ecx, [esi + 8]
// 00578508  83caff               or edx, 0xffffffff
// 0057850b  f00fc111             lock xadd dword ptr [ecx], edx
// 0057850f  7509                 jne 0x57851a
// 00578511  8b06                 mov eax, dword ptr [esi]
// 00578513  8b5008               mov edx, dword ptr [eax + 8]
// 00578516  8bce                 mov ecx, esi
// 00578518  ffd2                 call edx
// 0057851a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057851e  8bc7                 mov eax, edi
// 00578520  5f                   pop edi
// 00578521  5e                   pop esi
// 00578522  64890d00000000       mov dword ptr fs:[0], ecx
// 00578529  83c418               add esp, 0x18
// 0057852c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
