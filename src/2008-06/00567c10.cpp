// from server: 40% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)



struct RefCounted {
    void* vfptr;
    long refcount;
    long weakrefcount;
};

struct Inner {
    void* vfptr;
    char pad[8];
    void* begin;
    void* end;
};

struct Sel {
    char pad0[0x150];
    Inner* inner;
    char pad1[0x4];
    Inner* getInner();
    void addItem(void* a, void* b, void* c);
    void sub_802890();
};

extern "C" void* __fastcall sub_49add0(void*);
extern "C" void* __fastcall sub_618a40(void*, void*);
extern "C" void __fastcall sub_439480(void*, void*, void*, void*);
extern "C" void __fastcall sub_5e5a80(void*, void*);
extern "C" void __fastcall sub_566d50(void*, void*);

Inner* Sel::getInner()
{
    return inner;
}

void Sel::addItem(void* a, void* b, void* c)
{
    Inner* in = getInner();
    RefCounted* rc = (RefCounted*)in->begin;
    RefCounted* rc2 = rc;
    if (rc2) {
        _InterlockedExchangeAdd(&rc2->refcount, 1);
    }
    void* tmp = sub_618a40(c, &rc);
    void* esi = in->end;
    void* edi = in->begin;
    if (edi > esi) sub_802890();
    void* ebx = tmp;
    void* start = in->begin;
    void* cur = edi;
    while (cur != esi) {
        if (*(void**)cur == *(void**)ebx) break;
        cur = (char*)cur + 8;
    }
    if (rc) {
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            ((void (__thiscall*)(void*))((void**)rc)[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakrefcount, -1) == 1) {
                ((void (__thiscall*)(void*))((void**)rc)[2])(rc);
            }
        }
    }
    void* esi2 = in->end;
    if (in->begin > esi2) sub_802890();
    if (start && start != in->begin) sub_802890();
    if (cur != esi2) {
        if (start == 0) {
            sub_802890();
            void* p = 0;
            if (cur < *(void**)((char*)p + 0x10)) sub_802890();
            RefCounted* r = *(RefCounted**)((char*)cur + 4);
            void* v = *(void**)cur;
            if (r) _InterlockedExchangeAdd(&r->refcount, 1);
            sub_439480(in, start, &v, cur);
            void* self = this;
            void* p2 = self ? (char*)self + 0x150 : 0;
            sub_5e5a80((char*)c + 0xa4, p2);
            void* v2[2];
            v2[0] = v;
            v2[1] = r;
            if (r) _InterlockedExchangeAdd(&r->refcount, 1);
            sub_566d50(self, v2);
            if (r) {
                if (_InterlockedExchangeAdd(&r->refcount, -1) == 1) {
                    ((void (__thiscall*)(void*))((void**)r)[1])(r);
                    if (_InterlockedExchangeAdd(&r->weakrefcount, -1) == 1) {
                        ((void (__thiscall*)(void*))((void**)r)[2])(r);
                    }
                }
            }
        } else {
            start = *(void**)start;
        }
    }
    if (rc2) {
        if (_InterlockedExchangeAdd(&rc2->refcount, -1) == 1) {
            ((void (__thiscall*)(void*))((void**)rc2)[1])(rc2);
            if (_InterlockedExchangeAdd(&rc2->weakrefcount, -1) == 1) {
                ((void (__thiscall*)(void*))((void**)rc2)[2])(rc2);
            }
        }
    }
}
