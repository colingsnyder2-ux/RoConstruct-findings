// from server: 68% by tester
struct seg_00740000 {
};

extern "C" void __cdecl sub_630A1E(int);
extern "C" void __cdecl sub_630A18();

void __cdecl Method(int arg) {
    int* p = (int*)((char*)&arg + 4);
    int v = *p;
    int x = v ^ (int)p;
    sub_630A1E(x);
    sub_630A18();
}
