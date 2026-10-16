// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __stdcall SetTimer(void*, unsigned int, unsigned int, void*);
extern "C" int __stdcall KillTimer(void*, void*);

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Control* control;
};

struct S_func_00458700 {
    char pad0[0x20];
    void* hwnd;
    char pad24[0x378 - 0x24];
    char field_378[0x24];
    char field_39c[0x28];
    void* field_3c4;
    Shared field_3c8;
    void* field_3cc;
    void* field_3c0;

    void f(void* a1, Shared a2);
};

void S_func_00458700::f(void* a1, Shared a2)
{
    if (this->field_3c4 == a1) {
        if (a2.control) {
            _InterlockedExchangeAdd(&a2.control->strong, -1);
            if (_InterlockedExchangeAdd(&a2.control->strong, -1) == 1) {
                a2.control->dispose();
                if (_InterlockedExchangeAdd(&a2.control->weak, -1) == 1) {
                    a2.control->destroy();
                }
            }
        }
        return;
    }

    if (this->field_3c4) {
        Shared tmp;
        tmp.control = (Control*)this->field_3c4;
        if (this->field_3c8.control) {
            _InterlockedExchangeAdd(&this->field_3c8.control->strong, 1);
        }
        tmp.control = (Control*)this->field_3c4;
        if (this->field_3c4) {
            ((void(__thiscall*)(void*))0x452c80)(this->field_3c4);
        }
        if (this->field_3cc) {
            ((void(__thiscall*)(char*))0x5e5a80)((char*)this->field_3cc + 0x24);
        }
        if (this->field_3cc) {
            ((void(__thiscall*)(char*))0x5e5a80)((char*)this->field_3cc + 0x44);
        }
        ((void(__thiscall*)(char*))0x457710)(this->field_378);
        ((void(__thiscall*)(char*))0x457710)(this->field_39c);
        void* v = ((void*(__thiscall*)(S_func_00458700*))((*(void***)this)[0x194/4]))(this);
        ((void(__thiscall*)(void*))0x6d7850)(*(void**)((char*)v + 0xe8));
        ((void(__thiscall*)(void*))0x5773c0)(&tmp);
    }

    void* v = ((void*(__thiscall*)(S_func_00458700*))((*(void***)this)[0x194/4]))(this);
    ((void(__thiscall*)(void*))((*(void***)v)[0x160/4]))(v);

    ((void(__thiscall*)(void*))0x456e80)(&this->field_3cc);

    this->field_3c4 = a1;
    ((void(__thiscall*)(Shared*))0x4025b0)(&this->field_3c8);

    if (this->field_3c4) {
        Shared tmp2;
        tmp2.control = (Control*)a1;
        if (a2.control) {
            _InterlockedExchangeAdd(&a2.control->strong, 1);
        }
        tmp2.control = (Control*)a1;
        if (this->field_3c4) {
            ((void(__thiscall*)(void*))0x458610)(this->field_3c4);
        }
        ((void(__cdecl*)(void*, void*))0x618a40)(0, &tmp2);
        this->field_3cc = tmp2.control;
        ((void(__thiscall*)(Shared*))0x4025b0)(&this->field_3c8);
        if (tmp2.control) {
            if (_InterlockedExchangeAdd(&tmp2.control->strong, -1) == 1) {
                tmp2.control->dispose();
                if (_InterlockedExchangeAdd(&tmp2.control->weak, -1) == 1) {
                    tmp2.control->destroy();
                }
            }
        }
        this->field_3c0 = SetTimer(this->hwnd, 0x14d, 1, 0);
        if (this->field_3cc) {
            ((void(__thiscall*)(char*))0x4218a0)((char*)this->field_3cc + 0x44);
        }
        if (this->field_3cc) {
            ((void(__thiscall*)(char*))0x4218a0)((char*)this->field_3cc + 0x24);
        }
        if (this->field_3c4) {
            ((void(__thiscall*)(void*))0x4530f0)(this->field_3c4);
        }
        ((void(__thiscall*)(void*))0x5773c0)(&this->field_3c8);
    } else {
        if (this->hwnd) {
            KillTimer(this->hwnd, this->field_3c0);
        }
    }

    if (a2.control) {
        if (_InterlockedExchangeAdd(&a2.control->strong, -1) == 1) {
            a2.control->dispose();
            if (_InterlockedExchangeAdd(&a2.control->weak, -1) == 1) {
                a2.control->destroy();
            }
        }
    }
}
