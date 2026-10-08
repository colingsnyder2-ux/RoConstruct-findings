// roc 2008-06 00594290  unit: boost::Vrecursive_mutex::?$sp_counted_impl_p  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594290
//
// 00594290  6aff                 push -1
// 00594292  683b207d00           push 0x7d203b
// 00594297  64a100000000         mov eax, dword ptr fs:[0]
// 0059429d  50                   push eax
// 0059429e  64892500000000       mov dword ptr fs:[0], esp
// 005942a5  51                   push ecx
// 005942a6  56                   push esi
// 005942a7  8bf1                 mov esi, ecx
// 005942a9  89742404             mov dword ptr [esp + 4], esi
// 005942ad  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005942b5  e856ffffff           call 0x594210
// 005942ba  8b7608               mov esi, dword ptr [esi + 8]
// 005942bd  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005942c5  85f6                 test esi, esi
// 005942c7  742a                 je 0x5942f3
// 005942c9  8d4604               lea eax, [esi + 4]
// 005942cc  83c9ff               or ecx, 0xffffffff
// 005942cf  f00fc108             lock xadd dword ptr [eax], ecx
// 005942d3  751e                 jne 0x5942f3
// 005942d5  8b16                 mov edx, dword ptr [esi]
// 005942d7  8b4204               mov eax, dword ptr [edx + 4]
// 005942da  8bce                 mov ecx, esi
// 005942dc  ffd0                 call eax
// 005942de  8d4e08               lea ecx, [esi + 8]
// 005942e1  83caff               or edx, 0xffffffff
// 005942e4  f00fc111             lock xadd dword ptr [ecx], edx
// 005942e8  7509                 jne 0x5942f3
// 005942ea  8b06                 mov eax, dword ptr [esi]
// 005942ec  8b5008               mov edx, dword ptr [eax + 8]
// 005942ef  8bce                 mov ecx, esi
// 005942f1  ffd2                 call edx
// 005942f3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005942f7  5e                   pop esi
// 005942f8  64890d00000000       mov dword ptr fs:[0], ecx
// 005942ff  83c410               add esp, 0x10
// 00594302  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ??1Node@ThreadRef@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
