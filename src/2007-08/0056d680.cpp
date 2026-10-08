// roc 2007-08 0056d680  unit: RBX::VContentId::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056d680
//
// 0056d680  64a100000000         mov eax, dword ptr fs:[0]
// 0056d686  6aff                 push -1
// 0056d688  688e497500           push 0x75498e
// 0056d68d  50                   push eax
// 0056d68e  b801000000           mov eax, 1
// 0056d693  64892500000000       mov dword ptr fs:[0], esp
// 0056d69a  840524248c00         test byte ptr [0x8c2424], al
// 0056d6a0  752f                 jne 0x56d6d1
// 0056d6a2  090524248c00         or dword ptr [0x8c2424], eax
// 0056d6a8  6878278900           push 0x892778
// 0056d6ad  6884ae7900           push 0x79ae84
// 0056d6b2  b914248c00           mov ecx, 0x8c2414
// 0056d6b7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d6bf  e83cefffff           call 0x56c600
// 0056d6c4  68309f7700           push 0x779f30
// 0056d6c9  e855360c00           call 0x630d23
// 0056d6ce  83c404               add esp, 4
// 0056d6d1  8b0c24               mov ecx, dword ptr [esp]
// 0056d6d4  b814248c00           mov eax, 0x8c2414
// 0056d6d9  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d6e0  83c40c               add esp, 0xc
// 0056d6e3  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
