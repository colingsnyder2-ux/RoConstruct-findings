// from server: 12% by colin
struct S {
    void f();
};

extern "C" void* __stdcall sub_77E674(int, int);
extern "C" void* __stdcall sub_77E6A4();
extern "C" void* __stdcall sub_77E5A4();
extern "C" void* __stdcall sub_77E678();
extern "C" void* __stdcall sub_77E710();
extern "C" void __cdecl sub_4F36D0();
extern "C" void __cdecl sub_4F3940();

void S::f()
{
    char buf[0xa4];
    void* p;
    int n;
    int m;
    int* q;
    void* r;

    p = sub_77E674(3, 1);
    *(int*)((char*)p + 4) &= ~1;
    q = (int*)((char*)p + 4);
    *(int*)((char*)q + 0x14) = 10;
    sub_77E6A4();
    n = *(int*)0;
    sub_77E5A4();
    m = *(int*)0;
    if ((*(unsigned char*)((char*)m + n + 8) & 6) == 0) {
        sub_4F36D0();
        if (*(char*)&buf[0] != 0) {
            sub_77E678();
            return;
        }
    }
    sub_77E710();
    *(int*)0x79f584 = 0;
    *(int*)0x8827d4 = 0;
    *(int*)0x8827f8 = 0;
    sub_4F3940();
}
