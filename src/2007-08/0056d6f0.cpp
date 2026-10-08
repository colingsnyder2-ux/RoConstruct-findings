// roc 2007-08 0056d6f0  unit: RBX::VContentId::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056d6f0
//
// 0056d6f0  64a100000000         mov eax, dword ptr fs:[0]
// 0056d6f6  6aff                 push -1
// 0056d6f8  68ae497500           push 0x7549ae
// 0056d6fd  50                   push eax
// 0056d6fe  b801000000           mov eax, 1
// 0056d703  64892500000000       mov dword ptr fs:[0], esp
// 0056d70a  840538248c00         test byte ptr [0x8c2438], al
// 0056d710  752f                 jne 0x56d741
// 0056d712  090538248c00         or dword ptr [0x8c2438], eax
// 0056d718  6838448800           push 0x884438
// 0056d71d  6868567a00           push 0x7a5668
// 0056d722  b928248c00           mov ecx, 0x8c2428
// 0056d727  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d72f  e8cceeffff           call 0x56c600
// 0056d734  68209f7700           push 0x779f20
// 0056d739  e8e5350c00           call 0x630d23
// 0056d73e  83c404               add esp, 4
// 0056d741  8b0c24               mov ecx, dword ptr [esp]
// 0056d744  b828248c00           mov eax, 0x8c2428
// 0056d749  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d750  83c40c               add esp, 0xc
// 0056d753  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@V?$shared_ptr@VInstance@RBX@@@boost@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
