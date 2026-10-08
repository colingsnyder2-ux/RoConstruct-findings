// roc 2008-06 00422c60  unit: CRobloxTreeCtrl  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422c60
//
// 00422c60  6aff                 push -1
// 00422c62  6838077d00           push 0x7d0738
// 00422c67  64a100000000         mov eax, dword ptr fs:[0]
// 00422c6d  50                   push eax
// 00422c6e  64892500000000       mov dword ptr fs:[0], esp
// 00422c75  51                   push ecx
// 00422c76  56                   push esi
// 00422c77  57                   push edi
// 00422c78  8bf9                 mov edi, ecx
// 00422c7a  897c2408             mov dword ptr [esp + 8], edi
// 00422c7e  8b770c               mov esi, dword ptr [edi + 0xc]
// 00422c81  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00422c89  85f6                 test esi, esi
// 00422c8b  742a                 je 0x422cb7
// 00422c8d  8d4604               lea eax, [esi + 4]
// 00422c90  83c9ff               or ecx, 0xffffffff
// 00422c93  f00fc108             lock xadd dword ptr [eax], ecx
// 00422c97  751e                 jne 0x422cb7
// 00422c99  8b16                 mov edx, dword ptr [esi]
// 00422c9b  8b4204               mov eax, dword ptr [edx + 4]
// 00422c9e  8bce                 mov ecx, esi
// 00422ca0  ffd0                 call eax
// 00422ca2  8d4e08               lea ecx, [esi + 8]
// 00422ca5  83caff               or edx, 0xffffffff
// 00422ca8  f00fc111             lock xadd dword ptr [ecx], edx
// 00422cac  7509                 jne 0x422cb7
// 00422cae  8b06                 mov eax, dword ptr [esi]
// 00422cb0  8b5008               mov edx, dword ptr [eax + 8]
// 00422cb3  8bce                 mov ecx, esi
// 00422cb5  ffd2                 call edx
// 00422cb7  8b7704               mov esi, dword ptr [edi + 4]
// 00422cba  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00422cc2  85f6                 test esi, esi
// 00422cc4  742a                 je 0x422cf0
// 00422cc6  8d4604               lea eax, [esi + 4]
// 00422cc9  83c9ff               or ecx, 0xffffffff
// 00422ccc  f00fc108             lock xadd dword ptr [eax], ecx
// 00422cd0  751e                 jne 0x422cf0
// 00422cd2  8b16                 mov edx, dword ptr [esi]
// 00422cd4  8b4204               mov eax, dword ptr [edx + 4]
// 00422cd7  8bce                 mov ecx, esi
// 00422cd9  ffd0                 call eax
// 00422cdb  8d4e08               lea ecx, [esi + 8]
// 00422cde  83caff               or edx, 0xffffffff
// 00422ce1  f00fc111             lock xadd dword ptr [ecx], edx
// 00422ce5  7509                 jne 0x422cf0
// 00422ce7  8b06                 mov eax, dword ptr [esi]
// 00422ce9  8b5008               mov edx, dword ptr [eax + 8]
// 00422cec  8bce                 mov ecx, esi
// 00422cee  ffd2                 call edx
// 00422cf0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00422cf4  5f                   pop edi
// 00422cf5  5e                   pop esi
// 00422cf6  64890d00000000       mov dword ptr fs:[0], ecx
// 00422cfd  83c410               add esp, 0x10
// 00422d00  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??1?$storage2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
