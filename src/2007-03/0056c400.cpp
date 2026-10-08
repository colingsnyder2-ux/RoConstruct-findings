// roc 2007-03 0056c400  unit: seg_00560000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056c400
//
// 0056c400  51                   push ecx
// 0056c401  56                   push esi
// 0056c402  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056c406  57                   push edi
// 0056c407  6a4e                 push 0x4e
// 0056c409  56                   push esi
// 0056c40a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056c412  e839ce0400           call 0x5b9250
// 0056c417  68eed8ffff           push 0xffffd8ee
// 0056c41c  56                   push esi
// 0056c41d  e87ece0400           call 0x5b92a0
// 0056c422  56                   push esi
// 0056c423  e828c60400           call 0x5b8a50
// 0056c428  8b0d08e48900         mov ecx, dword ptr [0x89e408]
// 0056c42e  51                   push ecx
// 0056c42f  50                   push eax
// 0056c430  56                   push esi
// 0056c431  e87ae00400           call 0x5ba4b0
// 0056c436  6afe                 push -2
// 0056c438  56                   push esi
// 0056c439  8bf8                 mov edi, eax
// 0056c43b  e820c60400           call 0x5b8a60
// 0056c440  8b17                 mov edx, dword ptr [edi]
// 0056c442  8b442438             mov eax, dword ptr [esp + 0x38]
// 0056c446  83c428               add esp, 0x28
// 0056c449  8910                 mov dword ptr [eax], edx
// 0056c44b  8b4f04               mov ecx, dword ptr [edi + 4]
// 0056c44e  85c9                 test ecx, ecx
// 0056c450  5f                   pop edi
// 0056c451  894804               mov dword ptr [eax + 4], ecx
// 0056c454  5e                   pop esi
// 0056c455  740c                 je 0x56c463
// 0056c457  83c104               add ecx, 4
// 0056c45a  ba01000000           mov edx, 1
// 0056c45f  f00fc111             lock xadd dword ptr [ecx], edx
// 0056c463  59                   pop ecx
// 0056c464  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?get@Node@ThreadRef@Lua@RBX@@SA?AV?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
