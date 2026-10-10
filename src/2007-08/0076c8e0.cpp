// from server: 99% by colin
// roc 2007-08 0076c8e0  unit: seg_00760000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076c8e0
//
// 0076c8e0  6a01                 push 1
// 0076c8e2  68a0797800           push 0x7879a0
// 0076c8e7  33c9                 xor ecx, ecx
// 0076c8e9  6894797800           push 0x787994
// 0076c8ee  51                   push ecx
// 0076c8ef  b8108e4100           mov eax, 0x418e10
// 0076c8f4  50                   push eax
// 0076c8f5  b980b08b00           mov ecx, 0x8bb080
// 0076c8fa  e821d9caff           call 0x41a220
// 0076c8ff  68e0747700           push 0x7774e0
// 0076c904  e81a44ecff           call 0x630d23
// 0076c909  59                   pop ecx
// 0076c90a  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__Efunc_playerFromCharacter@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp

extern "C" int __cdecl sub_41A220(int, int, int, int, int, int);
extern "C" int __cdecl sub_630D23(int);

int sub_76C8E0()
{
    sub_41A220(0x418E10, 0, 0x787994, 0x7879A0, 1, 0x8BB080);
    sub_630D23(0x7774E0);
    return 0;
}
