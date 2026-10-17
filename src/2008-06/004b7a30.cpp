// from server: 33% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct StdString {
    void* pad0;
    void* pad1;
    void* pad2;
    void* pad3;
    unsigned int len;
    unsigned int res;
    char buf[8];
};

struct RefCounted {
    void* vptr;
    long refcount;
    long weakcount;
};

struct Item {
    void* vptr;
    void* field4;
};

struct S {
    void* vptr;
    char pad[0x2c24 - 4];
    void* vecBegin;
    void* vecEnd;
    void* vecCap;
    char pad2[0x2d54 - 0x2c30];
    void* field2d54;
    char pad3[0x2d60 - 0x2d58];
    void* field2d60;

    void f(void* arg);
};

extern "C" void __cdecl sub_4a8b60(void* out1, void* out2, void* arg);
extern "C" char __cdecl sub_4a5210(void* self, void* out, void* val, int flag);
extern "C" void* __cdecl sub_49e890();
extern "C" void* __cdecl sub_5a8440(void* self, void* out, int n);
extern "C" void __cdecl sub_569620(void* out);
extern "C" void* __cdecl sub_4a98b0(void* self, int flag);
extern "C" void __cdecl sub_5693a0(void* a, int b, const char* fmt, void* c, void* d, void* e, void* f);
extern "C" void __cdecl sub_4b6ab0(void* self, void* a, void* b);
extern "C" void __cdecl sub_802468(void* p);
extern "C" void __cdecl sub_802890();

extern char byte_819e10;
extern char str_82515c[];
extern char str_82512c[];

void S::f(void* arg)
{
    void* local10 = 0;
    void* local14 = 0;
    void* local1c = 0;
    void* local28 = 0;
    void* local2c = 0;
    char local30[0x10];
    char local40[0x10];
    char local50[0x10];
    char local60[0x10];
    int local80 = -1;

    sub_4a8b60(&local10, &local28, arg);

    local14 = 0;
    sub_4a5210(arg, &local14, this->field2d54, 1);

    unsigned int idx = (unsigned int)local14;
    unsigned int count = ((char*)this->vecEnd - (char*)this->vecBegin) >> 2;
    if (idx >= count) {
        sub_802890();
    }
    void* item = ((void**)this->vecBegin)[idx];
    local1c = item;

    void* g = sub_49e890();
    if (*((char*)g + 0x132) != 0) {
        void* s;
        if (local10 != 0) {
            void* vt = *(void**)local10;
            void* fn = *((void**)vt + 1);
            void* r = ((void* (__thiscall*)(void*))fn)((char*)local10 + 0x10);
            if (*((unsigned int*)r + 7) < 0x10) {
                s = (char*)r + 8;
            } else {
                s = *((void**)r + 2);
            }
        } else {
            s = &byte_819e10;
        }
        local14 = s;

        void* r1 = sub_5a8440(&local28, &local40, 4);
        void* r2 = sub_5a8440(&local28, &local50, 4);
        (void)r2;
        sub_569620(&local30);
        local80 = 1;

        void* a = *((void**)item + 1);
        char* p1;
        if (*((unsigned int*)a + 6) < 0x10) {
            p1 = (char*)a + 4;
        } else {
            p1 = *((char**)a + 1);
        }
        char* p2;
        if (*((unsigned int*)r1 + 6) < 0x10) {
            p2 = (char*)r1 + 4;
        } else {
            p2 = *((char**)r1 + 1);
        }
        void* v = *(void**)r2;
        void* q = sub_4a98b0((char*)this + 0x2d54, 1);
        sub_5693a0(v, 1, str_82515c, local14, p2, p1, q);

        void* rc = local50;
        local80 = 0;
        if (rc != 0) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 4), -1) == 1) {
                void* vt = *(void**)rc;
                void* fn = *((void**)vt + 1);
                ((void (__thiscall*)(void*))fn)(rc);
                if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 8), -1) == 1) {
                    void* vt2 = *(void**)rc;
                    void* fn2 = *((void**)vt2 + 2);
                    ((void (__thiscall*)(void*))fn2)(rc);
                }
            }
        }
        local80 = -1;
        sub_802468(&local40);
        item = local1c;
    }

    void* vt = *(void**)this;
    void* fn = *((void**)vt + 0x10);
    char ok = ((char (__thiscall*)(void*, void*))fn)(this, local10);
    if (ok != 0) {
        if (local10 != 0) {
            local14 = (char*)local10 + 0x14;
        } else {
            local14 = 0;
        }
        goto done;
    }

    {
        void* s;
        if (local10 != 0) {
            void* vt2 = *(void**)local10;
            void* fn2 = *((void**)vt2 + 1);
            void* r = ((void* (__thiscall*)(void*))fn2)((char*)local10 + 0x10);
            if (*((unsigned int*)r + 7) < 0x10) {
                s = (char*)r + 8;
            } else {
                s = *((void**)r + 2);
            }
        } else {
            s = &byte_819e10;
        }
        local14 = s;

        void* r1 = sub_5a8440(&local28, &local60, 4);
        void* r2 = sub_5a8440(&local28, &local50, 4);
        (void)r2;
        sub_569620(&local30);
        local80 = 3;

        void* a = *((void**)item + 1);
        char* p1;
        if (*((unsigned int*)a + 6) < 0x10) {
            p1 = (char*)a + 4;
        } else {
            p1 = *((char**)a + 1);
        }
        char* p2;
        if (*((unsigned int*)r1 + 6) < 0x10) {
            p2 = (char*)r1 + 4;
        } else {
            p2 = *((char**)r1 + 1);
        }
        void* v = *(void**)r2;
        void* q = sub_4a98b0((char*)this + 0x2d54, 1);
        sub_5693a0(v, 2, str_82512c, local14, p2, p1, q);

        void* rc = local50;
        local80 = 2;
        if (rc != 0) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 4), -1) == 1) {
                void* vt3 = *(void**)rc;
                void* fn3 = *((void**)vt3 + 1);
                ((void (__thiscall*)(void*))fn3)(rc);
                if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 8), -1) == 1) {
                    void* vt4 = *(void**)rc;
                    void* fn4 = *((void**)vt4 + 2);
                    ((void (__thiscall*)(void*))fn4)(rc);
                }
            }
        }
        local80 = -1;
        sub_802468(&local60);
        item = local1c;
    }

done:
    local10 = 0;
    local2c = 0;
    local28 = item;
    sub_4b6ab0(this, arg, &local28);
    this->field2d60 = *((void**)item + 1);
}
