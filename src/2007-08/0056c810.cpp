// roc 2007-08 0056c810  unit: RBX::Lua::FunctionRef  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056c810
//
// 0056c810  51                   push ecx
// 0056c811  56                   push esi
// 0056c812  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056c816  57                   push edi
// 0056c817  6a4e                 push 0x4e
// 0056c819  56                   push esi
// 0056c81a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056c822  e859150500           call 0x5bdd80
// 0056c827  68eed8ffff           push 0xffffd8ee
// 0056c82c  56                   push esi
// 0056c82d  e89e150500           call 0x5bddd0
// 0056c832  56                   push esi
// 0056c833  e8480d0500           call 0x5bd580
// 0056c838  8b0dd8f78900         mov ecx, dword ptr [0x89f7d8]
// 0056c83e  51                   push ecx
// 0056c83f  50                   push eax
// 0056c840  56                   push esi
// 0056c841  e8fa290500           call 0x5bf240
// 0056c846  6afe                 push -2
// 0056c848  56                   push esi
// 0056c849  8bf8                 mov edi, eax
// 0056c84b  e8400d0500           call 0x5bd590
// 0056c850  8b17                 mov edx, dword ptr [edi]
// 0056c852  8b442438             mov eax, dword ptr [esp + 0x38]
// 0056c856  83c428               add esp, 0x28
// 0056c859  8910                 mov dword ptr [eax], edx
// 0056c85b  8b4f04               mov ecx, dword ptr [edi + 4]
// 0056c85e  85c9                 test ecx, ecx
// 0056c860  5f                   pop edi
// 0056c861  894804               mov dword ptr [eax + 4], ecx
// 0056c864  5e                   pop esi
// 0056c865  740c                 je 0x56c873
// 0056c867  83c104               add ecx, 4
// 0056c86a  ba01000000           mov edx, 1
// 0056c86f  f00fc111             lock xadd dword ptr [ecx], edx
// 0056c873  59                   pop ecx
// 0056c874  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?get@Node@ThreadRef@Lua@RBX@@SA?AV?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
