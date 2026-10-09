// roc 2008-06 005c10c0  unit: RBX::VFlagStand::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c10c0
//
// 005c10c0  6aff                 push -1
// 005c10c2  68a9677c00           push 0x7c67a9
// 005c10c7  64a100000000         mov eax, dword ptr fs:[0]
// 005c10cd  50                   push eax
// 005c10ce  64892500000000       mov dword ptr fs:[0], esp
// 005c10d5  83ec0c               sub esp, 0xc
// 005c10d8  8d442404             lea eax, [esp + 4]
// 005c10dc  50                   push eax
// 005c10dd  c744240400000000     mov dword ptr [esp + 4], 0
// 005c10e5  e856ffffff           call 0x5c1040
// 005c10ea  8b08                 mov ecx, dword ptr [eax]
// 005c10ec  83c404               add esp, 4
// 005c10ef  85c9                 test ecx, ecx
// 005c10f1  7405                 je 0x5c10f8
// 005c10f3  83c110               add ecx, 0x10
// 005c10f6  eb02                 jmp 0x5c10fa
// 005c10f8  33c9                 xor ecx, ecx
// 005c10fa  56                   push esi
// 005c10fb  57                   push edi
// 005c10fc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005c1100  890f                 mov dword ptr [edi], ecx
// 005c1102  8b4004               mov eax, dword ptr [eax + 4]
// 005c1105  894704               mov dword ptr [edi + 4], eax
// 005c1108  85c0                 test eax, eax
// 005c110a  740c                 je 0x5c1118
// 005c110c  83c004               add eax, 4
// 005c110f  b901000000           mov ecx, 1
// 005c1114  f00fc108             lock xadd dword ptr [eax], ecx
// 005c1118  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c111c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005c1124  c744240801000000     mov dword ptr [esp + 8], 1
// 005c112c  85f6                 test esi, esi
// 005c112e  742a                 je 0x5c115a
// 005c1130  8d5604               lea edx, [esi + 4]
// 005c1133  83c8ff               or eax, 0xffffffff
// 005c1136  f00fc102             lock xadd dword ptr [edx], eax
// 005c113a  751e                 jne 0x5c115a
// 005c113c  8b16                 mov edx, dword ptr [esi]
// 005c113e  8b4204               mov eax, dword ptr [edx + 4]
// 005c1141  8bce                 mov ecx, esi
// 005c1143  ffd0                 call eax
// 005c1145  8d4e08               lea ecx, [esi + 8]
// 005c1148  83caff               or edx, 0xffffffff
// 005c114b  f00fc111             lock xadd dword ptr [ecx], edx
// 005c114f  7509                 jne 0x5c115a
// 005c1151  8b06                 mov eax, dword ptr [esi]
// 005c1153  8b5008               mov edx, dword ptr [eax + 8]
// 005c1156  8bce                 mov ecx, esi
// 005c1158  ffd2                 call edx
// 005c115a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c115e  8bc7                 mov eax, edi
// 005c1160  5f                   pop edi
// 005c1161  5e                   pop esi
// 005c1162  64890d00000000       mov dword ptr fs:[0], ecx
// 005c1169  83c418               add esp, 0x18
// 005c116c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
