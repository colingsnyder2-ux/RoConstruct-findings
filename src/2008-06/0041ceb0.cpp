// roc 2008-06 0041ceb0  unit: VDHTMLWindowService::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041ceb0
//
// 0041ceb0  6aff                 push -1
// 0041ceb2  68a9677c00           push 0x7c67a9
// 0041ceb7  64a100000000         mov eax, dword ptr fs:[0]
// 0041cebd  50                   push eax
// 0041cebe  64892500000000       mov dword ptr fs:[0], esp
// 0041cec5  83ec0c               sub esp, 0xc
// 0041cec8  8d442404             lea eax, [esp + 4]
// 0041cecc  50                   push eax
// 0041cecd  c744240400000000     mov dword ptr [esp + 4], 0
// 0041ced5  e8c6feffff           call 0x41cda0
// 0041ceda  8b08                 mov ecx, dword ptr [eax]
// 0041cedc  83c404               add esp, 4
// 0041cedf  85c9                 test ecx, ecx
// 0041cee1  7405                 je 0x41cee8
// 0041cee3  83c110               add ecx, 0x10
// 0041cee6  eb02                 jmp 0x41ceea
// 0041cee8  33c9                 xor ecx, ecx
// 0041ceea  56                   push esi
// 0041ceeb  57                   push edi
// 0041ceec  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0041cef0  890f                 mov dword ptr [edi], ecx
// 0041cef2  8b4004               mov eax, dword ptr [eax + 4]
// 0041cef5  894704               mov dword ptr [edi + 4], eax
// 0041cef8  85c0                 test eax, eax
// 0041cefa  740c                 je 0x41cf08
// 0041cefc  83c004               add eax, 4
// 0041ceff  b901000000           mov ecx, 1
// 0041cf04  f00fc108             lock xadd dword ptr [eax], ecx
// 0041cf08  8b742410             mov esi, dword ptr [esp + 0x10]
// 0041cf0c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0041cf14  c744240801000000     mov dword ptr [esp + 8], 1
// 0041cf1c  85f6                 test esi, esi
// 0041cf1e  742a                 je 0x41cf4a
// 0041cf20  8d5604               lea edx, [esi + 4]
// 0041cf23  83c8ff               or eax, 0xffffffff
// 0041cf26  f00fc102             lock xadd dword ptr [edx], eax
// 0041cf2a  751e                 jne 0x41cf4a
// 0041cf2c  8b16                 mov edx, dword ptr [esi]
// 0041cf2e  8b4204               mov eax, dword ptr [edx + 4]
// 0041cf31  8bce                 mov ecx, esi
// 0041cf33  ffd0                 call eax
// 0041cf35  8d4e08               lea ecx, [esi + 8]
// 0041cf38  83caff               or edx, 0xffffffff
// 0041cf3b  f00fc111             lock xadd dword ptr [ecx], edx
// 0041cf3f  7509                 jne 0x41cf4a
// 0041cf41  8b06                 mov eax, dword ptr [esi]
// 0041cf43  8b5008               mov edx, dword ptr [eax + 8]
// 0041cf46  8bce                 mov ecx, esi
// 0041cf48  ffd2                 call edx
// 0041cf4a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041cf4e  8bc7                 mov eax, edi
// 0041cf50  5f                   pop edi
// 0041cf51  5e                   pop esi
// 0041cf52  64890d00000000       mov dword ptr fs:[0], ecx
// 0041cf59  83c418               add esp, 0x18
// 0041cf5c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
