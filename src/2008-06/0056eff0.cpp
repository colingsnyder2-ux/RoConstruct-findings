// from server: 41% by colin
struct S {
    void* vtable;
    int field4;
    void f();
};

extern "C" int __stdcall G1_00802878(void*);
extern "C" void __stdcall G1_00802468(void*);
extern "C" void G1_00416110(void*, void*);
extern "C" void G1_00615440(void*, void*);
extern "C" void* G1_0056d2b0(void*, void*);
extern "C" void* G1_0056cd80();
extern "C" void G1_0056de80(void*);

void S::f()
{
    if (G1_00802878(*(void**)(*(int*)this + 8))) {
        char buf[8];
        G1_00416110(buf, &field4);
        char buf2[32];
        G1_00615440(buf2, buf);
        void* p = G1_0056d2b0(buf2, buf);
        if (p != &field4) {
            int tmp = *(int*)&field4;
            *(int*)&field4 = *(int*)p;
            *(int*)p = tmp;
        }
        int* q = *(int**)buf;
        if (q) {
            (*(void(__thiscall**)(int*, int))(*q))(q, 1);
        }
        G1_00802468(buf2);
        G1_00802468(buf);
        vtable = G1_0056cd80();
    }
    G1_0056de80(this);
}
