// roc 2008-06 005c1330  unit: RBX::VFlagStandService::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c1330
//
// 005c1330  6aff                 push -1
// 005c1332  68a9677c00           push 0x7c67a9
// 005c1337  64a100000000         mov eax, dword ptr fs:[0]
// 005c133d  50                   push eax
// 005c133e  64892500000000       mov dword ptr fs:[0], esp
// 005c1345  83ec0c               sub esp, 0xc
// 005c1348  8d442404             lea eax, [esp + 4]
// 005c134c  50                   push eax
// 005c134d  c744240400000000     mov dword ptr [esp + 4], 0
// 005c1355  e856ffffff           call 0x5c12b0
// 005c135a  8b08                 mov ecx, dword ptr [eax]
// 005c135c  83c404               add esp, 4
// 005c135f  85c9                 test ecx, ecx
// 005c1361  7405                 je 0x5c1368
// 005c1363  83c110               add ecx, 0x10
// 005c1366  eb02                 jmp 0x5c136a
// 005c1368  33c9                 xor ecx, ecx
// 005c136a  56                   push esi
// 005c136b  57                   push edi
// 005c136c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005c1370  890f                 mov dword ptr [edi], ecx
// 005c1372  8b4004               mov eax, dword ptr [eax + 4]
// 005c1375  894704               mov dword ptr [edi + 4], eax
// 005c1378  85c0                 test eax, eax
// 005c137a  740c                 je 0x5c1388
// 005c137c  83c004               add eax, 4
// 005c137f  b901000000           mov ecx, 1
// 005c1384  f00fc108             lock xadd dword ptr [eax], ecx
// 005c1388  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c138c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005c1394  c744240801000000     mov dword ptr [esp + 8], 1
// 005c139c  85f6                 test esi, esi
// 005c139e  742a                 je 0x5c13ca
// 005c13a0  8d5604               lea edx, [esi + 4]
// 005c13a3  83c8ff               or eax, 0xffffffff
// 005c13a6  f00fc102             lock xadd dword ptr [edx], eax
// 005c13aa  751e                 jne 0x5c13ca
// 005c13ac  8b16                 mov edx, dword ptr [esi]
// 005c13ae  8b4204               mov eax, dword ptr [edx + 4]
// 005c13b1  8bce                 mov ecx, esi
// 005c13b3  ffd0                 call eax
// 005c13b5  8d4e08               lea ecx, [esi + 8]
// 005c13b8  83caff               or edx, 0xffffffff
// 005c13bb  f00fc111             lock xadd dword ptr [ecx], edx
// 005c13bf  7509                 jne 0x5c13ca
// 005c13c1  8b06                 mov eax, dword ptr [esi]
// 005c13c3  8b5008               mov edx, dword ptr [eax + 8]
// 005c13c6  8bce                 mov ecx, esi
// 005c13c8  ffd2                 call edx
// 005c13ca  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c13ce  8bc7                 mov eax, edi
// 005c13d0  5f                   pop edi
// 005c13d1  5e                   pop esi
// 005c13d2  64890d00000000       mov dword ptr fs:[0], ecx
// 005c13d9  83c418               add esp, 0x18
// 005c13dc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
