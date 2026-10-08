// roc 2007-08 0056dbc0  unit: RBX::VContentId::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056dbc0
//
// 0056dbc0  64a100000000         mov eax, dword ptr fs:[0]
// 0056dbc6  6aff                 push -1
// 0056dbc8  680e4b7500           push 0x754b0e
// 0056dbcd  50                   push eax
// 0056dbce  b801000000           mov eax, 1
// 0056dbd3  64892500000000       mov dword ptr fs:[0], esp
// 0056dbda  840514258c00         test byte ptr [0x8c2514], al
// 0056dbe0  752f                 jne 0x56dc11
// 0056dbe2  090514258c00         or dword ptr [0x8c2514], eax
// 0056dbe8  6860288800           push 0x882860
// 0056dbed  6808a07a00           push 0x7aa008
// 0056dbf2  b904258c00           mov ecx, 0x8c2504
// 0056dbf7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056dbff  e8fce9ffff           call 0x56c600
// 0056dc04  68709e7700           push 0x779e70
// 0056dc09  e815310c00           call 0x630d23
// 0056dc0e  83c404               add esp, 4
// 0056dc11  8b0c24               mov ecx, dword ptr [esp]
// 0056dc14  b804258c00           mov eax, 0x8c2504
// 0056dc19  64890d00000000       mov dword ptr fs:[0], ecx
// 0056dc20  83c40c               add esp, 0xc
// 0056dc23  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
