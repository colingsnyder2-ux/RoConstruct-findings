// roc 2010-06 006ba2d0  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ba2d0
//
// 006ba2d0  51                   push ecx
// 006ba2d1  56                   push esi
// 006ba2d2  8b742410             mov esi, dword ptr [esp + 0x10]
// 006ba2d6  57                   push edi
// 006ba2d7  6a4e                 push 0x4e
// 006ba2d9  56                   push esi
// 006ba2da  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006ba2e2  e839740600           call 0x721720
// 006ba2e7  68eed8ffff           push 0xffffd8ee
// 006ba2ec  56                   push esi
// 006ba2ed  e87e740600           call 0x721770
// 006ba2f2  56                   push esi
// 006ba2f3  e8586c0600           call 0x720f50
// 006ba2f8  8b0db0d8bc00         mov ecx, dword ptr [0xbcd8b0]
// 006ba2fe  51                   push ecx
// 006ba2ff  50                   push eax
// 006ba300  56                   push esi
// 006ba301  e80a8b0600           call 0x722e10
// 006ba306  6afe                 push -2
// 006ba308  56                   push esi
// 006ba309  8bf8                 mov edi, eax
// 006ba30b  e8506c0600           call 0x720f60
// 006ba310  8b17                 mov edx, dword ptr [edi]
// 006ba312  8b442438             mov eax, dword ptr [esp + 0x38]
// 006ba316  83c428               add esp, 0x28
// 006ba319  8910                 mov dword ptr [eax], edx
// 006ba31b  8b4f04               mov ecx, dword ptr [edi + 4]
// 006ba31e  5f                   pop edi
// 006ba31f  894804               mov dword ptr [eax + 4], ecx
// 006ba322  5e                   pop esi
// 006ba323  85c9                 test ecx, ecx
// 006ba325  740c                 je 0x6ba333
// 006ba327  83c104               add ecx, 4
// 006ba32a  ba01000000           mov edx, 1
// 006ba32f  f00fc111             lock xadd dword ptr [ecx], edx
// 006ba333  59                   pop ecx
// 006ba334  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?get@Node@ThreadRef@Lua@RBX@@SA?AV?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
