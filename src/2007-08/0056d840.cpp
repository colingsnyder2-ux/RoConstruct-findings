// roc 2007-08 0056d840  unit: RBX::VContentId::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056d840
//
// 0056d840  64a100000000         mov eax, dword ptr fs:[0]
// 0056d846  6aff                 push -1
// 0056d848  680e4a7500           push 0x754a0e
// 0056d84d  50                   push eax
// 0056d84e  b801000000           mov eax, 1
// 0056d853  64892500000000       mov dword ptr fs:[0], esp
// 0056d85a  840574248c00         test byte ptr [0x8c2474], al
// 0056d860  752f                 jne 0x56d891
// 0056d862  090574248c00         or dword ptr [0x8c2474], eax
// 0056d868  68e0278800           push 0x8827e0
// 0056d86d  684ca67900           push 0x79a64c
// 0056d872  b964248c00           mov ecx, 0x8c2464
// 0056d877  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d87f  e87cedffff           call 0x56c600
// 0056d884  68f09e7700           push 0x779ef0
// 0056d889  e895340c00           call 0x630d23
// 0056d88e  83c404               add esp, 4
// 0056d891  8b0c24               mov ecx, dword ptr [esp]
// 0056d894  b864248c00           mov eax, 0x8c2464
// 0056d899  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d8a0  83c40c               add esp, 0xc
// 0056d8a3  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@_N@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
