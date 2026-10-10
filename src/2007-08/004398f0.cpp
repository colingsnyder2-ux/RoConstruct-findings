// from server: 37% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct ContentId {
    void* ptr;
    void* refcount;
};

struct SoundId {
    void* vptr;
    ContentId content;
    void convert(void* a, void* b);
};

void SoundId::convert(void* a, void* b)
{
    ContentId tmp;
    tmp.ptr = a;
    tmp.refcount = b;
    if (tmp.refcount) {
        _InterlockedExchangeAdd((volatile long*)((char*)tmp.refcount + 4), 1);
    }
    void* p = *(void**)&content;
    void* q = *(void**)((char*)this + 4);
    void (*fn)(void*, void*, void*) = *(void (**)(void*, void*, void*))p;
    fn(q, tmp.ptr, tmp.refcount);
    if (tmp.refcount) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)tmp.refcount + 4), -1) == 1) {
            void* vt = *(void**)tmp.refcount;
            void (*d1)(void*) = *(void (**)(void*))((char*)vt + 4);
            d1(tmp.refcount);
            if (_InterlockedExchangeAdd((volatile long*)((char*)tmp.refcount + 8), -1) == 1) {
                void* vt2 = *(void**)tmp.refcount;
                void (*d2)(void*) = *(void (**)(void*))((char*)vt2 + 8);
                d2(tmp.refcount);
            }
        }
    }
}
