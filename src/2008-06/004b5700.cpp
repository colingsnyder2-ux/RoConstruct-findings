// from server: 51% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct String {
    void* storage[8];
    String(const char*);
    ~String();
};

struct Instance {
    void* vptr;
    char pad[0x130];
    void* field130;
    void* field134;
    void* field13c;
};

struct Listener {
    void* vptr;
    char pad[0x12c];
    void* field130;
    void* field134;
};

extern "C" void* __cdecl func_004b4e50(void*);

void* __cdecl func_00457b60(void*);
void* __cdecl func_00452c80(void*);
void __cdecl func_004c7530(void*, void*);
void __cdecl func_00557950(void*, void*);
void __cdecl func_0055a8f0(void*, void*);
void __cdecl func_005ca240(void*, void*);
void __cdecl func_005e5a80(void*, void*);
void __cdecl func_004218a0(void*, void*);

extern void* __cdecl func_00802458(void*, const char*);
extern void* __cdecl func_00802468(void*);

struct VClient {
    void __thiscall method(void* a, void* b);
};

void VClient::method(void* a, void* b)
{
    void* p = a;
    if (p) {
        void* r = func_00457b60(p);
        if (r) {
            String s("Network");
            void* tmp = 0;
            func_00557950(r, &tmp);
            void* q;
            if (tmp) {
                q = (char*)tmp + 0xe4;
            } else {
                q = 0;
            }
            void* out;
            func_004c7530(&out, q);
            func_00802468(&s);
            if (out) {
                func_0055a8f0(out, 0);
            }
            RefCounted* rc = (RefCounted*)out;
            if (rc) {
                if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
                    void** vt = (void**)rc->vptr;
                    ((void (__thiscall*)(void*))vt[1])(rc);
                    if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                        void** vt2 = (void**)rc->vptr;
                        ((void (__thiscall*)(void*))vt2[2])(rc);
                    }
                }
            }
        }
    }

    void* self134;
    if (this) {
        self134 = (char*)this + 0x134;
    } else {
        self134 = 0;
    }

    if (a) {
        void* r2 = func_00452c80(a);
        if (r2) {
            func_005e5a80((char*)r2 + 0x130, self134);
        }
    }

    void* self134b;
    if (this) {
        self134b = (char*)this + 0x134;
    } else {
        self134b = 0;
    }

    if (b) {
        void* r3 = func_00452c80(b);
        if (r3) {
            func_004218a0((char*)r3 + 0x130, self134b);
        }
        void* r4 = func_00457b60(b);
        if (r4) {
            void* obj;
            func_004b4e50(&obj);
            String s2("Network");
            void** vt = (void**)obj;
            void* out2;
            ((void (__thiscall*)(void*, void*))vt[1])(obj, &out2);
            func_00802468(&s2);
            func_0055a8f0(obj, r4);
            func_005ca240(obj, *(void**)((char*)this + 0x13c));
            RefCounted* rc2 = (RefCounted*)obj;
            if (rc2) {
                if (_InterlockedExchangeAdd(&rc2->refCount, -1) == 1) {
                    void** vt2 = (void**)rc2->vptr;
                    ((void (__thiscall*)(void*))vt2[1])(rc2);
                    if (_InterlockedExchangeAdd(&rc2->weakCount, -1) == 1) {
                        void** vt3 = (void**)rc2->vptr;
                        ((void (__thiscall*)(void*))vt3[2])(rc2);
                    }
                }
            }
        }
    }
}
