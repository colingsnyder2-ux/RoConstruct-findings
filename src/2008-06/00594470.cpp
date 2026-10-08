// roc 2008-06 00594470  unit: boost::Vrecursive_mutex::?$sp_counted_impl_p  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594470
//
// 00594470  6aff                 push -1
// 00594472  68581f7d00           push 0x7d1f58
// 00594477  64a100000000         mov eax, dword ptr fs:[0]
// 0059447d  50                   push eax
// 0059447e  64892500000000       mov dword ptr fs:[0], esp
// 00594485  51                   push ecx
// 00594486  56                   push esi
// 00594487  8bf1                 mov esi, ecx
// 00594489  89742404             mov dword ptr [esp + 4], esi
// 0059448d  c706d0eb8000         mov dword ptr [esi], 0x80ebd0
// 00594493  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00594496  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0059449e  85c9                 test ecx, ecx
// 005944a0  7416                 je 0x5944b8
// 005944a2  8b4618               mov eax, dword ptr [esi + 0x18]
// 005944a5  85c0                 test eax, eax
// 005944a7  740f                 je 0x5944b8
// 005944a9  51                   push ecx
// 005944aa  68f0d8ffff           push 0xffffd8f0
// 005944af  50                   push eax
// 005944b0  e8bbcc0700           call 0x611170
// 005944b5  83c40c               add esp, 0xc
// 005944b8  8bce                 mov ecx, esi
// 005944ba  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005944c2  e8b9feffff           call 0x594380
// 005944c7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005944cb  5e                   pop esi
// 005944cc  64890d00000000       mov dword ptr fs:[0], ecx
// 005944d3  83c410               add esp, 0x10
// 005944d6  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ??1FunctionRef@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
