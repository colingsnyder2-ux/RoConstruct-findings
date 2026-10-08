// roc 2008-06 00594380  unit: boost::Vrecursive_mutex::?$sp_counted_impl_p  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594380
//
// 00594380  6aff                 push -1
// 00594382  683b207d00           push 0x7d203b
// 00594387  64a100000000         mov eax, dword ptr fs:[0]
// 0059438d  50                   push eax
// 0059438e  64892500000000       mov dword ptr fs:[0], esp
// 00594395  51                   push ecx
// 00594396  56                   push esi
// 00594397  8bf1                 mov esi, ecx
// 00594399  89742404             mov dword ptr [esp + 4], esi
// 0059439d  c706c8eb8000         mov dword ptr [esi], 0x80ebc8
// 005943a3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005943ab  e8b0fcffff           call 0x594060
// 005943b0  8b7608               mov esi, dword ptr [esi + 8]
// 005943b3  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005943bb  85f6                 test esi, esi
// 005943bd  742a                 je 0x5943e9
// 005943bf  8d4604               lea eax, [esi + 4]
// 005943c2  83c9ff               or ecx, 0xffffffff
// 005943c5  f00fc108             lock xadd dword ptr [eax], ecx
// 005943c9  751e                 jne 0x5943e9
// 005943cb  8b16                 mov edx, dword ptr [esi]
// 005943cd  8b4204               mov eax, dword ptr [edx + 4]
// 005943d0  8bce                 mov ecx, esi
// 005943d2  ffd0                 call eax
// 005943d4  8d4e08               lea ecx, [esi + 8]
// 005943d7  83caff               or edx, 0xffffffff
// 005943da  f00fc111             lock xadd dword ptr [ecx], edx
// 005943de  7509                 jne 0x5943e9
// 005943e0  8b06                 mov eax, dword ptr [esi]
// 005943e2  8b5008               mov edx, dword ptr [eax + 8]
// 005943e5  8bce                 mov ecx, esi
// 005943e7  ffd2                 call edx
// 005943e9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005943ed  5e                   pop esi
// 005943ee  64890d00000000       mov dword ptr fs:[0], ecx
// 005943f5  83c410               add esp, 0x10
// 005943f8  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ??1ThreadRef@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
