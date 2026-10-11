// from server: 54% by atomic.potato
struct S {
    void f(int);
    char pad[8];
    int field_8;
};

struct Inner {
    char pad[0x18];
    int field_1c;
    int field_20;
    int field_24;
};

struct Outer {
    char pad[0x1c];
    int field_1c;
    int field_20;
    int field_24;
};

extern "C" void __stdcall sub_4d96a0(void*, int, int, int);
extern "C" void __stdcall sub_4d9720(void*);
extern "C" void __stdcall sub_4d9a30(void*, int);
extern "C" void __stdcall sub_4f0fd0(void*, void*);

struct Replicator {
    void SendDataJob(void*);
};

void Replicator::SendDataJob(void* a) {
    char buf[0x414];
    Outer* o = (Outer*)a;
    sub_4d96a0(buf, o->field_24, o->field_1c, 0);
    *(int*)(buf + 0x420) = 0;
    sub_4d9a30(buf, 8);
    sub_4f0fd0(this, buf);
    *(int*)(buf + 0x420) = -1;
    sub_4d9720(buf);
}
