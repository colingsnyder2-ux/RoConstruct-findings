// roc 2008-06 004a4fa0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a4fa0
//
// 004a4fa0  6aff                 push -1
// 004a4fa2  68a9677c00           push 0x7c67a9
// 004a4fa7  64a100000000         mov eax, dword ptr fs:[0]
// 004a4fad  50                   push eax
// 004a4fae  64892500000000       mov dword ptr fs:[0], esp
// 004a4fb5  83ec0c               sub esp, 0xc
// 004a4fb8  8d442404             lea eax, [esp + 4]
// 004a4fbc  50                   push eax
// 004a4fbd  c744240400000000     mov dword ptr [esp + 4], 0
// 004a4fc5  e876fdffff           call 0x4a4d40
// 004a4fca  8b08                 mov ecx, dword ptr [eax]
// 004a4fcc  83c404               add esp, 4
// 004a4fcf  85c9                 test ecx, ecx
// 004a4fd1  7405                 je 0x4a4fd8
// 004a4fd3  83c110               add ecx, 0x10
// 004a4fd6  eb02                 jmp 0x4a4fda
// 004a4fd8  33c9                 xor ecx, ecx
// 004a4fda  56                   push esi
// 004a4fdb  57                   push edi
// 004a4fdc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004a4fe0  890f                 mov dword ptr [edi], ecx
// 004a4fe2  8b4004               mov eax, dword ptr [eax + 4]
// 004a4fe5  894704               mov dword ptr [edi + 4], eax
// 004a4fe8  85c0                 test eax, eax
// 004a4fea  740c                 je 0x4a4ff8
// 004a4fec  83c004               add eax, 4
// 004a4fef  b901000000           mov ecx, 1
// 004a4ff4  f00fc108             lock xadd dword ptr [eax], ecx
// 004a4ff8  8b742410             mov esi, dword ptr [esp + 0x10]
// 004a4ffc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004a5004  c744240801000000     mov dword ptr [esp + 8], 1
// 004a500c  85f6                 test esi, esi
// 004a500e  742a                 je 0x4a503a
// 004a5010  8d5604               lea edx, [esi + 4]
// 004a5013  83c8ff               or eax, 0xffffffff
// 004a5016  f00fc102             lock xadd dword ptr [edx], eax
// 004a501a  751e                 jne 0x4a503a
// 004a501c  8b16                 mov edx, dword ptr [esi]
// 004a501e  8b4204               mov eax, dword ptr [edx + 4]
// 004a5021  8bce                 mov ecx, esi
// 004a5023  ffd0                 call eax
// 004a5025  8d4e08               lea ecx, [esi + 8]
// 004a5028  83caff               or edx, 0xffffffff
// 004a502b  f00fc111             lock xadd dword ptr [ecx], edx
// 004a502f  7509                 jne 0x4a503a
// 004a5031  8b06                 mov eax, dword ptr [esi]
// 004a5033  8b5008               mov edx, dword ptr [eax + 8]
// 004a5036  8bce                 mov ecx, esi
// 004a5038  ffd2                 call edx
// 004a503a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a503e  8bc7                 mov eax, edi
// 004a5040  5f                   pop edi
// 004a5041  5e                   pop esi
// 004a5042  64890d00000000       mov dword ptr fs:[0], ecx
// 004a5049  83c418               add esp, 0x18
// 004a504c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
