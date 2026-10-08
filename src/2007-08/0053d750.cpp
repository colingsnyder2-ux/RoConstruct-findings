// roc 2007-08 0053d750  unit: RBX::Script  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053d750
//
// 0053d750  83ec08               sub esp, 8
// 0053d753  56                   push esi
// 0053d754  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053d758  57                   push edi
// 0053d759  8bf9                 mov edi, ecx
// 0053d75b  56                   push esi
// 0053d75c  8d4c2410             lea ecx, [esp + 0x10]
// 0053d760  8974240c             mov dword ptr [esp + 0xc], esi
// 0053d764  e877fbffff           call 0x53d2e0
// 0053d769  56                   push esi
// 0053d76a  8d442410             lea eax, [esp + 0x10]
// 0053d76e  56                   push esi
// 0053d76f  50                   push eax
// 0053d770  e8abf4ecff           call 0x40cc20
// 0053d775  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0053d779  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053d77d  890f                 mov dword ptr [edi], ecx
// 0053d77f  8b7704               mov esi, dword ptr [edi + 4]
// 0053d782  83c40c               add esp, 0xc
// 0053d785  85f6                 test esi, esi
// 0053d787  895704               mov dword ptr [edi + 4], edx
// 0053d78a  742a                 je 0x53d7b6
// 0053d78c  8d4604               lea eax, [esi + 4]
// 0053d78f  83c9ff               or ecx, 0xffffffff
// 0053d792  f00fc108             lock xadd dword ptr [eax], ecx
// 0053d796  751e                 jne 0x53d7b6
// 0053d798  8b16                 mov edx, dword ptr [esi]
// 0053d79a  8b4204               mov eax, dword ptr [edx + 4]
// 0053d79d  8bce                 mov ecx, esi
// 0053d79f  ffd0                 call eax
// 0053d7a1  8d4e08               lea ecx, [esi + 8]
// 0053d7a4  83caff               or edx, 0xffffffff
// 0053d7a7  f00fc111             lock xadd dword ptr [ecx], edx
// 0053d7ab  7509                 jne 0x53d7b6
// 0053d7ad  8b06                 mov eax, dword ptr [esi]
// 0053d7af  8b5008               mov edx, dword ptr [eax + 8]
// 0053d7b2  8bce                 mov ecx, esi
// 0053d7b4  ffd2                 call edx
// 0053d7b6  5f                   pop edi
// 0053d7b7  5e                   pop esi
// 0053d7b8  83c408               add esp, 8
// 0053d7bb  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
