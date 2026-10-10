// from server: 62% by colin
struct S {
    void f();
};

extern "C" void __stdcall sub_5BD150();
extern "C" void __stdcall sub_62FC62(void*);
extern "C" void __stdcall sub_5738A0();

void S::f() {
    char* self = reinterpret_cast<char*>(this);
    *reinterpret_cast<int*>(self + 0x00) = 0x7aaba4;
    *reinterpret_cast<int*>(self + 0x04) = 0x7aab9c;
    *reinterpret_cast<int*>(self + 0x10) = 0x7aab94;
    *reinterpret_cast<int*>(self + 0x14) = 0x7aab84;
    *reinterpret_cast<int*>(self + 0x2c) = 0x7aab74;
    *reinterpret_cast<int*>(self + 0x44) = 0x7aab64;
    *reinterpret_cast<int*>(self + 0x5c) = 0x7aab54;
    *reinterpret_cast<int*>(self + 0x74) = 0x7aab44;
    *reinterpret_cast<int*>(self + 0x8c) = 0x7aab34;
    *reinterpret_cast<int*>(self + 0xe8) = 0x7aab28;
    *reinterpret_cast<int*>(self + 0x158) = 0x7aab18;
    *reinterpret_cast<int*>(self + 0x170) = 0x7aab0c;
    *reinterpret_cast<int*>(self + 0x17c) = 0x7aaaf4;

    int* p = *reinterpret_cast<int**>(self + 0xec);
    int* q = reinterpret_cast<int*>(p[1]);
    *reinterpret_cast<int*>(reinterpret_cast<char*>(q) + reinterpret_cast<int>(self) + 0xec) = 0x7aaae8;

    p = *reinterpret_cast<int**>(self + 0xec);
    q = reinterpret_cast<int*>(p[2]);
    *reinterpret_cast<int*>(reinterpret_cast<char*>(q) + reinterpret_cast<int>(self) + 0xec) = 0x7aaae0;

    p = *reinterpret_cast<int**>(self + 0xec);
    q = reinterpret_cast<int*>(p[3]);
    *reinterpret_cast<int*>(reinterpret_cast<char*>(q) + reinterpret_cast<int>(self) + 0xec) = 0x7aaac4;

    p = *reinterpret_cast<int**>(self + 0xec);
    int* r = reinterpret_cast<int*>(p[1]);
    *reinterpret_cast<int*>(reinterpret_cast<char*>(r) + reinterpret_cast<int>(self) + 0xe8) = reinterpret_cast<int>(r) - 0x198;

    p = *reinterpret_cast<int**>(self + 0xec);
    r = reinterpret_cast<int*>(p[2]);
    *reinterpret_cast<int*>(reinterpret_cast<char*>(r) + reinterpret_cast<int>(self) + 0xe8) = reinterpret_cast<int>(r) - 0x1a0;

    p = *reinterpret_cast<int**>(self + 0xec);
    r = reinterpret_cast<int*>(p[3]);
    *reinterpret_cast<int*>(reinterpret_cast<char*>(r) + reinterpret_cast<int>(self) + 0xe8) = reinterpret_cast<int>(r) - 0x1a8;

    int* obj = *reinterpret_cast<int**>(self + 0x1d8);
    if (obj != 0) {
        int* vtbl = *reinterpret_cast<int**>(obj);
        void (__stdcall *fn)(int) = reinterpret_cast<void (__stdcall*)(int)>(vtbl[0]);
        fn(1);
    }

    sub_5BD150();

    *reinterpret_cast<int*>(self + 0x170) = 0x7aa8ac;
    *reinterpret_cast<int*>(self + 0x158) = 0x7aaab4;

    void* mem = *reinterpret_cast<void**>(self + 0x160);
    if (mem != 0) {
        sub_62FC62(mem);
    }

    *reinterpret_cast<int*>(self + 0x160) = 0;
    *reinterpret_cast<int*>(self + 0x164) = 0;
    *reinterpret_cast<int*>(self + 0x168) = 0;

    sub_5738A0();
}
