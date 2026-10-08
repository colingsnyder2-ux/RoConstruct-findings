// roc 2007-08 0056da00  unit: RBX::VContentId::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056da00
//
// 0056da00  64a100000000         mov eax, dword ptr fs:[0]
// 0056da06  6aff                 push -1
// 0056da08  688e4a7500           push 0x754a8e
// 0056da0d  50                   push eax
// 0056da0e  b801000000           mov eax, 1
// 0056da13  64892500000000       mov dword ptr fs:[0], esp
// 0056da1a  8405c4248c00         test byte ptr [0x8c24c4], al
// 0056da20  752f                 jne 0x56da51
// 0056da22  0905c4248c00         or dword ptr [0x8c24c4], eax
// 0056da28  68f8278800           push 0x8827f8
// 0056da2d  68605c7a00           push 0x7a5c60
// 0056da32  b9b4248c00           mov ecx, 0x8c24b4
// 0056da37  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056da3f  e8bcebffff           call 0x56c600
// 0056da44  68b09e7700           push 0x779eb0
// 0056da49  e8d5320c00           call 0x630d23
// 0056da4e  83c404               add esp, 4
// 0056da51  8b0c24               mov ecx, dword ptr [esp]
// 0056da54  b8b4248c00           mov eax, 0x8c24b4
// 0056da59  64890d00000000       mov dword ptr fs:[0], ecx
// 0056da60  83c40c               add esp, 0xc
// 0056da63  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
