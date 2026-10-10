// from server: 84% by colin
// roc 2007-08 0076eac0  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076eac0
//
// 0076eac0  6a05                 push 5
// 0076eac2  685c010000           push 0x15c
// 0076eac7  6898b67900           push 0x79b698
// 0076eacc  68b4b67900           push 0x79b6b4
// 0076ead1  b92cde8b00           mov ecx, 0x8bde2c
// 0076ead6  e8b5f1d1ff           call 0x48dc90
// 0076eadb  6890807700           push 0x778090
// 0076eae0  e83e22ecff           call 0x630d23
// 0076eae5  59                   pop ecx
// 0076eae6  c3                   ret

struct S_48DC90 {
    void f(int a, int b, int c, int d);
};

extern "C" void __cdecl sub_630D23(int a);

void sub_76EAC0()
{
    S_48DC90* p = (S_48DC90*)0x8bde2c;
    p->f(5, 0x15c, 0x79b698, 0x79b6b4);
    sub_630D23(0x778090);
}
