// roc 2009-06 006956a0  unit: RBX::Lua::FunctionRef  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006956a0
//
// 006956a0  51                   push ecx
// 006956a1  56                   push esi
// 006956a2  8b742410             mov esi, dword ptr [esp + 0x10]
// 006956a6  57                   push edi
// 006956a7  6a4e                 push 0x4e
// 006956a9  56                   push esi
// 006956aa  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006956b2  e8993e0200           call 0x6b9550
// 006956b7  68eed8ffff           push 0xffffd8ee
// 006956bc  56                   push esi
// 006956bd  e8de3e0200           call 0x6b95a0
// 006956c2  56                   push esi
// 006956c3  e8b8360200           call 0x6b8d80
// 006956c8  8b0d4ce2a100         mov ecx, dword ptr [0xa1e24c]
// 006956ce  51                   push ecx
// 006956cf  50                   push eax
// 006956d0  56                   push esi
// 006956d1  e8da540200           call 0x6babb0
// 006956d6  6afe                 push -2
// 006956d8  56                   push esi
// 006956d9  8bf8                 mov edi, eax
// 006956db  e8b0360200           call 0x6b8d90
// 006956e0  8b17                 mov edx, dword ptr [edi]
// 006956e2  8b442438             mov eax, dword ptr [esp + 0x38]
// 006956e6  83c428               add esp, 0x28
// 006956e9  8910                 mov dword ptr [eax], edx
// 006956eb  8b4f04               mov ecx, dword ptr [edi + 4]
// 006956ee  5f                   pop edi
// 006956ef  894804               mov dword ptr [eax + 4], ecx
// 006956f2  5e                   pop esi
// 006956f3  85c9                 test ecx, ecx
// 006956f5  740c                 je 0x695703
// 006956f7  83c104               add ecx, 4
// 006956fa  ba01000000           mov edx, 1
// 006956ff  f00fc111             lock xadd dword ptr [ecx], edx
// 00695703  59                   pop ecx
// 00695704  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?get@Node@ThreadRef@Lua@RBX@@SA?AV?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
