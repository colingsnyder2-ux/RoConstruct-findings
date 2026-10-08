// roc 2007-08 00770920  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770920
//
// 00770920  56                   push esi
// 00770921  6a05                 push 5
// 00770923  33c9                 xor ecx, ecx
// 00770925  51                   push ecx
// 00770926  b850e35300           mov eax, 0x53e350
// 0077092b  50                   push eax
// 0077092c  33f6                 xor esi, esi
// 0077092e  56                   push esi
// 0077092f  ba80d14000           mov edx, 0x40d180
// 00770934  52                   push edx
// 00770935  6898b67900           push 0x79b698
// 0077093a  68d47e7800           push 0x787ed4
// 0077093f  b9bc148c00           mov ecx, 0x8c14bc
// 00770944  e897ffdcff           call 0x5408e0
// 00770949  68d0957700           push 0x7795d0
// 0077094e  e8d003ecff           call 0x630d23
// 00770953  83c404               add esp, 4
// 00770956  5e                   pop esi
// 00770957  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__E?desc_Name@Instance@RBX@@2V?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
