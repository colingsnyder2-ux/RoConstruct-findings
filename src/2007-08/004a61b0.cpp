// from server: 37% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __cdecl sprintf(char*, const char*, ...);
extern "C" void* __cdecl fopen(const char*, const char*);

struct String {
    char pad[0x10];
    unsigned int len;
    unsigned int cap;
    char buf[8];
};

struct VWorldListener {
    void* vptr;
    char pad[0x208];
    void* field_20c;
};

struct RefCounted {
    void* vptr;
    volatile long ref1;
    volatile long ref2;
};

extern "C" void __cdecl sub_4b6ca0();
extern "C" void __cdecl sub_4b7f70();
extern "C" void __cdecl sub_56c0a0(void*, int, const char*, const char*);
extern "C" void __cdecl sub_56c3b0();
extern "C" void __cdecl sub_630a1e();

extern "C" void* __stdcall sub_77e69c(const char*);
extern "C" void* __stdcall sub_77e578(void*, const char*, int);
extern "C" void* __stdcall sub_77e640(void*, void*, int);
extern "C" void* __stdcall sub_77e660(void*, void*);
extern "C" int __stdcall sub_77e910(const char*, const char*);
extern "C" void* __stdcall sub_77e968(char*, const char*, const char*);
extern "C" void* __stdcall sub_77e6ac(void*);

extern "C" void* __cdecl sub_8c30ec_get();

void VWorldListener_ctor(VWorldListener* self, int arg);

void VWorldListener_ctor(VWorldListener* self, int arg)
{
    sub_4b6ca0();
    *(void**)self = (void*)0x79d224;
    *(void**)((char*)self + 0x20c) = 0;

    void* p = sub_8c30ec_get();
    void* q;
    if (p) {
        q = (*(void*(**)(void*))p)(p);
    } else {
        q = 0;
    }
    q = (char*)q + 8;

    String s1;
    sub_77e69c((const char*)q);

    char* base = *(char**)0x77e63c;
    sub_77e578(&s1, base, 1);
    s1.buf[0] = '\\';

    char* base2 = *(char**)0x77e63c;
    sub_77e640(&s1, base2, 1);

    sub_4b7f70();
    char temp[0x20];
    sub_77e968(temp, "PacketLog%i.csv", (const char*)0x79d544);

    String s2;
    sub_77e660(&s2, temp);

    const char* cstr;
    if (s2.cap >= 0x10) {
        cstr = *(const char**)&s2;
    } else {
        cstr = s2.buf;
    }

    int r = sub_77e910(cstr, "Logging packets to %s");
    *(int*)((char*)self + 0x20c) = r;

    if (r) {
        sub_56c3b0();
        const char* cstr2;
        if (s2.cap >= 0x10) {
            cstr2 = *(const char**)&s2;
        } else {
            cstr2 = s2.buf;
        }
        sub_56c0a0((void*)r, 1, "Logging packets to %s", cstr2);
    } else {
        sub_56c3b0();
        const char* cstr3;
        if (s2.cap >= 0x10) {
            cstr3 = *(const char**)&s2;
        } else {
            cstr3 = s2.buf;
        }
        sub_56c0a0(0, 2, "Failed to create log file %s", cstr3);
    }

    RefCounted* rc = (RefCounted*)s2.buf;
    if (rc) {
        if (_InterlockedExchangeAdd(&rc->ref1, -1) == 1) {
            (*(void(**)(RefCounted*))rc->vptr)(rc);
            if (_InterlockedExchangeAdd(&rc->ref2, -1) == 1) {
                (*(void(**)(RefCounted*))((char*)rc->vptr + 8))(rc);
            }
        }
    }

    sub_77e6ac(&s1);
}
