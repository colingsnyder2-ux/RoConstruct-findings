// roc 2008-06 004b21c0  unit: RBX::VLighting::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b21c0
//
// 004b21c0  6aff                 push -1
// 004b21c2  68a9677c00           push 0x7c67a9
// 004b21c7  64a100000000         mov eax, dword ptr fs:[0]
// 004b21cd  50                   push eax
// 004b21ce  64892500000000       mov dword ptr fs:[0], esp
// 004b21d5  83ec0c               sub esp, 0xc
// 004b21d8  8d442404             lea eax, [esp + 4]
// 004b21dc  50                   push eax
// 004b21dd  c744240400000000     mov dword ptr [esp + 4], 0
// 004b21e5  e876b9ffff           call 0x4adb60
// 004b21ea  8b08                 mov ecx, dword ptr [eax]
// 004b21ec  83c404               add esp, 4
// 004b21ef  85c9                 test ecx, ecx
// 004b21f1  7405                 je 0x4b21f8
// 004b21f3  83c110               add ecx, 0x10
// 004b21f6  eb02                 jmp 0x4b21fa
// 004b21f8  33c9                 xor ecx, ecx
// 004b21fa  56                   push esi
// 004b21fb  57                   push edi
// 004b21fc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004b2200  890f                 mov dword ptr [edi], ecx
// 004b2202  8b4004               mov eax, dword ptr [eax + 4]
// 004b2205  894704               mov dword ptr [edi + 4], eax
// 004b2208  85c0                 test eax, eax
// 004b220a  740c                 je 0x4b2218
// 004b220c  83c004               add eax, 4
// 004b220f  b901000000           mov ecx, 1
// 004b2214  f00fc108             lock xadd dword ptr [eax], ecx
// 004b2218  8b742410             mov esi, dword ptr [esp + 0x10]
// 004b221c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004b2224  c744240801000000     mov dword ptr [esp + 8], 1
// 004b222c  85f6                 test esi, esi
// 004b222e  742a                 je 0x4b225a
// 004b2230  8d5604               lea edx, [esi + 4]
// 004b2233  83c8ff               or eax, 0xffffffff
// 004b2236  f00fc102             lock xadd dword ptr [edx], eax
// 004b223a  751e                 jne 0x4b225a
// 004b223c  8b16                 mov edx, dword ptr [esi]
// 004b223e  8b4204               mov eax, dword ptr [edx + 4]
// 004b2241  8bce                 mov ecx, esi
// 004b2243  ffd0                 call eax
// 004b2245  8d4e08               lea ecx, [esi + 8]
// 004b2248  83caff               or edx, 0xffffffff
// 004b224b  f00fc111             lock xadd dword ptr [ecx], edx
// 004b224f  7509                 jne 0x4b225a
// 004b2251  8b06                 mov eax, dword ptr [esi]
// 004b2253  8b5008               mov edx, dword ptr [eax + 8]
// 004b2256  8bce                 mov ecx, esi
// 004b2258  ffd2                 call edx
// 004b225a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b225e  8bc7                 mov eax, edi
// 004b2260  5f                   pop edi
// 004b2261  5e                   pop esi
// 004b2262  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2269  83c418               add esp, 0x18
// 004b226c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
