// roc 2008-06 00639fd0  unit: RBX::_N$1?sBoolValue::V?$Value::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00639fd0
//
// 00639fd0  6aff                 push -1
// 00639fd2  68a9677c00           push 0x7c67a9
// 00639fd7  64a100000000         mov eax, dword ptr fs:[0]
// 00639fdd  50                   push eax
// 00639fde  64892500000000       mov dword ptr fs:[0], esp
// 00639fe5  83ec0c               sub esp, 0xc
// 00639fe8  8d442404             lea eax, [esp + 4]
// 00639fec  50                   push eax
// 00639fed  c744240400000000     mov dword ptr [esp + 4], 0
// 00639ff5  e886f7ffff           call 0x639780
// 00639ffa  8b08                 mov ecx, dword ptr [eax]
// 00639ffc  83c404               add esp, 4
// 00639fff  85c9                 test ecx, ecx
// 0063a001  7405                 je 0x63a008
// 0063a003  83c110               add ecx, 0x10
// 0063a006  eb02                 jmp 0x63a00a
// 0063a008  33c9                 xor ecx, ecx
// 0063a00a  56                   push esi
// 0063a00b  57                   push edi
// 0063a00c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0063a010  890f                 mov dword ptr [edi], ecx
// 0063a012  8b4004               mov eax, dword ptr [eax + 4]
// 0063a015  894704               mov dword ptr [edi + 4], eax
// 0063a018  85c0                 test eax, eax
// 0063a01a  740c                 je 0x63a028
// 0063a01c  83c004               add eax, 4
// 0063a01f  b901000000           mov ecx, 1
// 0063a024  f00fc108             lock xadd dword ptr [eax], ecx
// 0063a028  8b742410             mov esi, dword ptr [esp + 0x10]
// 0063a02c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0063a034  c744240801000000     mov dword ptr [esp + 8], 1
// 0063a03c  85f6                 test esi, esi
// 0063a03e  742a                 je 0x63a06a
// 0063a040  8d5604               lea edx, [esi + 4]
// 0063a043  83c8ff               or eax, 0xffffffff
// 0063a046  f00fc102             lock xadd dword ptr [edx], eax
// 0063a04a  751e                 jne 0x63a06a
// 0063a04c  8b16                 mov edx, dword ptr [esi]
// 0063a04e  8b4204               mov eax, dword ptr [edx + 4]
// 0063a051  8bce                 mov ecx, esi
// 0063a053  ffd0                 call eax
// 0063a055  8d4e08               lea ecx, [esi + 8]
// 0063a058  83caff               or edx, 0xffffffff
// 0063a05b  f00fc111             lock xadd dword ptr [ecx], edx
// 0063a05f  7509                 jne 0x63a06a
// 0063a061  8b06                 mov eax, dword ptr [esi]
// 0063a063  8b5008               mov edx, dword ptr [eax + 8]
// 0063a066  8bce                 mov ecx, esi
// 0063a068  ffd2                 call edx
// 0063a06a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063a06e  8bc7                 mov eax, edi
// 0063a070  5f                   pop edi
// 0063a071  5e                   pop esi
// 0063a072  64890d00000000       mov dword ptr fs:[0], ecx
// 0063a079  83c418               add esp, 0x18
// 0063a07c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
