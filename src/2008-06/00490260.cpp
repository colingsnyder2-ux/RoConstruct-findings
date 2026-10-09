// roc 2008-06 00490260  unit: RBX::VSkin::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00490260
//
// 00490260  6aff                 push -1
// 00490262  68a9677c00           push 0x7c67a9
// 00490267  64a100000000         mov eax, dword ptr fs:[0]
// 0049026d  50                   push eax
// 0049026e  64892500000000       mov dword ptr fs:[0], esp
// 00490275  83ec0c               sub esp, 0xc
// 00490278  8d442404             lea eax, [esp + 4]
// 0049027c  50                   push eax
// 0049027d  c744240400000000     mov dword ptr [esp + 4], 0
// 00490285  e856ffffff           call 0x4901e0
// 0049028a  8b08                 mov ecx, dword ptr [eax]
// 0049028c  83c404               add esp, 4
// 0049028f  85c9                 test ecx, ecx
// 00490291  7405                 je 0x490298
// 00490293  83c110               add ecx, 0x10
// 00490296  eb02                 jmp 0x49029a
// 00490298  33c9                 xor ecx, ecx
// 0049029a  56                   push esi
// 0049029b  57                   push edi
// 0049029c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004902a0  890f                 mov dword ptr [edi], ecx
// 004902a2  8b4004               mov eax, dword ptr [eax + 4]
// 004902a5  894704               mov dword ptr [edi + 4], eax
// 004902a8  85c0                 test eax, eax
// 004902aa  740c                 je 0x4902b8
// 004902ac  83c004               add eax, 4
// 004902af  b901000000           mov ecx, 1
// 004902b4  f00fc108             lock xadd dword ptr [eax], ecx
// 004902b8  8b742410             mov esi, dword ptr [esp + 0x10]
// 004902bc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004902c4  c744240801000000     mov dword ptr [esp + 8], 1
// 004902cc  85f6                 test esi, esi
// 004902ce  742a                 je 0x4902fa
// 004902d0  8d5604               lea edx, [esi + 4]
// 004902d3  83c8ff               or eax, 0xffffffff
// 004902d6  f00fc102             lock xadd dword ptr [edx], eax
// 004902da  751e                 jne 0x4902fa
// 004902dc  8b16                 mov edx, dword ptr [esi]
// 004902de  8b4204               mov eax, dword ptr [edx + 4]
// 004902e1  8bce                 mov ecx, esi
// 004902e3  ffd0                 call eax
// 004902e5  8d4e08               lea ecx, [esi + 8]
// 004902e8  83caff               or edx, 0xffffffff
// 004902eb  f00fc111             lock xadd dword ptr [ecx], edx
// 004902ef  7509                 jne 0x4902fa
// 004902f1  8b06                 mov eax, dword ptr [esi]
// 004902f3  8b5008               mov edx, dword ptr [eax + 8]
// 004902f6  8bce                 mov ecx, esi
// 004902f8  ffd2                 call edx
// 004902fa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004902fe  8bc7                 mov eax, edi
// 00490300  5f                   pop edi
// 00490301  5e                   pop esi
// 00490302  64890d00000000       mov dword ptr fs:[0], ecx
// 00490309  83c418               add esp, 0x18
// 0049030c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
