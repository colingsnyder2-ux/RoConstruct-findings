// from server: 27% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __stdcall FlashWindow(void*, int);
extern "C" int __stdcall SetForegroundWindow(void*);
extern "C" int __stdcall CompareStringA(const char*, const char*);

struct RefCounted {
    void* vptr;
    long refcount;
    long weakrefcount;
};

struct Doc {
    char pad[0x78];
    void* field78;
    int method60();
    int doWork();
};

struct Inner {
    void* vptr;
    int field4;
    int field14c;
};

struct Str {
    char data[0x20];
};

struct Holder {
    void* ptr;
};

extern "C" void* __stdcall sub_403800(void*);
extern "C" void* __stdcall sub_403830(void*);
extern "C" void __stdcall sub_40d550(void*);
extern "C" void __stdcall sub_44cf70(void*);
extern "C" void* __stdcall sub_44cfd0(void*, void*);
extern "C" void __stdcall sub_44d2b0(void*, void*, void*);
extern "C" void* __stdcall sub_450b40(void*);
extern "C" void* __stdcall sub_450ec0(void*);
extern "C" void __stdcall sub_45bc30(void*);
extern "C" void __stdcall sub_492360(void*);
extern "C" void __stdcall sub_52d780(void*, int);
extern "C" void __stdcall sub_5595a0(void*);
extern "C" void* __stdcall sub_62fe2a(void*);
extern "C" void* __stdcall sub_6303d0();
extern "C" void* __stdcall sub_6308fe(void*);
extern "C" void __stdcall sub_630a1e();

extern void* g_791a08;

int Doc::doWork()
{
    RefCounted* rc;
    void* tmp;
    Inner* inner;
    int result;
    int flag;
    int b;
    Str str;
    Holder h;
    void* p;

    tmp = sub_403800(&rc);
    flag = (*(int*)tmp == 0);
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))((void**)rc->vptr)[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakrefcount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))((void**)rc->vptr)[2])(rc);
            }
        }
    }
    if (flag) {
        return 1;
    }
    if (this->method60() == 0) {
        return 1;
    }

    sub_403830(&rc);
    sub_40d550(&rc);
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))((void**)rc->vptr)[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakrefcount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))((void**)rc->vptr)[2])(rc);
            }
        }
    }

    sub_403830(&rc);
    if (rc != 0) {
        inner = (Inner*)sub_450ec0(rc);
    } else {
        inner = 0;
    }
    flag = (inner->field14c == 1);
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))((void**)rc->vptr)[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakrefcount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))((void**)rc->vptr)[2])(rc);
            }
        }
    }

    sub_403830(&rc);
    if (rc != 0) {
        inner = (Inner*)sub_450ec0(rc);
    } else {
        inner = 0;
    }
    sub_52d780(inner, 2);
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))((void**)rc->vptr)[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakrefcount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))((void**)rc->vptr)[2])(rc);
            }
        }
    }

    sub_403830(&rc);
    if (rc != 0) {
        p = sub_450b40(rc);
    } else {
        p = 0;
    }
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))((void**)rc->vptr)[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakrefcount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))((void**)rc->vptr)[2])(rc);
            }
        }
    }

    if (p != 0) {
        sub_44cfd0(p, &str);
        b = 1;
        if (CompareStringA((const char*)&str, (const char*)g_791a08) == 0) {
            b = 0;
        }
    } else {
        b = 1;
    }

    if (b) {
        void* app = sub_6303d0();
        if (app != 0) {
            app = ((void* (__thiscall*)(void*))((void**)app)[0x7c/4])(app);
        } else {
            app = 0;
        }
        SetForegroundWindow(*(void**)((char*)app + 0x20));
        result = (int)sub_6308fe(this);
        sub_5595a0(&h);
        return result;
    }

    sub_44cfd0(p, &str);
    b = (FlashWindow(&str, 0) == 0);
    if (b) {
        sub_5595a0(&h);
        return 1;
    }

    void* app = sub_6303d0();
    if (app != 0) {
        app = ((void* (__thiscall*)(void*))((void**)app)[0x7c/4])(app);
    } else {
        app = 0;
    }
    FlashWindow(*(void**)((char*)app + 0x20), 0);

    sub_44d2b0(&str, this->field78, 0);
    result = (int)sub_62fe2a(&str);
    if (result == 1 && flag) {
        sub_403800(&rc);
        if (rc != 0) {
            inner = (Inner*)sub_450ec0(rc);
        } else {
            inner = 0;
        }
        sub_44cf70(inner);
        sub_492360(&rc);
    }
    sub_45bc30(&str);
    sub_5595a0(&h);
    return result;
}
