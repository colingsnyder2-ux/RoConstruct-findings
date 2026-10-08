// roc 2011-06 0042c1c0  unit: RBX::Kernel  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0042c1c0
//
// 0042c1c0  64a100000000         mov eax, dword ptr fs:[0]
// 0042c1c6  6aff                 push -1
// 0042c1c8  6878719e00           push 0x9e7178
// 0042c1cd  50                   push eax
// 0042c1ce  64892500000000       mov dword ptr fs:[0], esp
// 0042c1d5  56                   push esi
// 0042c1d6  8bf1                 mov esi, ecx
// 0042c1d8  8d442414             lea eax, [esp + 0x14]
// 0042c1dc  50                   push eax
// 0042c1dd  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0042c1e5  ff15c804a400         call dword ptr [0xa404c8]
// 0042c1eb  8d4c2414             lea ecx, [esp + 0x14]
// 0042c1ef  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0042c1f7  ff15d004a400         call dword ptr [0xa404d0]
// 0042c1fd  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042c201  8bc6                 mov eax, esi
// 0042c203  64890d00000000       mov dword ptr fs:[0], ecx
// 0042c20a  5e                   pop esi
// 0042c20b  83c40c               add esp, 0xc
// 0042c20e  c21c00               ret 0x1c
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$storage1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
