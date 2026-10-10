// from server: 48% by colin
struct Peer {
    int field0;
    int field4;
    char pad8[0x114];
    int field11c;
    char field120;
    Peer* construct(int a, int b);
};

extern "C" void __stdcall sub_49F820(int);
extern "C" void* __stdcall sub_498F60();

Peer* Peer::construct(int a, int b) {
    this->field0 = a;
    this->field4 = b;
    sub_49F820((int)(this + 8));
    int v1 = *(int*)(a + 0x1e1c);
    int* vt = *(int**)b;
    int v2 = *(int*)(a + 0x1e18);
    int (*fn)(int, int) = *(int (**)(int, int))(*(int*)vt + 0xb0);
    int r = fn(v2, v1);
    r -= 0x80;
    double d = (double)r;
    void* p = sub_498F60();
    float f = *(float*)((char*)p + 0xfc);
    f = (float)(f * d);
    this->field11c = (int)f;
    this->field120 = 0;
    return this;
}
