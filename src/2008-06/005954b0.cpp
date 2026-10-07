// roc 2008-06 005954b0  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005954b0
//
// 005954b0  6aff                 push -1
// 005954b2  6878017d00           push 0x7d0178
// 005954b7  64a100000000         mov eax, dword ptr fs:[0]
// 005954bd  50                   push eax
// 005954be  64892500000000       mov dword ptr fs:[0], esp
// 005954c5  51                   push ecx
// 005954c6  56                   push esi
// 005954c7  8bf1                 mov esi, ecx
// 005954c9  89742404             mov dword ptr [esp + 4], esi
// 005954cd  807e1000             cmp byte ptr [esi + 0x10], 0
// 005954d1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005954d9  7505                 jne 0x5954e0
// 005954db  e850fdffff           call 0x595230
// 005954e0  8bce                 mov ecx, esi
// 005954e2  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005954ea  e881feffff           call 0x595370
// 005954ef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005954f3  5e                   pop esi
// 005954f4  64890d00000000       mov dword ptr fs:[0], ecx
// 005954fb  83c410               add esp, 0x10
// 005954fe  c3                   ret 
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??1scoped_connection@signals@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
