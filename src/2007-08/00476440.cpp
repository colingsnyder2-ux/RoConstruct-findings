// from server: 76% by colin
struct CNameItem {
    float f(int, int);
};

extern "C" int __cdecl sub_4759C0(int, int, int, int, int*);
extern "C" void __stdcall glReadPixels(int, int, int, int, unsigned int, unsigned int, void*);

float CNameItem::f(int a, int b) {
    int x;
    int r = sub_4759C0(1, 1, 0x1902, 0x1406, &x);
    r = r - b - 1;
    glReadPixels(a, r, 1, 1, 0x1406, 0x1902, &x);
    return *(float*)&x;
}
