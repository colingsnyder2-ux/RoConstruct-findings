// roc 2007-08 00771ba0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771ba0
//
// 00771ba0  56                   push esi
// 00771ba1  6a05                 push 5
// 00771ba3  33c9                 xor ecx, ecx
// 00771ba5  51                   push ecx
// 00771ba6  b800315700           mov eax, 0x573100
// 00771bab  50                   push eax
// 00771bac  33f6                 xor esi, esi
// 00771bae  56                   push esi
// 00771baf  bac0fe4c00           mov edx, 0x4cfec0
// 00771bb4  52                   push edx
// 00771bb5  6840a87a00           push 0x7aa840
// 00771bba  6858a87a00           push 0x7aa858
// 00771bbf  b940278c00           mov ecx, 0x8c2740
// 00771bc4  e83713e0ff           call 0x572f00
// 00771bc9  68e09f7700           push 0x779fe0
// 00771bce  e850f1ebff           call 0x630d23
// 00771bd3  83c404               add esp, 4
// 00771bd6  5e                   pop esi
// 00771bd7  c3                   ret 
// library rbxgs/v8datamodel\Decal.cpp (function ??__E?prop_Shiny@Decal@RBX@@2V?$PropDescriptor@VDecal@RBX@@M@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Decal.cpp
