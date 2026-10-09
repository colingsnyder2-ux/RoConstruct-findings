// roc 2008-06 004091c0  unit: RBX::VTeam::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004091c0
//
// 004091c0  6aff                 push -1
// 004091c2  68a9677c00           push 0x7c67a9
// 004091c7  64a100000000         mov eax, dword ptr fs:[0]
// 004091cd  50                   push eax
// 004091ce  64892500000000       mov dword ptr fs:[0], esp
// 004091d5  83ec0c               sub esp, 0xc
// 004091d8  8d442404             lea eax, [esp + 4]
// 004091dc  50                   push eax
// 004091dd  c744240400000000     mov dword ptr [esp + 4], 0
// 004091e5  e856ffffff           call 0x409140
// 004091ea  8b08                 mov ecx, dword ptr [eax]
// 004091ec  83c404               add esp, 4
// 004091ef  85c9                 test ecx, ecx
// 004091f1  7405                 je 0x4091f8
// 004091f3  83c110               add ecx, 0x10
// 004091f6  eb02                 jmp 0x4091fa
// 004091f8  33c9                 xor ecx, ecx
// 004091fa  56                   push esi
// 004091fb  57                   push edi
// 004091fc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00409200  890f                 mov dword ptr [edi], ecx
// 00409202  8b4004               mov eax, dword ptr [eax + 4]
// 00409205  894704               mov dword ptr [edi + 4], eax
// 00409208  85c0                 test eax, eax
// 0040920a  740c                 je 0x409218
// 0040920c  83c004               add eax, 4
// 0040920f  b901000000           mov ecx, 1
// 00409214  f00fc108             lock xadd dword ptr [eax], ecx
// 00409218  8b742410             mov esi, dword ptr [esp + 0x10]
// 0040921c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00409224  c744240801000000     mov dword ptr [esp + 8], 1
// 0040922c  85f6                 test esi, esi
// 0040922e  742a                 je 0x40925a
// 00409230  8d5604               lea edx, [esi + 4]
// 00409233  83c8ff               or eax, 0xffffffff
// 00409236  f00fc102             lock xadd dword ptr [edx], eax
// 0040923a  751e                 jne 0x40925a
// 0040923c  8b16                 mov edx, dword ptr [esi]
// 0040923e  8b4204               mov eax, dword ptr [edx + 4]
// 00409241  8bce                 mov ecx, esi
// 00409243  ffd0                 call eax
// 00409245  8d4e08               lea ecx, [esi + 8]
// 00409248  83caff               or edx, 0xffffffff
// 0040924b  f00fc111             lock xadd dword ptr [ecx], edx
// 0040924f  7509                 jne 0x40925a
// 00409251  8b06                 mov eax, dword ptr [esi]
// 00409253  8b5008               mov edx, dword ptr [eax + 8]
// 00409256  8bce                 mov ecx, esi
// 00409258  ffd2                 call edx
// 0040925a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040925e  8bc7                 mov eax, edi
// 00409260  5f                   pop edi
// 00409261  5e                   pop esi
// 00409262  64890d00000000       mov dword ptr fs:[0], ecx
// 00409269  83c418               add esp, 0x18
// 0040926c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
