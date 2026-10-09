// roc 2009-12 006696c0  unit: RBX::VInstance::?$NonFactoryProduct  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006696c0
//
// 006696c0  83ec08               sub esp, 8
// 006696c3  56                   push esi
// 006696c4  8b742410             mov esi, dword ptr [esp + 0x10]
// 006696c8  57                   push edi
// 006696c9  8bf9                 mov edi, ecx
// 006696cb  56                   push esi
// 006696cc  8d4c2410             lea ecx, [esp + 0x10]
// 006696d0  8974240c             mov dword ptr [esp + 0xc], esi
// 006696d4  e867eaffff           call 0x668140
// 006696d9  56                   push esi
// 006696da  8d442410             lea eax, [esp + 0x10]
// 006696de  56                   push esi
// 006696df  50                   push eax
// 006696e0  e8abb31e00           call 0x854a90
// 006696e5  8d4c2414             lea ecx, [esp + 0x14]
// 006696e9  83c40c               add esp, 0xc
// 006696ec  3bcf                 cmp ecx, edi
// 006696ee  7406                 je 0x6696f6
// 006696f0  8b542408             mov edx, dword ptr [esp + 8]
// 006696f4  8917                 mov dword ptr [edi], edx
// 006696f6  8b7704               mov esi, dword ptr [edi + 4]
// 006696f9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006696fd  894704               mov dword ptr [edi + 4], eax
// 00669700  85f6                 test esi, esi
// 00669702  742a                 je 0x66972e
// 00669704  8d4e04               lea ecx, [esi + 4]
// 00669707  83caff               or edx, 0xffffffff
// 0066970a  f00fc111             lock xadd dword ptr [ecx], edx
// 0066970e  751e                 jne 0x66972e
// 00669710  8b06                 mov eax, dword ptr [esi]
// 00669712  8b5004               mov edx, dword ptr [eax + 4]
// 00669715  8bce                 mov ecx, esi
// 00669717  ffd2                 call edx
// 00669719  8d4608               lea eax, [esi + 8]
// 0066971c  83c9ff               or ecx, 0xffffffff
// 0066971f  f00fc108             lock xadd dword ptr [eax], ecx
// 00669723  7509                 jne 0x66972e
// 00669725  8b16                 mov edx, dword ptr [esi]
// 00669727  8b4208               mov eax, dword ptr [edx + 8]
// 0066972a  8bce                 mov ecx, esi
// 0066972c  ffd0                 call eax
// 0066972e  5f                   pop edi
// 0066972f  5e                   pop esi
// 00669730  83c408               add esp, 8
// 00669733  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
