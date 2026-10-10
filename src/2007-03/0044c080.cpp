// from server: 72% by tester
// roc 2007-03 0044c080  unit: seg_00440000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044c080

extern "C" __declspec(dllimport) int __stdcall PostMessageA(void*, unsigned int, unsigned int, int);

struct Inner {
    char pad[0x20];
    void* field20;
};

struct Mid {
    char pad[4];
    Inner* field4;
};

struct Outer {
    char pad[0xec];
    char fieldEC;
};

struct S {
    char pad[0x2c];
    void* field2C;
    int method(int);
};

extern "C" Mid* __cdecl sub_61e390();

int S::method(int arg) {
    Mid* m = sub_61e390();
    Inner* in = m->field4;
    Outer* o = (Outer*)in->field20;
    if (o->fieldEC != 0) {
        PostMessageA(in->field20, 0x10, 0, 0);
        return 0;
    }
    void** vt = *(void***)field2C;
    int (*fn68)(void*) = (int (*)(void*))vt[0x68/4];
    int r = fn68(field2C);
    if (r != 0) {
        void** vt2 = *(void***)field2C;
        int* (*fn6c)(void*, int*) = (int* (*)(void*, int*))vt2[0x6c/4];
        int* pr = fn6c(field2C, &r);
        Inner* in2 = (Inner*)((char*)pr + 0x20);
        PostMessageA(in2->field20, 0x111, 0xe102, 0);
    }
    return 0;
}
