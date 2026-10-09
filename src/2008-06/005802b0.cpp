// roc 2008-06 005802b0  unit: RBX::VHole::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005802b0
//
// 005802b0  6aff                 push -1
// 005802b2  68a9677c00           push 0x7c67a9
// 005802b7  64a100000000         mov eax, dword ptr fs:[0]
// 005802bd  50                   push eax
// 005802be  64892500000000       mov dword ptr fs:[0], esp
// 005802c5  83ec0c               sub esp, 0xc
// 005802c8  8d442404             lea eax, [esp + 4]
// 005802cc  50                   push eax
// 005802cd  c744240400000000     mov dword ptr [esp + 4], 0
// 005802d5  e856ffffff           call 0x580230
// 005802da  8b08                 mov ecx, dword ptr [eax]
// 005802dc  83c404               add esp, 4
// 005802df  85c9                 test ecx, ecx
// 005802e1  7405                 je 0x5802e8
// 005802e3  83c110               add ecx, 0x10
// 005802e6  eb02                 jmp 0x5802ea
// 005802e8  33c9                 xor ecx, ecx
// 005802ea  56                   push esi
// 005802eb  57                   push edi
// 005802ec  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005802f0  890f                 mov dword ptr [edi], ecx
// 005802f2  8b4004               mov eax, dword ptr [eax + 4]
// 005802f5  894704               mov dword ptr [edi + 4], eax
// 005802f8  85c0                 test eax, eax
// 005802fa  740c                 je 0x580308
// 005802fc  83c004               add eax, 4
// 005802ff  b901000000           mov ecx, 1
// 00580304  f00fc108             lock xadd dword ptr [eax], ecx
// 00580308  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058030c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00580314  c744240801000000     mov dword ptr [esp + 8], 1
// 0058031c  85f6                 test esi, esi
// 0058031e  742a                 je 0x58034a
// 00580320  8d5604               lea edx, [esi + 4]
// 00580323  83c8ff               or eax, 0xffffffff
// 00580326  f00fc102             lock xadd dword ptr [edx], eax
// 0058032a  751e                 jne 0x58034a
// 0058032c  8b16                 mov edx, dword ptr [esi]
// 0058032e  8b4204               mov eax, dword ptr [edx + 4]
// 00580331  8bce                 mov ecx, esi
// 00580333  ffd0                 call eax
// 00580335  8d4e08               lea ecx, [esi + 8]
// 00580338  83caff               or edx, 0xffffffff
// 0058033b  f00fc111             lock xadd dword ptr [ecx], edx
// 0058033f  7509                 jne 0x58034a
// 00580341  8b06                 mov eax, dword ptr [esi]
// 00580343  8b5008               mov edx, dword ptr [eax + 8]
// 00580346  8bce                 mov ecx, esi
// 00580348  ffd2                 call edx
// 0058034a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058034e  8bc7                 mov eax, edi
// 00580350  5f                   pop edi
// 00580351  5e                   pop esi
// 00580352  64890d00000000       mov dword ptr fs:[0], ecx
// 00580359  83c418               add esp, 0x18
// 0058035c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
