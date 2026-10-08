// roc 2007-08 0056d760  unit: RBX::VContentId::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056d760
//
// 0056d760  64a100000000         mov eax, dword ptr fs:[0]
// 0056d766  6aff                 push -1
// 0056d768  68ce497500           push 0x7549ce
// 0056d76d  50                   push eax
// 0056d76e  b801000000           mov eax, 1
// 0056d773  64892500000000       mov dword ptr fs:[0], esp
// 0056d77a  84054c248c00         test byte ptr [0x8c244c], al
// 0056d780  752f                 jne 0x56d7b1
// 0056d782  09054c248c00         or dword ptr [0x8c244c], eax
// 0056d788  6820f48800           push 0x88f420
// 0056d78d  68d09f7a00           push 0x7a9fd0
// 0056d792  b93c248c00           mov ecx, 0x8c243c
// 0056d797  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d79f  e85ceeffff           call 0x56c600
// 0056d7a4  68109f7700           push 0x779f10
// 0056d7a9  e875350c00           call 0x630d23
// 0056d7ae  83c404               add esp, 4
// 0056d7b1  8b0c24               mov ecx, dword ptr [esp]
// 0056d7b4  b83c248c00           mov eax, 0x8c243c
// 0056d7b9  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d7c0  83c40c               add esp, 0xc
// 0056d7c3  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
