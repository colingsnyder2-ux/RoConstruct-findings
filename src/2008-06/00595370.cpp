// from server: 100% by auto
// roc 2008-06 00595370  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595370
//
// 00595370  6aff                 push -1
// 00595372  683b207d00           push 0x7d203b
// 00595377  64a100000000         mov eax, dword ptr fs:[0]
// 0059537d  50                   push eax
// 0059537e  64892500000000       mov dword ptr fs:[0], esp
// 00595385  51                   push ecx
// 00595386  56                   push esi
// 00595387  8bf1                 mov esi, ecx
// 00595389  89742404             mov dword ptr [esp + 4], esi
// 0059538d  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00595391  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00595399  7405                 je 0x5953a0
// 0059539b  e890feffff           call 0x595230
// 005953a0  8b7608               mov esi, dword ptr [esi + 8]
// 005953a3  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005953ab  85f6                 test esi, esi
// 005953ad  742a                 je 0x5953d9
// 005953af  8d4604               lea eax, [esi + 4]
// 005953b2  83c9ff               or ecx, 0xffffffff
// 005953b5  f00fc108             lock xadd dword ptr [eax], ecx
// 005953b9  751e                 jne 0x5953d9
// 005953bb  8b16                 mov edx, dword ptr [esi]
// 005953bd  8b4204               mov eax, dword ptr [edx + 4]
// 005953c0  8bce                 mov ecx, esi
// 005953c2  ffd0                 call eax
// 005953c4  8d4e08               lea ecx, [esi + 8]
// 005953c7  83caff               or edx, 0xffffffff
// 005953ca  f00fc111             lock xadd dword ptr [ecx], edx
// 005953ce  7509                 jne 0x5953d9
// 005953d0  8b06                 mov eax, dword ptr [esi]
// 005953d2  8b5008               mov edx, dword ptr [eax + 8]
// 005953d5  8bce                 mov ecx, esi
// 005953d7  ffd2                 call edx
// 005953d9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005953dd  5e                   pop esi
// 005953de  64890d00000000       mov dword ptr fs:[0], ecx
// 005953e5  83c410               add esp, 0x10
// 005953e8  c3                   ret 
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??1connection@signals@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
