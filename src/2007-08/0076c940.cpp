// from server: 99% by colin
// roc 2007-08 0076c940  unit: seg_00760000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076c940
//
// 0076c940  6a01                 push 1
// 0076c942  33c9                 xor ecx, ecx
// 0076c944  68bc797800           push 0x7879bc
// 0076c949  51                   push ecx
// 0076c94a  b8b08d4100           mov eax, 0x418db0
// 0076c94f  50                   push eax
// 0076c950  b9f8b08b00           mov ecx, 0x8bb0f8
// 0076c955  e846dccaff           call 0x41a5a0
// 0076c95a  6800757700           push 0x777500
// 0076c95f  e8bf43ecff           call 0x630d23
// 0076c964  59                   pop ecx
// 0076c965  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__Efunc_Show@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp

extern "C" int __cdecl sub_41A5A0(int, int, int, int);
extern "C" int __cdecl sub_630D23(int);

int __cdecl func_Show()
{
    sub_41A5A0(0x418DB0, 0x8BB0F8, 0, 0x7879BC);
    sub_630D23(0x777500);
    return 0;
}
