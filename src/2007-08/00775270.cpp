// roc 2007-08 00775270  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775270
//
// 00775270  56                   push esi
// 00775271  6a05                 push 5
// 00775273  33c9                 xor ecx, ecx
// 00775275  51                   push ecx
// 00775276  b850f65e00           mov eax, 0x5ef650
// 0077527b  50                   push eax
// 0077527c  33f6                 xor esi, esi
// 0077527e  56                   push esi
// 0077527f  ba80d34300           mov edx, 0x43d380
// 00775284  52                   push edx
// 00775285  6844fd7b00           push 0x7bfd44
// 0077528a  683cfd7b00           push 0x7bfd3c
// 0077528f  b968778c00           mov ecx, 0x8c7768
// 00775294  e8878ae7ff           call 0x5edd20
// 00775299  68d0bf7700           push 0x77bfd0
// 0077529e  e880baebff           call 0x630d23
// 007752a3  83c404               add esp, 4
// 007752a6  5e                   pop esi
// 007752a7  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__E?prop_Target@Rocket@RBX@@2V?$RefPropDescriptor@VRocket@RBX@@VPartInstance@2@@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
