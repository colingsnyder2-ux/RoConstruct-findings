// from server: 40% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Obj {
    char pad0[0x130];
    void* field130;
    void* field134;
    void* field138;
    void* field13c;
    void* field140;
    void* field144;
};

extern "C" void __stdcall func_0055acc0(void*);
extern "C" void* __stdcall func_005a3390(void*);
extern "C" void* __stdcall func_005cab00(void*, void*);
extern "C" void __stdcall func_005e9150(void*, void*);
extern "C" void __stdcall func_005fad50(void*);
extern "C" void __stdcall func_005fad80(void*);
extern "C" void* __stdcall func_00618a40(void*, void*, void*, void*, void*, void*);
extern "C" void* __stdcall func_006a17c6(void*, void*, void*, void*, void*);

struct BodyMover {
    void func(void* arg);
};

void BodyMover::func(void* arg)
{
    Obj* self = (Obj*)this;
    void** p = (void**)arg;
    func_0055acc0(arg);
    if (*p != self)
        goto end;

    {
        void* a = p[2];
        void* r = func_006a17c6(a, 0, (void*)0x92907c, (void*)0x92dd50, 0);
        void* tmp;
        func_00618a40(&tmp, r, 0, 0, 0, 0);
        void** res = (void**)tmp;
        self->field140 = res[0];
        void* newref = res[1];
        void* old144 = self->field144;
        if (newref)
            _InterlockedExchangeAdd((volatile long*)((char*)newref + 8), 1);
        if (old144)
        {
            if (_InterlockedExchangeAdd((volatile long*)((char*)old144 + 8), -1) == 1)
            {
                void** vt = *(void***)old144;
                ((void(__stdcall*)(void*))vt[2])(old144);
            }
        }
        self->field144 = newref;
        if (tmp)
        {
            if (_InterlockedExchangeAdd((volatile long*)((char*)tmp + 4), -1) == 1)
            {
                void** vt = *(void***)tmp;
                ((void(__stdcall*)(void*))vt[1])(tmp);
                if (_InterlockedExchangeAdd((volatile long*)((char*)tmp + 8), -1) == 1)
                {
                    void** vt2 = *(void***)tmp;
                    ((void(__stdcall*)(void*))vt2[2])(tmp);
                }
            }
        }
    }

    {
        void* tmp3;
        func_005cab00(&self->field140, &tmp3);
        void* ebx;
        if (*(void**)tmp3 != 0)
            ebx = func_005a3390(self);
        else
            ebx = 0;
        if (tmp3)
        {
            if (_InterlockedExchangeAdd((volatile long*)((char*)tmp3 + 4), -1) == 1)
            {
                void** vt = *(void***)tmp3;
                ((void(__stdcall*)(void*))vt[1])(tmp3);
                if (_InterlockedExchangeAdd((volatile long*)((char*)tmp3 + 8), -1) == 1)
                {
                    void** vt2 = *(void***)tmp3;
                    ((void(__stdcall*)(void*))vt2[2])(tmp3);
                }
            }
        }
        void* old13c = self->field13c;
        if (old13c != ebx)
        {
            if (old13c)
            {
                func_005e9150(&self->field130, old13c);
                func_005fad80(old13c);
            }
            self->field13c = ebx;
            if (ebx)
            {
                func_005e9150(&self->field130, ebx);
                func_005fad50(ebx);
            }
        }
    }
end:
    ;
}
