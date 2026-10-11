// roc 2007-08 004b8d40  unit: RakPeer  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b8d40
//
// 004b8d40  81eca4000000         sub esp, 0xa4
// 004b8d46  a188518b00           mov eax, dword ptr [0x8b5188]
// 004b8d4b  33c4                 xor eax, esp
// 004b8d4d  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 004b8d54  68a0000000           push 0xa0
// 004b8d59  8d442404             lea eax, [esp + 4]
// 004b8d5d  6a00                 push 0
// 004b8d5f  50                   push eax
// 004b8d60  e8277e1700           call 0x630b8c
// 004b8d65  83c40c               add esp, 0xc
// 004b8d68  8d0c24               lea ecx, [esp]
// 004b8d6b  51                   push ecx
// 004b8d6c  b9e9ef8b00           mov ecx, 0x8befe9
// 004b8d71  e8fabb0000           call 0x4c4970
// 004b8d76  33c0                 xor eax, eax
// 004b8d78  380424               cmp byte ptr [esp], al
// 004b8d7b  740e                 je 0x4b8d8b
// 004b8d7d  8d0c24               lea ecx, [esp]
// 004b8d80  83c110               add ecx, 0x10
// 004b8d83  83c001               add eax, 1
// 004b8d86  803900               cmp byte ptr [ecx], 0
// 004b8d89  75f5                 jne 0x4b8d80
// 004b8d8b  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 004b8d92  33cc                 xor ecx, esp
// 004b8d94  e8857c1700           call 0x630a1e
// 004b8d99  81c4a4000000         add esp, 0xa4
// 004b8d9f  c3                   ret 
// library openrbx-raknet/RakPeer.cpp (function ?GetNumberOfAddresses@RakPeer@@UAEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
