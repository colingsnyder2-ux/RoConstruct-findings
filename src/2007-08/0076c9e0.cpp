// from server: 99% by colin
// roc 2007-08 0076c9e0  unit: seg_00760000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076c9e0
//
// 0076c9e0  6a01                 push 1
// 0076c9e2  33c9                 xor ecx, ecx
// 0076c9e4  68f0797800           push 0x7879f0
// 0076c9e9  51                   push ecx
// 0076c9ea  b820b44100           mov eax, 0x41b420
// 0076c9ef  50                   push eax
// 0076c9f0  b9a0b18b00           mov ecx, 0x8bb1a0
// 0076c9f5  e8a6dbcaff           call 0x41a5a0
// 0076c9fa  68c0747700           push 0x7774c0
// 0076c9ff  e81f43ecff           call 0x630d23
// 0076ca04  59                   pop ecx
// 0076ca05  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__Efunc_Unbind@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp

extern "C" void __cdecl func_41b420();
extern "C" void __cdecl func_7774c0();
extern "C" int __stdcall func_41a5a0(int, int, int, int);
extern "C" int __cdecl func_630d23(int);

void func_Unbind()
{
    func_41a5a0(1, 0, 0x7879f0, (int)&func_41b420);
    func_630d23(0x7774c0);
}
