// from server: 47% by colin
struct S {
    int f(int, int);
};

extern "C" void __stdcall sub_474F70(int);
extern "C" void* __stdcall sub_500060(unsigned int, unsigned int);
extern "C" void __stdcall sub_500580(void*, int, unsigned int);
extern "C" void __stdcall sub_457DD0();
extern "C" int __stdcall sub_77D2E8(void*);

int S::f(int a, int b)
{
    int* p;
    int* q;
    int r;
    int v;

    *(int*)((char*)this + 0) = 0x797984;
    *(int*)((char*)this + 4) = 0;
    *(int*)((char*)this + 8) = 0;
    *(int*)((char*)this + 0) = 0x79f90c;
    *(int*)((char*)this + 0xc) = 0;
    sub_474F70(b);
    *(int*)((char*)this + 0x10) = a;
    *(char*)((char*)this + 0x14) = 1;
    *(int*)((char*)this + 0x18) = 0x79f8dc;
    *(int*)((char*)this + 0x24) = 10;
    *(int*)((char*)this + 0x1c) = 0;
    p = (int*)sub_500060(0x28, 0x10);
    *(int*)((char*)this + 0x20) = (int)p;
    sub_500580(p, 0, (unsigned int)(*(int*)((char*)this + 0x24) * 4));
    if (b != 0) {
        if (sub_77D2E8((void*)(b + 4)) == 0) {
            sub_457DD0();
            (*(void(__thiscall**)(int, int))*(int*)b)(b, 1);
        }
    }
    return (int)this;
}
