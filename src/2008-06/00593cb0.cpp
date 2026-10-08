// roc 2008-06 00593cb0  unit: RBX::Lua::FunctionRef  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00593cb0
//
// 00593cb0  51                   push ecx
// 00593cb1  56                   push esi
// 00593cb2  8b742410             mov esi, dword ptr [esp + 0x10]
// 00593cb6  57                   push edi
// 00593cb7  6a4e                 push 0x4e
// 00593cb9  56                   push esi
// 00593cba  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593cc2  e849e70700           call 0x612410
// 00593cc7  68eed8ffff           push 0xffffd8ee
// 00593ccc  56                   push esi
// 00593ccd  e88ee70700           call 0x612460
// 00593cd2  56                   push esi
// 00593cd3  e838df0700           call 0x611c10
// 00593cd8  8b0d30979400         mov ecx, dword ptr [0x949730]
// 00593cde  51                   push ecx
// 00593cdf  50                   push eax
// 00593ce0  56                   push esi
// 00593ce1  e8cad80700           call 0x6115b0
// 00593ce6  6afe                 push -2
// 00593ce8  56                   push esi
// 00593ce9  8bf8                 mov edi, eax
// 00593ceb  e830df0700           call 0x611c20
// 00593cf0  8b17                 mov edx, dword ptr [edi]
// 00593cf2  8b442438             mov eax, dword ptr [esp + 0x38]
// 00593cf6  83c428               add esp, 0x28
// 00593cf9  8910                 mov dword ptr [eax], edx
// 00593cfb  8b4f04               mov ecx, dword ptr [edi + 4]
// 00593cfe  5f                   pop edi
// 00593cff  894804               mov dword ptr [eax + 4], ecx
// 00593d02  5e                   pop esi
// 00593d03  85c9                 test ecx, ecx
// 00593d05  740c                 je 0x593d13
// 00593d07  83c104               add ecx, 4
// 00593d0a  ba01000000           mov edx, 1
// 00593d0f  f00fc111             lock xadd dword ptr [ecx], edx
// 00593d13  59                   pop ecx
// 00593d14  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?get@Node@ThreadRef@Lua@RBX@@SA?AV?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
