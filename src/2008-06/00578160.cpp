// roc 2008-06 00578160  unit: RBX::VLocalBackpackItem::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00578160
//
// 00578160  6aff                 push -1
// 00578162  68a9677c00           push 0x7c67a9
// 00578167  64a100000000         mov eax, dword ptr fs:[0]
// 0057816d  50                   push eax
// 0057816e  64892500000000       mov dword ptr fs:[0], esp
// 00578175  83ec0c               sub esp, 0xc
// 00578178  8d442404             lea eax, [esp + 4]
// 0057817c  50                   push eax
// 0057817d  c744240400000000     mov dword ptr [esp + 4], 0
// 00578185  e856ffffff           call 0x5780e0
// 0057818a  8b08                 mov ecx, dword ptr [eax]
// 0057818c  83c404               add esp, 4
// 0057818f  85c9                 test ecx, ecx
// 00578191  7405                 je 0x578198
// 00578193  83c110               add ecx, 0x10
// 00578196  eb02                 jmp 0x57819a
// 00578198  33c9                 xor ecx, ecx
// 0057819a  56                   push esi
// 0057819b  57                   push edi
// 0057819c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005781a0  890f                 mov dword ptr [edi], ecx
// 005781a2  8b4004               mov eax, dword ptr [eax + 4]
// 005781a5  894704               mov dword ptr [edi + 4], eax
// 005781a8  85c0                 test eax, eax
// 005781aa  740c                 je 0x5781b8
// 005781ac  83c004               add eax, 4
// 005781af  b901000000           mov ecx, 1
// 005781b4  f00fc108             lock xadd dword ptr [eax], ecx
// 005781b8  8b742410             mov esi, dword ptr [esp + 0x10]
// 005781bc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005781c4  c744240801000000     mov dword ptr [esp + 8], 1
// 005781cc  85f6                 test esi, esi
// 005781ce  742a                 je 0x5781fa
// 005781d0  8d5604               lea edx, [esi + 4]
// 005781d3  83c8ff               or eax, 0xffffffff
// 005781d6  f00fc102             lock xadd dword ptr [edx], eax
// 005781da  751e                 jne 0x5781fa
// 005781dc  8b16                 mov edx, dword ptr [esi]
// 005781de  8b4204               mov eax, dword ptr [edx + 4]
// 005781e1  8bce                 mov ecx, esi
// 005781e3  ffd0                 call eax
// 005781e5  8d4e08               lea ecx, [esi + 8]
// 005781e8  83caff               or edx, 0xffffffff
// 005781eb  f00fc111             lock xadd dword ptr [ecx], edx
// 005781ef  7509                 jne 0x5781fa
// 005781f1  8b06                 mov eax, dword ptr [esi]
// 005781f3  8b5008               mov edx, dword ptr [eax + 8]
// 005781f6  8bce                 mov ecx, esi
// 005781f8  ffd2                 call edx
// 005781fa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005781fe  8bc7                 mov eax, edi
// 00578200  5f                   pop edi
// 00578201  5e                   pop esi
// 00578202  64890d00000000       mov dword ptr fs:[0], ecx
// 00578209  83c418               add esp, 0x18
// 0057820c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
