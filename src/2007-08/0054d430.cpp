// from server: 27% by colin
struct S {
    void f();
};

extern "C" int __stdcall pubsync(void*);
extern "C" void __stdcall sub_54C5C0();

void S::f() {
    int* p;
    p = (int*)((char*)this + 8);
    *(int*)this = 0x7a7ac4;
    int* q = (int*)*p;
    int* r = (int*)q[1];
    *(int*)((char*)r + (int)this + 8) = 0x7a7abc;
    int* a = (int*)((char*)this + 4);
    int* b = (int*)*a;
    int* c = (int*)*b;
    if ((*(unsigned char*)((char*)c + 0x1c) & 1) != 0) {
        int* d = (int*)((char*)this + 8);
        int* e = (int*)*d;
        int* g = (int*)e[1];
        int* h = (int*)((char*)g + (int)this + 0x30);
        pubsync((void*)*h);
    }
    sub_54C5C0();
}
