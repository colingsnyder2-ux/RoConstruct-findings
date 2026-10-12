// from server: 49% by atomic.potato
struct VInstance {
    char pad0[8];
    int field8;
};

struct Inner {
    char pad0[4];
    int field4;
};

struct Base {
    char pad0[0x60];
};

extern "C" bool __cdecl sub_4cae60(int, int, int);
extern "C" bool __cdecl sub_4cb8e0();
extern "C" void __cdecl sub_4c66c0(void*);
extern "C" void __cdecl sub_4c69e0(void*, void*, void*, void*);
extern "C" bool __cdecl sub_4cb200(int, void*, void*);
extern "C" void __cdecl sub_4c6980(void*, void*, void*, void*);

struct S {
    bool method(VInstance* a, VInstance* b);
};

bool S::method(VInstance* a, VInstance* b)
{
    char local1 = 0;
    if (sub_4cae60((int)a, (int)b, (int)local1)) {
        return sub_4cb8e0();
    }

    void* p1 = 0;
    if (b != 0) {
        p1 = (char*)b + 0x60;
    }
    sub_4c66c0(&p1);
    void* p2 = p1;
    if (p2 != 0) {
        p2 = (char*)p2 - 0x60;
    } else {
        p2 = 0;
    }

    Inner* inner;
    if (this != 0) {
        inner = (Inner*)((char*)this - 0xc);
    } else {
        inner = 0;
    }
    int v1 = inner->field4;

    Inner* inner2;
    if (this != 0) {
        inner2 = (Inner*)((char*)this - 0xc);
    } else {
        inner2 = 0;
    }
    int v2 = inner2->field4;

    Inner* inner3;
    if (this != 0) {
        inner3 = (Inner*)((char*)this - 0xc);
    } else {
        inner3 = 0;
    }
    int v3 = inner3->field4;

    void* q1;
    if (b != 0) {
        q1 = (char*)b + 0x60;
    } else {
        q1 = 0;
    }

    sub_4c69e0(q1, (void*)(v3 + 0x60), (void*)(v2 + 0x64), (void*)(v1 + 0x68));

    char local2 = 0;
    int local3;
    if (sub_4cb200((int)this, (void*)((char*)a + 8), &local3)) {
        if (sub_4cb8e0()) {
            Inner* inner4;
            if (this != 0) {
                inner4 = (Inner*)((char*)this - 0xc);
            } else {
                inner4 = 0;
            }
            int w1 = inner4->field4;
            void* r1;
            if (w1 != 0) {
                r1 = (char*)w1 + 0x60;
            } else {
                r1 = 0;
            }
            void* r2;
            if (b != 0) {
                r2 = (char*)b + 0x60;
            } else {
                r2 = 0;
            }
            sub_4c6980(r2, (void*)local3, (void*)local2, r1);
            return true;
        }
    }
    return false;
}
