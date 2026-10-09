// roc 2008-06 0045d950  unit: RBX::VControllerService::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045d950
//
// 0045d950  6aff                 push -1
// 0045d952  68a9677c00           push 0x7c67a9
// 0045d957  64a100000000         mov eax, dword ptr fs:[0]
// 0045d95d  50                   push eax
// 0045d95e  64892500000000       mov dword ptr fs:[0], esp
// 0045d965  83ec0c               sub esp, 0xc
// 0045d968  8d442404             lea eax, [esp + 4]
// 0045d96c  50                   push eax
// 0045d96d  c744240400000000     mov dword ptr [esp + 4], 0
// 0045d975  e806ecffff           call 0x45c580
// 0045d97a  8b08                 mov ecx, dword ptr [eax]
// 0045d97c  83c404               add esp, 4
// 0045d97f  85c9                 test ecx, ecx
// 0045d981  7405                 je 0x45d988
// 0045d983  83c110               add ecx, 0x10
// 0045d986  eb02                 jmp 0x45d98a
// 0045d988  33c9                 xor ecx, ecx
// 0045d98a  56                   push esi
// 0045d98b  57                   push edi
// 0045d98c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0045d990  890f                 mov dword ptr [edi], ecx
// 0045d992  8b4004               mov eax, dword ptr [eax + 4]
// 0045d995  894704               mov dword ptr [edi + 4], eax
// 0045d998  85c0                 test eax, eax
// 0045d99a  740c                 je 0x45d9a8
// 0045d99c  83c004               add eax, 4
// 0045d99f  b901000000           mov ecx, 1
// 0045d9a4  f00fc108             lock xadd dword ptr [eax], ecx
// 0045d9a8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0045d9ac  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0045d9b4  c744240801000000     mov dword ptr [esp + 8], 1
// 0045d9bc  85f6                 test esi, esi
// 0045d9be  742a                 je 0x45d9ea
// 0045d9c0  8d5604               lea edx, [esi + 4]
// 0045d9c3  83c8ff               or eax, 0xffffffff
// 0045d9c6  f00fc102             lock xadd dword ptr [edx], eax
// 0045d9ca  751e                 jne 0x45d9ea
// 0045d9cc  8b16                 mov edx, dword ptr [esi]
// 0045d9ce  8b4204               mov eax, dword ptr [edx + 4]
// 0045d9d1  8bce                 mov ecx, esi
// 0045d9d3  ffd0                 call eax
// 0045d9d5  8d4e08               lea ecx, [esi + 8]
// 0045d9d8  83caff               or edx, 0xffffffff
// 0045d9db  f00fc111             lock xadd dword ptr [ecx], edx
// 0045d9df  7509                 jne 0x45d9ea
// 0045d9e1  8b06                 mov eax, dword ptr [esi]
// 0045d9e3  8b5008               mov edx, dword ptr [eax + 8]
// 0045d9e6  8bce                 mov ecx, esi
// 0045d9e8  ffd2                 call edx
// 0045d9ea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0045d9ee  8bc7                 mov eax, edi
// 0045d9f0  5f                   pop edi
// 0045d9f1  5e                   pop esi
// 0045d9f2  64890d00000000       mov dword ptr fs:[0], ecx
// 0045d9f9  83c418               add esp, 0x18
// 0045d9fc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
