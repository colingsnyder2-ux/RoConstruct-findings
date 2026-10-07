// roc 2008-06 005ed800  unit: RBX::Controller::W4InputType::?$EnumDesc  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ed800
//
// 005ed800  8b442408             mov eax, dword ptr [esp + 8]
// 005ed804  56                   push esi
// 005ed805  8bf1                 mov esi, ecx
// 005ed807  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ed80b  50                   push eax
// 005ed80c  51                   push ecx
// 005ed80d  e87e6af6ff           call 0x554290
// 005ed812  83c404               add esp, 4
// 005ed815  50                   push eax
// 005ed816  8bce                 mov ecx, esi
// 005ed818  e8e3faffff           call 0x5ed300
// 005ed81d  5e                   pop esi
// 005ed81e  c20800               ret 8
// library boost-1.44.0/libs\iostreams\src\file_descriptor.cpp (function ?open@file_descriptor_impl@detail@iostreams@boost@@QAEXHW4flags@1234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.44.0 libs/iostreams/src/file_descriptor.cpp
