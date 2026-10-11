// from server: 44% by tester
struct S_004d8390 {
    void* f(void* a, void* b, void* c, void* d);
};

extern "C" void* __stdcall sub_005875e0(void* a, void* b, void* c, void* d, void* e);
extern "C" void sub_004d81c0(void* a);

void* S_004d8390::f(void* a, void* b, void* c, void* d)
{
    if (a == 0) {
        *(void**)((char*)b + 4) = 0;
        *(void**)((char*)b + 8) = 0;
        *(char*)((char*)b + 12) = 0;
        return 0;
    }
    void* r = sub_005875e0(a, b, c, d, 0);
    sub_004d81c0((char*)r + 16);
    return b;
}
