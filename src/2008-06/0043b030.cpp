// from server: 30% by colin
struct VColor3 {
    char pad[0x134];
    int field134;
    int field138;
    void sub_43b030(int a, int b);
};

extern "C" void __stdcall sub_576f00(int, int);
extern "C" void __stdcall sub_5773c0(int);

void VColor3::sub_43b030(int a, int b) {
    int local1 = 0;
    int local2 = 0;
    int local3 = 0;
    int local4 = 0;
    int local5 = 0;
    int* p = (int*)((char*)this + 0x134);
    int v = *(int*)(*p + 0x198);
    sub_576f00(v, (int)&local1);
    local5 = 1;
    int* q = (int*)((char*)this + 0x138);
    int* r = (int*)(*q + 0x18);
    int* s = (int*)*r;
    int (*fn)(int, int) = (int (*)(int, int))s[3];
    fn(a, b);
    local5 = -1;
    sub_5773c0((int)&local1);
}
