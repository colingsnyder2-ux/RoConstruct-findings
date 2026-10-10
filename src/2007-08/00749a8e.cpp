// from server: 64% by colin
struct seg_00740000 {
    void Method(int arg);
};

extern "C" void __cdecl sub_630A1E(int);
extern "C" void __cdecl sub_630A18();

void seg_00740000::Method(int arg) {
    int* p = (int*)((char*)&arg + 4);
    int v = *p;
    int x = v ^ (int)p;
    sub_630A1E(x);
    sub_630A18();
}
