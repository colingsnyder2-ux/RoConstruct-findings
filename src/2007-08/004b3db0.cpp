// from server: 37% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct RefCounted {
    void* vptr;
    long refcount;
    long weakrefcount;
};

struct SignalSource;

struct SignalSource {
    char pad[0x120];
    void* listHead;
    void* listTail;
    void* insert(void*);
};

struct ListIter {
    void* node;
    void* owner;
};

struct Entry {
    void* key;
    RefCounted* value;
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl op_delete(void*);

void* __fastcall sub_570200(void*, void*, void*);
void __fastcall sub_4b19b0(void*);
void __fastcall sub_4b2fa0(void*, void*);
void __cdecl sub_40cc20(void*, void*, void*);
void* __fastcall sub_4ad1b0(void*, void*);
void __fastcall sub_402a60(void*, void*);

void* SignalSource::insert(void* arg)
{
    ListIter it;
    it.node = 0;
    it.owner = 0;

    sub_570200(&it, &arg, this);

    void* found = it.node;
    void* tail = this->listTail;

    if (found != 0 && found != this) {
        _invalid_parameter_noinfo();
    }

    if (it.owner != tail) {
        if (found == 0) {
            _invalid_parameter_noinfo();
        }
        if (it.owner != *(void**)((char*)found + 4)) {
            _invalid_parameter_noinfo();
        }
        return *(void**)((char*)it.owner + 0x10);
    }

    Entry* e = (Entry*)operator_new(0xe20);
    RefCounted* rc = 0;
    if (e != 0) {
        sub_4b19b0(e);
        rc = (RefCounted*)e;
    }

    long old = -1;
    sub_4b2fa0(&it, rc);
    sub_40cc20(&it, rc, rc);

    void* slot = sub_4ad1b0(this, &arg);
    *(void**)slot = rc;
    sub_402a60((char*)slot + 4, &it);

    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            void** vt = (void**)rc->vptr;
            ((void(__thiscall*)(void*))vt[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakrefcount, -1) == 1) {
                void** vt2 = (void**)rc->vptr;
                ((void(__thiscall*)(void*))vt2[2])(rc);
            }
        }
    }

    return rc;
}
