// roc 2008-06 00494940  unit: RBX::VPants::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00494940
//
// 00494940  6aff                 push -1
// 00494942  68a9677c00           push 0x7c67a9
// 00494947  64a100000000         mov eax, dword ptr fs:[0]
// 0049494d  50                   push eax
// 0049494e  64892500000000       mov dword ptr fs:[0], esp
// 00494955  83ec0c               sub esp, 0xc
// 00494958  8d442404             lea eax, [esp + 4]
// 0049495c  50                   push eax
// 0049495d  c744240400000000     mov dword ptr [esp + 4], 0
// 00494965  e866f8ffff           call 0x4941d0
// 0049496a  8b08                 mov ecx, dword ptr [eax]
// 0049496c  83c404               add esp, 4
// 0049496f  85c9                 test ecx, ecx
// 00494971  7405                 je 0x494978
// 00494973  83c110               add ecx, 0x10
// 00494976  eb02                 jmp 0x49497a
// 00494978  33c9                 xor ecx, ecx
// 0049497a  56                   push esi
// 0049497b  57                   push edi
// 0049497c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00494980  890f                 mov dword ptr [edi], ecx
// 00494982  8b4004               mov eax, dword ptr [eax + 4]
// 00494985  894704               mov dword ptr [edi + 4], eax
// 00494988  85c0                 test eax, eax
// 0049498a  740c                 je 0x494998
// 0049498c  83c004               add eax, 4
// 0049498f  b901000000           mov ecx, 1
// 00494994  f00fc108             lock xadd dword ptr [eax], ecx
// 00494998  8b742410             mov esi, dword ptr [esp + 0x10]
// 0049499c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004949a4  c744240801000000     mov dword ptr [esp + 8], 1
// 004949ac  85f6                 test esi, esi
// 004949ae  742a                 je 0x4949da
// 004949b0  8d5604               lea edx, [esi + 4]
// 004949b3  83c8ff               or eax, 0xffffffff
// 004949b6  f00fc102             lock xadd dword ptr [edx], eax
// 004949ba  751e                 jne 0x4949da
// 004949bc  8b16                 mov edx, dword ptr [esi]
// 004949be  8b4204               mov eax, dword ptr [edx + 4]
// 004949c1  8bce                 mov ecx, esi
// 004949c3  ffd0                 call eax
// 004949c5  8d4e08               lea ecx, [esi + 8]
// 004949c8  83caff               or edx, 0xffffffff
// 004949cb  f00fc111             lock xadd dword ptr [ecx], edx
// 004949cf  7509                 jne 0x4949da
// 004949d1  8b06                 mov eax, dword ptr [esi]
// 004949d3  8b5008               mov edx, dword ptr [eax + 8]
// 004949d6  8bce                 mov ecx, esi
// 004949d8  ffd2                 call edx
// 004949da  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004949de  8bc7                 mov eax, edi
// 004949e0  5f                   pop edi
// 004949e1  5e                   pop esi
// 004949e2  64890d00000000       mov dword ptr fs:[0], ecx
// 004949e9  83c418               add esp, 0x18
// 004949ec  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
