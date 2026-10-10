// from server: 99% by colin
// roc 2007-08 0076c970  unit: seg_00760000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076c970
//
// 0076c970  6a01                 push 1
// 0076c972  33c9                 xor ecx, ecx
// 0076c974  68606f7800           push 0x786f60
// 0076c979  51                   push ecx
// 0076c97a  b8c0374100           mov eax, 0x4137c0
// 0076c97f  50                   push eax
// 0076c980  b928b18b00           mov ecx, 0x8bb128
// 0076c985  e816dccaff           call 0x41a5a0
// 0076c98a  68b0747700           push 0x7774b0
// 0076c98f  e88f43ecff           call 0x630d23
// 0076c994  59                   pop ecx
// 0076c995  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__Efunc_Close@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp

extern "C" void __cdecl sub_41A5A0();
extern "C" void __cdecl sub_630D23();

void func_Close()
{
    sub_41A5A0();
    sub_630D23();
}
