// roc 2007-08 005e5f70  unit: RBX::NewNullTool  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e5f70
//
// 005e5f70  6aff                 push -1
// 005e5f72  681bb67500           push 0x75b61b
// 005e5f77  64a100000000         mov eax, dword ptr fs:[0]
// 005e5f7d  50                   push eax
// 005e5f7e  64892500000000       mov dword ptr fs:[0], esp
// 005e5f85  51                   push ecx
// 005e5f86  56                   push esi
// 005e5f87  6a4c                 push 0x4c
// 005e5f89  8bf1                 mov esi, ecx
// 005e5f8b  e8669f0400           call 0x62fef6
// 005e5f90  83c404               add esp, 4
// 005e5f93  89442404             mov dword ptr [esp + 4], eax
// 005e5f97  85c0                 test eax, eax
// 005e5f99  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e5fa1  741b                 je 0x5e5fbe
// 005e5fa3  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005e5fa6  51                   push ecx
// 005e5fa7  8bc8                 mov ecx, eax
// 005e5fa9  e8c2feffff           call 0x5e5e70
// 005e5fae  5e                   pop esi
// 005e5faf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e5fb3  64890d00000000       mov dword ptr fs:[0], ecx
// 005e5fba  83c410               add esp, 0x10
// 005e5fbd  c3                   ret 
// 005e5fbe  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e5fc2  33c0                 xor eax, eax
// 005e5fc4  5e                   pop esi
// 005e5fc5  64890d00000000       mov dword ptr fs:[0], ecx
// 005e5fcc  83c410               add esp, 0x10
// 005e5fcf  c3                   ret 
// library rbxgs/tool\NullTool.cpp (function ?isSticky@NewNullTool@RBX@@EBEPAVMouseCommand@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/NullTool.cpp
