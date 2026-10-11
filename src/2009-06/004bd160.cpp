// from server: 23% by atomic.potato
struct Value { int x; };

extern "C" void __cdecl sub_00401710(int, int);
extern "C" void __cdecl sub_004b4050();
extern "C" int __cdecl sub_004b3a50();
extern "C" void __cdecl sub_005f9f60();
extern "C" void __cdecl sub_006247b0();
extern "C" void __cdecl sub_004106e0();
extern "C" void __cdecl sub_00402500();

struct Inner {
    char pad[0xc];
    int* begin;
    int* end;
    char pad2[4];
    int* cap;
};

struct S {
    char pad[0x98];
    int* a;
    int* b;
    int f();
};

int S::f()
{
    sub_00401710(0xa3d52c, 0x4b4b70);
    sub_004b4050();
    int n = (int)((char*)b - (char*)a) >> 3;
    int idx = sub_004b3a50();
    int eax = idx + 1;
    if ((unsigned)eax > (unsigned)n) {
        sub_004106e0();
    } else {
        Inner* in = (Inner*)((char*)this + 0x8c);
        int m = (int)((char*)in->end - (char*)in->begin) >> 3;
        if (idx >= m) {
            sub_004106e0();
        }
        int* p = (int*)((char*)in->begin + idx * 8);
        if (*p != 0) {
            return *p;
        }
    }
    sub_00401710(0xa3d4e4, 0x4b4840);
    sub_004b3a50();
    sub_005f9f60();
    sub_006247b0();
    return 0;
}
