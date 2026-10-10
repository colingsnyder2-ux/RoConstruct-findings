// from server: 99% by colin
// roc 2007-08 00773270  unit: seg_00770000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773270
//
// 00773270  33c9                 xor ecx, ecx
// 00773272  51                   push ecx
// 00773273  68f4107b00           push 0x7b10f4
// 00773278  51                   push ecx
// 00773279  b8306a5900           mov eax, 0x596a30
// 0077327e  50                   push eax
// 0077327f  b9804e8c00           mov ecx, 0x8c4e80
// 00773284  e8373de2ff           call 0x596fc0
// 00773289  6800af7700           push 0x77af00
// 0077328e  e890daebff           call 0x630d23
// 00773293  59                   pop ecx
// 00773294  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__EGetValueStringFunction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

extern "C" int __cdecl sub_596FC0(int, int, int, int);
extern "C" int __cdecl sub_630D23(int);

int __cdecl sub_773270()
{
    sub_596FC0(0x8c4e80, 0x596a30, 0, 0x7b10f4);
    sub_630D23(0x77af00);
    return 0;
}
