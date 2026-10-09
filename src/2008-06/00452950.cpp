// roc 2008-06 00452950  unit: RBX::VVisit::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00452950
//
// 00452950  6aff                 push -1
// 00452952  68a9677c00           push 0x7c67a9
// 00452957  64a100000000         mov eax, dword ptr fs:[0]
// 0045295d  50                   push eax
// 0045295e  64892500000000       mov dword ptr fs:[0], esp
// 00452965  83ec0c               sub esp, 0xc
// 00452968  8d442404             lea eax, [esp + 4]
// 0045296c  50                   push eax
// 0045296d  c744240400000000     mov dword ptr [esp + 4], 0
// 00452975  e856ffffff           call 0x4528d0
// 0045297a  8b08                 mov ecx, dword ptr [eax]
// 0045297c  83c404               add esp, 4
// 0045297f  85c9                 test ecx, ecx
// 00452981  7405                 je 0x452988
// 00452983  83c110               add ecx, 0x10
// 00452986  eb02                 jmp 0x45298a
// 00452988  33c9                 xor ecx, ecx
// 0045298a  56                   push esi
// 0045298b  57                   push edi
// 0045298c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00452990  890f                 mov dword ptr [edi], ecx
// 00452992  8b4004               mov eax, dword ptr [eax + 4]
// 00452995  894704               mov dword ptr [edi + 4], eax
// 00452998  85c0                 test eax, eax
// 0045299a  740c                 je 0x4529a8
// 0045299c  83c004               add eax, 4
// 0045299f  b901000000           mov ecx, 1
// 004529a4  f00fc108             lock xadd dword ptr [eax], ecx
// 004529a8  8b742410             mov esi, dword ptr [esp + 0x10]
// 004529ac  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004529b4  c744240801000000     mov dword ptr [esp + 8], 1
// 004529bc  85f6                 test esi, esi
// 004529be  742a                 je 0x4529ea
// 004529c0  8d5604               lea edx, [esi + 4]
// 004529c3  83c8ff               or eax, 0xffffffff
// 004529c6  f00fc102             lock xadd dword ptr [edx], eax
// 004529ca  751e                 jne 0x4529ea
// 004529cc  8b16                 mov edx, dword ptr [esi]
// 004529ce  8b4204               mov eax, dword ptr [edx + 4]
// 004529d1  8bce                 mov ecx, esi
// 004529d3  ffd0                 call eax
// 004529d5  8d4e08               lea ecx, [esi + 8]
// 004529d8  83caff               or edx, 0xffffffff
// 004529db  f00fc111             lock xadd dword ptr [ecx], edx
// 004529df  7509                 jne 0x4529ea
// 004529e1  8b06                 mov eax, dword ptr [esi]
// 004529e3  8b5008               mov edx, dword ptr [eax + 8]
// 004529e6  8bce                 mov ecx, esi
// 004529e8  ffd2                 call edx
// 004529ea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004529ee  8bc7                 mov eax, edi
// 004529f0  5f                   pop edi
// 004529f1  5e                   pop esi
// 004529f2  64890d00000000       mov dword ptr fs:[0], ecx
// 004529f9  83c418               add esp, 0x18
// 004529fc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
