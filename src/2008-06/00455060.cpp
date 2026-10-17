// from server: 31% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Result {
    unsigned int first;
    unsigned int second;
};

struct Source {
    void copy(Result* output);
};

struct Str {
    int words[8];
};

extern "C" void (__thiscall *FlashWindow)(void*, int);
extern "C" void __stdcall SetForegroundWindow(void*);
extern "C" int __stdcall mfc1144(void*);
extern "C" int __stdcall mfc2208(void*);
extern "C" int __stdcall mfc6027(void*, const char*);

struct CRobloxDoc {
    char pad0[0x94];
    Source* source;
    void* f_403040(Result* out);
    void* f_44f1b0(Str* out);
    void* f_44f5c0(int, void*);
    void* f_452b40();
    void* f_4530f0();
    void* f_46a940(void* out);
    void* f_554da0(int);
    void* f_5773c0();
    void* f_6a084e();
    void* f_6a0e4e();
    void* f_6a13a6();
    void* f_45fe20();
    void* f_600660();
    int method();
};

int CRobloxDoc::method()
{
    Result r;
    Str s;
    char flag = 0;
    int result = 0;
    void* p;
    void* q;
    void* obj;
    void* ctrl;
    long old;
    int b;

    if (source != 0) {
        p = f_46a940(&r);
        if (*(int*)p != 0) {
            flag = 0;
        } else {
            flag = 1;
        }
    } else {
        flag = 1;
    }

    if (flag == 0) {
        if (source != 0) {
            ctrl = (void*)((char*)source + 4);
            old = _InterlockedExchangeAdd((volatile long*)ctrl, -1);
            if (old == 1) {
                void** vt = *(void***)source;
                ((void(__thiscall*)(void*))vt[1])(source);
                ctrl = (void*)((char*)source + 8);
                old = _InterlockedExchangeAdd((volatile long*)ctrl, -1);
                if (old == 1) {
                    void** vt2 = *(void***)source;
                    ((void(__thiscall*)(void*))vt2[2])(source);
                }
            }
        }
    }

    if (flag != 0) {
        return 1;
    }

    {
        void** vt = *(void***)this;
        int (*fn)(void*) = (int(*)(void*))vt[24];
        if (fn(this) == 0) {
            return 1;
        }
    }

    p = f_403040(&r);
    {
        int a = *(int*)p;
        int b2 = *(int*)((char*)p + 4);
        void* tmp = &r;
        *(int*)tmp = a;
        *(int*)((char*)tmp + 4) = b2;
        if (b2 != 0) {
            _InterlockedExchangeAdd((volatile long*)((char*)b2 + 4), 1);
        }
    }

    if (source != 0) {
        ctrl = (void*)((char*)source + 4);
        old = _InterlockedExchangeAdd((volatile long*)ctrl, -1);
        if (old == 1) {
            void** vt = *(void***)source;
            ((void(__thiscall*)(void*))vt[1])(source);
            ctrl = (void*)((char*)source + 8);
            old = _InterlockedExchangeAdd((volatile long*)ctrl, -1);
            if (old == 1) {
                void** vt2 = *(void***)source;
                ((void(__thiscall*)(void*))vt2[2])(source);
            }
        }
    }

    p = f_403040(&r);
    {
        int c = *(int*)p;
        if (c != 0) {
            obj = f_4530f0();
        } else {
            obj = 0;
        }
    }
    b = (*(int*)((char*)obj + 0x1b4) == 1);

    if (source != 0) {
        ctrl = (void*)((char*)source + 4);
        old = _InterlockedExchangeAdd((volatile long*)ctrl, -1);
        if (old == 1) {
            void** vt = *(void***)source;
            ((void(__thiscall*)(void*))vt[1])(source);
            ctrl = (void*)((char*)source + 8);
            old = _InterlockedExchangeAdd((volatile long*)ctrl, -1);
            if (old == 1) {
                void** vt2 = *(void***)source;
                ((void(__thiscall*)(void*))vt2[2])(source);
            }
        }
    }

    p = f_403040(&r);
    {
        int c = *(int*)p;
        if (c != 0) {
            obj = f_4530f0();
        } else {
            obj = 0;
        }
    }
    f_554da0(2);

    if (source != 0) {
        ctrl = (void*)((char*)source + 4);
        old = _InterlockedExchangeAdd((volatile long*)ctrl, -1);
        if (old == 1) {
            void** vt = *(void***)source;
            ((void(__thiscall*)(void*))vt[1])(source);
            ctrl = (void*)((char*)source + 8);
            old = _InterlockedExchangeAdd((volatile long*)ctrl, -1);
            if (old == 1) {
                void** vt2 = *(void***)source;
                ((void(__thiscall*)(void*))vt2[2])(source);
            }
        }
    }

    p = f_403040(&r);
    {
        int c = *(int*)p;
        if (c != 0) {
            q = f_452b40();
        } else {
            q = 0;
        }
    }

    if (source != 0) {
        ctrl = (void*)((char*)source + 4);
        old = _InterlockedExchangeAdd((volatile long*)ctrl, -1);
        if (old == 1) {
            void** vt = *(void***)source;
            ((void(__thiscall*)(void*))vt[1])(source);
            ctrl = (void*)((char*)source + 8);
            old = _InterlockedExchangeAdd((volatile long*)ctrl, -1);
            if (old == 1) {
                void** vt2 = *(void***)source;
                ((void(__thiscall*)(void*))vt2[2])(source);
            }
        }
    }

    if (q != 0) {
        f_44f1b0(&s);
        if (mfc6027(&s, "NoVisit") == 0) {
            flag = 0;
        } else {
            flag = 1;
        }
        mfc2208(&s);
    } else {
        flag = 1;
    }

    if (flag != 0) {
        obj = f_6a0e4e();
        if (obj != 0) {
            void** vt = *(void***)obj;
            ((void(__thiscall*)(void*))vt[31])(obj);
        } else {
            obj = 0;
        }
        FlashWindow(*(void**)((char*)obj + 0x20), 0);
        result = (int)f_6a13a6();
    } else {
        f_44f1b0(&s);
        if (mfc1144(&s) == 0) {
            flag = 0;
        } else {
            flag = 1;
        }
        mfc2208(&s);
        if (flag != 0) {
            f_5773c0();
            return 1;
        }
        obj = f_6a0e4e();
        if (obj != 0) {
            void** vt = *(void***)obj;
            ((void(__thiscall*)(void*))vt[31])(obj);
        } else {
            obj = 0;
        }
        SetForegroundWindow(*(void**)((char*)obj + 0x20));
        f_44f5c0(0, source);
        f_6a084e();
        if (b != 0) {
            p = f_46a940(&r);
            {
                int c = *(int*)p;
                if (c != 0) {
                    obj = f_4530f0();
                } else {
                    obj = 0;
                }
            }
            f_554da0(1);
            f_600660();
        }
        f_45fe20();
    }

    f_5773c0();
    return result;
}
