// from server: 42% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long ref1;
    volatile long ref2;
    void Release();
};

struct String {
    char buf[0x1c];
    String(const char*);
    ~String();
};

struct Obj {
    char pad[0x14c];
};

struct Obj2 {
    char pad[0x160];
};

struct PropGrid {
    void* vptr;
    char pad[0x14c];
    void* GetObj();
    void SetObj(void*);
};

struct CDataModelPropGrid {
    void* vptr;
    char pad[0x14c];
    void* GetObj();
    void SetObj(void*);
};

extern "C" {
    void __cdecl sub_40d550();
    void* __cdecl sub_42f710(void*);
    void __cdecl sub_4316a0(void*, void*);
    unsigned char __cdecl sub_44b9a0(void*);
    void __cdecl sub_5595a0(void*);
    void* __cdecl sub_564b50(void*);
    void* __cdecl sub_586bb0(void*, void*);
    void* __cdecl sub_77e698();
}

extern void* g_8a2838;
extern char g_8a2820;
extern char g_78b484;

void CDataModelPropGrid::SetObj(void* obj) {
    void* p = obj;
    unsigned char b0 = sub_44b9a0(p);
    unsigned char b1 = sub_44b9a0(p);
    unsigned char b2 = sub_44b9a0(p);
    unsigned char bytes[3];
    bytes[0] = b0;
    bytes[1] = b1;
    bytes[2] = b2;
    void* s = sub_586bb0(bytes, 0);
    void* v = *(void**)s;
    if (g_8a2838 != v) {
        g_8a2838 = v;
        sub_4316a0(&g_8a2820, v);
    }
    void* r = sub_42f710(&obj);
    bool flag = (*(int*)r != 0);
    RefCounted* rc = (RefCounted*)obj;
    if (rc) {
        if (_InterlockedExchangeAdd(&rc->ref1, -1) == 1) {
            rc->Release();
            if (_InterlockedExchangeAdd(&rc->ref2, -1) == 1) {
                rc->Release();
            }
        }
    }
    if (!flag) {
        return;
    }
    void* r2 = sub_42f710(&obj);
    void* a = *(void**)r2;
    void* b = *(void**)((char*)r2 + 4);
    void* local = 0;
    if (b) {
        _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
    }
    sub_40d550();
    RefCounted* rc2 = (RefCounted*)obj;
    if (rc2) {
        if (_InterlockedExchangeAdd(&rc2->ref1, -1) == 1) {
            rc2->Release();
            if (_InterlockedExchangeAdd(&rc2->ref2, -1) == 1) {
                rc2->Release();
            }
        }
    }
    String str("FillTool");
    void* r3 = sub_42f710(&obj);
    void* o = *(void**)r3;
    void* p2 = (void*)((char*)o + 0x14c);
    void* res = sub_564b50(p2);
    void* edi = res;
    RefCounted* rc3 = (RefCounted*)obj;
    if (rc3) {
        if (_InterlockedExchangeAdd(&rc3->ref1, -1) == 1) {
            rc3->Release();
            if (_InterlockedExchangeAdd(&rc3->ref2, -1) == 1) {
                rc3->Release();
            }
        }
    }
    void* r4 = sub_42f710(&obj);
    void* o2 = *(void**)r4;
    void* arg = 0;
    if (o2) {
        arg = (void*)((char*)o2 + 0x160);
    }
    void* vt = *(void**)edi;
    void (*fn)(void*, void*) = *(void (**)(void*, void*))((char*)vt + 0x10);
    fn(edi, arg);
    RefCounted* rc4 = (RefCounted*)obj;
    if (rc4) {
        if (_InterlockedExchangeAdd(&rc4->ref1, -1) == 1) {
            rc4->Release();
            if (_InterlockedExchangeAdd(&rc4->ref2, -1) == 1) {
                rc4->Release();
            }
        }
    }
    sub_5595a0(&obj);
    *(int*)obj = 1;
}
