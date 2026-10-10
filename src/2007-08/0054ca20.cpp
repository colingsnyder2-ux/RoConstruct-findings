// from server: 26% by colin
struct S {
    char pad[0x14];
    int* p14;
    char pad2[0x0C];
    int* p24;
    char pad3[0x1C];
    void* p44;
    void f();
};

extern "C" int __stdcall sub_54b740(void*, void*, int, int);
extern "C" int __stdcall sub_77e604(void*);

void S::f()
{
    int* a = p24;
    int* b = p14;
    int diff = *a - *b;
    if (diff > 0) {
        sub_54b740(&p44, p44, *b, diff);
    }
    if (p44 != 0) {
        sub_77e604(p44);
    }
}
