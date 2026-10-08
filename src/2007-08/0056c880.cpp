// roc 2007-08 0056c880  unit: RBX::Lua::FunctionRef  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056c880
//
// 0056c880  64a100000000         mov eax, dword ptr fs:[0]
// 0056c886  6aff                 push -1
// 0056c888  689e487500           push 0x75489e
// 0056c88d  50                   push eax
// 0056c88e  b801000000           mov eax, 1
// 0056c893  64892500000000       mov dword ptr fs:[0], esp
// 0056c89a  8405f0238c00         test byte ptr [0x8c23f0], al
// 0056c8a0  752f                 jne 0x56c8d1
// 0056c8a2  0905f0238c00         or dword ptr [0x8c23f0], eax
// 0056c8a8  68642d8800           push 0x882d64
// 0056c8ad  685c9f7a00           push 0x7a9f5c
// 0056c8b2  b9e0238c00           mov ecx, 0x8c23e0
// 0056c8b7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056c8bf  e83cfdffff           call 0x56c600
// 0056c8c4  68109e7700           push 0x779e10
// 0056c8c9  e855440c00           call 0x630d23
// 0056c8ce  83c404               add esp, 4
// 0056c8d1  8b0c24               mov ecx, dword ptr [esp]
// 0056c8d4  b8e0238c00           mov eax, 0x8c23e0
// 0056c8d9  64890d00000000       mov dword ptr fs:[0], ecx
// 0056c8e0  83c40c               add esp, 0xc
// 0056c8e3  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ??$singleton@VFunctionRef@Lua@RBX@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
