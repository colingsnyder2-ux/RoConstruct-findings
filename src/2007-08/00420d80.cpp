// from server: 28% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
    long weakcount;
};

struct Inner {
    void* vptr;
    void* field4;
};

struct Helper {
    void* vptr;
    void* field4;
};

struct CSelectionTreeCtrl {
    char pad[0x54];
    char pad2[0x20];
    char flag75;
    char flag76;
    void sub_420d80(int, int);
};

void sub_402a60(void*, void*);
void sub_40d550(void*);
void sub_533250(void*, int);
void sub_5595a0(void*);
void* sub_6304ae(void*, int);
void sub_6661b0(void*, int, int);

void CSelectionTreeCtrl::sub_420d80(int a, int b)
{
    char* base = (char*)this - 0x54;
    if (a != 0) {
        sub_6661b0(this, a, b);
        return;
    }

    void* r = sub_6304ae(base, b);

    RefCounted* rc = 0;
    if (r != 0) {
        rc = (RefCounted*)((char*)r + 0x10);
        void* tmp = (void*)((char*)r + 0x10);
        sub_402a60(&tmp, (void*)((char*)r + 0xc));
    }

    void* v = (*(void*(**)(void*, void*))((*(void***)base)[0x14c/4]))(base, &rc);

    void* obj = *(void**)v;
    void* obj4 = *(void**)((char*)v + 4);

    Helper h;
    h.vptr = obj;
    h.field4 = obj4;
    if (obj4 != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)obj4 + 4), 1);
    }

    sub_40d550(&h);

    if (rc != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 4), -1) == 1) {
            (*(void(**)(void*))((*(void***)rc)[1]))(rc);
            if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 8), -1) == 1) {
                (*(void(**)(void*))((*(void***)rc)[2]))(rc);
            }
        }
    }

    void* res = (*(void*(**)(void*))((*(void***)base)[0x148/4]))(base);

    char old76 = this->flag76;
    this->flag76 = 1;
    sub_533250(res, (int)rc);
    this->flag76 = old76;

    sub_5595a0(&h);

    char old75 = this->flag75;
    this->flag75 = 1;
    sub_6661b0(this, 0, b);
    this->flag75 = old75;

    if (rc != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 4), -1) == 1) {
            (*(void(**)(void*))((*(void***)rc)[1]))(rc);
            if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 8), -1) == 1) {
                (*(void(**)(void*))((*(void***)rc)[2]))(rc);
            }
        }
    }
}
