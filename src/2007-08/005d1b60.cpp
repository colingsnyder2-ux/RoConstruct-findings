// roc 2007-08 005d1b60  unit: RBX::Tool  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d1b60
//
// 005d1b60  8b442404             mov eax, dword ptr [esp + 4]
// 005d1b64  56                   push esi
// 005d1b65  50                   push eax
// 005d1b66  e8453bfdff           call 0x5a56b0
// 005d1b6b  8bf0                 mov esi, eax
// 005d1b6d  83c404               add esp, 4
// 005d1b70  85f6                 test esi, esi
// 005d1b72  7509                 jne 0x5d1b7d
// 005d1b74  b802000000           mov eax, 2
// 005d1b79  5e                   pop esi
// 005d1b7a  c20400               ret 4
// 005d1b7d  8bce                 mov ecx, esi
// 005d1b7f  e8dc40fdff           call 0x5a5c60
// 005d1b84  85c0                 test eax, eax
// 005d1b86  7509                 jne 0x5d1b91
// 005d1b88  b803000000           mov eax, 3
// 005d1b8d  5e                   pop esi
// 005d1b8e  c20400               ret 4
// 005d1b91  8bce                 mov ecx, esi
// 005d1b93  e8a82ffdff           call 0x5a4b40
// 005d1b98  85c0                 test eax, eax
// 005d1b9a  7410                 je 0x5d1bac
// 005d1b9c  8bce                 mov ecx, esi
// 005d1b9e  e8bd45fdff           call 0x5a6160
// 005d1ba3  85c0                 test eax, eax
// 005d1ba5  b805000000           mov eax, 5
// 005d1baa  7505                 jne 0x5d1bb1
// 005d1bac  b804000000           mov eax, 4
// 005d1bb1  5e                   pop esi
// 005d1bb2  c20400               ret 4
// library rbxgs/v8datamodel\Tool.cpp (function ?computeDesiredState@Tool@RBX@@AAE?AW4ToolState@12@PAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
