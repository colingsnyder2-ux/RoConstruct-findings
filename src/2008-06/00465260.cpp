// from server: 31% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __stdcall PostMessageA(void*, unsigned int, unsigned int, unsigned int);

struct Result {
    void* object;
    void* count;
    Result() : object(0), count(0) {}
};

struct RefCounted {
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    volatile long ref1;
    volatile long ref2;
};

struct Holder {
    void func_00456e80();
};

struct Listener {
    void func_004218a0(void*);
};

struct Connector {
    void func_005e5a80(void*);
};

struct Lock {
    void func_00563090();
    void func_005630e0();
};

Result func_00464750(RefCounted*, Result*);
void func_004025b0(void*, void**);
RefCounted* func_004651c0(RefCounted*);
Result func_00618a40(RefCounted*, Result*);

struct CScriptEditor {
    char pad0[0x20];
    void* hwnd;
    char pad1[0xc8];
    Holder field_ec;
    Holder field_f0;
    char pad2[0x20];
    Listener field_114;
    char pad3[0x20];
    RefCounted* field_138;
    void* field_13c;
    RefCounted* field_144;
    char pad4[4];
    RefCounted* field_14c;
    void* field_150;

    void func_00465260(RefCounted* a, RefCounted* b);
};

void CScriptEditor::func_00465260(RefCounted* a, RefCounted* b)
{
    if (field_144 != 0) {
        Lock lock;
        lock.func_00563090();
        if (field_144 != 0) {
            Connector* c = reinterpret_cast<Connector*>(reinterpret_cast<char*>(field_144) + 0xa4);
            c->func_005e5a80(&field_ec);
        }
        if (field_144 != 0) {
            Connector* c = reinterpret_cast<Connector*>(reinterpret_cast<char*>(field_144) + 0xc4);
            c->func_005e5a80(&field_f0);
        }
        if (field_14c != 0) {
            Connector* c = reinterpret_cast<Connector*>(reinterpret_cast<char*>(field_14c) + 0x190);
            c->func_005e5a80(&field_114);
        }
        reinterpret_cast<Holder*>(field_144)->func_00456e80();
        reinterpret_cast<Holder*>(field_14c)->func_00456e80();
        reinterpret_cast<Holder*>(field_138)->func_00456e80();
        lock.func_005630e0();
    }

    if (a != 0) {
        Result r;
        Result res = func_00464750(a, &r);
        field_138 = reinterpret_cast<RefCounted*>(res.object);
        void* tmp = res.count;
        func_004025b0(&field_13c, &tmp);
        if (tmp != 0) {
            RefCounted* rc = reinterpret_cast<RefCounted*>(tmp);
            if (_InterlockedExchangeAdd(&rc->ref1, -1) == 1) {
                rc->slot1();
                if (_InterlockedExchangeAdd(&rc->ref2, -1) == 1) {
                    rc->slot2();
                }
            }
        }
        field_144 = a;
        func_004025b0(reinterpret_cast<void*>(reinterpret_cast<char*>(&field_144) + 4), reinterpret_cast<void**>(&b));
    }

    if (b != 0) {
        Lock lock;
        lock.func_00563090();
        RefCounted* r = func_004651c0(b);
        Result tmp;
        Result res = func_00618a40(r, &tmp);
        field_14c = reinterpret_cast<RefCounted*>(res.object);
        void* cnt = res.count;
        func_004025b0(&field_150, &cnt);
        if (cnt != 0) {
            RefCounted* rc = reinterpret_cast<RefCounted*>(cnt);
            if (_InterlockedExchangeAdd(&rc->ref1, -1) == 1) {
                rc->slot1();
                if (_InterlockedExchangeAdd(&rc->ref2, -1) == 1) {
                    rc->slot2();
                }
            }
        }
        if (field_14c != 0) {
            Listener* l = reinterpret_cast<Listener*>(reinterpret_cast<char*>(field_14c) + 0x190);
            l->func_004218a0(&field_114);
        }
        if (field_144 != 0) {
            Listener* l = reinterpret_cast<Listener*>(reinterpret_cast<char*>(field_144) + 0xc4);
            l->func_004218a0(&field_f0);
        }
        if (field_144 != 0) {
            Listener* l = reinterpret_cast<Listener*>(reinterpret_cast<char*>(field_144) + 0xa4);
            l->func_004218a0(&field_ec);
        }
        lock.func_005630e0();
    }

    if (hwnd != 0) {
        PostMessageA(hwnd, 0, 0x465, 0);
    }

    if (b != 0) {
        RefCounted* rc = b;
        if (_InterlockedExchangeAdd(&rc->ref1, -1) == 1) {
            rc->slot1();
            if (_InterlockedExchangeAdd(&rc->ref2, -1) == 1) {
                rc->slot2();
            }
        }
    }
}
