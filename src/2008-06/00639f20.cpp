// roc 2008-06 00639f20  unit: RBX::H$1?sIntValue::V?$Value::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00639f20
//
// 00639f20  6aff                 push -1
// 00639f22  68a9677c00           push 0x7c67a9
// 00639f27  64a100000000         mov eax, dword ptr fs:[0]
// 00639f2d  50                   push eax
// 00639f2e  64892500000000       mov dword ptr fs:[0], esp
// 00639f35  83ec0c               sub esp, 0xc
// 00639f38  8d442404             lea eax, [esp + 4]
// 00639f3c  50                   push eax
// 00639f3d  c744240400000000     mov dword ptr [esp + 4], 0
// 00639f45  e8b6f7ffff           call 0x639700
// 00639f4a  8b08                 mov ecx, dword ptr [eax]
// 00639f4c  83c404               add esp, 4
// 00639f4f  85c9                 test ecx, ecx
// 00639f51  7405                 je 0x639f58
// 00639f53  83c110               add ecx, 0x10
// 00639f56  eb02                 jmp 0x639f5a
// 00639f58  33c9                 xor ecx, ecx
// 00639f5a  56                   push esi
// 00639f5b  57                   push edi
// 00639f5c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00639f60  890f                 mov dword ptr [edi], ecx
// 00639f62  8b4004               mov eax, dword ptr [eax + 4]
// 00639f65  894704               mov dword ptr [edi + 4], eax
// 00639f68  85c0                 test eax, eax
// 00639f6a  740c                 je 0x639f78
// 00639f6c  83c004               add eax, 4
// 00639f6f  b901000000           mov ecx, 1
// 00639f74  f00fc108             lock xadd dword ptr [eax], ecx
// 00639f78  8b742410             mov esi, dword ptr [esp + 0x10]
// 00639f7c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00639f84  c744240801000000     mov dword ptr [esp + 8], 1
// 00639f8c  85f6                 test esi, esi
// 00639f8e  742a                 je 0x639fba
// 00639f90  8d5604               lea edx, [esi + 4]
// 00639f93  83c8ff               or eax, 0xffffffff
// 00639f96  f00fc102             lock xadd dword ptr [edx], eax
// 00639f9a  751e                 jne 0x639fba
// 00639f9c  8b16                 mov edx, dword ptr [esi]
// 00639f9e  8b4204               mov eax, dword ptr [edx + 4]
// 00639fa1  8bce                 mov ecx, esi
// 00639fa3  ffd0                 call eax
// 00639fa5  8d4e08               lea ecx, [esi + 8]
// 00639fa8  83caff               or edx, 0xffffffff
// 00639fab  f00fc111             lock xadd dword ptr [ecx], edx
// 00639faf  7509                 jne 0x639fba
// 00639fb1  8b06                 mov eax, dword ptr [esi]
// 00639fb3  8b5008               mov edx, dword ptr [eax + 8]
// 00639fb6  8bce                 mov ecx, esi
// 00639fb8  ffd2                 call edx
// 00639fba  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00639fbe  8bc7                 mov eax, edi
// 00639fc0  5f                   pop edi
// 00639fc1  5e                   pop esi
// 00639fc2  64890d00000000       mov dword ptr fs:[0], ecx
// 00639fc9  83c418               add esp, 0x18
// 00639fcc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
