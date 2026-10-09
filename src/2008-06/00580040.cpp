// roc 2008-06 00580040  unit: RBX::VMotorFeature::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00580040
//
// 00580040  6aff                 push -1
// 00580042  68a9677c00           push 0x7c67a9
// 00580047  64a100000000         mov eax, dword ptr fs:[0]
// 0058004d  50                   push eax
// 0058004e  64892500000000       mov dword ptr fs:[0], esp
// 00580055  83ec0c               sub esp, 0xc
// 00580058  8d442404             lea eax, [esp + 4]
// 0058005c  50                   push eax
// 0058005d  c744240400000000     mov dword ptr [esp + 4], 0
// 00580065  e856ffffff           call 0x57ffc0
// 0058006a  8b08                 mov ecx, dword ptr [eax]
// 0058006c  83c404               add esp, 4
// 0058006f  85c9                 test ecx, ecx
// 00580071  7405                 je 0x580078
// 00580073  83c110               add ecx, 0x10
// 00580076  eb02                 jmp 0x58007a
// 00580078  33c9                 xor ecx, ecx
// 0058007a  56                   push esi
// 0058007b  57                   push edi
// 0058007c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00580080  890f                 mov dword ptr [edi], ecx
// 00580082  8b4004               mov eax, dword ptr [eax + 4]
// 00580085  894704               mov dword ptr [edi + 4], eax
// 00580088  85c0                 test eax, eax
// 0058008a  740c                 je 0x580098
// 0058008c  83c004               add eax, 4
// 0058008f  b901000000           mov ecx, 1
// 00580094  f00fc108             lock xadd dword ptr [eax], ecx
// 00580098  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058009c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005800a4  c744240801000000     mov dword ptr [esp + 8], 1
// 005800ac  85f6                 test esi, esi
// 005800ae  742a                 je 0x5800da
// 005800b0  8d5604               lea edx, [esi + 4]
// 005800b3  83c8ff               or eax, 0xffffffff
// 005800b6  f00fc102             lock xadd dword ptr [edx], eax
// 005800ba  751e                 jne 0x5800da
// 005800bc  8b16                 mov edx, dword ptr [esi]
// 005800be  8b4204               mov eax, dword ptr [edx + 4]
// 005800c1  8bce                 mov ecx, esi
// 005800c3  ffd0                 call eax
// 005800c5  8d4e08               lea ecx, [esi + 8]
// 005800c8  83caff               or edx, 0xffffffff
// 005800cb  f00fc111             lock xadd dword ptr [ecx], edx
// 005800cf  7509                 jne 0x5800da
// 005800d1  8b06                 mov eax, dword ptr [esi]
// 005800d3  8b5008               mov edx, dword ptr [eax + 8]
// 005800d6  8bce                 mov ecx, esi
// 005800d8  ffd2                 call edx
// 005800da  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005800de  8bc7                 mov eax, edi
// 005800e0  5f                   pop edi
// 005800e1  5e                   pop esi
// 005800e2  64890d00000000       mov dword ptr fs:[0], ecx
// 005800e9  83c418               add esp, 0x18
// 005800ec  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
