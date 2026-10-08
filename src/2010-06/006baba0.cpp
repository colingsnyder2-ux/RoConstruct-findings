// roc 2010-06 006baba0  unit: RBX::Lua::WeakThreadRef::VNode::?$sp_counted_impl_p  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006baba0
//
// 006baba0  6aff                 push -1
// 006baba2  68a83b9a00           push 0x9a3ba8
// 006baba7  64a100000000         mov eax, dword ptr fs:[0]
// 006babad  50                   push eax
// 006babae  64892500000000       mov dword ptr fs:[0], esp
// 006babb5  51                   push ecx
// 006babb6  56                   push esi
// 006babb7  57                   push edi
// 006babb8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006babbc  8bf1                 mov esi, ecx
// 006babbe  57                   push edi
// 006babbf  8974240c             mov dword ptr [esp + 0xc], esi
// 006babc3  e8d8fcffff           call 0x6ba8a0
// 006babc8  8b442420             mov eax, dword ptr [esp + 0x20]
// 006babcc  50                   push eax
// 006babcd  57                   push edi
// 006babce  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 006babd6  c706982ba400         mov dword ptr [esi], 0xa42b98
// 006babdc  e82f650600           call 0x721110
// 006babe1  68f0d8ffff           push 0xffffd8f0
// 006babe6  57                   push edi
// 006babe7  e8147d0600           call 0x722900
// 006babec  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006babf0  83c410               add esp, 0x10
// 006babf3  894620               mov dword ptr [esi + 0x20], eax
// 006babf6  5f                   pop edi
// 006babf7  8bc6                 mov eax, esi
// 006babf9  5e                   pop esi
// 006babfa  64890d00000000       mov dword ptr fs:[0], ecx
// 006bac01  83c410               add esp, 0x10
// 006bac04  c20800               ret 8
// library rbxgs/script\ThreadRef.cpp (function ??0FunctionRef@Lua@RBX@@QAE@PAUlua_State@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
