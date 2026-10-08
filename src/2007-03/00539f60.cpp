// roc 2007-03 00539f60  unit: seg_00530000  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00539f60
//
// 00539f60  53                   push ebx
// 00539f61  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00539f65  56                   push esi
// 00539f66  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00539f6a  57                   push edi
// 00539f6b  53                   push ebx
// 00539f6c  56                   push esi
// 00539f6d  e8eeef0700           call 0x5b8f60
// 00539f72  8bf8                 mov edi, eax
// 00539f74  83c408               add esp, 8
// 00539f77  85ff                 test edi, edi
// 00539f79  7456                 je 0x539fd1
// 00539f7b  53                   push ebx
// 00539f7c  56                   push esi
// 00539f7d  e86ef40700           call 0x5b93f0
// 00539f82  83c408               add esp, 8
// 00539f85  85c0                 test eax, eax
// 00539f87  743d                 je 0x539fc6
// 00539f89  a148828a00           mov eax, dword ptr [0x8a8248]
// 00539f8e  50                   push eax
// 00539f8f  68f0d8ffff           push 0xffffd8f0
// 00539f94  56                   push esi
// 00539f95  e836f30700           call 0x5b92d0
// 00539f9a  6afe                 push -2
// 00539f9c  6aff                 push -1
// 00539f9e  56                   push esi
// 00539f9f  e87ced0700           call 0x5b8d20
// 00539fa4  83c418               add esp, 0x18
// 00539fa7  85c0                 test eax, eax
// 00539fa9  7426                 je 0x539fd1
// 00539fab  6afd                 push -3
// 00539fad  56                   push esi
// 00539fae  e8adea0700           call 0x5b8a60
// 00539fb3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00539fb7  83c408               add esp, 8
// 00539fba  57                   push edi
// 00539fbb  e840f7ffff           call 0x539700
// 00539fc0  5f                   pop edi
// 00539fc1  5e                   pop esi
// 00539fc2  b001                 mov al, 1
// 00539fc4  5b                   pop ebx
// 00539fc5  c3                   ret 
// 00539fc6  6afe                 push -2
// 00539fc8  56                   push esi
// 00539fc9  e892ea0700           call 0x5b8a60
// 00539fce  83c408               add esp, 8
// 00539fd1  5f                   pop edi
// 00539fd2  5e                   pop esi
// 00539fd3  32c0                 xor al, al
// 00539fd5  5b                   pop ebx
// 00539fd6  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getValue@VValue@Reflection@RBX@@@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SA_NPAUlua_State@@IAAVValue@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
