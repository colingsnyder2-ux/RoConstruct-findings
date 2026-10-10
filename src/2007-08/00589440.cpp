// from server: 52% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBXName {
    void* rep;
};

struct StringImpl {
    char pad[4];
    char* ptr;
    unsigned int size;
    unsigned int res;
};

struct String {
    StringImpl* impl;
};

struct RefCounted {
    void* vptr;
    long ref1;
    long ref2;
};

struct FactoryProduct {
    void* field0;
    void* field4;
    char pad8[4];
    RBXName name;
    char pad1c[0x10];
    char flag2c;
    void construct();
};

extern "C" void __stdcall sub_77e69c(void*, void*);
extern "C" void* __cdecl sub_408740(void*);
extern "C" void __cdecl sub_549320(void*);
extern "C" void* __cdecl sub_4931a0();
extern "C" void* __cdecl sub_630b8c(void*, int, int);
extern "C" void* __cdecl sub_62fc14(void*, void*, int, void*, void*);
extern "C" void __cdecl sub_588330(void*);

void FactoryProduct::construct()
{
    if (this->field0 != 0)
        return;

    char buf[0x20];
    sub_77e69c(buf, &this->name);
    *(void**)(buf + 0x1c) = *(void**)((char*)&this->name + 0x1c);

    void* tmp = 0;
    void* r = sub_408740(&tmp);
    sub_549320(r);

    if (tmp != 0) {
        char c = this->flag2c;
        int edi = (c != 0) ? 0x10 : 0;
        void* p = sub_4931a0();
        char dl = *(char*)((char*)p + 0xed);
        int edx = (dl != 0) ? 0x20 : 0;
        edx += 0x20;
        edx |= 0x800;
        edi |= edx;

        void* s = sub_630b8c(buf, 0, 0x5c);
        void* str = *(void**)buf;
        *(int*)(buf + 8) = 0x5c;
        void* data = *(void**)((char*)str + 0x14);
        *(void**)(buf + 0) = data;
        if (*(unsigned int*)((char*)str + 0x18) < 0x10)
            data = (char*)str + 4;
        else
            data = *(void**)((char*)str + 4);

        void* arg = sub_62fc14(this->field4, data, edi, buf, this);
        sub_588330(arg);
    }

    RefCounted* rc = (RefCounted*)tmp;
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->ref1, -1) == 1) {
            void** vt = *(void***)rc;
            ((void(__thiscall*)(void*))vt[1])(rc);
            if (_InterlockedExchangeAdd(&rc->ref2, -1) == 1) {
                void** vt2 = *(void***)rc;
                ((void(__thiscall*)(void*))vt2[2])(rc);
            }
        }
    }
}
