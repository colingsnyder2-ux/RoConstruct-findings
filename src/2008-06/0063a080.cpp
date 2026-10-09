// roc 2008-06 0063a080  unit: RBX::N$1?sDoubleValue::V?$Value::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063a080
//
// 0063a080  6aff                 push -1
// 0063a082  68a9677c00           push 0x7c67a9
// 0063a087  64a100000000         mov eax, dword ptr fs:[0]
// 0063a08d  50                   push eax
// 0063a08e  64892500000000       mov dword ptr fs:[0], esp
// 0063a095  83ec0c               sub esp, 0xc
// 0063a098  8d442404             lea eax, [esp + 4]
// 0063a09c  50                   push eax
// 0063a09d  c744240400000000     mov dword ptr [esp + 4], 0
// 0063a0a5  e856f7ffff           call 0x639800
// 0063a0aa  8b08                 mov ecx, dword ptr [eax]
// 0063a0ac  83c404               add esp, 4
// 0063a0af  85c9                 test ecx, ecx
// 0063a0b1  7405                 je 0x63a0b8
// 0063a0b3  83c110               add ecx, 0x10
// 0063a0b6  eb02                 jmp 0x63a0ba
// 0063a0b8  33c9                 xor ecx, ecx
// 0063a0ba  56                   push esi
// 0063a0bb  57                   push edi
// 0063a0bc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0063a0c0  890f                 mov dword ptr [edi], ecx
// 0063a0c2  8b4004               mov eax, dword ptr [eax + 4]
// 0063a0c5  894704               mov dword ptr [edi + 4], eax
// 0063a0c8  85c0                 test eax, eax
// 0063a0ca  740c                 je 0x63a0d8
// 0063a0cc  83c004               add eax, 4
// 0063a0cf  b901000000           mov ecx, 1
// 0063a0d4  f00fc108             lock xadd dword ptr [eax], ecx
// 0063a0d8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0063a0dc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0063a0e4  c744240801000000     mov dword ptr [esp + 8], 1
// 0063a0ec  85f6                 test esi, esi
// 0063a0ee  742a                 je 0x63a11a
// 0063a0f0  8d5604               lea edx, [esi + 4]
// 0063a0f3  83c8ff               or eax, 0xffffffff
// 0063a0f6  f00fc102             lock xadd dword ptr [edx], eax
// 0063a0fa  751e                 jne 0x63a11a
// 0063a0fc  8b16                 mov edx, dword ptr [esi]
// 0063a0fe  8b4204               mov eax, dword ptr [edx + 4]
// 0063a101  8bce                 mov ecx, esi
// 0063a103  ffd0                 call eax
// 0063a105  8d4e08               lea ecx, [esi + 8]
// 0063a108  83caff               or edx, 0xffffffff
// 0063a10b  f00fc111             lock xadd dword ptr [ecx], edx
// 0063a10f  7509                 jne 0x63a11a
// 0063a111  8b06                 mov eax, dword ptr [esi]
// 0063a113  8b5008               mov edx, dword ptr [eax + 8]
// 0063a116  8bce                 mov ecx, esi
// 0063a118  ffd2                 call edx
// 0063a11a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063a11e  8bc7                 mov eax, edi
// 0063a120  5f                   pop edi
// 0063a121  5e                   pop esi
// 0063a122  64890d00000000       mov dword ptr fs:[0], ecx
// 0063a129  83c418               add esp, 0x18
// 0063a12c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
