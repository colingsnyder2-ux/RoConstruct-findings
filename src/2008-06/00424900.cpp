// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    volatile long strong;
    volatile long weak;
};

struct Sub {
    void methodA();
    void methodB();
};

struct Obj58 {
    char pad[0x98];
    void methodD();
    char pad2[0xc4 - 0x98 - 4];
    void methodE();
    void methodF();
};

struct Obj {
    void* vtbl0;
    void* vtbl1;
    void* vtbl2;
    RefCounted* field0c;
    Sub field14;
    char pad1[0x34 - 0x14 - sizeof(Sub)];
    Sub field34;
    char pad2[0x58 - 0x34 - sizeof(Sub)];
    Obj58* field58;
    RefCounted* field5c;
    Sub field60;

    void methodE();
};

extern "C" void __cdecl func_563090(void*);
extern "C" void __cdecl func_5630e0(void*);
extern "C" void __cdecl func_405ce0(void*, void*);
extern "C" void __cdecl func_411b40(void*);
extern "C" void __cdecl func_5773c0(void*);
extern "C" void __cdecl func_5e5a80(void*, void*);
extern "C" void __cdecl func_64b230(void*);
extern "C" void __cdecl func_553d80(void*);
extern "C" void __cdecl func_4247c0(void*);

void Obj::methodE()
{
    RefCounted* p;
    void* tmp;
    void* tmp2;
    void* vt;
    void (*fn)(void*, void*);

    this->vtbl0 = (void*)0x80fc28;
    *(void**)((char*)this + 4) = (void*)0x80fc1c;
    *(void**)((char*)this + 8) = (void*)0x80fc10;

    Obj58* o58 = this->field58;
    void* p2 = (char*)o58 + 0xc4;
    func_563090(p2);

    if (this->field5c != 0) {
        tmp = this->field0c;
        func_405ce0((char*)this->field5c + 0x14, &tmp);
    }

    Obj58* o58b = this->field58;
    vt = *(void**)o58b;
    fn = *(void (**)(void*, void*))((char*)vt + 0x160);
    fn(o58b, this);

    tmp2 = this->field0c;
    func_405ce0((char*)this->field58 + 0x98, &tmp2);

    func_5630e0(p2);

    Obj58* o58c = this->field58;
    vt = *(void**)o58c;
    fn = *(void (**)(void*, void*))((char*)vt + 0x154);
    fn(o58c, &tmp);

    RefCounted* r = *(RefCounted**)&tmp;
    if (r != 0) {
        _InterlockedExchangeAdd(&r->strong, 1);
    }

    func_411b40(&tmp);

    if (r != 0) {
        if (_InterlockedExchangeAdd(&r->strong, -1) == 1) {
            r->slot1();
            if (_InterlockedExchangeAdd(&r->weak, -1) == 1) {
                r->slot2();
            }
        }
    }

    func_5e5a80((char*)this->field0c + 0xc4, this);
    func_5e5a80((char*)this->field0c + 0x24, (char*)this + 4);
    func_5e5a80((char*)this->field0c + 0x44, (char*)this + 8);

    func_5773c0(&tmp);
    func_4247c0((char*)this + 0x60);
    func_64b230((char*)this + 0x34);
    func_553d80((char*)this + 0x14);

    RefCounted* r2 = *(RefCounted**)((char*)this + 0x10);
    if (r2 != 0) {
        if (_InterlockedExchangeAdd(&r2->strong, -1) == 1) {
            r2->slot1();
            if (_InterlockedExchangeAdd(&r2->weak, -1) == 1) {
                r2->slot2();
            }
        }
    }
}
