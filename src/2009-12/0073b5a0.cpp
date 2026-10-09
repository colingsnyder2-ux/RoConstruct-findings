// roc 2009-12 0073b5a0  unit: RBX::Lua::WeakThreadRef::VNode::?$sp_counted_impl_p  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073b5a0
//
// 0073b5a0  6aff                 push -1
// 0073b5a2  68d8fe9400           push 0x94fed8
// 0073b5a7  64a100000000         mov eax, dword ptr fs:[0]
// 0073b5ad  50                   push eax
// 0073b5ae  64892500000000       mov dword ptr fs:[0], esp
// 0073b5b5  51                   push ecx
// 0073b5b6  56                   push esi
// 0073b5b7  57                   push edi
// 0073b5b8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0073b5bc  8bf1                 mov esi, ecx
// 0073b5be  57                   push edi
// 0073b5bf  8974240c             mov dword ptr [esp + 0xc], esi
// 0073b5c3  e8d8fcffff           call 0x73b2a0
// 0073b5c8  8b442420             mov eax, dword ptr [esp + 0x20]
// 0073b5cc  50                   push eax
// 0073b5cd  57                   push edi
// 0073b5ce  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0073b5d6  c706c41d9e00         mov dword ptr [esi], 0x9e1dc4
// 0073b5dc  e87fd30400           call 0x788960
// 0073b5e1  68f0d8ffff           push 0xffffd8f0
// 0073b5e6  57                   push edi
// 0073b5e7  e864eb0400           call 0x78a150
// 0073b5ec  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0073b5f0  83c410               add esp, 0x10
// 0073b5f3  894620               mov dword ptr [esi + 0x20], eax
// 0073b5f6  5f                   pop edi
// 0073b5f7  8bc6                 mov eax, esi
// 0073b5f9  5e                   pop esi
// 0073b5fa  64890d00000000       mov dword ptr fs:[0], ecx
// 0073b601  83c410               add esp, 0x10
// 0073b604  c20800               ret 8
// library rbxgs/script\ThreadRef.cpp (function ??0FunctionRef@Lua@RBX@@QAE@PAUlua_State@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
